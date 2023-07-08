// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Dragonman_INCLUDED
#define _EntitiesV_Dragonman_INCLUDED 1
#include <EntitiesV/EnemyFly.h>
#include <EntitiesV/Projectile.h>
extern DECL_DLL CEntityPropertyEnumType DragonmanType_enum;
enum DragonmanType {
  DT_SOLDIER = 0,
  DT_SERGEANT = 1,
  DT_MONSTER = 2,
};
DECL_DLL inline void ClearToDefault(DragonmanType &e) { e = (DragonmanType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CDragonman_DLLClass;
class CDragonman : public CEnemyFly {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum DragonmanType m_EdtType;
  FLOAT3D m_vFlameSource;
  CEntityPointer m_penFlame;
  BOOL m_bBurnEnemy;
  FLOAT m_fFireTime;
   void * GetEntityInfo(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   FLOAT3D GetStretchedVector(const FLOAT3D & v);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
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
   void GetFlamerSourcePlacement(CPlacement3D & plFlame);
   void FireFlame(void);
#define  STATE_CDragonman_BeWounded 0x01410000
  BOOL BeWounded(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_FlyFire 0x01410001
  BOOL FlyFire(const CEntityEvent &__eeInput);
  BOOL H0x01410002_FlyFire_01(const CEntityEvent &__eeInput);
  BOOL H0x01410003_FlyFire_02(const CEntityEvent &__eeInput);
  BOOL H0x01410004_FlyFire_03(const CEntityEvent &__eeInput);
  BOOL H0x01410005_FlyFire_04(const CEntityEvent &__eeInput);
  BOOL H0x01410006_FlyFire_05(const CEntityEvent &__eeInput);
  BOOL H0x01410007_FlyFire_06(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_FlyHit 0x01410008
  BOOL FlyHit(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_FlyOnEnemy 0x01410009
  BOOL FlyOnEnemy(const CEntityEvent &__eeInput);
  BOOL H0x0141000a_FlyOnEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x0141000b_FlyOnEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x0141000c_FlyOnEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x0141000d_FlyOnEnemy_04(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_FlyBurn 0x0141000e
  BOOL FlyBurn(const CEntityEvent &__eeInput);
  BOOL H0x0141000f_FlyBurn_01(const CEntityEvent &__eeInput);
  BOOL H0x01410010_FlyBurn_02(const CEntityEvent &__eeInput);
  BOOL H0x01410011_FlyBurn_03(const CEntityEvent &__eeInput);
  BOOL H0x01410012_FlyBurn_04(const CEntityEvent &__eeInput);
  BOOL H0x01410013_FlyBurn_05(const CEntityEvent &__eeInput);
  BOOL H0x01410014_FlyBurn_06(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_Fire 0x01410015
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01410016_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01410017_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01410018_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01410019_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x0141001a_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x0141001b_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x0141001c_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x0141001d_Fire_08(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_Hit 0x0141001e
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_BurnEnemy 0x0141001f
  BOOL BurnEnemy(const CEntityEvent &__eeInput);
  BOOL H0x01410020_BurnEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x01410021_BurnEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x01410022_BurnEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x01410023_BurnEnemy_04(const CEntityEvent &__eeInput);
  BOOL H0x01410024_BurnEnemy_05(const CEntityEvent &__eeInput);
  BOOL H0x01410025_BurnEnemy_06(const CEntityEvent &__eeInput);
#define  STATE_CDragonman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Dragonman_INCLUDED
