// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_PlayerWeapons_INCLUDED
#define _EntitiesV_PlayerWeapons_INCLUDED 1
#include <EntitiesV/Player.h>
#include <EntitiesV/PlayerWeaponsEffects.h>
#include <EntitiesV/Projectile.h>
#include <EntitiesV/Bullet.h>
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/WeaponItem.h>
#include <EntitiesV/AmmoItem.h>
#include <EntitiesV/AmmoPack.h>
#include <EntitiesV/ModelHolder2.h>
#include <EntitiesV/CannonBall.h>
#define EVENTCODE_EWeaponsInit 0x01920000
class DECL_DLL EWeaponsInit : public CEntityEvent {
public:
EWeaponsInit();
CEntityEvent *MakeCopy(void);
CEntityPointer penOwner;
};
DECL_DLL inline void ClearToDefault(EWeaponsInit &e) { e = EWeaponsInit(); } ;
#define EVENTCODE_ESelectWeapon 0x01920001
class DECL_DLL ESelectWeapon : public CEntityEvent {
public:
ESelectWeapon();
CEntityEvent *MakeCopy(void);
INDEX iWeapon;
};
DECL_DLL inline void ClearToDefault(ESelectWeapon &e) { e = ESelectWeapon(); } ;
#define EVENTCODE_EBoringWeapon 0x01920002
class DECL_DLL EBoringWeapon : public CEntityEvent {
public:
EBoringWeapon();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EBoringWeapon &e) { e = EBoringWeapon(); } ;
#define EVENTCODE_EFireWeapon 0x01920003
class DECL_DLL EFireWeapon : public CEntityEvent {
public:
EFireWeapon();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EFireWeapon &e) { e = EFireWeapon(); } ;
#define EVENTCODE_EReleaseWeapon 0x01920004
class DECL_DLL EReleaseWeapon : public CEntityEvent {
public:
EReleaseWeapon();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EReleaseWeapon &e) { e = EReleaseWeapon(); } ;
#define EVENTCODE_EReloadWeapon 0x01920005
class DECL_DLL EReloadWeapon : public CEntityEvent {
public:
EReloadWeapon();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EReloadWeapon &e) { e = EReloadWeapon(); } ;
#define EVENTCODE_EWeaponChanged 0x01920006
class DECL_DLL EWeaponChanged : public CEntityEvent {
public:
EWeaponChanged();
CEntityEvent *MakeCopy(void);
};
DECL_DLL inline void ClearToDefault(EWeaponChanged &e) { e = EWeaponChanged(); } ;
extern DECL_DLL CEntityPropertyEnumType WeaponType_enum;
enum WeaponType {
  WEAPON_NONE = 0,
  WEAPON_KNIFE = 1,
  WEAPON_COLT = 2,
  WEAPON_DOUBLECOLT = 3,
  WEAPON_SINGLESHOTGUN = 4,
  WEAPON_DOUBLESHOTGUN = 5,
  WEAPON_TOMMYGUN = 6,
  WEAPON_MINIGUN = 7,
  WEAPON_ROCKETLAUNCHER = 8,
  WEAPON_GRENADELAUNCHER = 9,
  WEAPON_CHAINSAW = 10,
  WEAPON_FLAMER = 11,
  WEAPON_LASER = 12,
  WEAPON_SNIPER = 13,
  WEAPON_IRONCANNON = 14,
  WEAPON_GHOSTBUSTER = 15,
  WEAPON_PLASMATHROWER = 16,
  WEAPON_MINELAYER = 17,
  WEAPON_LAST = 18,
};
DECL_DLL inline void ClearToDefault(WeaponType &e) { e = (WeaponType)0; } ;
#define CPlayerWeapons_ClassID 402
extern "C" DECL_DLL CDLLEntityClass CPlayerWeapons_DLLClass;
class DECL_DLL  CPlayerWeapons : public CRationalEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penPlayer;
  BOOL m_bFireWeapon;
  BOOL m_bHasAmmo;
  enum WeaponType m_iCurrentWeapon;
  enum WeaponType m_iWantedWeapon;
  enum WeaponType m_iPreviousWeapon;
  ULONG m_iAvailableWeapons;
  BOOL m_bChangeWeapon;
  BOOL m_bReloadWeapon;
  BOOL m_bMirrorFire;
  INDEX m_iAnim;
  FLOAT m_fAnimWaitTime;
  FLOAT m_tmRangeSoundSpawned;
  BOOL m_bSniperZoom;
  FLOAT m_fSniperFOV;
  FLOAT m_fSniperFOVlast;
  CTString m_strLastTarget;
  FLOAT m_tmTargetingStarted;
  FLOAT m_tmLastTarget;
  FLOAT m_tmSnoopingStarted;
  CEntityPointer m_penTargeting;
  CModelObject m_moWeapon;
  CModelObject m_moWeaponSecond;
  FLOAT m_tmWeaponChangeRequired;
  CEntityPointer m_penRayHit;
  FLOAT m_fRayHitDistance;
  FLOAT m_fEnemyHealth;
  FLOAT3D m_vRayHit;
  FLOAT3D m_vRayHitLast;
  FLOAT3D m_vBulletSource;
  FLOAT3D m_vBulletTarget;
  INDEX m_iBullets;
  INDEX m_iMaxBullets;
  INDEX m_iShells;
  INDEX m_iMaxShells;
  INDEX m_iRockets;
  INDEX m_iMaxRockets;
  INDEX m_iGrenades;
  INDEX m_iMaxGrenades;
  INDEX m_iNapalm;
  INDEX m_iMaxNapalm;
  INDEX m_iElectricity;
  INDEX m_iMaxElectricity;
  INDEX m_iIronBalls;
  INDEX m_iMaxIronBalls;
  INDEX m_iSniperBullets;
  INDEX m_iMaxSniperBullets;
  INDEX m_iPlasmaPacks;
  INDEX m_iMaxPlasmaPacks;
  INDEX m_iMinePacks;
  INDEX m_iMaxMinePacks;
  INDEX m_iKnifeStand;
  INDEX m_iColtBullets;
  FLOAT m_aMiniGun;
  FLOAT m_aMiniGunLast;
  FLOAT m_aMiniGunSpeed;
  FLOAT m_aMiniGunSpinLeft;
  FLOAT3D m_iLastBulletPosition;
  INDEX m_iBulletsOnFireStart;
  FLOAT m_fSniperMaxFOV;
  FLOAT m_fSniperMinFOV;
  FLOAT m_fSnipingZoomSpeed;
  BOOL m_bSniping;
  FLOAT m_fMinimumZoomFOV;
  FLOAT m_tmLastSniperFire;
  CEntityPointer m_penFlame;
  INDEX m_iLaserBarrel;
  INDEX m_iPlasmaBarrel;
  CEntityPointer m_penGhostBusterRay;
  INDEX m_iFlare;
  INDEX m_iSecondFlare;
  FLOAT m_tmFlareAdded;
  FLOAT m_tmSecondFlareAdded;
  FLOAT m_fWeaponDrawPowerOld;
  FLOAT m_fWeaponDrawPower;
  FLOAT m_tmDrawStartTime;
  FLOAT m_tmFlamerStart;
  FLOAT m_tmFlamerStop;
  FLOAT m_tmLastChainsawSpray;
  BOOL m_bUsedKnifeOnly;
  INDEX m_iTimesFired;
  INDEX m_iTimesHit;
  INDEX m_iBulletBatchID;
  BOOL m_bSecFireWeapon;
  BOOL m_bPrimaryFire;
  CEntityPointer m_penEnergyMine;
  INDEX m_ctMaxMines;
  FLOAT m_fMinigunTickTime;
  CEntityPointer m_penPrediction;
CEntity * penBullet;
CPlacement3D plBullet;
FLOAT3D vBulletDestination;
   void AddDependentsToPrediction(void);
   void Precache(void);
   CPlayer * GetPlayer(void);
   CPlayerAnimator * GetAnimator(void);
   CModelObject * GetChainSawTeeth(void);
   void DoRecoil(void);
   BOOL HoldingFire(void);
   BOOL HoldingSecondaryFire(void);
   void RenderWeaponModel(CPerspectiveProjection3D & prProjection,CDrawPort * pdp,FLOAT3D vViewerLightDirection,COLOR colViewerLight,COLOR colViewerAmbient,BOOL bRender,INDEX iEye);
   void WeaponMovingOffset(FLOAT3D & plPos);
   void CheckTargetPrediction(CEntity * penTarget);
   void UpdateTargetingInfo(void);
   void RenderCrosshair(CProjection3D & prProjection,CDrawPort * pdp,CPlacement3D & plViewSource);
   void ShowFlare(CModelObject & moWeapon,INDEX iAttachObject,INDEX iAttachFlare,FLOAT fSize);
   void HideFlare(CModelObject & moWeapon,INDEX iAttachObject,INDEX iAttachFlare);
   void SetFlare(INDEX iFlare,INDEX iAction);
   void ControlFlareAttachment(void);
   void PlayLightAnim(INDEX iAnim,ULONG ulFlags);
   void SetCurrentWeaponModel(void);
   void RotateMinigun(void);
   void CalcWeaponPosition3rdPersonView(FLOAT3D vPos,CPlacement3D & plPos,BOOL bResetZ);
   void CalcWeaponPosition(FLOAT3D vPos,CPlacement3D & plPos,BOOL bResetZ);
   void CalcLerpedWeaponPositionForSharpTurning(FLOAT3D vPos,CPlacement3D & plPos,BOOL bResetZ);
   void CalcLerpedWeaponPosition(FLOAT3D vPos,CPlacement3D & plPos,BOOL bResetZ);
   void CalcWeaponPositionImprecise(FLOAT3D vPos,CPlacement3D & plPos,BOOL bResetZ,FLOAT fImprecissionAngle);
   void Setup3DSoundParameters(void);
   BOOL CutWithKnife(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fWide,FLOAT fThickness,FLOAT fDamage);
   BOOL CutWithChainsaw(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fWide,FLOAT fThickness,FLOAT fDamage);
   void PrepareSniperBullet(FLOAT fX,FLOAT fY,FLOAT fDamage,FLOAT fImprecission);
   void PrepareBullet(FLOAT fX,FLOAT fY,FLOAT fDamage,DamageType dmtType);
   void FireSniperBullet(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,FLOAT fImprecission);
   void FireOneBullet(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,DamageType dmtType,INDEX iBatchID);
   void FireBullets(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,INDEX iBullets,FLOAT * afPositions,FLOAT fStretch,FLOAT fJitter,DamageType dmtType);
   void FireMachineBullet(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,FLOAT fJitter,FLOAT fBulletSize,DamageType dmtType);
   void FireGrenade(INDEX iPower);
   void FirePlasma(void);
   void FirePlasmaSecondary(void);
   CEntity *GetEnergyMineAttachment(void);
   INDEX CountDroppedMines(void);
   void DropEnergyMine(void);
   void ClearMine(CEntity * penMine);
   void FireRocket(void);
   void GetFlamerSourcePlacement(CPlacement3D & plSource,CPlacement3D & plInFrontOfPipe);
   void FireFlame(void);
   void FireLaserRay(void);
   void GetLerpedGhostBusterSourcePlacement(CPlacement3D & plSource);
   void GetGhostBusterSourcePlacement(CPlacement3D & plSource);
   void FireGhostBusterRay(void);
   void FireCannonBall(INDEX iPower);
   void SpawnRangeSound(FLOAT fRange);
   void ClearWeapons(void);
   void ResetWeaponMovingOffset(void);
   void InitializeWeapons(INDEX iGiveWeapons,INDEX iTakeWeapons,INDEX iTakeAmmo,FLOAT fMaxAmmoRatio);
   INDEX GetAmmo(void);
   INDEX GetMaxAmmo(void);
   void CheatOpen(void);
   void CheatGiveAll(void);
   void AddManaToPlayer(INDEX iMana);
   void ClampAllAmmo(void);
   void AddDefaultAmmoForWeapon(INDEX iWeapon,FLOAT fMaxAmmoRatio);
   void DropWeapon(void);
   BOOL ReceiveWeapon(const CEntityEvent & ee);
   BOOL ReceiveAmmo(const CEntityEvent & ee);
   BOOL ReceivePackAmmo(const CEntityEvent & ee);
   WeaponType GetStrongerWeapon(INDEX iWeapon);
   INDEX GetSelectedWeapon(WeaponType EwtSelectedWeapon);
   WeaponType GetAltWeapon(WeaponType EwtWeapon);
   BOOL WeaponSelectOk(WeaponType wtToTry);
   void SelectNewWeapon();
   BOOL HasAmmo(WeaponType EwtWeapon);
   void PlayDefaultAnim(void);
   FLOAT KnifeBoring(void);
   FLOAT ColtBoring(void);
   FLOAT DoubleColtBoring(void);
   FLOAT SingleShotgunBoring(void);
   FLOAT DoubleShotgunBoring(void);
   FLOAT TommyGunBoring(void);
   FLOAT SniperBoring(void);
   FLOAT MiniGunBoring(void);
   FLOAT RocketLauncherBoring(void);
   FLOAT GrenadeLauncherBoring(void);
   TIME ModifyFireRate(INDEX iDummy,FLOAT fFireRate);
   FLOAT FlamerBoring(void);
   FLOAT ChainsawBoring(void);
   FLOAT PlasmaThrowerBoring(void);
   FLOAT MinelayerBoring(void);
   FLOAT LaserBoring(void);
   FLOAT GhostBusterBoring(void);
   FLOAT CannonBoring(void);
   WeaponType FindRemapedPos(WeaponType wt);
   WeaponType PrimaryToSecondary(WeaponType wt);
   WeaponType SecondaryToPrimary(WeaponType wt);
   WeaponType FindWeaponInDirection(INDEX iDir);
   void SelectWeaponChange(INDEX iSelect);
   void MinigunSmoke();
   BOOL SniperZoomDiscrete(INDEX iDirection,BOOL & bZoomChanged);
#define  STATE_CPlayerWeapons_ChangeWeapon 0x01920009
  BOOL ChangeWeapon(const CEntityEvent &__eeInput);
  BOOL H0x0192000a_ChangeWeapon_01(const CEntityEvent &__eeInput);
  BOOL H0x0192000b_ChangeWeapon_02(const CEntityEvent &__eeInput);
  BOOL H0x0192000c_ChangeWeapon_03(const CEntityEvent &__eeInput);
  BOOL H0x0192000d_ChangeWeapon_04(const CEntityEvent &__eeInput);
  BOOL H0x0192000e_ChangeWeapon_05(const CEntityEvent &__eeInput);
  BOOL H0x0192000f_ChangeWeapon_06(const CEntityEvent &__eeInput);
  BOOL H0x01920010_ChangeWeapon_07(const CEntityEvent &__eeInput);
  BOOL H0x01920011_ChangeWeapon_08(const CEntityEvent &__eeInput);
  BOOL H0x01920012_ChangeWeapon_09(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_PutDown 0x01920013
  BOOL PutDown(const CEntityEvent &__eeInput);
  BOOL H0x01920014_PutDown_01(const CEntityEvent &__eeInput);
  BOOL H0x01920015_PutDown_02(const CEntityEvent &__eeInput);
  BOOL H0x01920016_PutDown_03(const CEntityEvent &__eeInput);
  BOOL H0x01920017_PutDown_04(const CEntityEvent &__eeInput);
  BOOL H0x01920018_PutDown_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_BringUp 0x01920019
  BOOL BringUp(const CEntityEvent &__eeInput);
  BOOL H0x0192001a_BringUp_01(const CEntityEvent &__eeInput);
  BOOL H0x0192001b_BringUp_02(const CEntityEvent &__eeInput);
  BOOL H0x0192001c_BringUp_03(const CEntityEvent &__eeInput);
  BOOL H0x0192001d_BringUp_04(const CEntityEvent &__eeInput);
  BOOL H0x0192001e_BringUp_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Fire 0x0192001f
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x01920020_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01920021_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01920022_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01920023_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01920024_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01920025_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01920026_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01920027_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x01920028_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x01920029_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x0192002a_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x0192002b_Fire_12(const CEntityEvent &__eeInput);
  BOOL H0x0192002c_Fire_13(const CEntityEvent &__eeInput);
  BOOL H0x0192002d_Fire_14(const CEntityEvent &__eeInput);
  BOOL H0x0192002e_Fire_15(const CEntityEvent &__eeInput);
  BOOL H0x0192002f_Fire_16(const CEntityEvent &__eeInput);
  BOOL H0x01920030_Fire_17(const CEntityEvent &__eeInput);
  BOOL H0x01920031_Fire_18(const CEntityEvent &__eeInput);
  BOOL H0x01920032_Fire_19(const CEntityEvent &__eeInput);
  BOOL H0x01920033_Fire_20(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_SecondaryFire 0x01920034
  BOOL SecondaryFire(const CEntityEvent &__eeInput);
  BOOL H0x01920035_SecondaryFire_01(const CEntityEvent &__eeInput);
  BOOL H0x01920036_SecondaryFire_02(const CEntityEvent &__eeInput);
  BOOL H0x01920037_SecondaryFire_03(const CEntityEvent &__eeInput);
  BOOL H0x01920038_SecondaryFire_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_SecFireNone 0x01920039
  BOOL SecFireNone(const CEntityEvent &__eeInput);
  BOOL H0x0192003a_SecFireNone_01(const CEntityEvent &__eeInput);
  BOOL H0x0192003b_SecFireNone_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_SwingKnife 0x0192003c
  BOOL SwingKnife(const CEntityEvent &__eeInput);
  BOOL H0x0192003d_SwingKnife_01(const CEntityEvent &__eeInput);
  BOOL H0x0192003e_SwingKnife_02(const CEntityEvent &__eeInput);
  BOOL H0x0192003f_SwingKnife_03(const CEntityEvent &__eeInput);
  BOOL H0x01920040_SwingKnife_04(const CEntityEvent &__eeInput);
  BOOL H0x01920041_SwingKnife_05(const CEntityEvent &__eeInput);
  BOOL H0x01920042_SwingKnife_06(const CEntityEvent &__eeInput);
  BOOL H0x01920043_SwingKnife_07(const CEntityEvent &__eeInput);
  BOOL H0x01920044_SwingKnife_08(const CEntityEvent &__eeInput);
  BOOL H0x01920045_SwingKnife_09(const CEntityEvent &__eeInput);
  BOOL H0x01920046_SwingKnife_10(const CEntityEvent &__eeInput);
  BOOL H0x01920047_SwingKnife_11(const CEntityEvent &__eeInput);
  BOOL H0x01920048_SwingKnife_12(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireColt 0x01920049
  BOOL FireColt(const CEntityEvent &__eeInput);
  BOOL H0x0192004a_FireColt_01(const CEntityEvent &__eeInput);
  BOOL H0x0192004b_FireColt_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ReloadColt 0x0192004c
  BOOL ReloadColt(const CEntityEvent &__eeInput);
  BOOL H0x0192004d_ReloadColt_01(const CEntityEvent &__eeInput);
  BOOL H0x0192004e_ReloadColt_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireDoubleColt 0x0192004f
  BOOL FireDoubleColt(const CEntityEvent &__eeInput);
  BOOL H0x01920050_FireDoubleColt_01(const CEntityEvent &__eeInput);
  BOOL H0x01920051_FireDoubleColt_02(const CEntityEvent &__eeInput);
  BOOL H0x01920052_FireDoubleColt_03(const CEntityEvent &__eeInput);
  BOOL H0x01920053_FireDoubleColt_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ReloadDoubleColt 0x01920054
  BOOL ReloadDoubleColt(const CEntityEvent &__eeInput);
  BOOL H0x01920055_ReloadDoubleColt_01(const CEntityEvent &__eeInput);
  BOOL H0x01920056_ReloadDoubleColt_02(const CEntityEvent &__eeInput);
  BOOL H0x01920057_ReloadDoubleColt_03(const CEntityEvent &__eeInput);
  BOOL H0x01920058_ReloadDoubleColt_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireSingleShotgun 0x01920059
  BOOL FireSingleShotgun(const CEntityEvent &__eeInput);
  BOOL H0x0192005a_FireSingleShotgun_01(const CEntityEvent &__eeInput);
  BOOL H0x0192005b_FireSingleShotgun_02(const CEntityEvent &__eeInput);
  BOOL H0x0192005c_FireSingleShotgun_03(const CEntityEvent &__eeInput);
  BOOL H0x0192005d_FireSingleShotgun_04(const CEntityEvent &__eeInput);
  BOOL H0x0192005e_FireSingleShotgun_05(const CEntityEvent &__eeInput);
  BOOL H0x0192005f_FireSingleShotgun_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireDoubleShotgun 0x01920060
  BOOL FireDoubleShotgun(const CEntityEvent &__eeInput);
  BOOL H0x01920061_FireDoubleShotgun_01(const CEntityEvent &__eeInput);
  BOOL H0x01920062_FireDoubleShotgun_02(const CEntityEvent &__eeInput);
  BOOL H0x01920063_FireDoubleShotgun_03(const CEntityEvent &__eeInput);
  BOOL H0x01920064_FireDoubleShotgun_04(const CEntityEvent &__eeInput);
  BOOL H0x01920065_FireDoubleShotgun_05(const CEntityEvent &__eeInput);
  BOOL H0x01920066_FireDoubleShotgun_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_TommyGunStart 0x01920067
  BOOL TommyGunStart(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_TommyGunStop 0x01920068
  BOOL TommyGunStop(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireTommyGun 0x01920069
  BOOL FireTommyGun(const CEntityEvent &__eeInput);
  BOOL H0x0192006a_FireTommyGun_01(const CEntityEvent &__eeInput);
  BOOL H0x0192006b_FireTommyGun_02(const CEntityEvent &__eeInput);
  BOOL H0x0192006c_FireTommyGun_03(const CEntityEvent &__eeInput);
  BOOL H0x0192006d_FireTommyGun_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireSniper 0x0192006e
  BOOL FireSniper(const CEntityEvent &__eeInput);
  BOOL H0x0192006f_FireSniper_01(const CEntityEvent &__eeInput);
  BOOL H0x01920070_FireSniper_02(const CEntityEvent &__eeInput);
  BOOL H0x01920071_FireSniper_03(const CEntityEvent &__eeInput);
  BOOL H0x01920072_FireSniper_04(const CEntityEvent &__eeInput);
  BOOL H0x01920073_FireSniper_05(const CEntityEvent &__eeInput);
  BOOL H0x01920074_FireSniper_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunSpinUp 0x01920075
  BOOL MiniGunSpinUp(const CEntityEvent &__eeInput);
  BOOL H0x01920076_MiniGunSpinUp_01(const CEntityEvent &__eeInput);
  BOOL H0x01920077_MiniGunSpinUp_02(const CEntityEvent &__eeInput);
  BOOL H0x01920078_MiniGunSpinUp_03(const CEntityEvent &__eeInput);
  BOOL H0x01920079_MiniGunSpinUp_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunFire 0x0192007a
  BOOL MiniGunFire(const CEntityEvent &__eeInput);
  BOOL H0x0192007b_MiniGunFire_01(const CEntityEvent &__eeInput);
  BOOL H0x0192007c_MiniGunFire_02(const CEntityEvent &__eeInput);
  BOOL H0x0192007d_MiniGunFire_03(const CEntityEvent &__eeInput);
  BOOL H0x0192007e_MiniGunFire_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunSpinDown 0x0192007f
  BOOL MiniGunSpinDown(const CEntityEvent &__eeInput);
  BOOL H0x01920080_MiniGunSpinDown_01(const CEntityEvent &__eeInput);
  BOOL H0x01920081_MiniGunSpinDown_02(const CEntityEvent &__eeInput);
  BOOL H0x01920082_MiniGunSpinDown_03(const CEntityEvent &__eeInput);
  BOOL H0x01920083_MiniGunSpinDown_04(const CEntityEvent &__eeInput);
  BOOL H0x01920084_MiniGunSpinDown_05(const CEntityEvent &__eeInput);
  BOOL H0x01920085_MiniGunSpinDown_06(const CEntityEvent &__eeInput);
  BOOL H0x01920086_MiniGunSpinDown_07(const CEntityEvent &__eeInput);
  BOOL H0x01920087_MiniGunSpinDown_08(const CEntityEvent &__eeInput);
  BOOL H0x01920088_MiniGunSpinDown_09(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireRocketLauncher 0x01920089
  BOOL FireRocketLauncher(const CEntityEvent &__eeInput);
  BOOL H0x0192008a_FireRocketLauncher_01(const CEntityEvent &__eeInput);
  BOOL H0x0192008b_FireRocketLauncher_02(const CEntityEvent &__eeInput);
  BOOL H0x0192008c_FireRocketLauncher_03(const CEntityEvent &__eeInput);
  BOOL H0x0192008d_FireRocketLauncher_04(const CEntityEvent &__eeInput);
  BOOL H0x0192008e_FireRocketLauncher_05(const CEntityEvent &__eeInput);
  BOOL H0x0192008f_FireRocketLauncher_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireGrenadeLauncher 0x01920090
  BOOL FireGrenadeLauncher(const CEntityEvent &__eeInput);
  BOOL H0x01920091_FireGrenadeLauncher_01(const CEntityEvent &__eeInput);
  BOOL H0x01920092_FireGrenadeLauncher_02(const CEntityEvent &__eeInput);
  BOOL H0x01920093_FireGrenadeLauncher_03(const CEntityEvent &__eeInput);
  BOOL H0x01920094_FireGrenadeLauncher_04(const CEntityEvent &__eeInput);
  BOOL H0x01920095_FireGrenadeLauncher_05(const CEntityEvent &__eeInput);
  BOOL H0x01920096_FireGrenadeLauncher_06(const CEntityEvent &__eeInput);
  BOOL H0x01920097_FireGrenadeLauncher_07(const CEntityEvent &__eeInput);
  BOOL H0x01920098_FireGrenadeLauncher_08(const CEntityEvent &__eeInput);
  BOOL H0x01920099_FireGrenadeLauncher_09(const CEntityEvent &__eeInput);
  BOOL H0x0192009a_FireGrenadeLauncher_10(const CEntityEvent &__eeInput);
  BOOL H0x0192009b_FireGrenadeLauncher_11(const CEntityEvent &__eeInput);
  BOOL H0x0192009c_FireGrenadeLauncher_12(const CEntityEvent &__eeInput);
  BOOL H0x0192009d_FireGrenadeLauncher_13(const CEntityEvent &__eeInput);
  BOOL H0x0192009e_FireGrenadeLauncher_14(const CEntityEvent &__eeInput);
  BOOL H0x0192009f_FireGrenadeLauncher_15(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_PlasmaThrowerFire 0x019200a0
  BOOL PlasmaThrowerFire(const CEntityEvent &__eeInput);
  BOOL H0x019200a1_PlasmaThrowerFire_01(const CEntityEvent &__eeInput);
  BOOL H0x019200a2_PlasmaThrowerFire_02(const CEntityEvent &__eeInput);
  BOOL H0x019200a3_PlasmaThrowerFire_03(const CEntityEvent &__eeInput);
  BOOL H0x019200a4_PlasmaThrowerFire_04(const CEntityEvent &__eeInput);
  BOOL H0x019200a5_PlasmaThrowerFire_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_PlasmaThrowerSecFire 0x019200a6
  BOOL PlasmaThrowerSecFire(const CEntityEvent &__eeInput);
  BOOL H0x019200a7_PlasmaThrowerSecFire_01(const CEntityEvent &__eeInput);
  BOOL H0x019200a8_PlasmaThrowerSecFire_02(const CEntityEvent &__eeInput);
  BOOL H0x019200a9_PlasmaThrowerSecFire_03(const CEntityEvent &__eeInput);
  BOOL H0x019200aa_PlasmaThrowerSecFire_04(const CEntityEvent &__eeInput);
  BOOL H0x019200ab_PlasmaThrowerSecFire_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireEnergyMine 0x019200ac
  BOOL FireEnergyMine(const CEntityEvent &__eeInput);
  BOOL H0x019200ad_FireEnergyMine_01(const CEntityEvent &__eeInput);
  BOOL H0x019200ae_FireEnergyMine_02(const CEntityEvent &__eeInput);
  BOOL H0x019200af_FireEnergyMine_03(const CEntityEvent &__eeInput);
  BOOL H0x019200b0_FireEnergyMine_04(const CEntityEvent &__eeInput);
  BOOL H0x019200b1_FireEnergyMine_05(const CEntityEvent &__eeInput);
  BOOL H0x019200b2_FireEnergyMine_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireEnergyMineSecondary 0x019200b3
  BOOL FireEnergyMineSecondary(const CEntityEvent &__eeInput);
  BOOL H0x019200b4_FireEnergyMineSecondary_01(const CEntityEvent &__eeInput);
  BOOL H0x019200b5_FireEnergyMineSecondary_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FlamerStart 0x019200b6
  BOOL FlamerStart(const CEntityEvent &__eeInput);
  BOOL H0x019200b7_FlamerStart_01(const CEntityEvent &__eeInput);
  BOOL H0x019200b8_FlamerStart_02(const CEntityEvent &__eeInput);
  BOOL H0x019200b9_FlamerStart_03(const CEntityEvent &__eeInput);
  BOOL H0x019200ba_FlamerStart_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FlamerFire 0x019200bb
  BOOL FlamerFire(const CEntityEvent &__eeInput);
  BOOL H0x019200bc_FlamerFire_01(const CEntityEvent &__eeInput);
  BOOL H0x019200bd_FlamerFire_02(const CEntityEvent &__eeInput);
  BOOL H0x019200be_FlamerFire_03(const CEntityEvent &__eeInput);
  BOOL H0x019200bf_FlamerFire_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FlamerStop 0x019200c0
  BOOL FlamerStop(const CEntityEvent &__eeInput);
  BOOL H0x019200c1_FlamerStop_01(const CEntityEvent &__eeInput);
  BOOL H0x019200c2_FlamerStop_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChainsawFire 0x019200c3
  BOOL ChainsawFire(const CEntityEvent &__eeInput);
  BOOL H0x019200c4_ChainsawFire_01(const CEntityEvent &__eeInput);
  BOOL H0x019200c5_ChainsawFire_02(const CEntityEvent &__eeInput);
  BOOL H0x019200c6_ChainsawFire_03(const CEntityEvent &__eeInput);
  BOOL H0x019200c7_ChainsawFire_04(const CEntityEvent &__eeInput);
  BOOL H0x019200c8_ChainsawFire_05(const CEntityEvent &__eeInput);
  BOOL H0x019200c9_ChainsawFire_06(const CEntityEvent &__eeInput);
  BOOL H0x019200ca_ChainsawFire_07(const CEntityEvent &__eeInput);
  BOOL H0x019200cb_ChainsawFire_08(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChainsawBringUp 0x019200cc
  BOOL ChainsawBringUp(const CEntityEvent &__eeInput);
  BOOL H0x019200cd_ChainsawBringUp_01(const CEntityEvent &__eeInput);
  BOOL H0x019200ce_ChainsawBringUp_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireLaser 0x019200cf
  BOOL FireLaser(const CEntityEvent &__eeInput);
  BOOL H0x019200d0_FireLaser_01(const CEntityEvent &__eeInput);
  BOOL H0x019200d1_FireLaser_02(const CEntityEvent &__eeInput);
  BOOL H0x019200d2_FireLaser_03(const CEntityEvent &__eeInput);
  BOOL H0x019200d3_FireLaser_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_GhostBusterStart 0x019200d4
  BOOL GhostBusterStart(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_GhostBusterStop 0x019200d5
  BOOL GhostBusterStop(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireGhostBuster 0x019200d6
  BOOL FireGhostBuster(const CEntityEvent &__eeInput);
  BOOL H0x019200d7_FireGhostBuster_01(const CEntityEvent &__eeInput);
  BOOL H0x019200d8_FireGhostBuster_02(const CEntityEvent &__eeInput);
  BOOL H0x019200d9_FireGhostBuster_03(const CEntityEvent &__eeInput);
  BOOL H0x019200da_FireGhostBuster_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_CannonFireStart 0x019200db
  BOOL CannonFireStart(const CEntityEvent &__eeInput);
  BOOL H0x019200dc_CannonFireStart_01(const CEntityEvent &__eeInput);
  BOOL H0x019200dd_CannonFireStart_02(const CEntityEvent &__eeInput);
  BOOL H0x019200de_CannonFireStart_03(const CEntityEvent &__eeInput);
  BOOL H0x019200df_CannonFireStart_04(const CEntityEvent &__eeInput);
  BOOL H0x019200e0_CannonFireStart_05(const CEntityEvent &__eeInput);
  BOOL H0x019200e1_CannonFireStart_06(const CEntityEvent &__eeInput);
  BOOL H0x019200e2_CannonFireStart_07(const CEntityEvent &__eeInput);
  BOOL H0x019200e3_CannonFireStart_08(const CEntityEvent &__eeInput);
  BOOL H0x019200e4_CannonFireStart_09(const CEntityEvent &__eeInput);
  BOOL H0x019200e5_CannonFireStart_10(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Reload 0x019200e6
  BOOL Reload(const CEntityEvent &__eeInput);
  BOOL H0x019200e7_Reload_01(const CEntityEvent &__eeInput);
  BOOL H0x019200e8_Reload_02(const CEntityEvent &__eeInput);
  BOOL H0x019200e9_Reload_03(const CEntityEvent &__eeInput);
  BOOL H0x019200ea_Reload_04(const CEntityEvent &__eeInput);
  BOOL H0x019200eb_Reload_05(const CEntityEvent &__eeInput);
  BOOL H0x019200ec_Reload_06(const CEntityEvent &__eeInput);
  BOOL H0x019200ed_Reload_07(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChangeKnifeStand 0x019200ee
  BOOL ChangeKnifeStand(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChangeToIronCannon 0x019200ef
  BOOL ChangeToIronCannon(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_BoringWeaponAnimation 0x019200f0
  BOOL BoringWeaponAnimation(const CEntityEvent &__eeInput);
  BOOL H0x019200f1_BoringWeaponAnimation_01(const CEntityEvent &__eeInput);
  BOOL H0x019200f2_BoringWeaponAnimation_02(const CEntityEvent &__eeInput);
  BOOL H0x019200f3_BoringWeaponAnimation_03(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Idle 0x019200f4
  BOOL Idle(const CEntityEvent &__eeInput);
  BOOL H0x019200f5_Idle_01(const CEntityEvent &__eeInput);
  BOOL H0x019200f6_Idle_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Stopped 0x019200f7
  BOOL Stopped(const CEntityEvent &__eeInput);
  BOOL H0x019200f8_Stopped_01(const CEntityEvent &__eeInput);
  BOOL H0x019200f9_Stopped_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x019200fa_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x019200fb_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_PlayerWeapons_INCLUDED
