// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Mamutman_INCLUDED
#define _EntitiesV_Mamutman_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Bullet.h>
extern "C" DECL_DLL CDLLEntityClass CMamutman_DLLClass;
class CMamutman : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penBullet;
  BOOL m_bSpawned;
  INDEX m_bSpawnedPosition;
  BOOL m_bCountAsKill;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void PrepareBullet(void);
   void FireBullet(void);
#define  STATE_CMamutman_FallOnFloor 0x01460000
  BOOL FallOnFloor(const CEntityEvent &__eeInput);
  BOOL H0x01460001_FallOnFloor_01(const CEntityEvent &__eeInput);
  BOOL H0x01460002_FallOnFloor_02(const CEntityEvent &__eeInput);
  BOOL H0x01460003_FallOnFloor_03(const CEntityEvent &__eeInput);
  BOOL H0x01460004_FallOnFloor_04(const CEntityEvent &__eeInput);
#define  STATE_CMamutman_BeWounded 0x01460005
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x01460006_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x01460007_BeWounded_02(const CEntityEvent &__eeInput);
  BOOL H0x01460008_BeWounded_03(const CEntityEvent &__eeInput);
  BOOL H0x01460009_BeWounded_04(const CEntityEvent &__eeInput);
  BOOL H0x0146000a_BeWounded_05(const CEntityEvent &__eeInput);
  BOOL H0x0146000b_BeWounded_06(const CEntityEvent &__eeInput);
  BOOL H0x0146000c_BeWounded_07(const CEntityEvent &__eeInput);
  BOOL H0x0146000d_BeWounded_08(const CEntityEvent &__eeInput);
  BOOL H0x0146000e_BeWounded_09(const CEntityEvent &__eeInput);
  BOOL H0x0146000f_BeWounded_10(const CEntityEvent &__eeInput);
  BOOL H0x01460010_BeWounded_11(const CEntityEvent &__eeInput);
  BOOL H0x01460011_BeWounded_12(const CEntityEvent &__eeInput);
  BOOL H0x01460012_BeWounded_13(const CEntityEvent &__eeInput);
  BOOL H0x01460013_BeWounded_14(const CEntityEvent &__eeInput);
  BOOL H0x01460014_BeWounded_15(const CEntityEvent &__eeInput);
#define  STATE_CMamutman_Fire 0x01460015
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01460016_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01460017_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01460018_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01460019_Fire_04(const CEntityEvent &__eeInput);
#define  STATE_CMamutman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Mamutman_INCLUDED
