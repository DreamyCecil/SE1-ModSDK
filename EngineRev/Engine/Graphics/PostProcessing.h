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

#ifndef SE1_REV_INCL_POSTPROCESSING_H
#define SE1_REV_INCL_POSTPROCESSING_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Graphics/DrawPort.h>

class ENGINE_API CPostProcessing {
  public:
    CDrawPort *pp_pdpDrawPort;
    ULONG pp_ulField; // Unknown field

  public:
    // Create post processing for a specific draw port
    CPostProcessing(CDrawPort *pdp);

    ~CPostProcessing();

    CPostProcessing &operator=(const CPostProcessing &);
};

// Post processing base entity
class ENGINE_API CPostProcessingEffectEntity : public CEntity {
  public:
    // [Cecil] Rev: Unknown fields
    ULONG en_ulPostProcessingEffectEntityFields[23];

  public:
    CPostProcessingEffectEntity();
    CPostProcessingEffectEntity(const CPostProcessingEffectEntity &);
    CPostProcessingEffectEntity &operator=(CPostProcessingEffectEntity &);

    virtual ~CPostProcessingEffectEntity();
    virtual void OnStep(void);
    virtual void SetDefaultProperties(void);

    // Dummy procedure
    BOOL Dummy(const CEntityEvent &ee);
};

// Start post processing for some draw port
ENGINE_API void StartPostProcessing(CDrawPort &pdp);

// Stop post processing for some draw port
ENGINE_API void EndPostProcessing(CDrawPort &pdp);

// Amount of CPostProcessing classes currently in existence
ENGINE_API extern INDEX _ppInstances;

// Currently active post processing entity
ENGINE_API extern CPostProcessingEffectEntity *sha_pEntityPP;

#endif
