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
  // Entities before SE1.07 don't have GetUsedMemory() method
  #define CEntity_GetUsedMemory()             sizeof(CEntity)
  #define CLiveEntity_GetUsedMemory()         sizeof(CLiveEntity)
  #define CRationalEntity_GetUsedMemory()     sizeof(CRationalEntity)
  #define CMovableEntity_GetUsedMemory()      sizeof(CMovableEntity)
  #define CMovableModelEntity_GetUsedMemory() sizeof(CMovableModelEntity)
  #define CMovableBrushEntity_GetUsedMemory() sizeof(CMovableBrushEntity)
  #define CPlayerEntity_GetUsedMemory()       sizeof(CPlayerEntity)

  // No SKA models
  __forceinline BOOL SKA_GetCurrentCollisionBox(CEntity *pen, FLOATaabbox3D &box) {  return FALSE; };

  // Substitute with MDL
  #define GetModelInstance GetModelObject
  #define mi_vStretch mo_Stretch

  // Set MDL model blending
  __forceinline void SKA_SetModelColor(CEntity *pen, COLOR col) {
    pen->GetModelObject()->mo_colBlendColor = col;
  };

  // Get MDL model blending
  __forceinline COLOR SKA_GetModelColor(CEntity *pen) {
    return pen->GetModelObject()->mo_colBlendColor;
  };

#else
  #define CEntity_GetUsedMemory             CEntity::GetUsedMemory
  #define CLiveEntity_GetUsedMemory         CLiveEntity::GetUsedMemory
  #define CRationalEntity_GetUsedMemory     CRationalEntity::GetUsedMemory
  #define CMovableEntity_GetUsedMemory      CMovableEntity::GetUsedMemory
  #define CMovableModelEntity_GetUsedMemory CMovableModelEntity::GetUsedMemory
  #define CMovableBrushEntity_GetUsedMemory CMovableBrushEntity::GetUsedMemory
  #define CPlayerEntity_GetUsedMemory       CPlayerEntity::GetUsedMemory
  
  // Get collision box of a SKA model, if possible
  __forceinline BOOL SKA_GetCurrentCollisionBox(CEntity *pen, FLOATaabbox3D &box) {
    if (pen->en_RenderType == CEntity::RT_SKAMODEL) {
      pen->GetModelInstance()->GetCurrentColisionBox(box);
      return TRUE;
    }
    return FALSE;
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