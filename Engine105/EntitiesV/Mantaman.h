// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Mantaman_INCLUDED
#define _EntitiesV_Mantaman_INCLUDED 1
#include <EntitiesV/EnemyDive.h>
extern "C" DECL_DLL CDLLEntityClass CMantaman_DLLClass;
class CMantaman : public CEnemyDive {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_FixedState;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void ChangeCollisionToLiquid();
   void ChangeCollisionToGround();
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
#define  STATE_CMantaman_AttackEnemy 0x01490000
  BOOL AttackEnemy(const CEntityEvent &__eeInput);
  BOOL H0x01490001_AttackEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x01490002_AttackEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x01490003_AttackEnemy_03(const CEntityEvent &__eeInput);
#define  STATE_CMantaman_DiveFire 0x01490004
  BOOL DiveFire(const CEntityEvent &__eeInput);
  BOOL H0x01490005_DiveFire_01(const CEntityEvent &__eeInput);
  BOOL H0x01490006_DiveFire_02(const CEntityEvent &__eeInput);
  BOOL H0x01490007_DiveFire_03(const CEntityEvent &__eeInput);
  BOOL H0x01490008_DiveFire_04(const CEntityEvent &__eeInput);
  BOOL H0x01490009_DiveFire_05(const CEntityEvent &__eeInput);
  BOOL H0x0149000a_DiveFire_06(const CEntityEvent &__eeInput);
#define  STATE_CMantaman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Mantaman_INCLUDED
