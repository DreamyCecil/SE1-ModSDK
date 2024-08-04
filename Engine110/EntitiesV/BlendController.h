// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

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
