// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Shooter_INCLUDED
#define _EntitiesV_Shooter_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/SoundHolder.h>
#include <EntitiesV/BloodSpray.h>
#include <EntitiesV/CannonBall.h>
extern DECL_DLL CEntityPropertyEnumType FireType_enum;
enum FireType {
  SFT_WOODEN_DART = 0,
  SFT_FIRE = 1,
  SFT_GAS = 2,
  SFT_IRONBALL = 3,
  SFT_FIREBALL = 4,
};
DECL_DLL inline void ClearToDefault(FireType &e) { e = (FireType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CShooter_DLLClass;
class CShooter : public CModelHolder2 {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fShootingPeriod;
  enum FireType m_sftType;
  FLOAT m_fHealth;
  FLOAT m_fCannonBallSize;
  FLOAT m_fCannonBallPower;
  ANIMATION m_iModelPreFireAnimation;
  ANIMATION m_iTexturePreFireAnimation;
  ANIMATION m_iModelPostFireAnimation;
  ANIMATION m_iTexturePostFireAnimation;
  FLOAT m_fFlameBurstDuration;
  FLOAT m_fRndBeginWait;
  CEntityPointer m_penSoundLaunch;
  CSoundObject m_soLaunch;
  CEntityPointer m_penFlame;
  BOOL m_bFiring;
  BOOL m_bIndestructable;
  FLOAT m_tmFlameStart;
   void Precache(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void RenderParticles(void);
   CAnimData * GetAnimData(SLONG slPropertyOffset);
   CEntity * ShootProjectile(enum ProjectileType pt,FLOAT3D & vOffset,ANGLE3D & aOffset);
   void FireFlame(void);
   void StopFlame(void);
   void PlayFireSound(void);
   void ShootCannonball();
   void ShootFireball();
#define  STATE_CShooter_FireOnce 0x01590000
  BOOL FireOnce(const CEntityEvent &__eeInput);
  BOOL H0x01590001_FireOnce_01(const CEntityEvent &__eeInput);
  BOOL H0x01590002_FireOnce_02(const CEntityEvent &__eeInput);
  BOOL H0x01590003_FireOnce_03(const CEntityEvent &__eeInput);
  BOOL H0x01590004_FireOnce_04(const CEntityEvent &__eeInput);
#define  STATE_CShooter_FireContinuous 0x01590005
  BOOL FireContinuous(const CEntityEvent &__eeInput);
  BOOL H0x01590006_FireContinuous_01(const CEntityEvent &__eeInput);
  BOOL H0x01590007_FireContinuous_02(const CEntityEvent &__eeInput);
  BOOL H0x01590008_FireContinuous_03(const CEntityEvent &__eeInput);
  BOOL H0x01590009_FireContinuous_04(const CEntityEvent &__eeInput);
  BOOL H0x0159000a_FireContinuous_05(const CEntityEvent &__eeInput);
  BOOL H0x0159000b_FireContinuous_06(const CEntityEvent &__eeInput);
  BOOL H0x0159000c_FireContinuous_07(const CEntityEvent &__eeInput);
  BOOL H0x0159000d_FireContinuous_08(const CEntityEvent &__eeInput);
  BOOL H0x0159000e_FireContinuous_09(const CEntityEvent &__eeInput);
#define  STATE_CShooter_FlameBurst 0x0159000f
  BOOL FlameBurst(const CEntityEvent &__eeInput);
  BOOL H0x01590010_FlameBurst_01(const CEntityEvent &__eeInput);
  BOOL H0x01590011_FlameBurst_02(const CEntityEvent &__eeInput);
  BOOL H0x01590012_FlameBurst_03(const CEntityEvent &__eeInput);
  BOOL H0x01590013_FlameBurst_04(const CEntityEvent &__eeInput);
#define  STATE_CShooter_MainLoop 0x01590014
  BOOL MainLoop(const CEntityEvent &__eeInput);
  BOOL H0x01590015_MainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x01590016_MainLoop_02(const CEntityEvent &__eeInput);
#define  STATE_CShooter_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01590017_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01590018_Main_02(const CEntityEvent &__eeInput);
};

static const char *CShooter_propnames[] = {
  "m_fShootingPeriod",
  "m_sftType",
  "m_fHealth",
  "m_fCannonBallSize",
  "m_fCannonBallPower",
  "m_iModelPreFireAnimation",
  "m_iTexturePreFireAnimation",
  "m_iModelPostFireAnimation",
  "m_iTexturePostFireAnimation",
  "m_fFlameBurstDuration",
  "m_fRndBeginWait",
  "m_penSoundLaunch",
  "m_soLaunch",
  "m_penFlame",
  "m_bFiring",
  "m_bIndestructable",
  "m_tmFlameStart",
};
#define CShooter_propnamesct ARRAYCOUNT(CShooter_propnames)

#endif // _EntitiesV_Shooter_INCLUDED
