// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Cyborg_INCLUDED
#define _EntitiesV_Cyborg_INCLUDED 1
#include <EntitiesV/EnemyFly.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/CyborgBike.h>
extern DECL_DLL CEntityPropertyEnumType CyborgType_enum;
enum CyborgType {
  CBT_GROUND = 0,
  CBT_FLY = 1,
  CBT_FLYGROUND = 2,
};
DECL_DLL inline void ClearToDefault(CyborgType &e) { e = (CyborgType)0; } ;
#define CCyborg_ClassID 330
extern "C" DECL_DLL CDLLEntityClass CCyborg_DLLClass;
class CCyborg : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum CyborgType m_EctType;
  INDEX m_iCloseHit;
  INDEX m_iFireLaserCount;
  INDEX m_ctBombsToDrop;
  FLOAT m_tmLastBombDropped;
  FLOAT m_fFlyAboveEnemy;
  FLOAT m_fFlySpeed;
  FLOAT m_aFlyRotateSpeed;
  FLOAT m_fFallStartTime;
  BOOL m_bBombing;
CEntity * penBullet;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void ChangeCollisionToAir();
   void ChangeCollisionToGround();
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void BlowUp(void);
  virtual void FlyDesiredPosition(FLOAT3D & vPos);
   void FlyInDirection();
   void FlyToPosition();
#define  STATE_CCyborg_FallToFloor 0x014a0000
  BOOL FallToFloor(const CEntityEvent &__eeInput);
  BOOL H0x014a0001_FallToFloor_01(const CEntityEvent &__eeInput);
  BOOL H0x014a0002_FallToFloor_02(const CEntityEvent &__eeInput);
  BOOL H0x014a0003_FallToFloor_03(const CEntityEvent &__eeInput);
  BOOL H0x014a0004_FallToFloor_04(const CEntityEvent &__eeInput);
  BOOL H0x014a0005_FallToFloor_05(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_GetUp 0x014a0006
  BOOL GetUp(const CEntityEvent &__eeInput);
  BOOL H0x014a0007_GetUp_01(const CEntityEvent &__eeInput);
  BOOL H0x014a0008_GetUp_02(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_BeWounded 0x014a0009
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x014a000a_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x014a000b_BeWounded_02(const CEntityEvent &__eeInput);
  BOOL H0x014a000c_BeWounded_03(const CEntityEvent &__eeInput);
  BOOL H0x014a000d_BeWounded_04(const CEntityEvent &__eeInput);
  BOOL H0x014a000e_BeWounded_05(const CEntityEvent &__eeInput);
  BOOL H0x014a000f_BeWounded_06(const CEntityEvent &__eeInput);
  BOOL H0x014a0010_BeWounded_07(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_AttackEnemy 0x014a0011
  BOOL AttackEnemy(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_FlyAttackEnemy 0x014a0012
  BOOL FlyAttackEnemy(const CEntityEvent &__eeInput);
  BOOL H0x014a0013_FlyAttackEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x014a0014_FlyAttackEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x014a0015_FlyAttackEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x014a0016_FlyAttackEnemy_04(const CEntityEvent &__eeInput);
  BOOL H0x014a0017_FlyAttackEnemy_05(const CEntityEvent &__eeInput);
  BOOL H0x014a0018_FlyAttackEnemy_06(const CEntityEvent &__eeInput);
  BOOL H0x014a0019_FlyAttackEnemy_07(const CEntityEvent &__eeInput);
  BOOL H0x014a001a_FlyAttackEnemy_08(const CEntityEvent &__eeInput);
  BOOL H0x014a001b_FlyAttackEnemy_09(const CEntityEvent &__eeInput);
  BOOL H0x014a001c_FlyAttackEnemy_10(const CEntityEvent &__eeInput);
  BOOL H0x014a001d_FlyAttackEnemy_11(const CEntityEvent &__eeInput);
  BOOL H0x014a001e_FlyAttackEnemy_12(const CEntityEvent &__eeInput);
  BOOL H0x014a001f_FlyAttackEnemy_13(const CEntityEvent &__eeInput);
  BOOL H0x014a0020_FlyAttackEnemy_14(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_FlyAttackRun 0x014a0021
  BOOL FlyAttackRun(const CEntityEvent &__eeInput);
  BOOL H0x014a0022_FlyAttackRun_01(const CEntityEvent &__eeInput);
  BOOL H0x014a0023_FlyAttackRun_02(const CEntityEvent &__eeInput);
  BOOL H0x014a0024_FlyAttackRun_03(const CEntityEvent &__eeInput);
  BOOL H0x014a0025_FlyAttackRun_04(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_GoAwayAndRotate 0x014a0026
  BOOL GoAwayAndRotate(const CEntityEvent &__eeInput);
  BOOL H0x014a0027_GoAwayAndRotate_01(const CEntityEvent &__eeInput);
  BOOL H0x014a0028_GoAwayAndRotate_02(const CEntityEvent &__eeInput);
  BOOL H0x014a0029_GoAwayAndRotate_03(const CEntityEvent &__eeInput);
  BOOL H0x014a002a_GoAwayAndRotate_04(const CEntityEvent &__eeInput);
  BOOL H0x014a002b_GoAwayAndRotate_05(const CEntityEvent &__eeInput);
  BOOL H0x014a002c_GoAwayAndRotate_06(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_Fire 0x014a002d
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x014a002e_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x014a002f_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x014a0030_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x014a0031_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x014a0032_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x014a0033_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x014a0034_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x014a0035_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x014a0036_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x014a0037_Fire_10(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_Hit 0x014a0038
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x014a0039_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x014a003a_Hit_02(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_Death 0x014a003b
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x014a003c_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x014a003d_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x014a003e_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x014a003f_Death_04(const CEntityEvent &__eeInput);
  BOOL H0x014a0040_Death_05(const CEntityEvent &__eeInput);
  BOOL H0x014a0041_Death_06(const CEntityEvent &__eeInput);
  BOOL H0x014a0042_Death_07(const CEntityEvent &__eeInput);
  BOOL H0x014a0043_Death_08(const CEntityEvent &__eeInput);
  BOOL H0x014a0044_Death_09(const CEntityEvent &__eeInput);
#define  STATE_CCyborg_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Cyborg_INCLUDED
