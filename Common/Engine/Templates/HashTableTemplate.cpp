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

#include <Engine\Base\Console.h>
#include <Engine\Base\Translation.h>

#include <math.h>

// Default constructor
CHashTable_TYPE::CHashTable_TYPE()
{
  ht_ctCompartments = 0;
  ht_ctSlotsPerComp = 0;
  ht_ctSlotsPerCompStep = 0;
  ht_GetItemKey = NULL;
  ht_GetItemValue = NULL;
};

// Destructor
CHashTable_TYPE::~CHashTable_TYPE(void)
{
};

// Remove all slots and reset the hash table to the initial (empty) state, but keep callback functions
void CHashTable_TYPE::Clear(void)
{
  ht_ctCompartments = 0;
  ht_ctSlotsPerComp = 0;
  ht_ctSlotsPerCompStep = 0;
  ht_ahtsSlots.Clear();
};

// Set allocation parameters
void CHashTable_TYPE::SetAllocationParameters(INDEX ctCompartments, INDEX ctSlotsPerComp, INDEX ctSlotsPerCompStep)
{
  ASSERT(ht_ctCompartments == 0 && ht_ctSlotsPerComp == 0 && ht_ctSlotsPerCompStep == 0);
  ASSERT(   ctCompartments >  0 &&    ctSlotsPerComp >  0 &&    ctSlotsPerCompStep >  0);

  ht_ctCompartments = ctCompartments;
  ht_ctSlotsPerComp = ctSlotsPerComp;
  ht_ctSlotsPerCompStep = ctSlotsPerCompStep;

  ht_ahtsSlots.New(ht_ctCompartments * ht_ctSlotsPerComp);
};

// Set callback functions
void CHashTable_TYPE::SetCallbacks(CGetKeyFunc pGetKeyFunc, CGetValueFunc pGetValueFunc)
{
  ASSERT(pGetKeyFunc != NULL);
  ASSERT(pGetValueFunc != NULL);

  ht_GetItemKey = pGetKeyFunc;
  ht_GetItemValue = pGetValueFunc;
};

// Get pointer to the slot from its key and value
CHashTableSlot_TYPE *CHashTable_TYPE::FindSlot(ULONG ulKey, VALUE_TYPE &value) 
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  // Find compartment number
  INDEX iComp = ulKey % ht_ctCompartments;

  // For each slot in the compartment
  INDEX iSlot = iComp * ht_ctSlotsPerComp;

  for (INDEX iSlotInComp = 0; iSlotInComp < ht_ctSlotsPerComp; iSlotInComp++, iSlot++) {
    CHashTableSlot_TYPE *phts = &ht_ahtsSlots[iSlot];

    // Skip if empty
    if (phts->hts_ptElement == NULL) {
      continue;
    }

    // The same key
    if (phts->hts_ulKey == ulKey) {
      // The same value
      if (ht_GetItemValue(phts->hts_ptElement) == value) {
        return phts;
      }
    }
  }

  // Not found
  return NULL;
};

// Get index of an object in the hash table
INDEX CHashTable_TYPE::FindSlotIndex(ULONG ulKey, VALUE_TYPE &value)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  // find compartment number
  INDEX iComp = ulKey % ht_ctCompartments;

  // For each slot in the compartment
  INDEX iSlot = iComp * ht_ctSlotsPerComp;

  for (INDEX iSlotInComp = 0; iSlotInComp < ht_ctSlotsPerComp; iSlotInComp++, iSlot++) {
    CHashTableSlot_TYPE *phts = &ht_ahtsSlots[iSlot];

    // Skip if empty
    if (phts->hts_ptElement == NULL) {
      continue;
    }

    // The same key
    if (phts->hts_ulKey == ulKey) {
      // The same value
      if (ht_GetItemValue(phts->hts_ptElement) == value) {
        return iSlot;
      }
    }
  }

  // Not found
  return -1;
};

// Get object from the hash table by its index
TYPE *CHashTable_TYPE::GetItemFromIndex(INDEX iIndex)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);
  ASSERT(iIndex >= 0 && iIndex < ht_ctCompartments * ht_ctSlotsPerComp);

  return ht_ahtsSlots[iIndex].hts_ptElement;
};

// Get value of an object from the hash table by its index
VALUE_TYPE CHashTable_TYPE::GetValueFromIndex(INDEX iIndex)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);
  ASSERT(iIndex >= 0 && iIndex < ht_ctCompartments * ht_ctSlotsPerComp);

  return ht_GetItemValue(ht_ahtsSlots[iIndex].hts_ptElement);
};

// Expand the hash table to the next step
void CHashTable_TYPE::Expand(void)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  // The compartment has overflown
  ASSERT(ht_ctSlotsPerCompStep > 0);

  // Move the array of slots
  CStaticArray<CHashTableSlot_TYPE > ahtsSlotsOld;
  ahtsSlotsOld.MoveArray(ht_ahtsSlots);

  // Allocate a new bigger array
  INDEX ctOldSlotsPerComp = ht_ctSlotsPerComp;
  ht_ctSlotsPerComp += ht_ctSlotsPerCompStep;

  ht_ahtsSlots.New(ht_ctSlotsPerComp * ht_ctCompartments);

  // For each compartment
  for(INDEX iComp = 0; iComp < ht_ctCompartments; iComp++)
  {
    // For each old slot in the compartment
    for(INDEX iSlotInComp = 0; iSlotInComp < ctOldSlotsPerComp; iSlotInComp++)
    {
      CHashTableSlot_TYPE &htsOld = ahtsSlotsOld[iSlotInComp + iComp * ctOldSlotsPerComp];
      CHashTableSlot_TYPE &htsNew = ht_ahtsSlots[iSlotInComp + iComp * ht_ctSlotsPerComp];

      // If it is used
      if (htsOld.hts_ptElement != NULL) {
        // Copy it to the new array
        htsNew.hts_ptElement = htsOld.hts_ptElement;
        htsNew.hts_ulKey = htsOld.hts_ulKey;
      }
    }
  }
};

// Flag to check for recursive expanding
static BOOL _bExpanding = FALSE;

// Add a new object
void CHashTable_TYPE::Add(TYPE *ptNew)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  VALUE_TYPE value = ht_GetItemValue(ptNew);
  ULONG ulKey = ht_GetItemKey(value);

  // Find compartment number
  INDEX iComp = ulKey % ht_ctCompartments;
  
  // For each slot in the compartment
  INDEX iSlot = iComp * ht_ctSlotsPerComp;

  for (INDEX iSlotInComp = 0; iSlotInComp < ht_ctSlotsPerComp; iSlotInComp++, iSlot++) {
    CHashTableSlot_TYPE *phts = &ht_ahtsSlots[iSlot];

    // If it is empty
    if (phts->hts_ptElement == NULL) {
      // Put it here
      phts->hts_ulKey = ulKey;
      phts->hts_ptElement = ptNew;
      return;
    }

    // Must not already exist
    //ASSERT(phts->hts_ptElement->GetName() != ptNew->GetName());
  }

  // The compartment has overflown
  ASSERT(!_bExpanding);
  _bExpanding = TRUE;

  // Expand the hash table
  Expand();

  // Add the new element
  Add(ptNew);

  _bExpanding = FALSE;
};

// Remove an object
void CHashTable_TYPE::Remove(TYPE *ptOld)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  // Find its slot
  VALUE_TYPE value = ht_GetItemValue(ptOld);
  CHashTableSlot_TYPE *phts = FindSlot(ht_GetItemKey(value), value);

  if (phts != NULL) {
    // Mark slot as unused
    ASSERT(phts->hts_ptElement == ptOld);
    phts->hts_ptElement = NULL;
  }
};

// Remove all objects
void CHashTable_TYPE::RemoveAll(void)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  // Go through each compartment
  for (INDEX iComp = 0; iComp < ht_ctCompartments; iComp++)
  {
    INDEX iSlot = iComp * ht_ctSlotsPerComp;

    // Go through each slot of a compartment
    for (INDEX iSlotInComp = 0; iSlotInComp < ht_ctSlotsPerComp; iSlotInComp++, iSlot++) {
      // If it is not empty
      CHashTableSlot_TYPE &hts = ht_ahtsSlots[iSlot];

      if (ht_ahtsSlots[iSlot].hts_ptElement != NULL) {
        ht_ahtsSlots[iSlot].hts_ptElement = NULL;
      }
    }
  }
};

// Remove all objects but keep slots
void CHashTable_TYPE::Reset(void)
{
  for (INDEX iSlot = 0; iSlot < ht_ahtsSlots.Count(); iSlot++) {
    ht_ahtsSlots[iSlot].Clear();
  }
};

// Get estimated efficiency of the hash table
void CHashTable_TYPE::ReportEfficiency(void)
{
  DOUBLE dSum = 0;
  DOUBLE dSum2 = 0;
  ULONG ulCount = 0;

  for (INDEX iComp = 0; iComp < ht_ctCompartments; iComp++) {
    INDEX iCount = 0;

    for (INDEX iSlot = iComp * ht_ctSlotsPerComp; iSlot < (iComp + 1) * ht_ctSlotsPerComp; iSlot++) {
      if (ht_ahtsSlots[iSlot].hts_ptElement != NULL) {
        iCount++;
        ulCount++;
      }
    }

    dSum += iCount;
    dSum2 += iCount * iCount;
  }

  // Calculate percentage of full slots in the hash table
  DOUBLE dFullPercent = double(ulCount) / double(ht_ctCompartments * ht_ctSlotsPerComp);

  // Calculate average number of full slots per compartement
  DOUBLE dAvg = dSum / ht_ctCompartments;
  DOUBLE dStDev = sqrt((dSum2 - 2 * dSum * dAvg + ulCount * dAvg * dAvg) / double(ulCount - 1));

  CPrintF(TRANS("Hash table efficiency report:\n"));
  CPrintF(TRANS("  Compartements: %ld,  Slots per compartement: %ld,  Full slots: %ld\n"), ht_ctCompartments, ht_ctSlotsPerComp, ulCount);
  CPrintF(TRANS("  Percentage of full slots: %5.2f%%,  Average full slots per compartement: %5.2f \n"), dFullPercent * 100, dAvg);
  CPrintF(TRANS("  Standard deviation is: %5.2f\n"), dStDev);
};
