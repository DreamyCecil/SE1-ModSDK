// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Mamut_INCLUDED
#define _EntitiesV_Mamut_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Mamutman.h>
#include <EntitiesV/AirWave.h>
#include <EntitiesV/Bullet.h>
extern DECL_DLL CEntityPropertyEnumType MamutChar_enum;
enum MamutChar {
  MAT_SUMMER = 0,
  MAT_WINTER = 1,
};
DECL_DLL inline void ClearToDefault(MamutChar &e) { e = (MamutChar)0; } ;
extern "C" DECL_DLL CDLLEntityClass CMamut_DLLClass;
class CMamut : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum MamutChar m_EmcChar;
  BOOL m_bFrontRider;
  BOOL m_bMiddleRider;
  BOOL m_bRearRider;
  CEntityPointer m_penBullet;
  FLOAT m_fLastShootTime;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void PlayAttachmentAnim(INDEX iAttachment,INDEX iAnim,ULONG ulFlags);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void CreateRider(FLOAT3D & vPos,INDEX iRider);
   void DropRiders(BOOL bAlways);
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
   void FireAirWave(void);
#define  STATE_CMamut_BeWounded 0x01470000
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x01470001_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x01470002_BeWounded_02(const CEntityEvent &__eeInput);
  BOOL H0x01470003_BeWounded_03(const CEntityEvent &__eeInput);
  BOOL H0x01470004_BeWounded_04(const CEntityEvent &__eeInput);
#define  STATE_CMamut_Fire 0x01470005
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01470006_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01470007_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01470008_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01470009_Fire_04(const CEntityEvent &__eeInput);
#define  STATE_CMamut_Hit 0x0147000a
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x0147000b_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x0147000c_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x0147000d_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x0147000e_Hit_04(const CEntityEvent &__eeInput);
  BOOL H0x0147000f_Hit_05(const CEntityEvent &__eeInput);
  BOOL H0x01470010_Hit_06(const CEntityEvent &__eeInput);
#define  STATE_CMamut_RiderFire 0x01470011
  BOOL RiderFire(const CEntityEvent &__eeInput);
  BOOL H0x01470012_RiderFire_01(const CEntityEvent &__eeInput);
  BOOL H0x01470013_RiderFire_02(const CEntityEvent &__eeInput);
  BOOL H0x01470014_RiderFire_03(const CEntityEvent &__eeInput);
#define  STATE_CMamut_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Mamut_INCLUDED