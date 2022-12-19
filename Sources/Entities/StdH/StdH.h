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

#include <Engine\Engine.h>
#include <Game/SessionProperties.h>
#include <Game/PlayerSettings.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllexport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include "..\Global.h"
#include "..\Common\Flags.h"
#include "..\Common\Common.h"
#include "..\Common\Particles.h"
#include "..\Common\EmanatingParticles.h"
#include "..\Common\GameInterface.h"

// [Cecil] Compatibility
#if SE1_VER < 107
  // Substitute with MDL stretch
  #define mi_vStretch mo_Stretch

  // Discourage from using SKA methods
  __forceinline void SKA_GetCurrentCollisionBox(CEntity *pen, FLOATaabbox3D &box) {
    ASSERTALWAYS("Do not utilize SKA_GetCurrentCollisionBox() before 1.07 version of the engine!");
  };

  // Discourage from using SKA methods
  __forceinline void SKA_SetModelColor(CEntity *pen, COLOR col) {
    ASSERTALWAYS("Do not utilize SKA_SetModelColor() before 1.07 version of the engine!");
    pen->GetModelObject()->mo_colBlendColor = col;
  };

  // Discourage from using SKA methods
  __forceinline COLOR SKA_GetModelColor(CEntity *pen) {
    ASSERTALWAYS("Do not utilize SKA_GetModelColor() before 1.07 version of the engine!");
    return pen->GetModelObject()->mo_colBlendColor;
  };

#else
  // Get collision box of a SKA model, if possible
  __forceinline void SKA_GetCurrentCollisionBox(CEntity *pen, FLOATaabbox3D &box) {
    pen->GetModelInstance()->GetCurrentColisionBox(box);
  };

  // Set MDL model blending
  __forceinline void SKA_SetModelColor(CEntity *pen, COLOR col) {
    pen->GetModelInstance()->SetModelColor(col);
  };

  // Get SKA model blending
  __forceinline COLOR SKA_GetModelColor(CEntity *pen) {
    return pen->GetModelInstance()->GetModelColor();
  };
#endif
