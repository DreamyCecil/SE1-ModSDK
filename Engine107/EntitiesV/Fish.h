// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Fish_INCLUDED
#define _EntitiesV_Fish_INCLUDED 1
#include <EntitiesV/EnemyDive.h>
extern "C" DECL_DLL CDLLEntityClass CFish_DLLClass;
class CFish : public CEnemyDive {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bAttackingByElectricity;
  FLOAT m_tmElectricityTimeStart;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   void * GetEntityInfo(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   INDEX AnimForDeath(void);
   void DeathNotify(void);
   void RenderParticles(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   void IdleSound(void);
   void SightSound(void);
   void WoundSound(void);
   void DeathSound(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
#define  STATE_CFish_DiveHit 0x01510000
  BOOL DiveHit(const CEntityEvent &__eeInput);
  BOOL H0x01510001_DiveHit_01(const CEntityEvent &__eeInput);
  BOOL H0x01510002_DiveHit_02(const CEntityEvent &__eeInput);
  BOOL H0x01510003_DiveHit_03(const CEntityEvent &__eeInput);
  BOOL H0x01510004_DiveHit_04(const CEntityEvent &__eeInput);
  BOOL H0x01510005_DiveHit_05(const CEntityEvent &__eeInput);
  BOOL H0x01510006_DiveHit_06(const CEntityEvent &__eeInput);
#define  STATE_CFish_Hit 0x01510007
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CFish_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CFish_propnames[] = {
  "m_bAttackingByElectricity",
  "m_tmElectricityTimeStart",
};
#define CFish_propnamesct ARRAYCOUNT(CFish_propnames)

#endif // _EntitiesV_Fish_INCLUDED
