/* Copyright (c) 2022 Dreamy Cecil
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

#ifndef CECIL_INCL_ENTITYTABLE_H
#define CECIL_INCL_ENTITYTABLE_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

// Disable warnings about identifier truncation in Debug
#pragma warning(disable: 4786)

#include <Engine/Entities/EntityProperties.h>
#include "DllEntityEvent.h"

// Undefine 'new' operator in debug
#ifndef NDEBUG
  #undef new
#endif

#include <map>

// Redefine 'new' operator in debug
#ifndef NDEBUG
  #define new DEBUG_NEW_CT
#endif

// Entry describing one entity class in the library's entity table
class CEntityTableEntry {
  public:
    CDLLEntityClass *ete_pdecClass; // Pointer to the library entity class
    const char *ete_strClass; // Symbol name of the library entity class

    // [Cecil] NOTE: In 1.50 these may be null and symbol names may be empty strings
    CDLLEntityEvent **ete_adeeEvents; // Pointer to the array of entity events
    const char *ete_strEvents; // Symbol name of the array of entity events

    INDEX *ete_piEventsCt; // Pointer to the entity event counter
    const char *ete_strEventsCt; // Symbol name of the entity event counter

  public:
    // Fill a dynamic container with entity events
    void GetEvents(CDynamicContainer<CDLLEntityEvent> &cEvents) const;

    // Constructor with immediate table insertion
    static CEntityTableEntry *CreateEntry(const char *strClassName, CDLLEntityClass *pdecClass, const char *strClass,
      CDLLEntityEvent **adeeEvents, const char *strEvents, INDEX *piEventsCt, const char *strEventsCt);
};

// Container type for storing entity entries under their respective class name
typedef std::map<CTString, CEntityTableEntry, CompareCTString> CLibEntityTable;

// Exported table of entity entries under their respective names
extern "C" __declspec(dllexport) CLibEntityTable DLL_EntityTable;

// Stringify an identifier
#define ENTITYTABLESTRING(x) #x

// Create an entity entry in the table as soon as the module initializes
#define ENTITYTABLEENTRY(ClassName) CEntityTableEntry *ClassName##_tableentry = \
  CEntityTableEntry::CreateEntry(ENTITYTABLESTRING(ClassName), \
    &ClassName##_DLLClass, ENTITYTABLESTRING(ClassName##_DLLClass), \
    (CDLLEntityEvent **)&ClassName##_events, ENTITYTABLESTRING(ClassName##_events), \
    &ClassName##_eventsct, ENTITYTABLESTRING(ClassName##_eventsct) \
  )

#endif
