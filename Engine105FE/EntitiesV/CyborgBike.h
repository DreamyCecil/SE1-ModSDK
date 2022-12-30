// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_CyborgBike_INCLUDED
#define _EntitiesV_CyborgBike_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Debris.h>
#define EVENTCODE_ECyborgBike 0x014b0000
class DECL_DLL ECyborgBike : public CEntityEvent {
public:
ECyborgBike();
CEntityEvent *MakeCopy(void);
FLOAT fSpeed;
};
DECL_DLL inline void ClearToDefault(ECyborgBike &e) { e = ECyborgBike(); } ;
extern "C" DECL_DLL CDLLEntityClass CCyborgBike_DLLClass;
class CCyborgBike : public CMovableModelEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fSpeed;
  INDEX m_iIndex;
#define  STATE_CCyborgBike_MainLoop 0x014b0001
  BOOL MainLoop(const CEntityEvent &__eeInput);
  BOOL H0x014b0002_MainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x014b0003_MainLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x014b0004_MainLoop_03(const CEntityEvent &__eeInput);
  BOOL H0x014b0005_MainLoop_04(const CEntityEvent &__eeInput);
  BOOL H0x014b0006_MainLoop_05(const CEntityEvent &__eeInput);
  BOOL H0x014b0007_MainLoop_06(const CEntityEvent &__eeInput);
#define  STATE_CCyborgBike_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_CyborgBike_INCLUDED
