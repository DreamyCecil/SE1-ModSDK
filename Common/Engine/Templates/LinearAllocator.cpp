/* Copyright (c) 2002-2012 Croteam Ltd.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef SE_INCL_LINEARALLOCATOR_CPP
#define SE_INCL_LINEARALLOCATOR_CPP

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Templates/LinearAllocator.h>

// Default constructor
template <class Type>
CLinearAllocator<Type>::CLinearAllocator(void)
{
  la_ctAllocationStep = 256;
  la_ctObjects = 0;
  la_ctFree = 0;
  la_ptNextFree = NULL;
};

// Copy constructor
template <class Type>
CLinearAllocator<Type>::CLinearAllocator(CLinearAllocator<Type> &laOriginal)
{
  ASSERT(FALSE);
};

// Destructor
template <class Type>
CLinearAllocator<Type>::~CLinearAllocator(void)
{
  Clear();
};

// Destroy all objects and reset the allocator to the initial (empty) state
template <class Type>
void CLinearAllocator<Type>::Clear(void)
{
  // Go through all memory blocks
  FORDELETELIST(CLABlockInfo, bi_lnNode, la_lhBlocks, itBlock) {
    // Free memory used by the block (this doesn't call destructors!)
    delete[] (Type *)itBlock->bi_pvMemory;

    // Free memory used by the block info
    delete &itBlock.Current();
  }

  la_ctObjects = 0;
  la_ctFree = 0;
  la_ptNextFree = NULL;
};

// Set how many elements to allocate when the stack overflows
template <class Type>
inline void CLinearAllocator<Type>::SetAllocationStep(INDEX ctStep)
{
  la_ctAllocationStep = ctStep;
};

// Allocate a new memory block
template <class Type>
void CLinearAllocator<Type>::AllocBlock(INDEX iCount)
{
  ASSERT(this != NULL && iCount > 0);
  //ASSERT(la_ctFree == 0);

  // Allocate the memory and call constructors for all members
  Type *ptBlock = new Type[iCount]; // call vector constructor, for better performance

  // Allocate the block info and add it to the list
  CLABlockInfo *pbi = new CLABlockInfo;
  la_lhBlocks.AddTail(pbi->bi_lnNode);

  // Remember block memory and size
  pbi->bi_pvMemory = ptBlock;
  pbi->bi_pvEnd = ptBlock + iCount;
  pbi->bi_ctObjects = iCount;

  // Count total number of allocated objects
  la_ctObjects += iCount;

  // Set up to get new objects from here
  la_ctFree = iCount;
  la_ptNextFree = ptBlock;
};

// Allocate a new object
template <class Type>
inline Type &CLinearAllocator<Type>::New(void)
{
  // Allocate a new memory block
  if (la_ctFree == 0) {
    AllocBlock(la_ctAllocationStep);
  }

  Type *ptNew = la_ptNextFree;
  la_ctFree--;
  la_ptNextFree++;

  return *ptNew;
};

template <class Type>
inline Type *CLinearAllocator<Type>::New(INDEX ct)
{
  // If not enough space in current block
  if (la_ctFree < ct) {
    // Allocate an entirely new memory block of exact that size
    AllocBlock(ct);

    // Use it entirely
    Type *ptNew = la_ptNextFree;
    la_ctFree = 0;
    la_ptNextFree = NULL;
    return ptNew;

  // If there is enough space in current block
  } else {
    // Use the space
    Type *ptNew = la_ptNextFree;
    la_ctFree -= ct;
    la_ptNextFree += ct;

    return ptNew;
  }
};

// Free all objects but keep allocated space and relinearize it
template <class Type>
inline void CLinearAllocator<Type>::Reset(void)
{
  // No block allocated
  if (la_lhBlocks.IsEmpty()) {
    return;
  }

  // If there is only one block allocated
  if (&la_lhBlocks.Head() == &la_lhBlocks.Tail()) {
    // Restart from the beginning
    la_ctFree = la_ctObjects;
    la_ptNextFree = (Type *)(LIST_HEAD(la_lhBlocks, CLABlockInfo, bi_lnNode)->bi_pvMemory);

  // If there is more than one block allocated
  } else {
    // Remember how many objects were used and the allocation step
    INDEX ctObjectsOld = la_ctObjects;
    INDEX ctAllocationStepOld = la_ctAllocationStep;

    // Free all blocks
    Clear();

    // Restore the allocation step
    la_ctAllocationStep = ctAllocationStepOld;

    // Allocate only one linear block
    AllocBlock(ctObjectsOld);
  }
};

// Make 'for' construct for walking all objects in a linear allocator
#define FOREACHINLINEARALLOCATOR(allocator, type, pt) \
FOREACHINLIST(CLABlockInfo, bi_lnNode, allocator.la_lhBlocks, pt##itBlock) { \
  for (type *pt = (type *)pt##itBlock->bi_pvMemory; pt < (type *)pt##itBlock->bi_pvEnd; pt++)

#endif // include-once check
