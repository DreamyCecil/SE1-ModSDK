/* Copyright (c) 2022-2023 Dreamy Cecil
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

#include <EngineEx/Base.h>
#include <EngineEx/DllEntityEvent.h>
#include <EngineEx/PropertyReference.h>

// Entry describing one entity class in the library's entity table
class CEntityTableEntry {
  public:
    CDLLEntityClass *ete_pdecClass; // Pointer to the library entity class
    const char *ete_strClass; // Symbol name of the library entity class

    // [Cecil] NOTE: In SSR these may be null and symbol names may be empty strings
    EntityPropertyRef *ete_aProps; // Array of entity property references
    const char *ete_strProps; // Symbol name of the array of entity property references

    INDEX ete_iPropsCt; // Entity property counter
    const char *ete_strPropsCt; // Symbol name of the entity property counter

    // [Cecil] NOTE: In 1.50 these may be null and symbol names may be empty strings
    CDLLEntityEvent **ete_adeeEvents; // Pointer to the array of entity events
    const char *ete_strEvents; // Symbol name of the array of entity events

    INDEX ete_iEventsCt; // Entity event counter
    const char *ete_strEventsCt; // Symbol name of the entity event counter

  public:
    // Default constructor
    CEntityTableEntry()
    {
    };

    // Constructor with data
    CEntityTableEntry(const char *strClassName, CDLLEntityClass *pdecClass, const char *strClass,
      EntityPropertyRef *aProps, const char *strProps, INDEX iPropsCt, const char *strPropsCt,
      CDLLEntityEvent **adeeEvents, const char *strEvents, INDEX iEventsCt, const char *strEventsCt);

  public:
    // Fill a dynamic container with entity property identifiers
    void GetProperties(CDynamicContainer<const char *> &cProps) const;

    // Fill a dynamic container with entity events
    void GetEvents(CDynamicContainer<CDLLEntityEvent> &cEvents) const;
};

// Container type for storing entity entries under their respective class name
typedef std::map<CTString, CEntityTableEntry, CompareCTString> CLibEntityTable;

// Create an entity entry in the table as soon as the module initializes
#define ENTITYTABLEENTRY(ClassName) extern "C" __declspec(dllexport) \
CEntityTableEntry ClassName##_tableentry( \
  ENTITYTABLESTRING(ClassName), \
  &ClassName##_DLLClass, ENTITYTABLESTRING(ClassName##_DLLClass), \
  (EntityPropertyRef *)ClassName##_proprefs, ENTITYTABLESTRING(ClassName##_proprefs), \
  ClassName##_proprefsct, ENTITYTABLESTRING(ClassName##_proprefsct), \
  (CDLLEntityEvent **)&ClassName##_events, ENTITYTABLESTRING(ClassName##_events), \
  ClassName##_eventsct, ENTITYTABLESTRING(ClassName##_eventsct) \
)

#endif
