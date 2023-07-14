// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Santa_INCLUDED
#define _EntitiesV_Santa_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
extern "C" DECL_DLL CDLLEntityClass CSanta_DLLClass;
class CSanta : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_tmLastSpawnTime;
  FLOAT m_tmMinSpawnInterval;
  FLOAT m_fSantaHealth;
  CSoundObject m_soRunning;
  BOOL m_bRunSoundPlaying;
  CEntityPointer m_penTemplate0;
  CEntityPointer m_penTemplate1;
  CEntityPointer m_penTemplate2;
  CEntityPointer m_penTemplate3;
  CEntityPointer m_penTemplate4;
   void Precache(void);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void * GetEntityInfo(void);
   void ActivateRunningSound(void);
   void DeactivateRunningSound(void);
   BOOL HandleEvent(const CEntityEvent & ee);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void LeaveStain(BOOL bGrow);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   CModelObject * GetBody(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   void EnemyPostInit(void);
#define  STATE_CSanta_Fire 0x01630000
  BOOL Fire(const CEntityEvent &__eeInput);
#define  STATE_CSanta_Hit 0x01630001
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CSanta_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Santa_INCLUDED
