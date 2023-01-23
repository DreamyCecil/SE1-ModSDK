// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_RobotDriving_INCLUDED
#define _EntitiesV_RobotDriving_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Projectile.h>
extern DECL_DLL CEntityPropertyEnumType RobotDrivingChar_enum;
enum RobotDrivingChar {
  RDC_R2D2 = 0,
  RDC_SPIDER = 1,
};
DECL_DLL inline void ClearToDefault(RobotDrivingChar &e) { e = (RobotDrivingChar)0; } ;
extern "C" DECL_DLL CDLLEntityClass CRobotDriving_DLLClass;
class CRobotDriving : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum RobotDrivingChar m_rdcChar;
  FLOAT m_fSize;
  CSoundObject m_soFire0;
  CSoundObject m_soFire1;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
#define  STATE_CRobotDriving_Fire 0x014d0000
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x014d0001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x014d0002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x014d0003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x014d0004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x014d0005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x014d0006_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x014d0007_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x014d0008_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x014d0009_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x014d000a_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x014d000b_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x014d000c_Fire_12(const CEntityEvent &__eeInput);
  BOOL H0x014d000d_Fire_13(const CEntityEvent &__eeInput);
#define  STATE_CRobotDriving_Death 0x014d000e
  BOOL Death(const CEntityEvent &__eeInput);
#define  STATE_CRobotDriving_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_RobotDriving_INCLUDED