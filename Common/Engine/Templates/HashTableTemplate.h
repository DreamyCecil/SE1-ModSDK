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

#if !defined(TYPE) || !defined(VALUE_TYPE) || !defined(CHashTableSlot_TYPE) || !defined(CHashTable_TYPE)
  #error Please define all macros: TYPE, VALUE_TYPE, CHashTableSlot_TYPE and CHashTable_TYPE
#endif

#include <Engine/Templates/StaticArray.h>

// Template class of one object slot in the hash table
class CHashTableSlot_TYPE {
  public:
    ULONG hts_ulKey; // Hashing key
    TYPE *hts_ptElement; // The element inside

    // Constructor
    CHashTableSlot_TYPE(void) {
      hts_ptElement = NULL;
    };

    // Clear the slot
    void Clear(void) {
      hts_ptElement = NULL;
    };
};

// Template class for storing pointers to objects for fast access by name
class CHashTable_TYPE {
  public:
    // [Cecil] Callback function types
    typedef ULONG (*CGetKeyFunc)(VALUE_TYPE &value);
    typedef ULONG (*CGetValueFunc)(TYPE *pItem);

  public:
    INDEX ht_ctCompartments; // Number of compartments in the table
    INDEX ht_ctSlotsPerComp; // Number of slots in one compartment
    INDEX ht_ctSlotsPerCompStep; // Allocation step for number of slots in one compartment
    CStaticArray<CHashTableSlot_TYPE > ht_ahtsSlots; // All slots are here

    CGetKeyFunc ht_GetItemKey;
    CGetValueFunc ht_GetItemValue;

  public:
    // Default constructor
    CHashTable_TYPE(void);

    // Destructor
    ~CHashTable_TYPE(void);

    // Remove all slots and reset the hash table to the initial (empty) state, but keep callback functions
    void Clear(void);

    // Set allocation parameters
    void SetAllocationParameters(INDEX ctCompartments, INDEX ctSlotsPerComp, INDEX ctSlotsPerCompStep);

    // Set callback functions
    void SetCallbacks(CGetKeyFunc pGetKeyFunc, CGetValueFunc pGetValueFunc);

  public:
    // Get pointer to the slot from its key and value
    CHashTableSlot_TYPE *FindSlot(ULONG ulKey, VALUE_TYPE &value);

    // Get index of an object in the hash table
    INDEX FindSlotIndex(ULONG ulKey, VALUE_TYPE &value);

    // Get object from the hash table by its index
    TYPE *GetItemFromIndex(INDEX iIndex);

    // Get value of an object from the hash table by its index
    VALUE_TYPE GetValueFromIndex(INDEX iIndex);

    // Find object by its value
    __forceinline TYPE* Find(VALUE_TYPE &value);

    // Return index of an object by its value
    __forceinline INDEX FindIndex(VALUE_TYPE &value);

  public:
    // Expand the hash table to the next step
    void Expand(void);

    // Add a new object
    void Add(TYPE *ptNew);

    // Remove an object
    void Remove(TYPE *ptOld);

    // Remove all objects
    void RemoveAll(void);

    // Remove all objects but keep slots
    void Reset(void);

    // Get estimated efficiency of the hash table
    void ReportEfficiency(void);
};

// Find object by its value
TYPE *CHashTable_TYPE::Find(VALUE_TYPE &Value)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);

  CHashTableSlot_TYPE *phts = FindSlot(ht_GetItemKey(Value), Value);
  return (phts == NULL) ? NULL : phts->hts_ptElement;
};

// Return index of an object by its value
INDEX CHashTable_TYPE::FindIndex(VALUE_TYPE &Value)
{
  ASSERT(ht_ctCompartments > 0 && ht_ctSlotsPerComp > 0);
  return FindSlotIndex(ht_GetItemKey(Value), Value);
};
