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

#if !defined(TYPE) || !defined(CNameTableSlot_TYPE) || !defined(CNameTable_TYPE)
  #error Please define all macros: TYPE, CNameTableSlot_TYPE and CNameTable_TYPE
#endif

#include <Engine/Templates/StaticArray.h>

// Template class of one object slot in the name table
class CNameTableSlot_TYPE {
  public:
    ULONG nts_ulKey; // Hashing key
    TYPE *nts_ptElement; // The element inside

    // Constructor
    CNameTableSlot_TYPE(void) {
      nts_ptElement = NULL;
    };

    // Clear the slot
    void Clear(void) {
      nts_ptElement = NULL;
    };
};

// Template class for storing pointers to objects for fast access by name
class CNameTable_TYPE {
  public:
    INDEX nt_ctCompartments; // Number of compartments in the table
    INDEX nt_ctSlotsPerComp; // Number of slots in one compartment
    INDEX nt_ctSlotsPerCompStep; // Allocation step for number of slots in one compartment
    CStaticArray<CNameTableSlot_TYPE > nt_antsSlots; // All slots are here

  public:
    // Default constructor
    CNameTable_TYPE(void);

    // Destructor
    ~CNameTable_TYPE(void);

    // Remove all slots and reset the name table to the initial (empty) state
    void Clear(void);

    // Set allocation parameters
    void SetAllocationParameters(INDEX ctCompartments, INDEX ctSlotsPerComp, INDEX ctSlotsPerCompStep);

  public:
    // Get pointer to the slot from its key and value
    CNameTableSlot_TYPE *FindSlot(ULONG ulKey, const CTString &strName);

    // Get index of an object in the name table
    INDEX FindSlotIndex(ULONG ulKey, const CTString &strName);

    // Get name from the name table by its index
    const CTString GetNameFromIndex(INDEX iIndex);

    // Find object by its name
    TYPE *Find(const CTString &strName);

    // Get index of an object by its name
    INDEX FindIndex(const CTString &strName);

  public:
    // Expand the name table to the next step
    void Expand(void);

    // Add a new object
    void Add(TYPE *ptNew);

    // Remove an object
    void Remove(TYPE *ptOld);

    // Remove all objects but keep slots
    void Reset(void);

    // Get estimated efficiency of the nametable
    CTString GetEfficiency(void);
};
