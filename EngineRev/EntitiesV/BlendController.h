// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_BlendController_INCLUDED
#define _EntitiesV_BlendController_INCLUDED 1
#include <EntitiesV/Marker.h>
extern DECL_DLL CEntityPropertyEnumType BlendControllerType_enum;
enum BlendControllerType {
  BCT_NONE = 0,
  BCT_PYRAMID_PLATES = 1,
  BCT_ACTIVATE_PLATE_1 = 2,
  BCT_ACTIVATE_PLATE_2 = 3,
  BCT_ACTIVATE_PLATE_3 = 4,
  BCT_ACTIVATE_PLATE_4 = 5,
  BCT_ACTIVATE_PYRAMID_MORPH_ROOM = 6,
  BCT_TOGGLE_LIGHTS_1 = 7,
  BCT_TOGGLE_LIGHTS_2 = 8,
  BCT_TOGGLE_LIGHTS_3 = 9,
  BCT_TOGGLE_LIGHTS_4 = 10,
  BCT_TOGGLE_CONTROLLED_LIGHTS_1 = 11,
  BCT_TOGGLE_CONTROLLED_LIGHTS_2 = 12,
  BCT_TOGGLE_CONTROLLED_LIGHTS_3 = 13,
  BCT_TOGGLE_CONTROLLED_LIGHTS_4 = 14,
};
DECL_DLL inline void ClearToDefault(BlendControllerType &e) { e = (BlendControllerType)0; } ;
#define CBlendController_ClassID 612
extern "C" DECL_DLL CDLLEntityClass CBlendController_DLLClass;
class CBlendController : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum BlendControllerType m_bctType;
   BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CBlendController_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_BlendController_INCLUDED
