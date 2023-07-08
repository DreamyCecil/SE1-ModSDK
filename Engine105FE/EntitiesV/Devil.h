// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Devil_INCLUDED
#define _EntitiesV_Devil_INCLUDED 1
#include <EntitiesV/DevilMarker.h>
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/Bullet.h>
#define EVENTCODE_EBrushDestroyedByDevil 0x014c0000
class DECL_DLL EBrushDestroyedByDevil : public CEntityEvent {
public:
EBrushDestroyedByDevil();
CEntityEvent *MakeCopy(void);
FLOAT3D vDamageDir;
};
DECL_DLL inline void ClearToDefault(EBrushDestroyedByDevil &e) { e = EBrushDestroyedByDevil(); } ;
#define EVENTCODE_ERegenerationImpuls 0x014c0001
class DECL_DLL ERegenerationImpuls : public CEntityEvent {
public:
ERegenerationImpuls();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(ERegenerationImpuls &e) { e = ERegenerationImpuls(); } ;
extern DECL_DLL CEntityPropertyEnumType DevilCommandType_enum;
enum DevilCommandType {
  DC_GRAB_LOWER_WEAPONS = 0,
  DC_FORCE_ACTION = 1,
  DC_STOP_MOVING = 2,
  DC_STOP_ATTACK = 3,
  DC_JUMP_INTO_PYRAMID = 4,
  DC_FORCE_ATTACK_RADIUS = 5,
  DC_DECREASE_ATTACK_RADIUS = 6,
  DC_TELEPORT_INTO_PYRAMID = 7,
};
DECL_DLL inline void ClearToDefault(DevilCommandType &e) { e = (DevilCommandType)0; } ;
#define EVENTCODE_EDevilCommand 0x014c0002
class DECL_DLL EDevilCommand : public CEntityEvent {
public:
EDevilCommand();
CEntityEvent *MakeCopy(void);
enum DevilCommandType dctType;
CEntityPointer penForcedAction;
FLOAT fAttackRadius;
FLOAT3D vCenterOfAttack;
};
DECL_DLL inline void ClearToDefault(EDevilCommand &e) { e = EDevilCommand(); } ;
extern DECL_DLL CEntityPropertyEnumType DevilState_enum;
enum DevilState {
  DS_NOT_EXISTING = 0,
  DS_DESTROYING_CITY = 1,
  DS_ENEMY = 2,
  DS_JUMPING_INTO_PYRAMID = 3,
  DS_PYRAMID_FIGHT = 4,
  DS_REGENERATION_IMPULSE = 5,
};
DECL_DLL inline void ClearToDefault(DevilState &e) { e = (DevilState)0; } ;
extern DECL_DLL CEntityPropertyEnumType DevilAttackPower_enum;
enum DevilAttackPower {
  DAP_PLAYER_HUNT = 1,
  DAP_LOW_POWER_ATTACK = 2,
  DAP_MEDIUM_POWER_ATTACK = 3,
  DAP_FULL_POWER_ATTACK = 4,
  DAP_NOT_ATTACKING = 5,
};
DECL_DLL inline void ClearToDefault(DevilAttackPower &e) { e = (DevilAttackPower)0; } ;
extern "C" DECL_DLL CDLLEntityClass CDevil_DLLClass;
class CDevil : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  INDEX m_iAttID;
  FLOAT m_fDeltaWeaponPitch;
  FLOAT m_fDeltaWeaponHdg;
  FLOAT m_fFireTime;
  CAnimObject m_aoLightAnimation;
  CEntityPointer m_penAction;
  INDEX m_iFiredProjectiles;
  INDEX m_iToFireProjectiles;
  FLOAT m_fPauseStretcher;
  FLOAT m_tmLastPause;
  enum DevilState m_dsDevilState;
  FLOAT m_tmLastAngry;
  CPlacement3D m_plTeleport;
  FLOAT m_tmTemp;
  enum DevilState m_dsLastDevilState;
  enum DevilAttackPower m_dapAttackPower;
  enum DevilAttackPower m_dapLastAttackPower;
  BOOL m_bHasUpperWeapons;
  FLOAT3D m_vElectricitySource;
  FLOAT3D m_vElectricityTarget;
  BOOL m_bRenderElectricity;
  FLOAT m_fAdjustWeaponTime;
  BOOL m_bWasOnceInMainLoop;
  FLOAT m_tmHitBySpaceShipBeam;
  CSoundObject m_soLeft;
  CSoundObject m_soRight;
  FLOAT m_fLastWalkTime;
  FLOAT m_tmFireBreathStart;
  FLOAT m_tmFireBreathStop;
  FLOAT3D m_vFireBreathSource;
  FLOAT3D m_vFireBreathTarget;
  FLOAT m_tmRegenerationStart;
  FLOAT m_tmRegenerationStop;
  FLOAT m_tmNextFXTime;
  INDEX m_iNextChannel;
  CSoundObject m_soWeapon0;
  CSoundObject m_soWeapon1;
  CSoundObject m_soWeapon2;
  CSoundObject m_soWeapon3;
  CSoundObject m_soWeapon4;
  INDEX m_iAngryAnim;
  INDEX m_iAngrySound;
  FLOAT m_tmDeathTime;
  INDEX m_iLastCurrentAnim;
  INDEX m_iLastScheduledAnim;
  enum DevilState m_dsPreRegenerationDevilState;
  CSoundObject m_soClimb;
  CSoundObject m_soGrabLowerWeapons;
  CSoundObject m_soGrabUpperWeapons;
  CSoundObject m_soJumpIntoPyramid;
CEntity * penBullet;
CLightSource m_lsLightSource;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   void Precache(void);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   void Read_t(CTStream * istr);
   CLightSource * GetLightSource(void);
   void SetupLightSource(void);
   void PlayLightAnim(INDEX iAnim,ULONG ulFlags);
   void * GetEntityInfo(void);
   BOOL ForcesCannonballToExplode(void);
   void SetSpeedsToDesiredPosition(const FLOAT3D & vPosDelta,FLOAT fPosDist,BOOL bGoingToPlayer);
   FLOAT GetCrushHealth(void);
   void SelectRandomAnger(void);
  virtual FLOAT GetLockRotationSpeed(void);
   class CWorldSettingsController * GetWSC(void);
   void ShakeItBaby(FLOAT tmShaketime,FLOAT fPower);
   void ShakeItFarBaby(FLOAT tmShaketime,FLOAT fPower);
   void InflictHoofDamage(FLOAT3D vOffset);
   void ApplyFootQuake(void);
   void StopFireBreathParticles(void);
   void StopRegenerationParticles(void);
   void TurnOnPhysics(void);
   void TurnOffPhysics(void);
   void RenderParticles(void);
   FLOAT3D GetWeaponPositionRelative(void);
   FLOAT3D GetWeaponPositionAbsolute(void);
   FLOAT3D GetFireingPositionRelative(void);
   FLOAT3D GetFireingPositionAbsolute(void);
   void ApplyTickRegeneration(void);
   void PostMoving(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
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
   void StartFireLaser(void);
   void FireOneLaser(FLOAT fRatio,FLOAT fDeltaPitch);
   void StopFireLaser(void);
   void StartFireRocket(void);
   void PlayWeaponSound(ULONG idSound);
   void FireOneRocket(FLOAT fRatio);
   void StopFireRocket(void);
   void AddLowerWeapons(void);
   void AddUpperWeapons(void);
   void RemoveWeapons(void);
   class CDevilMarker * GetAction(void);
   void F_FirePredictedProjectile(void);
   BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CDevil_WalkTo 0x014c0003
  BOOL WalkTo(const CEntityEvent &__eeInput);
  BOOL H0x014c0004_WalkTo_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0005_WalkTo_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0006_WalkTo_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0007_WalkTo_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0008_WalkTo_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0009_WalkTo_06(const CEntityEvent &__eeInput);
#define  STATE_CDevil_DestroyCity 0x014c000a
  BOOL DestroyCity(const CEntityEvent &__eeInput);
  BOOL H0x014c000b_DestroyCity_01(const CEntityEvent &__eeInput);
  BOOL H0x014c000c_DestroyCity_02(const CEntityEvent &__eeInput);
  BOOL H0x014c000d_DestroyCity_03(const CEntityEvent &__eeInput);
  BOOL H0x014c000e_DestroyCity_04(const CEntityEvent &__eeInput);
  BOOL H0x014c000f_DestroyCity_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0010_DestroyCity_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0011_DestroyCity_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0012_DestroyCity_08(const CEntityEvent &__eeInput);
  BOOL H0x014c0013_DestroyCity_09(const CEntityEvent &__eeInput);
  BOOL H0x014c0014_DestroyCity_10(const CEntityEvent &__eeInput);
  BOOL H0x014c0015_DestroyCity_11(const CEntityEvent &__eeInput);
  BOOL H0x014c0016_DestroyCity_12(const CEntityEvent &__eeInput);
  BOOL H0x014c0017_DestroyCity_13(const CEntityEvent &__eeInput);
  BOOL H0x014c0018_DestroyCity_14(const CEntityEvent &__eeInput);
  BOOL H0x014c0019_DestroyCity_15(const CEntityEvent &__eeInput);
  BOOL H0x014c001a_DestroyCity_16(const CEntityEvent &__eeInput);
  BOOL H0x014c001b_DestroyCity_17(const CEntityEvent &__eeInput);
  BOOL H0x014c001c_DestroyCity_18(const CEntityEvent &__eeInput);
  BOOL H0x014c001d_DestroyCity_19(const CEntityEvent &__eeInput);
  BOOL H0x014c001e_DestroyCity_20(const CEntityEvent &__eeInput);
  BOOL H0x014c001f_DestroyCity_21(const CEntityEvent &__eeInput);
  BOOL H0x014c0020_DestroyCity_22(const CEntityEvent &__eeInput);
  BOOL H0x014c0021_DestroyCity_23(const CEntityEvent &__eeInput);
  BOOL H0x014c0022_DestroyCity_24(const CEntityEvent &__eeInput);
  BOOL H0x014c0023_DestroyCity_25(const CEntityEvent &__eeInput);
  BOOL H0x014c0024_DestroyCity_26(const CEntityEvent &__eeInput);
  BOOL H0x014c0025_DestroyCity_27(const CEntityEvent &__eeInput);
  BOOL H0x014c0026_DestroyCity_28(const CEntityEvent &__eeInput);
  BOOL H0x014c0027_DestroyCity_29(const CEntityEvent &__eeInput);
  BOOL H0x014c0028_DestroyCity_30(const CEntityEvent &__eeInput);
  BOOL H0x014c0029_DestroyCity_31(const CEntityEvent &__eeInput);
  BOOL H0x014c002a_DestroyCity_32(const CEntityEvent &__eeInput);
  BOOL H0x014c002b_DestroyCity_33(const CEntityEvent &__eeInput);
  BOOL H0x014c002c_DestroyCity_34(const CEntityEvent &__eeInput);
  BOOL H0x014c002d_DestroyCity_35(const CEntityEvent &__eeInput);
  BOOL H0x014c002e_DestroyCity_36(const CEntityEvent &__eeInput);
  BOOL H0x014c002f_DestroyCity_37(const CEntityEvent &__eeInput);
  BOOL H0x014c0030_DestroyCity_38(const CEntityEvent &__eeInput);
  BOOL H0x014c0031_DestroyCity_39(const CEntityEvent &__eeInput);
#define  STATE_CDevil_WaitCurrentAnimEnd 0x014c0032
  BOOL WaitCurrentAnimEnd(const CEntityEvent &__eeInput);
  BOOL H0x014c0033_WaitCurrentAnimEnd_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0034_WaitCurrentAnimEnd_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0035_WaitCurrentAnimEnd_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0036_WaitCurrentAnimEnd_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0037_WaitCurrentAnimEnd_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0038_WaitCurrentAnimEnd_06(const CEntityEvent &__eeInput);
#define  STATE_CDevil_WaitWalkToEnd 0x014c0039
  BOOL WaitWalkToEnd(const CEntityEvent &__eeInput);
  BOOL H0x014c003a_WaitWalkToEnd_01(const CEntityEvent &__eeInput);
  BOOL H0x014c003b_WaitWalkToEnd_02(const CEntityEvent &__eeInput);
  BOOL H0x014c003c_WaitWalkToEnd_03(const CEntityEvent &__eeInput);
  BOOL H0x014c003d_WaitWalkToEnd_04(const CEntityEvent &__eeInput);
  BOOL H0x014c003e_WaitWalkToEnd_05(const CEntityEvent &__eeInput);
  BOOL H0x014c003f_WaitWalkToEnd_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0040_WaitWalkToEnd_07(const CEntityEvent &__eeInput);
#define  STATE_CDevil_WaitWalkOrIdleToEnd 0x014c0041
  BOOL WaitWalkOrIdleToEnd(const CEntityEvent &__eeInput);
  BOOL H0x014c0042_WaitWalkOrIdleToEnd_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0043_WaitWalkOrIdleToEnd_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0044_WaitWalkOrIdleToEnd_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0045_WaitWalkOrIdleToEnd_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0046_WaitWalkOrIdleToEnd_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0047_WaitWalkOrIdleToEnd_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0048_WaitWalkOrIdleToEnd_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0049_WaitWalkOrIdleToEnd_08(const CEntityEvent &__eeInput);
  BOOL H0x014c004a_WaitWalkOrIdleToEnd_09(const CEntityEvent &__eeInput);
  BOOL H0x014c004b_WaitWalkOrIdleToEnd_10(const CEntityEvent &__eeInput);
  BOOL H0x014c004c_WaitWalkOrIdleToEnd_11(const CEntityEvent &__eeInput);
  BOOL H0x014c004d_WaitWalkOrIdleToEnd_12(const CEntityEvent &__eeInput);
  BOOL H0x014c004e_WaitWalkOrIdleToEnd_13(const CEntityEvent &__eeInput);
  BOOL H0x014c004f_WaitWalkOrIdleToEnd_14(const CEntityEvent &__eeInput);
  BOOL H0x014c0050_WaitWalkOrIdleToEnd_15(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Rise 0x014c0051
  BOOL Rise(const CEntityEvent &__eeInput);
  BOOL H0x014c0052_Rise_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0053_Rise_02(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Celebrate 0x014c0054
  BOOL Celebrate(const CEntityEvent &__eeInput);
  BOOL H0x014c0055_Celebrate_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0056_Celebrate_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0057_Celebrate_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0058_Celebrate_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Angry 0x014c0059
  BOOL Angry(const CEntityEvent &__eeInput);
  BOOL H0x014c005a_Angry_01(const CEntityEvent &__eeInput);
  BOOL H0x014c005b_Angry_02(const CEntityEvent &__eeInput);
  BOOL H0x014c005c_Angry_03(const CEntityEvent &__eeInput);
  BOOL H0x014c005d_Angry_04(const CEntityEvent &__eeInput);
  BOOL H0x014c005e_Angry_05(const CEntityEvent &__eeInput);
  BOOL H0x014c005f_Angry_06(const CEntityEvent &__eeInput);
#define  STATE_CDevil_SubBeamDamage1 0x014c0060
  BOOL SubBeamDamage1(const CEntityEvent &__eeInput);
  BOOL H0x014c0061_SubBeamDamage1_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0062_SubBeamDamage1_02(const CEntityEvent &__eeInput);
#define  STATE_CDevil_SubBeamDamage2 0x014c0063
  BOOL SubBeamDamage2(const CEntityEvent &__eeInput);
  BOOL H0x014c0064_SubBeamDamage2_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0065_SubBeamDamage2_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0066_SubBeamDamage2_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0067_SubBeamDamage2_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_SubBeamDamage3 0x014c0068
  BOOL SubBeamDamage3(const CEntityEvent &__eeInput);
  BOOL H0x014c0069_SubBeamDamage3_01(const CEntityEvent &__eeInput);
  BOOL H0x014c006a_SubBeamDamage3_02(const CEntityEvent &__eeInput);
#define  STATE_CDevil_BeamDamage 0x014c006b
  BOOL BeamDamage(const CEntityEvent &__eeInput);
  BOOL H0x014c006c_BeamDamage_01(const CEntityEvent &__eeInput);
  BOOL H0x014c006d_BeamDamage_02(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Smash 0x014c006e
  BOOL Smash(const CEntityEvent &__eeInput);
  BOOL H0x014c006f_Smash_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0070_Smash_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0071_Smash_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0072_Smash_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0073_Smash_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0074_Smash_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0075_Smash_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0076_Smash_08(const CEntityEvent &__eeInput);
  BOOL H0x014c0077_Smash_09(const CEntityEvent &__eeInput);
  BOOL H0x014c0078_Smash_10(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Punch 0x014c0079
  BOOL Punch(const CEntityEvent &__eeInput);
  BOOL H0x014c007a_Punch_01(const CEntityEvent &__eeInput);
  BOOL H0x014c007b_Punch_02(const CEntityEvent &__eeInput);
  BOOL H0x014c007c_Punch_03(const CEntityEvent &__eeInput);
  BOOL H0x014c007d_Punch_04(const CEntityEvent &__eeInput);
  BOOL H0x014c007e_Punch_05(const CEntityEvent &__eeInput);
  BOOL H0x014c007f_Punch_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0080_Punch_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0081_Punch_08(const CEntityEvent &__eeInput);
  BOOL H0x014c0082_Punch_09(const CEntityEvent &__eeInput);
  BOOL H0x014c0083_Punch_10(const CEntityEvent &__eeInput);
#define  STATE_CDevil_HitGround 0x014c0084
  BOOL HitGround(const CEntityEvent &__eeInput);
  BOOL H0x014c0085_HitGround_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0086_HitGround_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0087_HitGround_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0088_HitGround_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_GrabLowerWeapons 0x014c0089
  BOOL GrabLowerWeapons(const CEntityEvent &__eeInput);
  BOOL H0x014c008a_GrabLowerWeapons_01(const CEntityEvent &__eeInput);
  BOOL H0x014c008b_GrabLowerWeapons_02(const CEntityEvent &__eeInput);
  BOOL H0x014c008c_GrabLowerWeapons_03(const CEntityEvent &__eeInput);
  BOOL H0x014c008d_GrabLowerWeapons_04(const CEntityEvent &__eeInput);
  BOOL H0x014c008e_GrabLowerWeapons_05(const CEntityEvent &__eeInput);
  BOOL H0x014c008f_GrabLowerWeapons_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0090_GrabLowerWeapons_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0091_GrabLowerWeapons_08(const CEntityEvent &__eeInput);
#define  STATE_CDevil_GrabUpperWeapons 0x014c0092
  BOOL GrabUpperWeapons(const CEntityEvent &__eeInput);
  BOOL H0x014c0093_GrabUpperWeapons_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0094_GrabUpperWeapons_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0095_GrabUpperWeapons_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0096_GrabUpperWeapons_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0097_GrabUpperWeapons_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0098_GrabUpperWeapons_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0099_GrabUpperWeapons_07(const CEntityEvent &__eeInput);
  BOOL H0x014c009a_GrabUpperWeapons_08(const CEntityEvent &__eeInput);
#define  STATE_CDevil_GrabBothWeapons 0x014c009b
  BOOL GrabBothWeapons(const CEntityEvent &__eeInput);
  BOOL H0x014c009c_GrabBothWeapons_01(const CEntityEvent &__eeInput);
  BOOL H0x014c009d_GrabBothWeapons_02(const CEntityEvent &__eeInput);
  BOOL H0x014c009e_GrabBothWeapons_03(const CEntityEvent &__eeInput);
  BOOL H0x014c009f_GrabBothWeapons_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00a0_GrabBothWeapons_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00a1_GrabBothWeapons_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00a2_GrabBothWeapons_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00a3_GrabBothWeapons_08(const CEntityEvent &__eeInput);
  BOOL H0x014c00a4_GrabBothWeapons_09(const CEntityEvent &__eeInput);
  BOOL H0x014c00a5_GrabBothWeapons_10(const CEntityEvent &__eeInput);
  BOOL H0x014c00a6_GrabBothWeapons_11(const CEntityEvent &__eeInput);
  BOOL H0x014c00a7_GrabBothWeapons_12(const CEntityEvent &__eeInput);
#define  STATE_CDevil_PreMainLoop 0x014c00a8
  BOOL PreMainLoop(const CEntityEvent &__eeInput);
#define  STATE_CDevil_BeWounded 0x014c00a9
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x014c00aa_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00ab_BeWounded_02(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Hit 0x014c00ac
  BOOL Hit(const CEntityEvent &__eeInput);
  BOOL H0x014c00ad_Hit_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00ae_Hit_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00af_Hit_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00b0_Hit_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00b1_Hit_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00b2_Hit_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00b3_Hit_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00b4_Hit_08(const CEntityEvent &__eeInput);
#define  STATE_CDevil_InitializeAttack 0x014c00b5
  BOOL InitializeAttack(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Fire 0x014c00b6
  BOOL Fire(const CEntityEvent &__eeInput);
#define  STATE_CDevil_DevilLockOnEnemy 0x014c00b7
  BOOL DevilLockOnEnemy(const CEntityEvent &__eeInput);
  BOOL H0x014c00b8_DevilLockOnEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00b9_DevilLockOnEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00ba_DevilLockOnEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00bb_DevilLockOnEnemy_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_AdjustWeaponForFire 0x014c00bc
  BOOL AdjustWeaponForFire(const CEntityEvent &__eeInput);
  BOOL H0x014c00bd_AdjustWeaponForFire_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00be_AdjustWeaponForFire_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00bf_AdjustWeaponForFire_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00c0_AdjustWeaponForFire_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_StraightenUpWeapon 0x014c00c1
  BOOL StraightenUpWeapon(const CEntityEvent &__eeInput);
  BOOL H0x014c00c2_StraightenUpWeapon_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00c3_StraightenUpWeapon_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00c4_StraightenUpWeapon_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00c5_StraightenUpWeapon_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_FireLaser 0x014c00c6
  BOOL FireLaser(const CEntityEvent &__eeInput);
  BOOL H0x014c00c7_FireLaser_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00c8_FireLaser_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00c9_FireLaser_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00ca_FireLaser_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00cb_FireLaser_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00cc_FireLaser_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00cd_FireLaser_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00ce_FireLaser_08(const CEntityEvent &__eeInput);
  BOOL H0x014c00cf_FireLaser_09(const CEntityEvent &__eeInput);
  BOOL H0x014c00d0_FireLaser_10(const CEntityEvent &__eeInput);
  BOOL H0x014c00d1_FireLaser_11(const CEntityEvent &__eeInput);
  BOOL H0x014c00d2_FireLaser_12(const CEntityEvent &__eeInput);
  BOOL H0x014c00d3_FireLaser_13(const CEntityEvent &__eeInput);
  BOOL H0x014c00d4_FireLaser_14(const CEntityEvent &__eeInput);
#define  STATE_CDevil_FireRocketLauncher 0x014c00d5
  BOOL FireRocketLauncher(const CEntityEvent &__eeInput);
  BOOL H0x014c00d6_FireRocketLauncher_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00d7_FireRocketLauncher_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00d8_FireRocketLauncher_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00d9_FireRocketLauncher_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00da_FireRocketLauncher_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00db_FireRocketLauncher_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00dc_FireRocketLauncher_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00dd_FireRocketLauncher_08(const CEntityEvent &__eeInput);
  BOOL H0x014c00de_FireRocketLauncher_09(const CEntityEvent &__eeInput);
  BOOL H0x014c00df_FireRocketLauncher_10(const CEntityEvent &__eeInput);
  BOOL H0x014c00e0_FireRocketLauncher_11(const CEntityEvent &__eeInput);
  BOOL H0x014c00e1_FireRocketLauncher_12(const CEntityEvent &__eeInput);
  BOOL H0x014c00e2_FireRocketLauncher_13(const CEntityEvent &__eeInput);
  BOOL H0x014c00e3_FireRocketLauncher_14(const CEntityEvent &__eeInput);
#define  STATE_CDevil_FirePredictedProjectile 0x014c00e4
  BOOL FirePredictedProjectile(const CEntityEvent &__eeInput);
  BOOL H0x014c00e5_FirePredictedProjectile_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00e6_FirePredictedProjectile_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00e7_FirePredictedProjectile_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00e8_FirePredictedProjectile_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00e9_FirePredictedProjectile_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00ea_FirePredictedProjectile_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00eb_FirePredictedProjectile_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00ec_FirePredictedProjectile_08(const CEntityEvent &__eeInput);
  BOOL H0x014c00ed_FirePredictedProjectile_09(const CEntityEvent &__eeInput);
  BOOL H0x014c00ee_FirePredictedProjectile_10(const CEntityEvent &__eeInput);
  BOOL H0x014c00ef_FirePredictedProjectile_11(const CEntityEvent &__eeInput);
  BOOL H0x014c00f0_FirePredictedProjectile_12(const CEntityEvent &__eeInput);
  BOOL H0x014c00f1_FirePredictedProjectile_13(const CEntityEvent &__eeInput);
  BOOL H0x014c00f2_FirePredictedProjectile_14(const CEntityEvent &__eeInput);
#define  STATE_CDevil_FireElectricityGun 0x014c00f3
  BOOL FireElectricityGun(const CEntityEvent &__eeInput);
  BOOL H0x014c00f4_FireElectricityGun_01(const CEntityEvent &__eeInput);
  BOOL H0x014c00f5_FireElectricityGun_02(const CEntityEvent &__eeInput);
  BOOL H0x014c00f6_FireElectricityGun_03(const CEntityEvent &__eeInput);
  BOOL H0x014c00f7_FireElectricityGun_04(const CEntityEvent &__eeInput);
  BOOL H0x014c00f8_FireElectricityGun_05(const CEntityEvent &__eeInput);
  BOOL H0x014c00f9_FireElectricityGun_06(const CEntityEvent &__eeInput);
  BOOL H0x014c00fa_FireElectricityGun_07(const CEntityEvent &__eeInput);
  BOOL H0x014c00fb_FireElectricityGun_08(const CEntityEvent &__eeInput);
  BOOL H0x014c00fc_FireElectricityGun_09(const CEntityEvent &__eeInput);
  BOOL H0x014c00fd_FireElectricityGun_10(const CEntityEvent &__eeInput);
  BOOL H0x014c00fe_FireElectricityGun_11(const CEntityEvent &__eeInput);
  BOOL H0x014c00ff_FireElectricityGun_12(const CEntityEvent &__eeInput);
  BOOL H0x014c0100_FireElectricityGun_13(const CEntityEvent &__eeInput);
  BOOL H0x014c0101_FireElectricityGun_14(const CEntityEvent &__eeInput);
  BOOL H0x014c0102_FireElectricityGun_15(const CEntityEvent &__eeInput);
  BOOL H0x014c0103_FireElectricityGun_16(const CEntityEvent &__eeInput);
  BOOL H0x014c0104_FireElectricityGun_17(const CEntityEvent &__eeInput);
  BOOL H0x014c0105_FireElectricityGun_18(const CEntityEvent &__eeInput);
#define  STATE_CDevil_FireGuidedProjectile 0x014c0106
  BOOL FireGuidedProjectile(const CEntityEvent &__eeInput);
  BOOL H0x014c0107_FireGuidedProjectile_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0108_FireGuidedProjectile_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0109_FireGuidedProjectile_03(const CEntityEvent &__eeInput);
  BOOL H0x014c010a_FireGuidedProjectile_04(const CEntityEvent &__eeInput);
  BOOL H0x014c010b_FireGuidedProjectile_05(const CEntityEvent &__eeInput);
  BOOL H0x014c010c_FireGuidedProjectile_06(const CEntityEvent &__eeInput);
  BOOL H0x014c010d_FireGuidedProjectile_07(const CEntityEvent &__eeInput);
  BOOL H0x014c010e_FireGuidedProjectile_08(const CEntityEvent &__eeInput);
  BOOL H0x014c010f_FireGuidedProjectile_09(const CEntityEvent &__eeInput);
  BOOL H0x014c0110_FireGuidedProjectile_10(const CEntityEvent &__eeInput);
  BOOL H0x014c0111_FireGuidedProjectile_11(const CEntityEvent &__eeInput);
  BOOL H0x014c0112_FireGuidedProjectile_12(const CEntityEvent &__eeInput);
  BOOL H0x014c0113_FireGuidedProjectile_13(const CEntityEvent &__eeInput);
  BOOL H0x014c0114_FireGuidedProjectile_14(const CEntityEvent &__eeInput);
#define  STATE_CDevil_JumpIntoPyramid 0x014c0115
  BOOL JumpIntoPyramid(const CEntityEvent &__eeInput);
  BOOL H0x014c0116_JumpIntoPyramid_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0117_JumpIntoPyramid_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0118_JumpIntoPyramid_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0119_JumpIntoPyramid_04(const CEntityEvent &__eeInput);
  BOOL H0x014c011a_JumpIntoPyramid_05(const CEntityEvent &__eeInput);
  BOOL H0x014c011b_JumpIntoPyramid_06(const CEntityEvent &__eeInput);
  BOOL H0x014c011c_JumpIntoPyramid_07(const CEntityEvent &__eeInput);
  BOOL H0x014c011d_JumpIntoPyramid_08(const CEntityEvent &__eeInput);
  BOOL H0x014c011e_JumpIntoPyramid_09(const CEntityEvent &__eeInput);
  BOOL H0x014c011f_JumpIntoPyramid_10(const CEntityEvent &__eeInput);
  BOOL H0x014c0120_JumpIntoPyramid_11(const CEntityEvent &__eeInput);
  BOOL H0x014c0121_JumpIntoPyramid_12(const CEntityEvent &__eeInput);
#define  STATE_CDevil_TeleportIntoPyramid 0x014c0122
  BOOL TeleportIntoPyramid(const CEntityEvent &__eeInput);
  BOOL H0x014c0123_TeleportIntoPyramid_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0124_TeleportIntoPyramid_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0125_TeleportIntoPyramid_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0126_TeleportIntoPyramid_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_RegenerationImpulse 0x014c0127
  BOOL RegenerationImpulse(const CEntityEvent &__eeInput);
  BOOL H0x014c0128_RegenerationImpulse_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0129_RegenerationImpulse_02(const CEntityEvent &__eeInput);
  BOOL H0x014c012a_RegenerationImpulse_03(const CEntityEvent &__eeInput);
  BOOL H0x014c012b_RegenerationImpulse_04(const CEntityEvent &__eeInput);
#define  STATE_CDevil_StopAttack 0x014c012c
  BOOL StopAttack(const CEntityEvent &__eeInput);
  BOOL H0x014c012d_StopAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x014c012e_StopAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x014c012f_StopAttack_03(const CEntityEvent &__eeInput);
#define  STATE_CDevil_ContinueInMainLoop 0x014c0130
  BOOL ContinueInMainLoop(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Death 0x014c0131
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x014c0132_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x014c0133_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x014c0134_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x014c0135_Death_04(const CEntityEvent &__eeInput);
  BOOL H0x014c0136_Death_05(const CEntityEvent &__eeInput);
  BOOL H0x014c0137_Death_06(const CEntityEvent &__eeInput);
  BOOL H0x014c0138_Death_07(const CEntityEvent &__eeInput);
  BOOL H0x014c0139_Death_08(const CEntityEvent &__eeInput);
#define  STATE_CDevil_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x014c013a_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x014c013b_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x014c013c_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x014c013d_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x014c013e_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x014c013f_Main_06(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Devil_INCLUDED