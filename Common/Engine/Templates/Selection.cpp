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

#ifndef SE_INCL_SELECTION_CPP
#define SE_INCL_SELECTION_CPP

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Templates/Selection.h>
#include <Engine/Templates/DynamicContainer.cpp>

// Select one object
template<class cType, unsigned long ulFlag>
void CSelection<cType, ulFlag>::Select(cType &tToSelect)
{
  // If the object is not selected
  if (!tToSelect.IsSelected(ulFlag)) {
    // Select add it to the container
    tToSelect.Select(ulFlag);
    Add(&tToSelect);
    return;
  }

  // The object should not be selected
  ASSERTALWAYS("Object already selected!");
};

// Deselect one object
template<class cType, unsigned long ulFlag>
void CSelection<cType, ulFlag>::Deselect(cType &tToSelect)
{
  // If the object is selected
  if (tToSelect.IsSelected(ulFlag)) {
    // Deselect and remove it from the container
    tToSelect.Deselect(ulFlag);
    Remove(&tToSelect);
    return;
  }

  // The object should be selected
  ASSERTALWAYS("Object is not selected!");
};

// Check if an object is selected
template<class cType, unsigned long ulFlag>
BOOL CSelection<cType, ulFlag>::IsSelected(cType &tToSelect)
{
  return tToSelect.IsSelected(ulFlag);
};

// Deselect all objects
template<class cType, unsigned long ulFlag>
void CSelection<cType, ulFlag>::Clear(void)
{
  // Go through all objects
  FOREACHINDYNAMICCONTAINER(*this, cType, itObject) {
    // The object must be allocated and valid
    ASSERT(_CrtIsValidPointer(&*itObject, sizeof(cType), TRUE));
    //ASSERT(_CrtIsValidHeapPointer(&*itObject));
    //ASSERT(_CrtIsMemoryBlock(&*itObject, sizeof(cType), NULL, NULL, NULL));

    // Deselect it
    itObject->Deselect(ulFlag);
  }

  // Clear the entire container at once
  CDynamicContainer<cType>::Clear();
};

// Get first in selection (NULL if empty selection)
template<class cType, unsigned long ulFlag>
cType *CSelection<cType, ulFlag>::GetFirstInSelection(void)
{
  // Empty selection
  if (Count() == 0) {
    return NULL;
  }
  return (cType *)&CDynamicContainer<cType>::GetFirst();
};

#endif // include-once check
