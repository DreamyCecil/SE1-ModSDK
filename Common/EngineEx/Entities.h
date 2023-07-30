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

#ifndef CECIL_INCL_ENGINEEX_ENTITIES_H
#define CECIL_INCL_ENGINEEX_ENTITIES_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <EngineEx/Base.h>

// Class IDs of base entity classes
#define CEntity_ClassID         32000
#define CLiveEntity_ClassID     32001
#define CRationalEntity_ClassID 32002
#define CMovableEntity_ClassID      1
#define CMovableModelEntity_ClassID 2
#define CMovableBrushEntity_ClassID 3
#define CPlayerEntity_ClassID       4

// Check if the entity is of a specific class by its ID (e.g. CHeadman_ClassID)
inline BOOL IsOfClassID(CEntity *pen, INDEX iClassID) {
  if (pen == NULL) {
    ASSERT(FALSE);
    return FALSE;
  }

  // Compare class ID
  CDLLEntityClass *pdecClass = pen->GetClass()->ec_pdecDLLClass;
  return (pdecClass->dec_iID == iClassID);
};

// Check if the entity is derived from a specific class by its ID (e.g. CEnemyBase_ClassID)
inline BOOL IsDerivedFromID(CEntity *pen, INDEX iClassID) {
  if (pen == NULL) {
    ASSERT(FALSE);
    return FALSE;
  }

  // Go through the class hierarchy
  CDLLEntityClass *pdecClass = pen->GetClass()->ec_pdecDLLClass;

  for (; pdecClass != NULL; pdecClass = pdecClass->dec_pdecBase) {
    if (pdecClass->dec_iID == iClassID) {
      return TRUE;
    }
  }

  return FALSE;
};

// Check if the entity is derived from CLiveEntity
inline BOOL IsLiveEntity(CEntity *pen) {
  if (pen == NULL) {
    ASSERT(FALSE);
    return FALSE;
  }

  // Go through the class hierarchy
  CDLLEntityClass *pdecClass = pen->GetClass()->ec_pdecDLLClass;

  for (; pdecClass != NULL; pdecClass = pdecClass->dec_pdecBase) {
    // [Cecil] NOTE: CLiveEntity or CRationalEntity because the hierarchy ends on only one of them
    if (pdecClass->dec_iID == CLiveEntity_ClassID
     || pdecClass->dec_iID == CRationalEntity_ClassID) {
      return TRUE;
    }
  }

  return FALSE;
};

// Check if the entity is derived from CRationalEntity
inline BOOL IsRationalEntity(CEntity *pen) {
  return IsDerivedFromID(pen, CRationalEntity_ClassID);
};

#endif
