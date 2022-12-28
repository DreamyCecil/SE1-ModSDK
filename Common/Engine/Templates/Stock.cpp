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

#include <Engine/Base/Stream.h>

#include <Engine/Templates/DynamicContainer.cpp>

// Default constructor
CStock_TYPE::CStock_TYPE()
{
  st_ntObjects.SetAllocationParameters(50, 2, 2);
};

// Destructor
CStock_TYPE::~CStock_TYPE()
{
  // Free all unused elements of the stock
  FreeUnused();
};

// Obtain an object from stock - loads if not loaded
TYPE *CStock_TYPE::Obtain_t(const CTFileName &fnmFileName)
{
  // Find stocked object with same name
  TYPE *pExisting = st_ntObjects.Find(fnmFileName);

  // If found
  if (pExisting != NULL) {
    // Mark that it is used once again
    pExisting->MarkUsed();

    // Return its pointer
    return pExisting;
  }

  // Create a new stock object, if not found
  TYPE *ptNew = new TYPE;
  ptNew->ser_FileName = fnmFileName;

  st_ctObjects.Add(ptNew);
  st_ntObjects.Add(ptNew);

  // Try to load it
  try {
    ptNew->Load_t(fnmFileName);

  // Failed to load
  } catch (char *) {
    st_ctObjects.Remove(ptNew);
    st_ntObjects.Remove(ptNew);

    delete ptNew;
    throw;
  }

  // Mark that it is used for the first time
  //ASSERT(!ptNew->IsUsed());
  ptNew->MarkUsed();

  // Return the new object
  return ptNew;
};

// Release an object when it's not needed any more
void CStock_TYPE::Release(TYPE *ptObject) {
  // Mark that it is used once less
  ptObject->MarkUnused();

  // If it is not used at all anymore and should be freed automatically
  if (!ptObject->IsUsed() && ptObject->IsAutoFreed()) {
    // Remove and delete it
    st_ctObjects.Remove(ptObject);
    st_ntObjects.Remove(ptObject);

    delete ptObject;
  }
};

// Free all unused elements from the stock
void CStock_TYPE::FreeUnused(void)
{
  BOOL bAnyRemoved;

  do {
    // Fill a container with objects that should be freed
    CDynamicContainer<TYPE> ctToFree;

    {FOREACHINDYNAMICCONTAINER(st_ctObjects, TYPE, itt) {
      if (!itt->IsUsed()) {
        ctToFree.Add(itt);
      }
    }}

    bAnyRemoved = ctToFree.Count() > 0;

    // Go through objects that should be freed
    {FOREACHINDYNAMICCONTAINER(ctToFree, TYPE, itt) {
      // Remove and delete it
      st_ctObjects.Remove(itt);
      st_ntObjects.Remove(itt);

      delete (&*itt);
    }}

  // Go for as long as there is something to remove
  } while (bAnyRemoved);
};

// Calculate amount of memory used by all objects in the stock
SLONG CStock_TYPE::CalculateUsedMemory(void)
{
  SLONG slUsedTotal = 0;

  // Go through all stock objects
  FOREACHINDYNAMICCONTAINER(st_ctObjects, TYPE, itt) {
    SLONG slUsedByObject = itt->GetUsedMemory();

    // Invalid memory
    if (slUsedByObject < 0) {
      return -1;
    }

    // Add used memory to the total amount of memory
    slUsedTotal += slUsedByObject;
  }

  return slUsedTotal;
};

// Dump memory usage report into a file
void CStock_TYPE::DumpMemoryUsage_t(CTStream &strm)
{
  CTString strLine;
  SLONG slUsedTotal = 0;

  // Go through all stock objects
  FOREACHINDYNAMICCONTAINER(st_ctObjects, TYPE, itt) {
    SLONG slUsedByObject = itt->GetUsedMemory();

    // Invalid memory
    if (slUsedByObject < 0) {
      strm.PutLine_t("Error!");
      return;
    }

    // Print out memory usage of this object
    strLine.PrintF("%7.1fk %s(%d) %s", slUsedByObject / 1024.0f,
      itt->GetName().str_String, itt->GetUsedCount(), itt->GetDescription().str_String);

    strm.PutLine_t(strLine);
  }
};

// Get number of total elements in stock
INDEX CStock_TYPE::GetTotalCount(void) {
  return st_ctObjects.Count();
};

// Get number of used elements in stock
INDEX CStock_TYPE::GetUsedCount(void)
{
  INDEX ctUsed = 0;

  // Go through all stock objects
  FOREACHINDYNAMICCONTAINER(st_ctObjects, TYPE, itt) {
    // Count used ones
    if (itt->IsUsed()) {
      ctUsed++;
    }
  }

  return ctUsed;
};
