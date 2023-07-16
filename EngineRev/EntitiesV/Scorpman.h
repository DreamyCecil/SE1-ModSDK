// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Scorpman_INCLUDED
#define _EntitiesV_Scorpman_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Bullet.h>
#include <EntitiesV/Reminder.h>
extern DECL_DLL CEntityPropertyEnumType ScorpmanType_enum;
enum ScorpmanType {
  SMT_SOLDIER = 0,
  SMT_GENERAL = 1,
  SMT_MONSTER = 2,
};
DECL_DLL inline void ClearToDefault(ScorpmanType &e) { e = (ScorpmanType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CScorpman_DLLClass;
class CScorpman : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum ScorpmanType m_smtType;
  INDEX m_bFireBulletCount;
  INDEX m_iSpawnEffect;
  FLOAT m_fFireTime;
  CAnimObject m_aoLightAnimation;
  BOOL m_bSleeping;
  FLOAT m_fCustomFireRate;
CEntity * penBullet;
CLightSource m_lsLightSource;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void Precache(void);
   void Read_t(CTStream * istr);
   BOOL FillEntityStatistics(EntityStats * pes);
  virtual const CTFileName & GetComputerMessageName(void)const;
   CLightSource * GetLightSource(void);
   BOOL ForcesCannonballToExplode(void);
   void SetupLightSource(void);
   void PlayLightAnim(INDEX iAnim,ULONG ulFlags);
   void MinigunOn(void);
   void MinigunOff(void);
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   FLOAT WaitForDust(FLOAT3D & vStretch);
   void DeathNotify(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   BOOL CanFireAtPlayer(void);
   void PrepareBullet(FLOAT fDamage);
   void FireBullet(void);
   void EnemyPostInit(void);
#define  STATE_CScorpman_Fire 0x01320000
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01320001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01320002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01320003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01320004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01320005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01320006_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01320007_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01320008_Fire_08(const CEntityEvent &__eeInput);
#define  STATE_CScorpman_Hit 0x01320009
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x0132000a_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x0132000b_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x0132000c_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x0132000d_Hit_04(const CEntityEvent &__eeInput);
#define  STATE_CScorpman_Sleep 0x0132000e
  BOOL Sleep(const CEntityEvent &__eeInput);
  BOOL H0x0132000f_Sleep_01(const CEntityEvent &__eeInput);
  BOOL H0x01320010_Sleep_02(const CEntityEvent &__eeInput);
#define  STATE_CScorpman_WakeUp 0x01320011
  BOOL WakeUp(const CEntityEvent &__eeInput);
  BOOL H0x01320012_WakeUp_01(const CEntityEvent &__eeInput);
  BOOL H0x01320013_WakeUp_02(const CEntityEvent &__eeInput);
#define  STATE_CScorpman_PreMainLoop 0x01320014
  BOOL PreMainLoop(const CEntityEvent &__eeInput);
  BOOL H0x01320015_PreMainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x01320016_PreMainLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x01320017_PreMainLoop_03(const CEntityEvent &__eeInput);
#define  STATE_CScorpman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Scorpman_INCLUDED
