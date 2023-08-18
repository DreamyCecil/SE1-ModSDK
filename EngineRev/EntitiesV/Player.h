// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Player_INCLUDED
#define _EntitiesV_Player_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType PlayerViewType_enum;
enum PlayerViewType {
  PVT_PLAYEREYES = 0,
  PVT_PLAYERAUTOVIEW = 1,
  PVT_SCENECAMERA = 2,
  PVT_3RDPERSONVIEW = 3,
};
DECL_DLL inline void ClearToDefault(PlayerViewType &e) { e = (PlayerViewType)0; } ;
extern DECL_DLL CEntityPropertyEnumType PlayerState_enum;
enum PlayerState {
  PST_STAND = 0,
  PST_CROUCH = 1,
  PST_SWIM = 2,
  PST_DIVE = 3,
  PST_FALL = 4,
};
DECL_DLL inline void ClearToDefault(PlayerState &e) { e = (PlayerState)0; } ;
#define EVENTCODE_ECameraStart 0x01910000
class DECL_DLL ECameraStart : public CEntityEvent {
public:
ECameraStart();
CEntityEvent *MakeCopy(void);
CEntityPointer penCamera;
};
DECL_DLL inline void ClearToDefault(ECameraStart &e) { e = ECameraStart(); } ;
#define EVENTCODE_ECameraStop 0x01910001
class DECL_DLL ECameraStop : public CEntityEvent {
public:
ECameraStop();
CEntityEvent *MakeCopy(void);
CEntityPointer penCamera;
};
DECL_DLL inline void ClearToDefault(ECameraStop &e) { e = ECameraStop(); } ;
#define EVENTCODE_ERebirth 0x01910002
class DECL_DLL ERebirth : public CEntityEvent {
public:
ERebirth();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(ERebirth &e) { e = ERebirth(); } ;
#define EVENTCODE_EDisconnected 0x01910003
class DECL_DLL EDisconnected : public CEntityEvent {
public:
EDisconnected();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EDisconnected &e) { e = EDisconnected(); } ;
#define EVENTCODE_EAutoAction 0x01910004
class DECL_DLL EAutoAction : public CEntityEvent {
public:
EAutoAction();
CEntityEvent *MakeCopy(void);
CEntityPointer penFirstMarker;
};
DECL_DLL inline void ClearToDefault(EAutoAction &e) { e = EAutoAction(); } ;
#define CPlayer_ClassID 401
extern "C" DECL_DLL CDLLEntityClass CPlayer_DLLClass;
class DECL_DLL  CPlayer : public CPlayerEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CTString m_strName;
  COLOR m_ulLastButtons;
  FLOAT m_fArmor;
  CTString m_strGroup;
  ULONG m_ulKeys;
  FLOAT m_fMaxHealth;
  INDEX m_ulFlags;
  CEntityPointer m_penWeapons;
  CEntityPointer m_penAnimator;
  CEntityPointer m_penView;
  CEntityPointer m_pen3rdPersonView;
  INDEX m_iViewState;
  INDEX m_iLastViewState;
  INDEX m_iViewStateVehicle;
  CAnimObject m_aoLightAnimation;
  FLOAT m_fDamageAmount;
  FLOAT m_tmWoundedTime;
  FLOAT m_tmScreamTime;
  FLOAT m_tmShitGitTime;
  BOOL m_bGotHurt;
  BOOL m_bJumped;
  INDEX m_iGender;
  enum PlayerState m_pstState;
  FLOAT m_fFallTime;
  FLOAT m_fSwimTime;
  FLOAT m_tmOutOfWater;
  FLOAT m_tmMoveSound;
  BOOL m_bMoveSoundLeft;
  FLOAT m_tmNextAmbientOnce;
  FLOAT m_tmMouthSoundLast;
  CEntityPointer m_penCamera;
  CTString m_strCenterMessage;
  FLOAT m_tmCenterMessageEnd;
  BOOL m_bPendingMessage;
  FLOAT m_tmMessagePlay;
  FLOAT m_tmAnalyseEnd;
  BOOL m_bComputerInvoked;
  FLOAT m_tmAnimateInbox;
  CEntityPointer m_penMainMusicHolder;
  FLOAT m_tmLastDamage;
  FLOAT m_fMaxDamageAmount;
  FLOAT3D m_vDamage;
  FLOAT m_tmSpraySpawned;
  FLOAT m_fSprayDamage;
  CEntityPointer m_penSpray;
  CSoundObject m_soWeapon0;
  CSoundObject m_soWeapon1;
  CSoundObject m_soWeapon2;
  CSoundObject m_soWeapon3;
  CSoundObject m_soWeaponAmbient;
  CSoundObject m_soPowerUpBeep;
  CSoundObject m_soMouth;
  CSoundObject m_soFootL;
  CSoundObject m_soFootR;
  CSoundObject m_soBody;
  CSoundObject m_soLocalAmbientLoop;
  CSoundObject m_soLocalAmbientOnce;
  CSoundObject m_soMessage;
  CSoundObject m_soSpeech;
  CSoundObject m_soSniperZoom;
  INDEX m_iMana;
  FLOAT m_fManaFraction;
  FLOAT m_tmLatency;
  FLOAT m_tmLatencyLastAvg;
  FLOAT m_tmLatencyAvgSum;
  INDEX m_ctLatencyAvg;
  BOOL m_bEndOfLevel;
  BOOL m_bEndOfGame;
  INDEX m_iMayRespawn;
  FLOAT m_tmSpawned;
  FLOAT3D m_vDied;
  FLOAT3D m_aDied;
  FLOAT m_tmEstTime;
  INDEX m_iTimeScore;
  INDEX m_iStartTime;
  INDEX m_iEndTime;
  FLOAT m_tmLevelStarted;
  CTString m_strLevelStats;
  CEntityPointer m_penActionMarker;
  FLOAT m_fAutoSpeed;
  INDEX m_iAutoOrgWeapon;
  FLOAT3D m_vAutoSpeed;
  FLOAT m_tmSpiritStart;
  FLOAT m_tmFadeStart;
  FLOAT m_tmLastPicked;
  CTString m_strPickedName;
  FLOAT m_fPickedAmount;
  FLOAT m_fPickedMana;
  INDEX m_iLastHealth;
  INDEX m_iLastArmor;
  INDEX m_iLastAmmo;
  FLOAT m_tmHealthChanged;
  FLOAT m_tmArmorChanged;
  FLOAT m_tmAmmoChanged;
  FLOAT m_tmMinigunAutoFireStart;
  FLOAT3D m_vLastStain;
  ANGLE3D m_aLastRotation;
  ANGLE3D m_aLastViewRotation;
  FLOAT3D m_vLastTranslation;
  ANGLE3D m_aLocalRotation;
  ANGLE3D m_aLocalViewRotation;
  FLOAT3D m_vLocalTranslation;
  FLOAT m_tmInvisibility;
  FLOAT m_tmInvulnerability;
  FLOAT m_tmSeriousDamage;
  FLOAT m_tmSeriousSpeed;
  FLOAT m_tmSeriousJump;
  FLOAT m_tmInvisibilityMax;
  FLOAT m_tmInvulnerabilityMax;
  FLOAT m_tmSeriousDamageMax;
  FLOAT m_tmSeriousSpeedMax;
  FLOAT m_tmSeriousJumpMax;
  FLOAT m_tmChainShakeEnd;
  FLOAT m_fChainShakeStrength;
  FLOAT m_fChainShakeFreqMod;
  FLOAT m_fChainsawShakeDX;
  FLOAT m_fChainsawShakeDY;
  INDEX m_iSeriousBombCount;
  INDEX m_iLastSeriousBombCount;
  FLOAT m_tmSeriousBombFired;
  INDEX m_iTeam;
  INDEX m_kaiKills;
  INDEX m_kaiRoundKills;
  FLOAT m_katmLastKill;
  INDEX m_iHasFlag;
  CEntityPointer m_penCarriedFlag;
  CSoundObject m_soCTFYouHaveTheirFlag;
  CSoundObject m_soCTFTheyHaveYourFlag;
  CSoundObject m_soCTFRedTeamScores;
  CSoundObject m_soCTFBlueTeamScores;
  CSoundObject m_soCTFRedFlagReturned;
  CSoundObject m_soCTFBlueFlagReturned;
  CSoundObject m_soKABackstab;
  CSoundObject m_soKAHumiliation;
  CSoundObject m_soKAExcellent;
  CSoundObject m_soKAMultiKll;
  CSoundObject m_soKAOwned;
  BOOL m_bIsReady;
  FLOAT m_tmStartFadeIn;
  FLOAT m_tmDiedAt;
  FLOAT m_tmGravityStart;
  INDEX m_iBulletBatchIDLastHit;
  CEntityPointer m_penInControlZone;
  FLOAT m_tmFragMade;
  CEntityPointer m_penFragPlayer;
  CEntityPointer m_penInVehicle;
  BOOL m_bSelectingTeam;
  BOOL m_bWaitingForNextRound;
  CEntityPointer m_penPrediction;
ShellLaunchData ShellLaunchData_array;
INDEX m_iFirstEmptySLD;
BulletSprayLaunchData BulletSprayLaunchData_array;
INDEX m_iFirstEmptyBSLD;
GoreSprayLaunchData GoreSprayLaunchData_array;
INDEX m_iFirstEmptyGSLD;
ULONG ulButtonsNow;
ULONG ulButtonsBefore;
ULONG ulNewButtons;
ULONG ulReleasedButtons;
BOOL bUseButtonHeld;
CSoundListener sliSound;
CLightSource m_lsLightSource;
TIME m_tmPredict;
CDynamicStackArray < CCompMessageID > m_acmiMessages;
INDEX m_ctUnreadMessages;
PlayerStats m_psLevelStats;
PlayerStats m_psLevelTotal;
PlayerStats m_psGameStats;
PlayerStats m_psGameTotal;
CModelObject m_moRender;
   BOOL SuppressFallDamage(void);
   CPlacement3D GetLerpedPlacement(void)const;
   INDEX GenderSound(INDEX iSound);
   struct SteamLeaderboardDetails GetLeaderboardDetails(void);
   struct SteamLeaderboardDetails GetLeaderboardDetails(PlayerStats &ps1,PlayerStats &ps2);
   void AddBouble(FLOAT3D vPos,FLOAT3D vSpeedRelative);
   void ClearShellLaunchData(void);
   void AddBulletSpray(FLOAT3D vPos,EffectParticlesType eptType,FLOAT3D vStretch);
   void ClearBulletSprayLaunchData(void);
   void AddGoreSpray(FLOAT3D vPos,FLOAT3D v3rdPos,SprayParticlesType sptType,FLOAT3D vSpilDirection,FLOATaabbox3D boxHitted,FLOAT fDamagePower,COLOR colParticles);
   void ClearGoreSprayLaunchData(void);
    CPlayer(void);
   class CPlayerWeapons * GetPlayerWeapons(void);
   class CPlayerAnimator * GetPlayerAnimator(void);
   class CPlayerSettings * GetSettings(void);
   void Copy(CEntity & enOther,ULONG ulFlags);
   void UpdateLatency(FLOAT tmLatencyNow);
   void ValidateCharacter(void);
   void ParseGender(CTString & strName);
   CTString GetPredictName(void)const;
   void Write_t(CTStream * ostr);
   void Read_t(CTStream * istr);
   CLightSource * GetLightSource(void);
   void SetPredictionTime(TIME tmAdvance);
   TIME GetPredictionTime(void);
   FLOAT GetPredictionRange(void);
   void AddDependentsToPrediction(void);
   TIME GetStatsInGameTimeLevel(void);
   TIME GetStatsInGameTimeGame(void);
   FLOAT GetStatsRealWorldTime(void);
   CTString GetStatsRealWorldStarted(void);
   void GetStats(CTString & strStats,const CompStatType csType,INDEX ctCharsPerRow);
   void GetShortStats(CTString & strStats);
   void GetDetailStatsDM(CTString & strStats);
   void GetDetailStatsCoop(CTString & strStats);
   void GetDetailStatsSP(CTString & strStats,INDEX iCoopType);
   void GetGameAgentPlayerInfo(INDEX iPlayer,CTString & strOut);
   BOOL HasMessage(const CTFileName & fnmMessage);
   void ReceiveComputerMessage(const CTFileName & fnmMessage,ULONG ulFlags);
   void SayVoiceMessage(const CTFileName & fnmMessage);
   void CheatAllMessagesDir(const CTString & strDir,ULONG ulFlags);
   void CheatAllMessages(void);
   void ItemPicked(const CTString & strName,FLOAT fAmmount);
   void SetupLightSource(void);
   void PlayLightAnim(INDEX iAnim,ULONG ulFlags);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   CModelObject * GetModelForRendering(void);
   class CPlayerActionMarker * GetActionMarker(void);
   void FindMusicHolder(void);
   void UpdateLevelStats(void);
   BOOL IsFuss(void);
   void SetDefaultMouthPitch(void);
   void SetRandomMouthPitch(FLOAT fMin,FLOAT fMax);
   void SetSpeakMouthPitch(void);
   void ApplyShaking(CPlacement3D & plViewer);
   COLOR GetWorldGlaring(void);
   void RenderScroll(CDrawPort * pdp);
   void RenderCredits(CDrawPort * pdp);
   void RenderTextFX(CDrawPort * pdp);
   void RenderHudPicFX(CDrawPort * pdp);
   void RenderFlyoverHud(CDrawPort * pdp);
   void SetupView(CDrawPort * pdp,CAnyProjection3D & apr,CEntity * & penViewer,CPlacement3D & plViewer,COLOR & colBlend,BOOL bCamera);
   void ListenFromEntity(CEntity * penListener,const CPlacement3D & plSound);
   void RenderDummyView(CDrawPort * pdp);
   void RenderPlayerView(CDrawPort * pdp,BOOL bShowExtras,BOOL bExtra);
   void RenderCameraView(CDrawPort * pdp,BOOL bListen);
   void RenderGameView(CDrawPort * pdp,void * pvUserData);
   BOOL DoesContentTypeHurt(CContentType &ct);
   void PreMoving(void);
   void DoMoving(void);
   void PostMoving(void);
   void SetUnconnected(void);
   void SetConnected(void);
   BOOL IsConnected(void)const;
   void ChecksumForSync(ULONG & ulCRC,INDEX iExtensiveSyncCheck);
   void CorrectionProperties(CEntityCorrectionInfo &eci, INDEX iExtra);
   void DumpSync_t(CTStream & strm,INDEX iExtensiveSyncCheck);
  virtual void LeaveStain(BOOL bGrow);
   void DamageImpact(enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection,INDEX iDamageID);
   void OnStep(void);
   FLOAT TopHealthInside(void);
   BOOL ShouldBlowUp(void);
   void BlowUp(void);
   void * GetEntityInfo(void);
   BOOL ReceiveItem(const CEntityEvent & ee);
   void ChangePlayerView();
   void SetReady(void);
   void ComputerPressed(void);
   void UsePressed(void);
   void SetGameEnd(void);
   void CheckGameEnd(void);
   void ApplyAction(const CPlayerAction & paOriginal,FLOAT tmLatency);
   void Disconnect(void);
   void CharacterChanged(const CPlayerCharacter & pcNew);
   void GatherStats(void *pData);
   void AliveActions(const CPlayerAction & pa);
   void AutoActions(const CPlayerAction & pa);
   void GetLerpedWeaponPosition(FLOAT3D vRel,CPlacement3D & pl);
   void GetLerpedWeaponPositionForSharpTurning(FLOAT3D vRel,CPlacement3D & pl);
   void SpawnBubbles(INDEX ctBubbles);
   void PlayPowerUpSound(void);
   void ActiveActions(const CPlayerAction & paAction);
   void RoundViewAngle(ANGLE & aViewAngle,ANGLE aRound);
   void DeathActions(const CPlayerAction & paAction);
   void PressSecondaryFire(BOOL bUnknown);
   void ButtonsActions(CPlayerAction & paAction);
   void ApplySniperZoom(BOOL bZoomIn);
   BOOL CheatsEnabled(void);
   void Cheats(void);
   void GetLerpedAbsoluteViewPlacement(CPlacement3D & plView);
   CEntity * GetViewEntity(void);
   void RenderChainsawParticles(BOOL bThird);
   void RenderHUD(CPerspectiveProjection3D & prProjection,CDrawPort * pdp,FLOAT3D vViewerLightDirection,COLOR colViewerLight,COLOR colViewerAmbient,BOOL bRenderWeapon,INDEX iEye,BOOL bExtra);
   CEntity * GetDeathmatchStartMarker(void);
   void InitializePlayer(BOOL bUnknown);
   FLOAT3D GetTeleportingOffset(void);
   void RemapLevelNames(INDEX & iLevel);
   void TeleportPlayer(enum WorldLinkType EwltType,BOOL bUnknown);
   void RecordEndOfLevelData(void);
   void SpawnTeleport(void);
   void RenderParticles(void);
   void TeleportToAutoMarker(CPlayerActionMarker * ppam);
   void CheckDeathForRespawnInPlace(EDeath eDeath);
   void DropFlag(void);
   void SaveGravityStats(void);
   void AddWStoPS(PlayerStats &ps1,PlayerStats &ps2,CWorldStats *pws);
   void SaveWorldStats(void);
#define  STATE_CPlayer_WorldChange 0x01910005
  BOOL WorldChange(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_WorldChangeDead 0x01910006
  BOOL WorldChangeDead(const CEntityEvent &__eeInput);
  BOOL H0x01910007_WorldChangeDead_01(const CEntityEvent &__eeInput);
  BOOL H0x01910008_WorldChangeDead_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_Death 0x01910009
  BOOL Death(const CEntityEvent &__eeInput);
  BOOL H0x0191000a_Death_01(const CEntityEvent &__eeInput);
  BOOL H0x0191000b_Death_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_SelectTeam 0x0191000c
  BOOL SelectTeam(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_TheEnd 0x0191000d
  BOOL TheEnd(const CEntityEvent &__eeInput);
  BOOL H0x0191000e_TheEnd_01(const CEntityEvent &__eeInput);
  BOOL H0x0191000f_TheEnd_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_FirstInit 0x01910010
  BOOL FirstInit(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_Rebirth 0x01910011
  BOOL Rebirth(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoGoToMarker 0x01910012
  BOOL AutoGoToMarker(const CEntityEvent &__eeInput);
  BOOL H0x01910013_AutoGoToMarker_01(const CEntityEvent &__eeInput);
  BOOL H0x01910014_AutoGoToMarker_02(const CEntityEvent &__eeInput);
  BOOL H0x01910015_AutoGoToMarker_03(const CEntityEvent &__eeInput);
  BOOL H0x01910016_AutoGoToMarker_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoGoToMarkerAndStop 0x01910017
  BOOL AutoGoToMarkerAndStop(const CEntityEvent &__eeInput);
  BOOL H0x01910018_AutoGoToMarkerAndStop_01(const CEntityEvent &__eeInput);
  BOOL H0x01910019_AutoGoToMarkerAndStop_02(const CEntityEvent &__eeInput);
  BOOL H0x0191001a_AutoGoToMarkerAndStop_03(const CEntityEvent &__eeInput);
  BOOL H0x0191001b_AutoGoToMarkerAndStop_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoUseItem 0x0191001c
  BOOL AutoUseItem(const CEntityEvent &__eeInput);
  BOOL H0x0191001d_AutoUseItem_01(const CEntityEvent &__eeInput);
  BOOL H0x0191001e_AutoUseItem_02(const CEntityEvent &__eeInput);
  BOOL H0x0191001f_AutoUseItem_03(const CEntityEvent &__eeInput);
  BOOL H0x01910020_AutoUseItem_04(const CEntityEvent &__eeInput);
  BOOL H0x01910021_AutoUseItem_05(const CEntityEvent &__eeInput);
  BOOL H0x01910022_AutoUseItem_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoPickItem 0x01910023
  BOOL AutoPickItem(const CEntityEvent &__eeInput);
  BOOL H0x01910024_AutoPickItem_01(const CEntityEvent &__eeInput);
  BOOL H0x01910025_AutoPickItem_02(const CEntityEvent &__eeInput);
  BOOL H0x01910026_AutoPickItem_03(const CEntityEvent &__eeInput);
  BOOL H0x01910027_AutoPickItem_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoFallDown 0x01910028
  BOOL AutoFallDown(const CEntityEvent &__eeInput);
  BOOL H0x01910029_AutoFallDown_01(const CEntityEvent &__eeInput);
  BOOL H0x0191002a_AutoFallDown_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoFallToAbys 0x0191002b
  BOOL AutoFallToAbys(const CEntityEvent &__eeInput);
  BOOL H0x0191002c_AutoFallToAbys_01(const CEntityEvent &__eeInput);
  BOOL H0x0191002d_AutoFallToAbys_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoLookAround 0x0191002e
  BOOL AutoLookAround(const CEntityEvent &__eeInput);
  BOOL H0x0191002f_AutoLookAround_01(const CEntityEvent &__eeInput);
  BOOL H0x01910030_AutoLookAround_02(const CEntityEvent &__eeInput);
  BOOL H0x01910031_AutoLookAround_03(const CEntityEvent &__eeInput);
  BOOL H0x01910032_AutoLookAround_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoTeleport 0x01910033
  BOOL AutoTeleport(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoAppear 0x01910034
  BOOL AutoAppear(const CEntityEvent &__eeInput);
  BOOL H0x01910035_AutoAppear_01(const CEntityEvent &__eeInput);
  BOOL H0x01910036_AutoAppear_02(const CEntityEvent &__eeInput);
  BOOL H0x01910037_AutoAppear_03(const CEntityEvent &__eeInput);
  BOOL H0x01910038_AutoAppear_04(const CEntityEvent &__eeInput);
  BOOL H0x01910039_AutoAppear_05(const CEntityEvent &__eeInput);
  BOOL H0x0191003a_AutoAppear_06(const CEntityEvent &__eeInput);
  BOOL H0x0191003b_AutoAppear_07(const CEntityEvent &__eeInput);
  BOOL H0x0191003c_AutoAppear_08(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_TravellingInBeam 0x0191003d
  BOOL TravellingInBeam(const CEntityEvent &__eeInput);
  BOOL H0x0191003e_TravellingInBeam_01(const CEntityEvent &__eeInput);
  BOOL H0x0191003f_TravellingInBeam_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_LogoFireMinigun 0x01910040
  BOOL LogoFireMinigun(const CEntityEvent &__eeInput);
  BOOL H0x01910041_LogoFireMinigun_01(const CEntityEvent &__eeInput);
  BOOL H0x01910042_LogoFireMinigun_02(const CEntityEvent &__eeInput);
  BOOL H0x01910043_LogoFireMinigun_03(const CEntityEvent &__eeInput);
  BOOL H0x01910044_LogoFireMinigun_04(const CEntityEvent &__eeInput);
  BOOL H0x01910045_LogoFireMinigun_05(const CEntityEvent &__eeInput);
  BOOL H0x01910046_LogoFireMinigun_06(const CEntityEvent &__eeInput);
  BOOL H0x01910047_LogoFireMinigun_07(const CEntityEvent &__eeInput);
  BOOL H0x01910048_LogoFireMinigun_08(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_AutoStoreWeapon 0x01910049
  BOOL AutoStoreWeapon(const CEntityEvent &__eeInput);
  BOOL H0x0191004a_AutoStoreWeapon_01(const CEntityEvent &__eeInput);
  BOOL H0x0191004b_AutoStoreWeapon_02(const CEntityEvent &__eeInput);
  BOOL H0x0191004c_AutoStoreWeapon_03(const CEntityEvent &__eeInput);
  BOOL H0x0191004d_AutoStoreWeapon_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_DoAutoActions 0x0191004e
  BOOL DoAutoActions(const CEntityEvent &__eeInput);
  BOOL H0x0191004f_DoAutoActions_01(const CEntityEvent &__eeInput);
  BOOL H0x01910050_DoAutoActions_02(const CEntityEvent &__eeInput);
  BOOL H0x01910051_DoAutoActions_03(const CEntityEvent &__eeInput);
  BOOL H0x01910052_DoAutoActions_04(const CEntityEvent &__eeInput);
  BOOL H0x01910053_DoAutoActions_05(const CEntityEvent &__eeInput);
  BOOL H0x01910054_DoAutoActions_06(const CEntityEvent &__eeInput);
  BOOL H0x01910055_DoAutoActions_07(const CEntityEvent &__eeInput);
  BOOL H0x01910056_DoAutoActions_08(const CEntityEvent &__eeInput);
  BOOL H0x01910057_DoAutoActions_09(const CEntityEvent &__eeInput);
  BOOL H0x01910058_DoAutoActions_10(const CEntityEvent &__eeInput);
  BOOL H0x01910059_DoAutoActions_11(const CEntityEvent &__eeInput);
  BOOL H0x0191005a_DoAutoActions_12(const CEntityEvent &__eeInput);
  BOOL H0x0191005b_DoAutoActions_13(const CEntityEvent &__eeInput);
  BOOL H0x0191005c_DoAutoActions_14(const CEntityEvent &__eeInput);
  BOOL H0x0191005d_DoAutoActions_15(const CEntityEvent &__eeInput);
  BOOL H0x0191005e_DoAutoActions_16(const CEntityEvent &__eeInput);
  BOOL H0x0191005f_DoAutoActions_17(const CEntityEvent &__eeInput);
  BOOL H0x01910060_DoAutoActions_18(const CEntityEvent &__eeInput);
  BOOL H0x01910061_DoAutoActions_19(const CEntityEvent &__eeInput);
  BOOL H0x01910062_DoAutoActions_20(const CEntityEvent &__eeInput);
  BOOL H0x01910063_DoAutoActions_21(const CEntityEvent &__eeInput);
  BOOL H0x01910064_DoAutoActions_22(const CEntityEvent &__eeInput);
  BOOL H0x01910065_DoAutoActions_23(const CEntityEvent &__eeInput);
  BOOL H0x01910066_DoAutoActions_24(const CEntityEvent &__eeInput);
  BOOL H0x01910067_DoAutoActions_25(const CEntityEvent &__eeInput);
  BOOL H0x01910068_DoAutoActions_26(const CEntityEvent &__eeInput);
  BOOL H0x01910069_DoAutoActions_27(const CEntityEvent &__eeInput);
  BOOL H0x0191006a_DoAutoActions_28(const CEntityEvent &__eeInput);
  BOOL H0x0191006b_DoAutoActions_29(const CEntityEvent &__eeInput);
  BOOL H0x0191006c_DoAutoActions_30(const CEntityEvent &__eeInput);
  BOOL H0x0191006d_DoAutoActions_31(const CEntityEvent &__eeInput);
  BOOL H0x0191006e_DoAutoActions_32(const CEntityEvent &__eeInput);
  BOOL H0x0191006f_DoAutoActions_33(const CEntityEvent &__eeInput);
  BOOL H0x01910070_DoAutoActions_34(const CEntityEvent &__eeInput);
  BOOL H0x01910071_DoAutoActions_35(const CEntityEvent &__eeInput);
  BOOL H0x01910072_DoAutoActions_36(const CEntityEvent &__eeInput);
  BOOL H0x01910073_DoAutoActions_37(const CEntityEvent &__eeInput);
  BOOL H0x01910074_DoAutoActions_38(const CEntityEvent &__eeInput);
  BOOL H0x01910075_DoAutoActions_39(const CEntityEvent &__eeInput);
  BOOL H0x01910076_DoAutoActions_40(const CEntityEvent &__eeInput);
  BOOL H0x01910077_DoAutoActions_41(const CEntityEvent &__eeInput);
  BOOL H0x01910078_DoAutoActions_42(const CEntityEvent &__eeInput);
  BOOL H0x01910079_DoAutoActions_43(const CEntityEvent &__eeInput);
  BOOL H0x0191007a_DoAutoActions_44(const CEntityEvent &__eeInput);
  BOOL H0x0191007b_DoAutoActions_45(const CEntityEvent &__eeInput);
  BOOL H0x0191007c_DoAutoActions_46(const CEntityEvent &__eeInput);
  BOOL H0x0191007d_DoAutoActions_47(const CEntityEvent &__eeInput);
  BOOL H0x0191007e_DoAutoActions_48(const CEntityEvent &__eeInput);
  BOOL H0x0191007f_DoAutoActions_49(const CEntityEvent &__eeInput);
  BOOL H0x01910080_DoAutoActions_50(const CEntityEvent &__eeInput);
  BOOL H0x01910081_DoAutoActions_51(const CEntityEvent &__eeInput);
  BOOL H0x01910082_DoAutoActions_52(const CEntityEvent &__eeInput);
  BOOL H0x01910083_DoAutoActions_53(const CEntityEvent &__eeInput);
  BOOL H0x01910084_DoAutoActions_54(const CEntityEvent &__eeInput);
  BOOL H0x01910085_DoAutoActions_55(const CEntityEvent &__eeInput);
  BOOL H0x01910086_DoAutoActions_56(const CEntityEvent &__eeInput);
  BOOL H0x01910087_DoAutoActions_57(const CEntityEvent &__eeInput);
  BOOL H0x01910088_DoAutoActions_58(const CEntityEvent &__eeInput);
  BOOL H0x01910089_DoAutoActions_59(const CEntityEvent &__eeInput);
  BOOL H0x0191008a_DoAutoActions_60(const CEntityEvent &__eeInput);
  BOOL H0x0191008b_DoAutoActions_61(const CEntityEvent &__eeInput);
  BOOL H0x0191008c_DoAutoActions_62(const CEntityEvent &__eeInput);
  BOOL H0x0191008d_DoAutoActions_63(const CEntityEvent &__eeInput);
  BOOL H0x0191008e_DoAutoActions_64(const CEntityEvent &__eeInput);
  BOOL H0x0191008f_DoAutoActions_65(const CEntityEvent &__eeInput);
  BOOL H0x01910090_DoAutoActions_66(const CEntityEvent &__eeInput);
  BOOL H0x01910091_DoAutoActions_67(const CEntityEvent &__eeInput);
  BOOL H0x01910092_DoAutoActions_68(const CEntityEvent &__eeInput);
  BOOL H0x01910093_DoAutoActions_69(const CEntityEvent &__eeInput);
  BOOL H0x01910094_DoAutoActions_70(const CEntityEvent &__eeInput);
  BOOL H0x01910095_DoAutoActions_71(const CEntityEvent &__eeInput);
  BOOL H0x01910096_DoAutoActions_72(const CEntityEvent &__eeInput);
  BOOL H0x01910097_DoAutoActions_73(const CEntityEvent &__eeInput);
  BOOL H0x01910098_DoAutoActions_74(const CEntityEvent &__eeInput);
  BOOL H0x01910099_DoAutoActions_75(const CEntityEvent &__eeInput);
  BOOL H0x0191009a_DoAutoActions_76(const CEntityEvent &__eeInput);
  BOOL H0x0191009b_DoAutoActions_77(const CEntityEvent &__eeInput);
  BOOL H0x0191009c_DoAutoActions_78(const CEntityEvent &__eeInput);
  BOOL H0x0191009d_DoAutoActions_79(const CEntityEvent &__eeInput);
  BOOL H0x0191009e_DoAutoActions_80(const CEntityEvent &__eeInput);
  BOOL H0x0191009f_DoAutoActions_81(const CEntityEvent &__eeInput);
  BOOL H0x019100a0_DoAutoActions_82(const CEntityEvent &__eeInput);
  BOOL H0x019100a1_DoAutoActions_83(const CEntityEvent &__eeInput);
  BOOL H0x019100a2_DoAutoActions_84(const CEntityEvent &__eeInput);
  BOOL H0x019100a3_DoAutoActions_85(const CEntityEvent &__eeInput);
#define  STATE_CPlayer_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x019100a4_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x019100a5_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x019100a6_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x019100a7_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Player_INCLUDED
