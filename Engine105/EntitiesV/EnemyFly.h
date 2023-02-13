// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_EnemyFly_INCLUDED
#define _EntitiesV_EnemyFly_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Debris.h>
#include <EntitiesV/EnemyMarker.h>
extern DECL_DLL CEntityPropertyEnumType EnemyFlyType_enum;
enum EnemyFlyType {
  EFT_GROUND_ONLY = 0,
  EFT_FLY_ONLY = 1,
  EFT_FLY_GROUND_GROUND = 2,
  EFT_FLY_GROUND_AIR = 3,
  EFT_FLY_AIR_GROUND = 4,
  EFT_FLY_AIR_AIR = 5,
};
DECL_DLL inline void ClearToDefault(EnemyFlyType &e) { e = (EnemyFlyType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CEnemyFly_DLLClass;
class DECL_DLL  CEnemyFly : public CEnemyBase {
public:
   virtual void SetDefaultProperties(void);
  enum EnemyFlyType m_EeftType;
  BOOL m_bInAir;
  BOOL m_bAirAttack;
  BOOL m_bStartInAir;
  FLOAT m_fGroundToAirSpeed;
  FLOAT m_fAirToGroundSpeed;
  FLOAT m_fAirToGroundMin;
  FLOAT m_fAirToGroundMax;
  FLOAT m_fFlyHeight;
  FLOAT m_fFlyWalkSpeed;
  ANGLE m_aFlyWalkRotateSpeed;
  FLOAT m_fFlyAttackRunSpeed;
  ANGLE m_aFlyAttackRotateSpeed;
  FLOAT m_fFlyCloseRunSpeed;
  ANGLE m_aFlyCloseRotateSpeed;
  FLOAT m_fFlyAttackDistance;
  FLOAT m_fFlyCloseDistance;
  FLOAT m_fFlyAttackFireTime;
  FLOAT m_fFlyCloseFireTime;
  FLOAT m_fFlyStopDistance;
  FLOAT m_fFlyIgnoreRange;
  FLOAT m_fFlyLockOnEnemyTime;
  BOOL m_bFlyToMarker;
  virtual FLOAT & GetProp(FLOAT & m_fBase);
  virtual FLOAT3D PlayerDestinationPos(void);
   void StartPathFinding(void);
  virtual void AdjustDifficulty(void);
  virtual BOOL CanHitEnemy(CEntity * penTarget,FLOAT fCosAngle);
  virtual ULONG SetDesiredMovement(void);
   void SetEntityPosition();
  virtual FLOAT AirToGroundAnim(void);
  virtual FLOAT GroundToAirAnim(void);
  virtual void ChangeCollisionToAir(void);
  virtual void ChangeCollisionToGround(void);
#define  STATE_CEnemyFly_ReturnToStartPosition 0x01370000
  BOOL ReturnToStartPosition(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_BeWounded 0x01370001
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x01370002_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x01370003_BeWounded_02(const CEntityEvent &__eeInput);
  BOOL H0x01370004_BeWounded_03(const CEntityEvent &__eeInput);
  BOOL H0x01370005_BeWounded_04(const CEntityEvent &__eeInput);
  BOOL H0x01370006_BeWounded_05(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_AirToGround 0x01370007
  BOOL AirToGround(const CEntityEvent &__eeInput);
  BOOL H0x01370008_AirToGround_01(const CEntityEvent &__eeInput);
  BOOL H0x01370009_AirToGround_02(const CEntityEvent &__eeInput);
  BOOL H0x0137000a_AirToGround_03(const CEntityEvent &__eeInput);
  BOOL H0x0137000b_AirToGround_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_GroundToAir 0x0137000c
  BOOL GroundToAir(const CEntityEvent &__eeInput);
  BOOL H0x0137000d_GroundToAir_01(const CEntityEvent &__eeInput);
  BOOL H0x0137000e_GroundToAir_02(const CEntityEvent &__eeInput);
  BOOL H0x0137000f_GroundToAir_03(const CEntityEvent &__eeInput);
  BOOL H0x01370010_GroundToAir_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_AttackEnemy 0x01370011
  BOOL AttackEnemy(const CEntityEvent &__eeInput);
  BOOL H0x01370012_AttackEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x01370013_AttackEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x01370014_AttackEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x01370015_AttackEnemy_04(const CEntityEvent &__eeInput);
  BOOL H0x01370016_AttackEnemy_05(const CEntityEvent &__eeInput);
  BOOL H0x01370017_AttackEnemy_06(const CEntityEvent &__eeInput);
  BOOL H0x01370018_AttackEnemy_07(const CEntityEvent &__eeInput);
  BOOL H0x01370019_AttackEnemy_08(const CEntityEvent &__eeInput);
  BOOL H0x0137001a_AttackEnemy_09(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_Hit 0x0137001b
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_Fire 0x0137001c
  BOOL Fire(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_Death 0x0137001d
  BOOL Death(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_MainLoop 0x0137001e
  BOOL MainLoop(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_GroundHit 0x0137001f
  BOOL GroundHit(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_GroundFire 0x01370020
  BOOL GroundFire(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_FlyHit 0x01370021
  BOOL FlyHit(const CEntityEvent &__eeInput);
#define  STATE_CEnemyFly_FlyFire 0x01370022
  BOOL FlyFire(const CEntityEvent &__eeInput);
};

static const char *CEnemyFly_propnames[] = {
  "m_EeftType",
  "m_bInAir",
  "m_bAirAttack",
  "m_bStartInAir",
  "m_fGroundToAirSpeed",
  "m_fAirToGroundSpeed",
  "m_fAirToGroundMin",
  "m_fAirToGroundMax",
  "m_fFlyHeight",
  "m_fFlyWalkSpeed",
  "m_aFlyWalkRotateSpeed",
  "m_fFlyAttackRunSpeed",
  "m_aFlyAttackRotateSpeed",
  "m_fFlyCloseRunSpeed",
  "m_aFlyCloseRotateSpeed",
  "m_fFlyAttackDistance",
  "m_fFlyCloseDistance",
  "m_fFlyAttackFireTime",
  "m_fFlyCloseFireTime",
  "m_fFlyStopDistance",
  "m_fFlyIgnoreRange",
  "m_fFlyLockOnEnemyTime",
  "m_bFlyToMarker",
};
#define CEnemyFly_propnamesct ARRAYCOUNT(CEnemyFly_propnames)

#endif // _EntitiesV_EnemyFly_INCLUDED