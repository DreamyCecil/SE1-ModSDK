// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Werebull_INCLUDED
#define _EntitiesV_Werebull_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/EnemyRunInto.h>
extern DECL_DLL CEntityPropertyEnumType BullChar_enum;
enum BullChar {
  BUC_SUMMER = 0,
  BUC_WINTER = 1,
};
DECL_DLL inline void ClearToDefault(BullChar &e) { e = (BullChar)0; } ;
extern "C" DECL_DLL CDLLEntityClass CWerebull_DLLClass;
class CWerebull : public CEnemyRunInto {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bRunAttack;
  BOOL m_bHornHit;
  CEntityPointer m_penLastTouched;
  CSoundObject m_soFeet;
  BOOL m_bRunSoundPlaying;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void Precache(void);
   void * GetEntityInfo(void);
   FLOAT GetCrushHealth(void);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void RenderParticles(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void AdjustDifficulty(void);
   INDEX AnimForDeath(void);
   void DeathNotify();
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
   void LiveEntityTouched(ETouch etouch);
   BOOL HigherMass(void);
   void EnemyPostInit(void);
#define  STATE_CWerebull_Hit 0x01330000
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x01330001_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x01330002_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x01330003_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x01330004_Hit_04(const CEntityEvent &__eeInput);
  BOOL H0x01330005_Hit_05(const CEntityEvent &__eeInput);
  BOOL H0x01330006_Hit_06(const CEntityEvent &__eeInput);
  BOOL H0x01330007_Hit_07(const CEntityEvent &__eeInput);
#define  STATE_CWerebull_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CWerebull_propnames[] = {
  "m_bRunAttack",
  "m_bHornHit",
  "m_penLastTouched",
  "m_soFeet",
  "m_bRunSoundPlaying",
};
#define CWerebull_propnamesct ARRAYCOUNT(CWerebull_propnames)

#endif // _EntitiesV_Werebull_INCLUDED
