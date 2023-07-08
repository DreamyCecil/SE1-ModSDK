// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Spinner_INCLUDED
#define _EntitiesV_Spinner_INCLUDED 1
#include <EntitiesV/Twister.h>
#define EVENTCODE_ESpinnerInit 0x015c0000
class DECL_DLL ESpinnerInit : public CEntityEvent {
public:
ESpinnerInit();
CEntityEvent *MakeCopy(void);
CEntityPointer penParent;
CEntityPointer penTwister;
FLOAT3D vRotationAngle;
FLOAT tmSpinTime;
FLOAT fUpSpeed;
BOOL bImpulse;
FLOAT tmImpulseDuration;
};
DECL_DLL inline void ClearToDefault(ESpinnerInit &e) { e = ESpinnerInit(); } ;
extern "C" DECL_DLL CDLLEntityClass CSpinner_DLLClass;
class DECL_DLL  CSpinner : public CRationalEntity {
public:
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penParent;
  FLOAT3D m_aSpinRotation;
  FLOAT3D m_vSpeed;
  FLOAT m_tmExpire;
  FLOAT3D m_vLastSpeed;
  BOOL m_bImpulse;
  FLOAT m_tmWaitAfterImpulse;
  FLOAT m_tmSpawn;
  FLOAT3D m_vSpinSpeed;
#define  STATE_CSpinner_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x015c0001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x015c0002_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x015c0003_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x015c0004_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x015c0005_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x015c0006_Main_06(const CEntityEvent &__eeInput);
  BOOL H0x015c0007_Main_07(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Spinner_INCLUDED