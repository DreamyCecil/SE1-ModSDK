// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Eruptor_INCLUDED
#define _EntitiesV_Eruptor_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
#include <EntitiesV/Projectile.h>
extern "C" DECL_DLL CDLLEntityClass CEruptor_DLLClass;
class CEruptor : public CModelHolder2 {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fStretchAll;
  FLOAT m_fStretchX;
  FLOAT m_fStretchY;
  FLOAT m_fStretchZ;
  BOOL m_bRandomStretch;
  FLOAT m_fStretchHeight;
  FLOAT m_fStretchWidth;
  FLOAT m_fStretchDepth;
  FLOAT m_fAngle;
  FLOAT m_fMaxSpeed;
  FLOAT m_fMinSpeed;
  FLOAT m_fTime;
  FLOAT m_fRandomWait;
  enum ProjectileType m_ptType;
  BOOL m_bShootInArc;
  FLOAT m_fProjectileStretch;
   void Precache(void);
   void CalculateAngularLaunchParams(CMovableEntity * penTarget,FLOAT3D vShooting,FLOAT3D vTarget,FLOAT3D vSpeedDest,ANGLE aPitch,ANGLE & aHeading,FLOAT & fLaunchSpeed);
   void SpawnShoot(CEntity * penTarget);
   void SpawnRandom(void);
   void SpawnProjectile(const CPlacement3D & pl,FLOAT fSpeed);
#define  STATE_CEruptor_Active 0x00d50000
  BOOL Active(const CEntityEvent &__eeInput);
  BOOL H0x00d50001_Active_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50002_Active_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_Inactive 0x00d50003
  BOOL Inactive(const CEntityEvent &__eeInput);
  BOOL H0x00d50004_Inactive_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50005_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_AutoSpawns 0x00d50006
  BOOL AutoSpawns(const CEntityEvent &__eeInput);
  BOOL H0x00d50007_AutoSpawns_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50008_AutoSpawns_02(const CEntityEvent &__eeInput);
  BOOL H0x00d50009_AutoSpawns_03(const CEntityEvent &__eeInput);
  BOOL H0x00d5000a_AutoSpawns_04(const CEntityEvent &__eeInput);
  BOOL H0x00d5000b_AutoSpawns_05(const CEntityEvent &__eeInput);
  BOOL H0x00d5000c_AutoSpawns_06(const CEntityEvent &__eeInput);
  BOOL H0x00d5000d_AutoSpawns_07(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_MainLoop 0x00d5000e
  BOOL MainLoop(const CEntityEvent &__eeInput);
  BOOL H0x00d5000f_MainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x00d50010_MainLoop_02(const CEntityEvent &__eeInput);
#define  STATE_CEruptor_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CEruptor_propnames[] = {
  "m_fStretchAll",
  "m_fStretchX",
  "m_fStretchY",
  "m_fStretchZ",
  "m_bRandomStretch",
  "m_fStretchHeight",
  "m_fStretchWidth",
  "m_fStretchDepth",
  "m_fAngle",
  "m_fMaxSpeed",
  "m_fMinSpeed",
  "m_fTime",
  "m_fRandomWait",
  "m_ptType",
  "m_bShootInArc",
  "m_fProjectileStretch",
};
#define CEruptor_propnamesct ARRAYCOUNT(CEruptor_propnames)

#endif // _EntitiesV_Eruptor_INCLUDED
