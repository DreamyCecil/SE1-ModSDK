// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Grunt_INCLUDED
#define _EntitiesV_Grunt_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType GruntType_enum;
enum GruntType {
  GT_SOLDIER = 0,
  GT_COMMANDER = 1,
};
DECL_DLL inline void ClearToDefault(GruntType &e) { e = (GruntType)0; } ;
#define CGrunt_ClassID 343
extern "C" DECL_DLL CDLLEntityClass CGrunt_DLLClass;
class CGrunt : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum GruntType m_gtType;
  CSoundObject m_soFire1;
  CSoundObject m_soFire2;
  BOOL m_iCustomFireWait;
  INDEX m_iCustomFireCounter;
  INDEX m_iCustomAngle;
  INDEX m_iCustomNumber;
  INDEX m_iCustomAttackNumber;
  INDEX i_CustomAttackNumberLoop;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void * GetEntityInfo(void);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   FLOAT WaitForDust(FLOAT3D & vStretch);
   void DeathNotify(void);
   void StandingAnim(void);
   void RunningAnim(void);
   void WalkingAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void EnemyPostInit(void);
#define  STATE_CGrunt_Fire 0x01570000
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01570001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01570002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01570003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01570004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01570005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01570006_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01570007_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01570008_Fire_08(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_SoldierAttack 0x01570009
  BOOL SoldierAttack(const CEntityEvent &__eeInput);
  BOOL H0x0157000a_SoldierAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x0157000b_SoldierAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x0157000c_SoldierAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x0157000d_SoldierAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x0157000e_SoldierAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x0157000f_SoldierAttack_06(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_CommanderAttack 0x01570010
  BOOL CommanderAttack(const CEntityEvent &__eeInput);
  BOOL H0x01570011_CommanderAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x01570012_CommanderAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x01570013_CommanderAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x01570014_CommanderAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x01570015_CommanderAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x01570016_CommanderAttack_06(const CEntityEvent &__eeInput);
  BOOL H0x01570017_CommanderAttack_07(const CEntityEvent &__eeInput);
  BOOL H0x01570018_CommanderAttack_08(const CEntityEvent &__eeInput);
  BOOL H0x01570019_CommanderAttack_09(const CEntityEvent &__eeInput);
  BOOL H0x0157001a_CommanderAttack_10(const CEntityEvent &__eeInput);
  BOOL H0x0157001b_CommanderAttack_11(const CEntityEvent &__eeInput);
  BOOL H0x0157001c_CommanderAttack_12(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Grunt_INCLUDED
