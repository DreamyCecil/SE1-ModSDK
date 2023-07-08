/* Copyright (c) 2023 Dreamy Cecil
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

#ifndef CECIL_INCL_ENGINEEX_PROPERTYTABLES_H
#define CECIL_INCL_ENGINEEX_PROPERTYTABLES_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <EngineEx/Base.h>
#include <EngineEx/PropertyReference.h>

// Container type for storing entity property references under their respective class name
class CPropertyRefTable : public std::map<CTString, CPropertyReferences, CompareCTString> {
  public:
    // Fill a list of property references for a specific class from an array
    void FillPropertyReferences(const CTString &strClass, EntityPropertyRef *aRefs, INDEX ctRefs) {
      // Create new list of references
      CPropertyReferences &aList = operator[](strClass);
      aList.New(ctRefs);

      // Copy references from the array
      for (INDEX i = 0; i < ctRefs; i++) {
        aList[i] = aRefs[i];
      }
    };

    // Find entity property data by a variable name of a specific class
    const CEntityProperty *FindProperty(const CTString &strClass, const CTString &strVariable) const {
      const_iterator it = find(strClass);

      // No class found in the table
      if (it == end()) return NULL;

      const CPropertyReferences &aRefs = it->second;
      INDEX ct = aRefs.Count();

      for (INDEX i = 0; i < ct; i++) {
        if (aRefs[i].strVariable == strVariable) {
          return &aRefs[i].ep;
        }
      }

      // No variable found
      return NULL;
    };
};

#endif
