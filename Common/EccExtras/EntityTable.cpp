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

#include "EntityTable.h"

// Constructor
CEntityTableEntry::CEntityTableEntry(const char *strClassName, CDLLEntityClass *pdecClass, const char *strClass,
  EntityPropertyRef *aProps, const char *strProps, INDEX iPropsCt, const char *strPropsCt,
  CDLLEntityEvent **adeeEvents, const char *strEvents, INDEX iEventsCt, const char *strEventsCt)
{
  ete_pdecClass = pdecClass;
  ete_strClass = strClass;

  ete_aProps = aProps;
  ete_strProps = strProps;

  ete_iPropsCt = iPropsCt;
  ete_strPropsCt = strPropsCt;

  ete_adeeEvents = adeeEvents;
  ete_strEvents = strEvents;

  ete_iEventsCt = iEventsCt;
  ete_strEventsCt = strEventsCt;
};

// Fill a dynamic container with entity property identifiers
void CEntityTableEntry::GetProperties(CDynamicContainer<const char *> &cProps) const {
  // Get array of properties and their amount
#if SE1_GAME == SS_REV
  CEntityProperty *aProps = ete_pdecClass->dec_aepProperties;
  const INDEX ct = ete_pdecClass->dec_ctProperties;

  // Go through the array and add each property name to the container
  for (INDEX i = 0; i < ct; i++) {
    cProps.Add((const char **)&aProps[i].ep_strVariable);
  }

#else
  EntityPropertyRef *aProps = ete_aProps;
  const INDEX ct = ete_iPropsCt;

  // Go through the array and add each property name to the container
  for (INDEX i = 0; i < ct; i++) {
    cProps.Add((const char **)&aProps[i].strVariable);
  }
#endif
};

// Fill a dynamic container with entity events
void CEntityTableEntry::GetEvents(CDynamicContainer<CDLLEntityEvent> &cEvents) const {
  // Get array of events and their amount
#if SE1_VER < SE1_150
  CDLLEntityEvent **aEvents = ete_adeeEvents;
  const INDEX ct = ete_iEventsCt;

#else
  CDLLEntityEvent **aEvents = ete_pdecClass->dec_adeeEvents;
  const INDEX ct = ete_pdecClass->dec_ctEvents;
#endif

  // Go through the array and add each event to the container
  for (INDEX i = 0; i < ct; i++) {
    cEvents.Add(aEvents[i]);
  }
};
