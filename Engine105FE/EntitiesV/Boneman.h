// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Boneman_INCLUDED
#define _EntitiesV_Boneman_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
extern "C" DECL_DLL CDLLEntityClass CBoneman_DLLClass;
class CBoneman : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bFistHit;
  BOOL m_bTouchAnother;
  CSoundObject m_soFeet;
  BOOL m_bRunSoundPlaying;
   void Precache(void);
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void LeaveStain(BOOL bGrow);
   INDEX AnimForDamage(FLOAT fDamage);
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
   void ActivateRunningSound(void);
   void DeactivateRunningSound(void);
   void BlowUp(void);
#define  STATE_CBoneman_Fire 0x01310000
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01310001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01310002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01310003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01310004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01310005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01310006_Fire_06(const CEntityEvent &__eeInput);
#define  STATE_CBoneman_Hit 0x01310007
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CBoneman_JumpOnEnemy 0x01310008
  BOOL JumpOnEnemy(const CEntityEvent &__eeInput);
  BOOL H0x01310009_JumpOnEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x0131000a_JumpOnEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x0131000b_JumpOnEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x0131000c_JumpOnEnemy_04(const CEntityEvent &__eeInput);
#define  STATE_CBoneman_HitWithBones 0x0131000d
  BOOL HitWithBones(const CEntityEvent &__eeInput);
  BOOL H0x0131000e_HitWithBones_01(const CEntityEvent &__eeInput);
  BOOL H0x0131000f_HitWithBones_02(const CEntityEvent &__eeInput);
  BOOL H0x01310010_HitWithBones_03(const CEntityEvent &__eeInput);
  BOOL H0x01310011_HitWithBones_04(const CEntityEvent &__eeInput);
  BOOL H0x01310012_HitWithBones_05(const CEntityEvent &__eeInput);
  BOOL H0x01310013_HitWithBones_06(const CEntityEvent &__eeInput);
  BOOL H0x01310014_HitWithBones_07(const CEntityEvent &__eeInput);
  BOOL H0x01310015_HitWithBones_08(const CEntityEvent &__eeInput);
#define  STATE_CBoneman_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Boneman_INCLUDED
