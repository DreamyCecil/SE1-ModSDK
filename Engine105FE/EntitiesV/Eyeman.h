// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Eyeman_INCLUDED
#define _EntitiesV_Eyeman_INCLUDED 1
#include <EntitiesV/EnemyFly.h>
extern DECL_DLL CEntityPropertyEnumType EyemanChar_enum;
enum EyemanChar {
  EYC_SOLDIER = 0,
  EYC_SERGEANT = 1,
};
DECL_DLL inline void ClearToDefault(EyemanChar &e) { e = (EyemanChar)0; } ;
extern DECL_DLL CEntityPropertyEnumType EyemanEnv_enum;
enum EyemanEnv {
  EYE_NORMAL = 0,
  EYE_LAVA = 1,
};
DECL_DLL inline void ClearToDefault(EyemanEnv &e) { e = (EyemanEnv)0; } ;
extern "C" DECL_DLL CDLLEntityClass CEyeman_DLLClass;
class CEyeman : public CEnemyFly {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum EyemanChar m_EecChar;
  BOOL m_bInvisible;
  enum EyemanEnv m_eeEnv;
  BOOL m_bMumbleSoundPlaying;
  CSoundObject m_soMumble;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void Precache(void);
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   BOOL FillEntityStatistics(EntityStats * pes);
  virtual const CTFileName & GetComputerMessageName(void)const;
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void ActivateMumblingSound(void);
   void DeactivateMumblingSound(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   FLOAT AirToGroundAnim(void);
   FLOAT GroundToAirAnim(void);
   void ChangeCollisionToAir();
   void ChangeCollisionToGround();
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   BOOL MayMoveToAttack(void);
   BOOL CanHitEnemy(CEntity * penTarget,FLOAT fCosAngle);
#define  STATE_CEyeman_FlyHit 0x01430000
  BOOL FlyHit(const CEntityEvent &__eeInput);
  BOOL H0x01430001_FlyHit_01(const CEntityEvent &__eeInput);
  BOOL H0x01430002_FlyHit_02(const CEntityEvent &__eeInput);
  BOOL H0x01430003_FlyHit_03(const CEntityEvent &__eeInput);
  BOOL H0x01430004_FlyHit_04(const CEntityEvent &__eeInput);
#define  STATE_CEyeman_GroundHit 0x01430005
  BOOL GroundHit(const CEntityEvent &__eeInput);
  BOOL H0x01430006_GroundHit_01(const CEntityEvent &__eeInput);
  BOOL H0x01430007_GroundHit_02(const CEntityEvent &__eeInput);
  BOOL H0x01430008_GroundHit_03(const CEntityEvent &__eeInput);
  BOOL H0x01430009_GroundHit_04(const CEntityEvent &__eeInput);
  BOOL H0x0143000a_GroundHit_05(const CEntityEvent &__eeInput);
  BOOL H0x0143000b_GroundHit_06(const CEntityEvent &__eeInput);
#define  STATE_CEyeman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CEyeman_propnames[] = {
  "m_EecChar",
  "m_bInvisible",
  "m_eeEnv",
  "m_bMumbleSoundPlaying",
  "m_soMumble",
};
#define CEyeman_propnamesct ARRAYCOUNT(CEyeman_propnames)

#endif // _EntitiesV_Eyeman_INCLUDED
