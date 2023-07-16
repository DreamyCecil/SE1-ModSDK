// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_CannonBall_INCLUDED
#define _EntitiesV_CannonBall_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Light.h>
#include <EntitiesV/PlayerWeapons.h>
#include <EntitiesV/EnemyBase.h>
extern DECL_DLL CEntityPropertyEnumType CannonBallType_enum;
enum CannonBallType {
  CBT_IRON = 0,
  CBT_NUKE = 1,
};
DECL_DLL inline void ClearToDefault(CannonBallType &e) { e = (CannonBallType)0; } ;
#define EVENTCODE_ELaunchCannonBall 0x01fa0000
class DECL_DLL ELaunchCannonBall : public CEntityEvent {
public:
ELaunchCannonBall();
CEntityEvent *MakeCopy(void);
CEntityPointer penLauncher;
enum CannonBallType cbtType;
FLOAT fLaunchPower;
FLOAT fSize;
};
DECL_DLL inline void ClearToDefault(ELaunchCannonBall &e) { e = ELaunchCannonBall(); } ;
#define EVENTCODE_EForceExplode 0x01fa0001
class DECL_DLL EForceExplode : public CEntityEvent {
public:
EForceExplode();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EForceExplode &e) { e = EForceExplode(); } ;
extern "C" DECL_DLL CDLLEntityClass CCannonBall_DLLClass;
class DECL_DLL  CCannonBall : public CMovableModelEntity {
public:
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penLauncher;
  FLOAT m_fLaunchPower;
  FLOAT m_fCannonBallSize;
  FLOAT m_fIgnoreTime;
  FLOAT m_fStartTime;
  INDEX m_iNextChannel;
  BOOL m_bSelfExploded;
  CSoundObject m_soBounce0;
  CSoundObject m_soBounce1;
  CSoundObject m_soBounce2;
  CSoundObject m_soBounce3;
  CSoundObject m_soBounce4;
  enum CannonBallType m_cbtType;
  FLOAT m_tmInvisibility;
  FLOAT m_tmExpandBox;
  FLOAT m_tmForceExplode;
  BOOL m_bCheatedLifetime;
  FLOAT m_fCheatedLifetimeValue;
   void PreMoving(void);
   void PostMoving(void);
   void Read_t(CTStream * istr);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void RenderParticles(void);
   void Initialize(void);
   FLOAT CalculateDamageToInflict(void);
   void Explosion(FLOAT3D vCenter,const FLOAT3D & vStretchExplosion,const FLOAT3D & vStretchShockwave,const FLOAT3D & vStretchStain,BOOL bHasExplosion,BOOL bHasShockWave,BOOL bHasStain,BOOL bHasLight);
   BOOL BallTouchExplode(CEntityPointer penHit);
   void RangeDamage(void);
   void SpawnEffect(const CPlacement3D & plEffect,const ESpawnEffect & eSpawnEffect);
   void BounceSound(FLOAT fSpeed);
#define  STATE_CCannonBall_Bounce 0x01fa0002
  BOOL Bounce(const CEntityEvent &__eeInput);
  BOOL H0x01fa0003_Bounce_01(const CEntityEvent &__eeInput);
  BOOL H0x01fa0004_Bounce_02(const CEntityEvent &__eeInput);
#define  STATE_CCannonBall_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01fa0005_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01fa0006_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x01fa0007_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x01fa0008_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x01fa0009_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x01fa000a_Main_06(const CEntityEvent &__eeInput);
  BOOL H0x01fa000b_Main_07(const CEntityEvent &__eeInput);
  BOOL H0x01fa000c_Main_08(const CEntityEvent &__eeInput);
  BOOL H0x01fa000d_Main_09(const CEntityEvent &__eeInput);
  BOOL H0x01fa000e_Main_10(const CEntityEvent &__eeInput);
  BOOL H0x01fa000f_Main_11(const CEntityEvent &__eeInput);
  BOOL H0x01fa0010_Main_12(const CEntityEvent &__eeInput);
  BOOL H0x01fa0011_Main_13(const CEntityEvent &__eeInput);
  BOOL H0x01fa0012_Main_14(const CEntityEvent &__eeInput);
  BOOL H0x01fa0013_Main_15(const CEntityEvent &__eeInput);
  BOOL H0x01fa0014_Main_16(const CEntityEvent &__eeInput);
  BOOL H0x01fa0015_Main_17(const CEntityEvent &__eeInput);
  BOOL H0x01fa0016_Main_18(const CEntityEvent &__eeInput);
  BOOL H0x01fa0017_Main_19(const CEntityEvent &__eeInput);
  BOOL H0x01fa0018_Main_20(const CEntityEvent &__eeInput);
  BOOL H0x01fa0019_Main_21(const CEntityEvent &__eeInput);
  BOOL H0x01fa001a_Main_22(const CEntityEvent &__eeInput);
  BOOL H0x01fa001b_Main_23(const CEntityEvent &__eeInput);
  BOOL H0x01fa001c_Main_24(const CEntityEvent &__eeInput);
  BOOL H0x01fa001d_Main_25(const CEntityEvent &__eeInput);
  BOOL H0x01fa001e_Main_26(const CEntityEvent &__eeInput);
  BOOL H0x01fa001f_Main_27(const CEntityEvent &__eeInput);
  BOOL H0x01fa0020_Main_28(const CEntityEvent &__eeInput);
  BOOL H0x01fa0021_Main_29(const CEntityEvent &__eeInput);
  BOOL H0x01fa0022_Main_30(const CEntityEvent &__eeInput);
  BOOL H0x01fa0023_Main_31(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_CannonBall_INCLUDED
