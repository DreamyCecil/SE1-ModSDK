// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_DevilProjectile_INCLUDED
#define _EntitiesV_DevilProjectile_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Light.h>
#define EVENTCODE_EDevilProjectile 0x01ff0000
class DECL_DLL EDevilProjectile : public CEntityEvent {
public:
EDevilProjectile();
CEntityEvent *MakeCopy(void);
CEntityPointer penLauncher;
CEntityPointer penTarget;
};
DECL_DLL inline void ClearToDefault(EDevilProjectile &e) { e = EDevilProjectile(); } ;
extern "C" DECL_DLL CDLLEntityClass CDevilProjectile_DLLClass;
class CDevilProjectile : public CMovableModelEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penLauncher;
  CEntityPointer m_penTarget;
  FLOAT m_fIgnoreTime;
  FLOAT m_fStartTime;
  FLOAT3D m_vDesiredAngle;
  BOOL m_bFly;
  CSoundObject m_soEffect;
CLightSource m_lsLightSource;
   void Read_t(CTStream * istr);
   CLightSource * GetLightSource(void);
   void SetupLightSource(void);
   void CalcHeadingRotation(ANGLE aWantedHeadingRelative,ANGLE & aRotation);
   void CalcAngleFromPosition();
   void RotateToAngle();
   void FlyInDirection();
   void FlyToPosition();
   void RotateToPosition();
   void StopMoving();
   void StopRotating();
   void StopTranslating();
   void ProjectileTouch(CEntityPointer penHit);
#define  STATE_CDevilProjectile_Fly 0x01ff0001
  BOOL Fly(const CEntityEvent &__eeInput);
  BOOL H0x01ff0002_Fly_01(const CEntityEvent &__eeInput);
  BOOL H0x01ff0003_Fly_02(const CEntityEvent &__eeInput);
  BOOL H0x01ff0004_Fly_03(const CEntityEvent &__eeInput);
  BOOL H0x01ff0005_Fly_04(const CEntityEvent &__eeInput);
#define  STATE_CDevilProjectile_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01ff0006_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01ff0007_Main_02(const CEntityEvent &__eeInput);
};

static const char *CDevilProjectile_propnames[] = {
  "m_penLauncher",
  "m_penTarget",
  "m_fIgnoreTime",
  "m_fStartTime",
  "m_vDesiredAngle",
  "m_bFly",
  "m_soEffect",
};
#define CDevilProjectile_propnamesct ARRAYCOUNT(CDevilProjectile_propnames)

#endif // _EntitiesV_DevilProjectile_INCLUDED
