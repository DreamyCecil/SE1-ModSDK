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

#ifndef SE_INCL_LINEARALLOCATOR_H
#define SE_INCL_LINEARALLOCATOR_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

// One block in a linear allocator
class CLABlockInfo {
  public:
    CListNode bi_lnNode;
    INDEX bi_ctObjects; // Number of objects in this block
    void *bi_pvMemory;  // Start of block memory
    void *bi_pvEnd;     // End of block memory
};

// Template class for dynamic allocation of objects in a linear fashion
template<class Type>
class CLinearAllocator {
  public:
    CListHead la_lhBlocks;     // List of allocated memory blocks
    INDEX la_ctAllocationStep; // Number of objects to allocate upon overflow
    INDEX la_ctObjects;        // Number of objects currently allocated
    INDEX la_ctFree;           // Number of free objects in the current block
    Type *la_ptNextFree;       // Pointer to the next free object

  public:
    // Default constructor
    CLinearAllocator(void);

    // Copy constructor
    CLinearAllocator(CLinearAllocator<Type> &laOriginal);

    // Destructor
    ~CLinearAllocator(void);

    // Destroy all objects and reset the allocator to the initial (empty) state
    void Clear(void);

    // Set how many elements to allocate when the stack overflows
    inline void SetAllocationStep(INDEX ctStep);

    // Allocate a new memory block
    void AllocBlock(INDEX iCount);

    // Allocate a new object
    inline Type &New(void);
    inline Type *New(INDEX ct);

    // Free all objects but keep allocated space and relinearize it
    inline void Reset(void);

  // Compatibility with CDynamicStackArray
  public:

    inline Type &Push(void) {
      return New();
    };

    inline Type *Push(INDEX ct) {
      return New(ct);
    };

    inline void PopAll(void) {
      Reset();
    };
};

// [Cecil] Inline definition
#include <Engine/Templates/LinearAllocator.cpp>

#endif // include-once check
