// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_AirElemental_INCLUDED
#define _EntitiesV_AirElemental_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Twister.h>
#define EVENTCODE_EElementalGrow 0x015b0000
class DECL_DLL EElementalGrow : public CEntityEvent {
public:
EElementalGrow();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EElementalGrow &e) { e = EElementalGrow(); } ;
extern "C" DECL_DLL CDLLEntityClass CAirElemental_DLLClass;
class CAirElemental : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bFloat;
  FLOAT m_fAttPosY;
  BOOL m_bInitialAnim;
  CEntityPointer m_penTrigger01;
  CEntityPointer m_penTrigger02;
  CEntityPointer m_penTrigger03;
  CEntityPointer m_penTrigger04;
  CEntityPointer m_penTrigger05;
  CEntityPointer m_penTrigger06;
  CEntityPointer m_penTrigger07;
  CEntityPointer m_penTrigger08;
  CEntityPointer m_penTrigger09;
  CEntityPointer m_penTrigger10;
  FLOAT m_fAttSizeCurrent;
  FLOAT m_fAttSizeBegin;
  FLOAT m_fAttSizeEnd;
  FLOAT m_fAttSizeRequested;
  BOOL m_bAttGrow;
  INDEX m_iSize;
  FLOAT m_fLastSize;
  FLOAT m_fTargetSize;
  FLOAT m_fGrowSpeed;
  FLOAT m_tmWindNextFire;
  FLOAT m_fWindFireTimeMin;
  FLOAT m_fWindFireTimeMax;
  INDEX m_iWind;
  BOOL m_bDying;
  FLOAT m_tmDeath;
  FLOAT m_fDeathDuration;
  FLOAT3D m_fWindBlastFirePosBegin;
  FLOAT3D m_fWindBlastFirePosEnd;
  FLOAT m_tmLastAnimation;
  CEntityPointer m_penDeathInflictor;
  BOOL m_bRenderParticles;
  CSoundObject m_soFire;
  CSoundObject m_soVoice;
  COLOR m_colParticles;
CEmiter m_emEmiter;
   void Read_t(CTStream * istr);
   void Write_t(CTStream * istr);
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void Precache(void);
   void * GetEntityInfo(void);
   CModelObject * ElementalModel(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   INDEX AnimForDamage(FLOAT fDamage);
   void StandingAnimFight(void);
   void StandingAnim(void);
   void WalkingAnim(void);
   void RunningAnim(void);
   void RotatingAnim(void);
   INDEX AnimForDeath(void);
   void IdleSound(void);
   void WoundSound(void);
   void SizeModel(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void BlowUp(void);
   void EnemyPostInit(void);
   void LaunchTwister(FLOAT3D vEnemyOffset);
   void PreMoving();
   void GetAirElementalAttachmentData(INDEX iAttachment,FLOATmatrix3D & mRot,FLOAT3D & vPos);
   FLOAT GetCurrentStretchRatio(void);
   void RenderParticles(void);
#define  STATE_CAirElemental_Die 0x015b0001
  BOOL Die(const CEntityEvent &__eeInput);
  BOOL H0x015b0002_Die_01(const CEntityEvent &__eeInput);
  BOOL H0x015b0003_Die_02(const CEntityEvent &__eeInput);
  BOOL H0x015b0004_Die_03(const CEntityEvent &__eeInput);
  BOOL H0x015b0005_Die_04(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_Fire 0x015b0006
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x015b0007_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x015b0008_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x015b0009_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x015b000a_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x015b000b_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x015b000c_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x015b000d_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x015b000e_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x015b000f_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x015b0010_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x015b0011_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x015b0012_Fire_12(const CEntityEvent &__eeInput);
  BOOL H0x015b0013_Fire_13(const CEntityEvent &__eeInput);
  BOOL H0x015b0014_Fire_14(const CEntityEvent &__eeInput);
  BOOL H0x015b0015_Fire_15(const CEntityEvent &__eeInput);
  BOOL H0x015b0016_Fire_16(const CEntityEvent &__eeInput);
  BOOL H0x015b0017_Fire_17(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_Hit 0x015b0018
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_Death 0x015b0019
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x015b001a_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x015b001b_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x015b001c_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x015b001d_Death_04(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_Grow 0x015b001e
  BOOL Grow(const CEntityEvent &__eeInput);
  BOOL H0x015b001f_Grow_01(const CEntityEvent &__eeInput);
  BOOL H0x015b0020_Grow_02(const CEntityEvent &__eeInput);
  BOOL H0x015b0021_Grow_03(const CEntityEvent &__eeInput);
  BOOL H0x015b0022_Grow_04(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_ElementalLoop 0x015b0023
  BOOL ElementalLoop(const CEntityEvent &__eeInput);
  BOOL H0x015b0024_ElementalLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x015b0025_ElementalLoop_02(const CEntityEvent &__eeInput);
#define  STATE_CAirElemental_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x015b0026_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x015b0027_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x015b0028_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x015b0029_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x015b002a_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x015b002b_Main_06(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_AirElemental_INCLUDED