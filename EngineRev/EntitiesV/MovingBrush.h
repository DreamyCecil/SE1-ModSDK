// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_MovingBrush_INCLUDED
#define _EntitiesV_MovingBrush_INCLUDED 1
#include <EntitiesV/MovingBrushMarker.h>
#include <EntitiesV/SoundHolder.h>
#include <EntitiesV\MirrorMarker.h>
#include <EntitiesV/Debris.h>
#define EVENTCODE_EHit 0x00650000
class DECL_DLL EHit : public CEntityEvent {
public:
EHit();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EHit &e) { e = EHit(); } ;
#define EVENTCODE_EBrushDestroyed 0x00650001
class DECL_DLL EBrushDestroyed : public CEntityEvent {
public:
EBrushDestroyed();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EBrushDestroyed &e) { e = EBrushDestroyed(); } ;
extern DECL_DLL CEntityPropertyEnumType BlockAction_enum;
enum BlockAction {
  BA_NONE = 0,
  BA_BOUNCE = 1,
  BA_SKIPMARKER = 2,
};
DECL_DLL inline void ClearToDefault(BlockAction &e) { e = (BlockAction)0; } ;
extern DECL_DLL CEntityPropertyEnumType TouchOrDamageEvent_enum;
enum TouchOrDamageEvent {
  TDE_TOUCHONLY = 0,
  TDE_DAMAGEONLY = 1,
  TDE_BOTH = 2,
};
DECL_DLL inline void ClearToDefault(TouchOrDamageEvent &e) { e = (TouchOrDamageEvent)0; } ;
extern "C" DECL_DLL CDLLEntityClass CMovingBrush_DLLClass;
class CMovingBrush : public CMovableBrushEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
  BOOL m_bAutoStart;
  FLOAT m_fSpeed;
  FLOAT m_fWaitTime;
  BOOL m_bMoveOnTouch;
  enum BlockAction m_ebaAction;
  FLOAT m_fBlockDamage;
  BOOL m_bPlayersOnly;
  BOOL m_bDynamicShadows;
  BOOL m_bVeryBigBrush;
  enum EventEType m_eetTouchEvent;
  CEntityPointer m_penTouchEvent;
  enum TouchOrDamageEvent m_tdeSendEventOnDamage;
  CEntityPointer m_penSwitch;
  enum EventEType m_eetMarkerEvent;
  CEntityPointer m_penMarkerEvent;
  FLOAT m_tmBankingRotation;
  BOOL m_bMoving;
  BOOL m_bRotating;
  BOOL m_bForceStop;
  BOOL m_bNoRotation;
  FLOAT3D m_vDesiredTranslation;
  ANGLE3D m_aDesiredRotation;
  BOOL m_bInverseRotate;
  BOOL m_bStopMoving;
  BOOL m_bMoveToMarker;
  BOOL m_bSkipMarker;
  BOOL m_bValidMarker;
  FLOAT m_fXLimitSign;
  FLOAT m_fYLimitSign;
  FLOAT m_fZLimitSign;
  ANGLE m_aHLimitSign;
  ANGLE m_aPLimitSign;
  ANGLE m_aBLimitSign;
  FLOAT3D m_vStartTranslation;
  ANGLE3D m_aStartRotation;
  FLOAT m_fCourseLength;
  ANGLE m_aHeadLenght;
  ANGLE m_aPitchLenght;
  ANGLE m_aBankLenght;
  CEntityPointer m_penSoundStart;
  CEntityPointer m_penSoundStop;
  CEntityPointer m_penSoundFollow;
  CSoundObject m_soStart;
  CSoundObject m_soStop;
  CSoundObject m_soFollow;
  CEntityPointer m_penMirror0;
  CEntityPointer m_penMirror1;
  CEntityPointer m_penMirror2;
  CEntityPointer m_penMirror3;
  CEntityPointer m_penMirror4;
  FLOAT m_fHealth;
  BOOL m_bBlowupByBull;
  enum EventEType m_eetBlowupEvent;
  CEntityPointer m_penBlowupEvent;
  BOOL m_bZoning;
  BOOL m_bMoveOnDamage;
  FLOAT m_fTouchDamage;
  COLOR m_colDebrises;
  INDEX m_ctDebrises;
  FLOAT m_fCandyEffect;
  FLOAT m_fCubeFactor;
  BOOL m_bBlowupByDamager;
  ULONG m_cbClassificationBits;
  ULONG m_vbVisibilityBits;
   ULONG GetVisTweaks(void);
   void Precache(void);
   void GetForce(INDEX iForce,const FLOAT3D & vPoint,CForceStrength & fsGravity,CForceStrength & fsField);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void AdjustAngle(ANGLE & a);
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   const CTString & GetDescription(void)const;
   const CTString & GetMirrorName(INDEX iMirror);
   BOOL GetMirror(INDEX iMirror,class CMirrorParameters & mpMirror);
   void PreMoving();
   BOOL LoadMarkerParameters();
   BOOL CanReactOnEntity(CEntity * pen);
   void PlayStartSound(void);
   void PlayStopSound(void);
   void PlayFollowSound(void);
   void StopFollowSound(void);
   void MovingOn(void);
   void MovingOff(void);
   void MaybeActivateRotation(void);
   void DeactivateRotation(void);
   void SetCombinedRotation(ANGLE3D aRotAngle,ANGLE3D aAddAngle);
   SLONG GetUsedMemory(void);
#define  STATE_CMovingBrush_MoveToMarker 0x00650002
  BOOL MoveToMarker(const CEntityEvent &__eeInput);
  BOOL H0x00650003_MoveToMarker_01(const CEntityEvent &__eeInput);
  BOOL H0x00650004_MoveToMarker_02(const CEntityEvent &__eeInput);
#define  STATE_CMovingBrush_BounceObstructed 0x00650005
  BOOL BounceObstructed(const CEntityEvent &__eeInput);
  BOOL H0x00650006_BounceObstructed_01(const CEntityEvent &__eeInput);
  BOOL H0x00650007_BounceObstructed_02(const CEntityEvent &__eeInput);
#define  STATE_CMovingBrush_MoveBrush 0x00650008
  BOOL MoveBrush(const CEntityEvent &__eeInput);
  BOOL H0x00650009_MoveBrush_01(const CEntityEvent &__eeInput);
  BOOL H0x0065000a_MoveBrush_02(const CEntityEvent &__eeInput);
  BOOL H0x0065000b_MoveBrush_03(const CEntityEvent &__eeInput);
  BOOL H0x0065000c_MoveBrush_04(const CEntityEvent &__eeInput);
  BOOL H0x0065000d_MoveBrush_05(const CEntityEvent &__eeInput);
  BOOL H0x0065000e_MoveBrush_06(const CEntityEvent &__eeInput);
  BOOL H0x0065000f_MoveBrush_07(const CEntityEvent &__eeInput);
  BOOL H0x00650010_MoveBrush_08(const CEntityEvent &__eeInput);
  BOOL H0x00650011_MoveBrush_09(const CEntityEvent &__eeInput);
  BOOL H0x00650012_MoveBrush_10(const CEntityEvent &__eeInput);
#define  STATE_CMovingBrush_TeleportToStopMarker 0x00650013
  BOOL TeleportToStopMarker(const CEntityEvent &__eeInput);
#define  STATE_CMovingBrush_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00650014_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00650015_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00650016_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00650017_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_MovingBrush_INCLUDED
