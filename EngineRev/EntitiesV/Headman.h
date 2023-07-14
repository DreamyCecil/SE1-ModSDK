// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Headman_INCLUDED
#define _EntitiesV_Headman_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType HeadmanType_enum;
enum HeadmanType {
  HDT_FIRECRACKER = 0,
  HDT_ROCKETMAN = 1,
  HDT_BOMBERMAN = 2,
  HDT_KAMIKAZE = 3,
};
DECL_DLL inline void ClearToDefault(HeadmanType &e) { e = (HeadmanType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CHeadman_DLLClass;
class CHeadman : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum HeadmanType m_hdtType;
  BOOL m_bExploded;
  BOOL m_bAttackSound;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void * GetEntityInfo(void);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   FLOAT WaitForDust(FLOAT3D & vStretch);
   BOOL ShouldBlowUp(void);
   void DeathNotify(void);
   void StandingAnim(void);
   void StandingAnimFight(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void KamikazeSoundOn(void);
   void KamikazeSoundOff(void);
   void BlowUpNotify(void);
   void Explode(void);
   void SetSpeedsToDesiredPosition(const FLOAT3D & vPosDelta,FLOAT fPosDistance,BOOL bGoingToPlayer);
  virtual FLOAT GetAttackMoveFrequency(FLOAT fEnemyDistance);
#define  STATE_CHeadman_InitializeAttack 0x012f0000
  BOOL InitializeAttack(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_StopAttack 0x012f0001
  BOOL StopAttack(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_Fire 0x012f0002
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x012f0003_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x012f0004_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x012f0005_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x012f0006_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x012f0007_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x012f0008_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x012f0009_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x012f000a_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x012f000b_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x012f000c_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x012f000d_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x012f000e_Fire_12(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_BombermanAttack 0x012f000f
  BOOL BombermanAttack(const CEntityEvent &__eeInput);
  BOOL H0x012f0010_BombermanAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x012f0011_BombermanAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x012f0012_BombermanAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x012f0013_BombermanAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x012f0014_BombermanAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x012f0015_BombermanAttack_06(const CEntityEvent &__eeInput);
  BOOL H0x012f0016_BombermanAttack_07(const CEntityEvent &__eeInput);
  BOOL H0x012f0017_BombermanAttack_08(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_FirecrackerAttack 0x012f0018
  BOOL FirecrackerAttack(const CEntityEvent &__eeInput);
  BOOL H0x012f0019_FirecrackerAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x012f001a_FirecrackerAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x012f001b_FirecrackerAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x012f001c_FirecrackerAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x012f001d_FirecrackerAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x012f001e_FirecrackerAttack_06(const CEntityEvent &__eeInput);
  BOOL H0x012f001f_FirecrackerAttack_07(const CEntityEvent &__eeInput);
  BOOL H0x012f0020_FirecrackerAttack_08(const CEntityEvent &__eeInput);
  BOOL H0x012f0021_FirecrackerAttack_09(const CEntityEvent &__eeInput);
  BOOL H0x012f0022_FirecrackerAttack_10(const CEntityEvent &__eeInput);
  BOOL H0x012f0023_FirecrackerAttack_11(const CEntityEvent &__eeInput);
  BOOL H0x012f0024_FirecrackerAttack_12(const CEntityEvent &__eeInput);
  BOOL H0x012f0025_FirecrackerAttack_13(const CEntityEvent &__eeInput);
  BOOL H0x012f0026_FirecrackerAttack_14(const CEntityEvent &__eeInput);
  BOOL H0x012f0027_FirecrackerAttack_15(const CEntityEvent &__eeInput);
  BOOL H0x012f0028_FirecrackerAttack_16(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_RocketmanAttack 0x012f0029
  BOOL RocketmanAttack(const CEntityEvent &__eeInput);
  BOOL H0x012f002a_RocketmanAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x012f002b_RocketmanAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x012f002c_RocketmanAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x012f002d_RocketmanAttack_04(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_Death 0x012f002e
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x012f002f_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x012f0030_Death_02(const CEntityEvent &__eeInput);
#define  STATE_CHeadman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Headman_INCLUDED
