// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_ExotechLarvaCharger_INCLUDED
#define _EntitiesV_ExotechLarvaCharger_INCLUDED 1
#include <EntitiesV/BloodSpray.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/ExotechLarvaBattery.h>
#define EVENTCODE_EActivateBeam 0x015f0000
class DECL_DLL EActivateBeam : public CEntityEvent {
public:
EActivateBeam();
CEntityEvent *MakeCopy(void);
BOOL bTurnOn;
};
DECL_DLL inline void ClearToDefault(EActivateBeam &e) { e = EActivateBeam(); } ;
extern "C" DECL_DLL CDLLEntityClass CExotechLarvaCharger_DLLClass;
class CExotechLarvaCharger : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bActive;
  BOOL m_bBeamActive;
  FLOAT m_fStretch;
  CTString m_strName;
  RANGE m_rSound;
  CEntityPointer m_penBattery01;
  CEntityPointer m_penBattery02;
  CEntityPointer m_penBattery03;
  CEntityPointer m_penBattery04;
  CEntityPointer m_penBattery05;
  CEntityPointer m_penBattery06;
  BOOL m_bCustomShading;
  ANGLE3D m_aShadingDirection;
  COLOR m_colLight;
  COLOR m_colAmbient;
  CSoundObject m_soSound;
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   void Precache(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void UpdateOperationalState(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void RenderParticles(void);
#define  STATE_CExotechLarvaCharger_ActivateBeam 0x015f0001
  BOOL ActivateBeam(const CEntityEvent &__eeInput);
#define  STATE_CExotechLarvaCharger_DeactivateBeam 0x015f0002
  BOOL DeactivateBeam(const CEntityEvent &__eeInput);
#define  STATE_CExotechLarvaCharger_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x015f0003_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x015f0004_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x015f0005_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x015f0006_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x015f0007_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x015f0008_Main_06(const CEntityEvent &__eeInput);
  BOOL H0x015f0009_Main_07(const CEntityEvent &__eeInput);
  BOOL H0x015f000a_Main_08(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_ExotechLarvaCharger_INCLUDED
