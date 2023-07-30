// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_EnemyBase_INCLUDED
#define _EntitiesV_EnemyBase_INCLUDED 1
#include <EntitiesV/Watcher.h>
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/Debris.h>
#include <EntitiesV/EnemyMarker.h>
#include <EntitiesV/MusicHolder.h>
#include <EntitiesV/BloodSpray.h>
#define EVENTCODE_ERestartAttack 0x01360000
class DECL_DLL ERestartAttack : public CEntityEvent {
public:
ERestartAttack();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(ERestartAttack &e) { e = ERestartAttack(); } ;
#define EVENTCODE_EReconsiderBehavior 0x01360001
class DECL_DLL EReconsiderBehavior : public CEntityEvent {
public:
EReconsiderBehavior();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EReconsiderBehavior &e) { e = EReconsiderBehavior(); } ;
#define EVENTCODE_EForceWound 0x01360002
class DECL_DLL EForceWound : public CEntityEvent {
public:
EForceWound();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EForceWound &e) { e = EForceWound(); } ;
extern DECL_DLL CEntityPropertyEnumType TargetType_enum;
enum TargetType {
  TT_NONE = 0,
  TT_SOFT = 1,
  TT_HARD = 2,
};
DECL_DLL inline void ClearToDefault(TargetType &e) { e = (TargetType)0; } ;
extern DECL_DLL CEntityPropertyEnumType DestinationType_enum;
enum DestinationType {
  DT_PLAYERCURRENT = 0,
  DT_PLAYERSPOTTED = 1,
  DT_PATHTEMPORARY = 2,
  DT_PATHPERSISTENT = 3,
};
DECL_DLL inline void ClearToDefault(DestinationType &e) { e = (DestinationType)0; } ;
extern DECL_DLL CEntityPropertyEnumType EnemyEnvType_enum;
enum EnemyEnvType {
  ENENV_NONE = 0,
  ENENV_FIRE = 1,
  ENENV_ICE = 2,
};
DECL_DLL inline void ClearToDefault(EnemyEnvType &e) { e = (EnemyEnvType)0; };
#define CEnemyBase_ClassID 310
extern "C" DECL_DLL CDLLEntityClass CEnemyBase_DLLClass;
class DECL_DLL  CEnemyBase : public CMovableModelEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penWatcher;
  FLOAT3D m_vStartPosition;
  CEntityPointer m_penEnemy;
  enum TargetType m_ttTarget;
  CTString m_strDescription;
  CTString m_strName;
  CSoundObject m_soSound;
  FLOAT3D m_vStartDirection;
  BOOL m_bOnStartPosition;
  FLOAT m_fFallHeight;
  FLOAT m_fStepHeight;
  RANGE m_fSenseRange;
  FLOAT m_fViewAngle;
  FLOAT m_fWalkSpeed;
  ANGLE m_aWalkRotateSpeed;
  FLOAT m_fAttackRunSpeed;
  ANGLE m_aAttackRotateSpeed;
  FLOAT m_fCloseRunSpeed;
  ANGLE m_aCloseRotateSpeed;
  FLOAT m_fAttackDistance;
  FLOAT m_fCloseDistance;
  FLOAT m_fAttackFireTime;
  FLOAT m_fCloseFireTime;
  FLOAT m_fStopDistance;
  FLOAT m_fIgnoreRange;
  FLOAT m_fLockOnEnemyTime;
  FLOAT m_fBlowUpAmount;
  INDEX m_fBodyParts;
  FLOAT m_fDamageWounded;
  FLOAT3D m_vDamage;
  FLOAT m_tmLastDamage;
  BOOL m_bRobotBlowup;
  FLOAT m_fBlowUpSize;
  FLOAT m_fMoveTime;
  FLOAT3D m_vDesiredPosition;
  enum DestinationType m_dtDestination;
  CEntityPointer m_penPathMarker;
  FLOAT3D m_vPlayerSpotted;
  FLOAT m_fMoveFrequency;
  FLOAT m_fMoveSpeed;
  ANGLE m_aRotateSpeed;
  FLOAT m_fLockStartTime;
  FLOAT m_fRangeLast;
  BOOL m_bFadeOut;
  FLOAT m_fFadeStartTime;
  FLOAT m_fFadeTime;
  FLOAT m_fShootTime;
  FLOAT m_fDamageConfused;
  INDEX m_iChargeHitAnimation;
  FLOAT m_fChargeHitDamage;
  FLOAT m_fChargeHitAngle;
  FLOAT m_fChargeHitSpeed;
  CEntityPointer m_penSpawnerTarget;
  CEntityPointer m_penDeathTarget;
  enum EventEType m_eetDeathType;
  BOOL m_bTemplate;
  RANGE m_fAttackRadius;
  COLOR m_colColor;
  BOOL m_bDeaf;
  BOOL m_bBlind;
  FLOAT m_tmGiveUp;
  FLOAT m_tmReflexMin;
  FLOAT m_tmReflexMax;
  FLOAT m_fActivityRange;
  BOOL m_bApplyRandomStretch;
  FLOAT m_fRandomStretchFactor;
  FLOAT m_fStretchMultiplier;
  FLOAT m_fRandomStretchMultiplier;
  CEntityPointer m_penMarker;
  CEntityPointer m_penMainMusicHolder;
  FLOAT m_tmLastFussTime;
  FLOAT m_iScore;
  FLOAT m_fMaxHealth;
  BOOL m_bBoss;
  FLOAT m_fSpiritStartTime;
  FLOAT m_tmSpraySpawned;
  FLOAT m_fSprayDamage;
  CEntityPointer m_penSpray;
  FLOAT m_fMaxDamageAmount;
  FLOAT3D m_vLastStain;
  enum SprayParticlesType m_sptType;
  CEntityPointer m_penTacticsHolder;
  BOOL m_bTacticActive;
  FLOAT m_tmTacticsActivation;
  FLOAT3D m_vTacticsStartPosition;
  FLOAT m_fTacticVar1;
  FLOAT m_fTacticVar2;
  FLOAT m_fTacticVar3;
  FLOAT m_fTacticVar4;
  FLOAT m_fTacticVar5;
  BOOL m_bTacticsStartOnSense;
  COLOR m_colBurning;
  BOOL m_bResizeAttachments;
  BOOL m_bGiveUpToClosestMarker;
  CTFileName m_fnmCustomModel;
  CTFileName m_fnmCustomTexture;
  BOOL m_bUseCustomWeaponProjectile;
  enum ProjectileType m_eCustomWeaponProjectile;
  INDEX m_iCustomScore;
  CTFileName m_fnmCustomMessage;
  BOOL m_bShootHitscansInsteadOfProjectiles;
  FLOAT m_fCustomHitscansDamage;
  FLOAT m_fCustomHitscanPositionX;
  FLOAT m_fCustomHitscanPositionY;
  FLOAT m_fCustomHitscanPositionZ;
  CEntityPointer m_penStartEnemy;
  enum EnemyEnvType m_eetEnvironmentType;
  FLOAT m_fHealthScalar;
  FLOAT m_fCustomSpeedScalar;
  CEntityPointer m_penPrediction;
TIME m_tmPredict;
   void PrepareBullet(FLOAT fUnused);
   void FireBullet(void);
    CEnemyBase(void);
   BOOL GetTargets(CEntityPointer *apenTargets, int ctTargets) const;
   void SetPredictionTime(TIME tmAdvance);
   TIME GetPredictionTime(void);
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual FLOAT GetCrushHealth(void);
  virtual BOOL CountAsKill(void);
  virtual BOOL ForcesCannonballToExplode(void);
  virtual FLOAT & GetProp(FLOAT & m_fBase);
  virtual FLOAT GetThreatDistance(void);
   void MaybeSwitchToAnotherPlayer(void);
   class CWatcher * GetWatcher(void);
   void Copy(CEntity & enOther,ULONG ulFlags);
   void Precache(void);
  virtual FLOAT3D PlayerDestinationPos(void);
   FLOAT3D CalcDelta(CEntity * penEntity);
   FLOAT CalcDist(CEntity * penEntity);
   BOOL IfTargetCrushed(CEntity * penOther,const FLOAT3D & vDirection);
   FLOAT3D CalcPlaneDelta(CEntity * penEntity);
   FLOAT CalcPlaneDist(CEntity * penEntity);
   FLOAT GetFrustumAngle(const FLOAT3D & vDir);
   FLOAT GetPlaneFrustumAngle(const FLOAT3D & vDir);
   BOOL IsInFrustum(CEntity * penEntity,FLOAT fCosHalfFrustum);
   BOOL IsInPlaneFrustum(CEntity * penEntity,FLOAT fCosHalfFrustum);
   BOOL IsVisible(CEntity * penEntity);
   BOOL IsVisibleCheckAll(CEntity * penEntity);
   void CalculateAngularLaunchParams(FLOAT3D vShooting,FLOAT fShootHeight,FLOAT3D vTarget,FLOAT3D vSpeedDest,ANGLE aPitch,FLOAT & fLaunchSpeed,FLOAT & fRelativeHdg);
   FLOAT3D CalculatePredictedPosition(FLOAT3D vShootPos,FLOAT3D vTarget,FLOAT fSpeedSrc,FLOAT3D vSpeedDst,FLOAT fClampY);
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   const CTString & GetDescription(void)const;
  virtual const CTFileName & GetComputerMessageName(void)const;
   void AddDependentsToPrediction(void);
   void ChecksumForSync(ULONG & ulCRC,INDEX iExtensiveSyncCheck);
   void DumpSync_t(CTStream & strm,INDEX iExtensiveSyncCheck);
   void Read_t(CTStream * istr);
   BOOL FillEntityStatistics(EntityStats * pes);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection,INDEX iDamageID);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void AddToFuss(void);
   void RemoveFromFuss(void);
   BOOL ShouldCeaseAttack(void);
  virtual void SizeModel(void);
   BOOL IsValidForEnemy(CEntity * penPlayer);
   void SetTargetNone(void);
   BOOL SetTargetSoft(CEntity * penPlayer);
   BOOL SetTargetHard(CEntity * penPlayer);
   BOOL SetTargetHardForce(CEntity * penPlayer);
  virtual FLOAT GetAttackMoveFrequency(FLOAT fEnemyDistance);
  virtual void SetSpeedsToDesiredPosition(const FLOAT3D & vPosDelta,FLOAT fPosDist,BOOL bGoingToPlayer);
  virtual void MovementAnimation(ULONG ulFlags);
  virtual ULONG SetDesiredMovement(void);
   void StopMoving();
   void StopRotating();
   void StopTranslating();
   FLOAT CalcDistanceInPlaneToDestination(void);
  virtual void SetClosestMarkerForPathFinding(void);
  virtual void StartPathFinding(void);
  virtual void FindNextPathMarker(void);
   BOOL CheckTouchForPathFinding(const ETouch & eTouch);
   BOOL CheckFallForPathFinding(const EWouldFall & eWouldFall);
   void InitializeTactics(void);
  virtual void ApplyTactics(FLOAT3D & vDesiredPos);
   void StartTacticsNow(void);
   BOOL CanAttackEnemy(CEntity * penTarget,FLOAT fCosAngle);
  virtual BOOL CanHitEnemy(CEntity * penTarget,FLOAT fCosAngle);
   BOOL SeeEntity(CEntity * pen,FLOAT fCosAngle);
   BOOL SeeEntityInPlane(CEntity * pen,FLOAT fCosAngle);
   void PreparePropelledProjectile(CPlacement3D & plProjectile,FLOAT3D vShootTarget,FLOAT3D & vOffset,ANGLE3D & aOffset);
   void PrepareFreeFlyingProjectile(CPlacement3D & plProjectile,FLOAT3D vShootTarget,FLOAT3D & vOffset,ANGLE3D & aOffset);
   CEntity * ShootProjectile(enum ProjectileType pt,FLOAT3D & vOffset,ANGLE3D & aOffset);
   CEntity * ShootCannonball(FLOAT3D & vOffset,ANGLE3D & aOffset);
   CEntity * ShootProjectileAt(FLOAT3D vShootTarget,enum ProjectileType pt,FLOAT3D & vOffset,ANGLE3D & aOffset);
   CEntity * ShootPredictedProjectile(enum ProjectileType pt,FLOAT3D vPredictedPos,FLOAT3D & vOffset,ANGLE3D & aOffset);
   BOOL WouldNotLeaveAttackRadius(void);
  virtual BOOL MayMoveToAttack(void);
  virtual BOOL ShouldBlowUp(void);
   void BlowUpBase(void);
  virtual void BlowUp(void);
  virtual void LeaveStain(BOOL bGrow);
  virtual void AdjustDifficulty(void);
   void WoundedNotify(const EDamage & eDamage);
   void SeeNotify();
  virtual void StandingAnim(void);
  virtual void StandingAnimFight(void);
  virtual void WalkingAnim(void);
  virtual void RunningAnim(void);
  virtual void RotatingAnim(void);
  virtual void ChargeAnim(void);
  virtual INDEX AnimForDamage(FLOAT fDamage);
  virtual void BlowUpNotify(void);
  virtual INDEX AnimForDeath(void);
  virtual FLOAT WaitForDust(FLOAT3D & vStretch);
  virtual void DeathNotify(void);
  virtual void IdleSound(void);
  virtual void SightSound(void);
  virtual void WoundSound(void);
  virtual void DeathSound(void);
  virtual FLOAT GetLockRotationSpeed(void);
   void RenderParticles(void);
  virtual void EnemyPostInit(void);
   BOOL HandleEvent(const CEntityEvent & ee);
   FLOAT GetAnimLength(int iAnim);
   FLOAT GetCurrentAnimLength();
   BOOL IsAnimFinished();
   FLOAT GetPassedTime();
   FLOAT3D & GetModelStretch();
   void StretchModel(FLOAT3D vStretch);
   void StretchSingleModel(FLOAT3D vStretch);
   SLONG GetUsedMemory(void);
   void PerformEnvironment(const ETouch & eTouch);
#define  STATE_CEnemyBase_MoveToDestination 0x01360003
  BOOL MoveToDestination(const CEntityEvent &__eeInput);
  BOOL H0x01360004_MoveToDestination_01(const CEntityEvent &__eeInput);
  BOOL H0x01360005_MoveToDestination_02(const CEntityEvent &__eeInput);
  BOOL H0x01360006_MoveToDestination_03(const CEntityEvent &__eeInput);
  BOOL H0x01360007_MoveToDestination_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_MoveToRandomPatrolPosition 0x01360008
  BOOL MoveToRandomPatrolPosition(const CEntityEvent &__eeInput);
  BOOL H0x01360009_MoveToRandomPatrolPosition_01(const CEntityEvent &__eeInput);
  BOOL H0x0136000a_MoveToRandomPatrolPosition_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_DoPatrolling 0x0136000b
  BOOL DoPatrolling(const CEntityEvent &__eeInput);
  BOOL H0x0136000c_DoPatrolling_01(const CEntityEvent &__eeInput);
  BOOL H0x0136000d_DoPatrolling_02(const CEntityEvent &__eeInput);
  BOOL H0x0136000e_DoPatrolling_03(const CEntityEvent &__eeInput);
  BOOL H0x0136000f_DoPatrolling_04(const CEntityEvent &__eeInput);
  BOOL H0x01360010_DoPatrolling_05(const CEntityEvent &__eeInput);
  BOOL H0x01360011_DoPatrolling_06(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_BeIdle 0x01360012
  BOOL BeIdle(const CEntityEvent &__eeInput);
  BOOL H0x01360013_BeIdle_01(const CEntityEvent &__eeInput);
  BOOL H0x01360014_BeIdle_02(const CEntityEvent &__eeInput);
  BOOL H0x01360015_BeIdle_03(const CEntityEvent &__eeInput);
  BOOL H0x01360016_BeIdle_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_ReturnToStartPosition 0x01360017
  BOOL ReturnToStartPosition(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_MoveThroughMarkers 0x01360018
  BOOL MoveThroughMarkers(const CEntityEvent &__eeInput);
  BOOL H0x01360019_MoveThroughMarkers_01(const CEntityEvent &__eeInput);
  BOOL H0x0136001a_MoveThroughMarkers_02(const CEntityEvent &__eeInput);
  BOOL H0x0136001b_MoveThroughMarkers_03(const CEntityEvent &__eeInput);
  BOOL H0x0136001c_MoveThroughMarkers_04(const CEntityEvent &__eeInput);
  BOOL H0x0136001d_MoveThroughMarkers_05(const CEntityEvent &__eeInput);
  BOOL H0x0136001e_MoveThroughMarkers_06(const CEntityEvent &__eeInput);
  BOOL H0x0136001f_MoveThroughMarkers_07(const CEntityEvent &__eeInput);
  BOOL H0x01360020_MoveThroughMarkers_08(const CEntityEvent &__eeInput);
  BOOL H0x01360021_MoveThroughMarkers_09(const CEntityEvent &__eeInput);
  BOOL H0x01360022_MoveThroughMarkers_10(const CEntityEvent &__eeInput);
  BOOL H0x01360023_MoveThroughMarkers_11(const CEntityEvent &__eeInput);
  BOOL H0x01360024_MoveThroughMarkers_12(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_NewEnemySpotted 0x01360025
  BOOL NewEnemySpotted(const CEntityEvent &__eeInput);
  BOOL H0x01360026_NewEnemySpotted_01(const CEntityEvent &__eeInput);
  BOOL H0x01360027_NewEnemySpotted_02(const CEntityEvent &__eeInput);
  BOOL H0x01360028_NewEnemySpotted_03(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_StopAttack 0x01360029
  BOOL StopAttack(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_InitializeAttack 0x0136002a
  BOOL InitializeAttack(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_AttackEnemy 0x0136002b
  BOOL AttackEnemy(const CEntityEvent &__eeInput);
  BOOL H0x0136002c_AttackEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x0136002d_AttackEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x0136002e_AttackEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x0136002f_AttackEnemy_04(const CEntityEvent &__eeInput);
  BOOL H0x01360030_AttackEnemy_05(const CEntityEvent &__eeInput);
  BOOL H0x01360031_AttackEnemy_06(const CEntityEvent &__eeInput);
  BOOL H0x01360032_AttackEnemy_07(const CEntityEvent &__eeInput);
  BOOL H0x01360033_AttackEnemy_08(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_PerformAttack 0x01360034
  BOOL PerformAttack(const CEntityEvent &__eeInput);
  BOOL H0x01360035_PerformAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x01360036_PerformAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x01360037_PerformAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x01360038_PerformAttack_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_FireOrHit 0x01360039
  BOOL FireOrHit(const CEntityEvent &__eeInput);
  BOOL H0x0136003a_FireOrHit_01(const CEntityEvent &__eeInput);
  BOOL H0x0136003b_FireOrHit_02(const CEntityEvent &__eeInput);
  BOOL H0x0136003c_FireOrHit_03(const CEntityEvent &__eeInput);
  BOOL H0x0136003d_FireOrHit_04(const CEntityEvent &__eeInput);
  BOOL H0x0136003e_FireOrHit_05(const CEntityEvent &__eeInput);
  BOOL H0x0136003f_FireOrHit_06(const CEntityEvent &__eeInput);
  BOOL H0x01360040_FireOrHit_07(const CEntityEvent &__eeInput);
  BOOL H0x01360041_FireOrHit_08(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Hit 0x01360042
  BOOL Hit(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Fire 0x01360043
  BOOL Fire(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_LockOnEnemy 0x01360044
  BOOL LockOnEnemy(const CEntityEvent &__eeInput);
  BOOL H0x01360045_LockOnEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x01360046_LockOnEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x01360047_LockOnEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x01360048_LockOnEnemy_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_ChargeHitEnemy 0x01360049
  BOOL ChargeHitEnemy(const CEntityEvent &__eeInput);
  BOOL H0x0136004a_ChargeHitEnemy_01(const CEntityEvent &__eeInput);
  BOOL H0x0136004b_ChargeHitEnemy_02(const CEntityEvent &__eeInput);
  BOOL H0x0136004c_ChargeHitEnemy_03(const CEntityEvent &__eeInput);
  BOOL H0x0136004d_ChargeHitEnemy_04(const CEntityEvent &__eeInput);
  BOOL H0x0136004e_ChargeHitEnemy_05(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_BeWounded 0x0136004f
  BOOL BeWounded(const CEntityEvent &__eeInput);
  BOOL H0x01360050_BeWounded_01(const CEntityEvent &__eeInput);
  BOOL H0x01360051_BeWounded_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Die 0x01360052
  BOOL Die(const CEntityEvent &__eeInput);
  BOOL H0x01360053_Die_01(const CEntityEvent &__eeInput);
  BOOL H0x01360054_Die_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Death 0x01360055
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x01360056_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x01360057_Death_02(const CEntityEvent &__eeInput);
  BOOL H0x01360058_Death_03(const CEntityEvent &__eeInput);
  BOOL H0x01360059_Death_04(const CEntityEvent &__eeInput);
  BOOL H0x0136005a_Death_05(const CEntityEvent &__eeInput);
  BOOL H0x0136005b_Death_06(const CEntityEvent &__eeInput);
  BOOL H0x0136005c_Death_07(const CEntityEvent &__eeInput);
  BOOL H0x0136005d_Death_08(const CEntityEvent &__eeInput);
  BOOL H0x0136005e_Death_09(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_DeathSequence 0x0136005f
  BOOL DeathSequence(const CEntityEvent &__eeInput);
  BOOL H0x01360060_DeathSequence_01(const CEntityEvent &__eeInput);
  BOOL H0x01360061_DeathSequence_02(const CEntityEvent &__eeInput);
  BOOL H0x01360062_DeathSequence_03(const CEntityEvent &__eeInput);
  BOOL H0x01360063_DeathSequence_04(const CEntityEvent &__eeInput);
  BOOL H0x01360064_DeathSequence_05(const CEntityEvent &__eeInput);
  BOOL H0x01360065_DeathSequence_06(const CEntityEvent &__eeInput);
  BOOL H0x01360066_DeathSequence_07(const CEntityEvent &__eeInput);
  BOOL H0x01360067_DeathSequence_08(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Active 0x01360068
  BOOL Active(const CEntityEvent &__eeInput);
  BOOL H0x01360069_Active_01(const CEntityEvent &__eeInput);
  BOOL H0x0136006a_Active_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Inactive 0x0136006b
  BOOL Inactive(const CEntityEvent &__eeInput);
  BOOL H0x0136006c_Inactive_01(const CEntityEvent &__eeInput);
  BOOL H0x0136006d_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_PreMainLoop 0x0136006e
  BOOL PreMainLoop(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_MainLoop 0x0136006f
  BOOL MainLoop(const CEntityEvent &__eeInput);
  BOOL H0x01360070_MainLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x01360071_MainLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x01360072_MainLoop_03(const CEntityEvent &__eeInput);
  BOOL H0x01360073_MainLoop_04(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_StandardBehavior 0x01360074
  BOOL StandardBehavior(const CEntityEvent &__eeInput);
  BOOL H0x01360075_StandardBehavior_01(const CEntityEvent &__eeInput);
  BOOL H0x01360076_StandardBehavior_02(const CEntityEvent &__eeInput);
#define  STATE_CEnemyBase_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnemyBase_INCLUDED
