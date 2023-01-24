// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

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
  WEAPON_LASER = 14,
  WEAPON_IRONCANNON = 16,
  WEAPON_LAST = 17,
};
DECL_DLL inline void ClearToDefault(WeaponType &e) { e = (WeaponType)0; } ;
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
  INDEX m_iAvailableWeapons;
  BOOL m_bChangeWeapon;
  BOOL m_bReloadWeapon;
  BOOL m_bMirrorFire;
  INDEX m_iAnim;
  FLOAT m_fAnimWaitTime;
  FLOAT m_tmRangeSoundSpawned;
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
  INDEX m_iBullets;
  INDEX m_iMaxBullets;
  INDEX m_iShells;
  INDEX m_iMaxShells;
  INDEX m_iRockets;
  INDEX m_iMaxRockets;
  INDEX m_iGrenades;
  INDEX m_iMaxGrenades;
  INDEX m_iElectricity;
  INDEX m_iMaxElectricity;
  INDEX m_iIronBalls;
  INDEX m_iMaxIronBalls;
  INDEX m_iKnifeStand;
  INDEX m_iColtBullets;
  FLOAT m_aMiniGun;
  FLOAT m_aMiniGunLast;
  FLOAT m_aMiniGunSpeed;
  FLOAT3D m_iLastBulletPosition;
  INDEX m_iBulletsOnFireStart;
  INDEX m_iLaserBarrel;
  INDEX m_iFlare;
  INDEX m_iSecondFlare;
  FLOAT m_fWeaponDrawPowerOld;
  FLOAT m_fWeaponDrawPower;
  FLOAT m_tmDrawStartTime;
  CEntityPointer m_penPrediction;
CEntity * penBullet;
CPlacement3D plBullet;
FLOAT3D vBulletDestination;
   void AddDependentsToPrediction(void);
   void Precache(void);
   CPlayer * GetPlayer(void);
   CPlayerAnimator * GetAnimator(void);
   void DoRecoil(void);
   BOOL HoldingFire(void);
   void RenderWeaponModel(CPerspectiveProjection3D & prProjection,CDrawPort * pdp,FLOAT3D vViewerLightDirection,COLOR colViewerLight,COLOR colViewerAmbient,BOOL bRender);
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
   void Setup3DSoundParameters(void);
   BOOL CutWithKnife(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fWide,FLOAT fThickness,FLOAT fDamage);
   void PrepareBullet(FLOAT fX,FLOAT fY,FLOAT fDamage);
   void FireOneBullet(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage);
   void FireBullets(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,INDEX iBullets,FLOAT * afPositions,FLOAT fStretch,FLOAT fJitter);
   void FireMachineBullet(FLOAT fX,FLOAT fY,FLOAT fRange,FLOAT fDamage,FLOAT fJitter,FLOAT fBulletSize);
   void FireGrenade(INDEX iPower);
   void FireRocket(void);
   void FireLaserRay(void);
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
   FLOAT MiniGunBoring(void);
   FLOAT RocketLauncherBoring(void);
   FLOAT GrenadeLauncherBoring(void);
   FLOAT LaserBoring(void);
   FLOAT CannonBoring(void);
   WeaponType PrimaryToSecondary(WeaponType wt);
   WeaponType SecondaryToPrimary(WeaponType wt);
   WeaponType FindWeaponInDirection(INDEX iDir);
   WeaponType FindPrimaryWeaponInDirection(INDEX iDir);
   void SelectWeaponChange(INDEX iSelect);
   void MinigunSmoke();
#define  STATE_CPlayerWeapons_ChangeWeapon 0x01920006
  BOOL ChangeWeapon(const CEntityEvent &__eeInput);
  BOOL H0x01920007_ChangeWeapon_01(const CEntityEvent &__eeInput);
  BOOL H0x01920008_ChangeWeapon_02(const CEntityEvent &__eeInput);
  BOOL H0x01920009_ChangeWeapon_03(const CEntityEvent &__eeInput);
  BOOL H0x0192000a_ChangeWeapon_04(const CEntityEvent &__eeInput);
  BOOL H0x0192000b_ChangeWeapon_05(const CEntityEvent &__eeInput);
  BOOL H0x0192000c_ChangeWeapon_06(const CEntityEvent &__eeInput);
  BOOL H0x0192000d_ChangeWeapon_07(const CEntityEvent &__eeInput);
  BOOL H0x0192000e_ChangeWeapon_08(const CEntityEvent &__eeInput);
  BOOL H0x0192000f_ChangeWeapon_09(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_PutDown 0x01920010
  BOOL PutDown(const CEntityEvent &__eeInput);
  BOOL H0x01920011_PutDown_01(const CEntityEvent &__eeInput);
  BOOL H0x01920012_PutDown_02(const CEntityEvent &__eeInput);
  BOOL H0x01920013_PutDown_03(const CEntityEvent &__eeInput);
  BOOL H0x01920014_PutDown_04(const CEntityEvent &__eeInput);
  BOOL H0x01920015_PutDown_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_BringUp 0x01920016
  BOOL BringUp(const CEntityEvent &__eeInput);
  BOOL H0x01920017_BringUp_01(const CEntityEvent &__eeInput);
  BOOL H0x01920018_BringUp_02(const CEntityEvent &__eeInput);
  BOOL H0x01920019_BringUp_03(const CEntityEvent &__eeInput);
  BOOL H0x0192001a_BringUp_04(const CEntityEvent &__eeInput);
  BOOL H0x0192001b_BringUp_05(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Fire 0x0192001c
  BOOL Fire(const CEntityEvent &__eeInput);
  BOOL H0x0192001d_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x0192001e_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x0192001f_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01920020_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01920021_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01920022_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01920023_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01920024_Fire_08(const CEntityEvent &__eeInput);
  BOOL H0x01920025_Fire_09(const CEntityEvent &__eeInput);
  BOOL H0x01920026_Fire_10(const CEntityEvent &__eeInput);
  BOOL H0x01920027_Fire_11(const CEntityEvent &__eeInput);
  BOOL H0x01920028_Fire_12(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_SwingKnife 0x01920029
  BOOL SwingKnife(const CEntityEvent &__eeInput);
  BOOL H0x0192002a_SwingKnife_01(const CEntityEvent &__eeInput);
  BOOL H0x0192002b_SwingKnife_02(const CEntityEvent &__eeInput);
  BOOL H0x0192002c_SwingKnife_03(const CEntityEvent &__eeInput);
  BOOL H0x0192002d_SwingKnife_04(const CEntityEvent &__eeInput);
  BOOL H0x0192002e_SwingKnife_05(const CEntityEvent &__eeInput);
  BOOL H0x0192002f_SwingKnife_06(const CEntityEvent &__eeInput);
  BOOL H0x01920030_SwingKnife_07(const CEntityEvent &__eeInput);
  BOOL H0x01920031_SwingKnife_08(const CEntityEvent &__eeInput);
  BOOL H0x01920032_SwingKnife_09(const CEntityEvent &__eeInput);
  BOOL H0x01920033_SwingKnife_10(const CEntityEvent &__eeInput);
  BOOL H0x01920034_SwingKnife_11(const CEntityEvent &__eeInput);
  BOOL H0x01920035_SwingKnife_12(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireColt 0x01920036
  BOOL FireColt(const CEntityEvent &__eeInput);
  BOOL H0x01920037_FireColt_01(const CEntityEvent &__eeInput);
  BOOL H0x01920038_FireColt_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ReloadColt 0x01920039
  BOOL ReloadColt(const CEntityEvent &__eeInput);
  BOOL H0x0192003a_ReloadColt_01(const CEntityEvent &__eeInput);
  BOOL H0x0192003b_ReloadColt_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireDoubleColt 0x0192003c
  BOOL FireDoubleColt(const CEntityEvent &__eeInput);
  BOOL H0x0192003d_FireDoubleColt_01(const CEntityEvent &__eeInput);
  BOOL H0x0192003e_FireDoubleColt_02(const CEntityEvent &__eeInput);
  BOOL H0x0192003f_FireDoubleColt_03(const CEntityEvent &__eeInput);
  BOOL H0x01920040_FireDoubleColt_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ReloadDoubleColt 0x01920041
  BOOL ReloadDoubleColt(const CEntityEvent &__eeInput);
  BOOL H0x01920042_ReloadDoubleColt_01(const CEntityEvent &__eeInput);
  BOOL H0x01920043_ReloadDoubleColt_02(const CEntityEvent &__eeInput);
  BOOL H0x01920044_ReloadDoubleColt_03(const CEntityEvent &__eeInput);
  BOOL H0x01920045_ReloadDoubleColt_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireSingleShotgun 0x01920046
  BOOL FireSingleShotgun(const CEntityEvent &__eeInput);
  BOOL H0x01920047_FireSingleShotgun_01(const CEntityEvent &__eeInput);
  BOOL H0x01920048_FireSingleShotgun_02(const CEntityEvent &__eeInput);
  BOOL H0x01920049_FireSingleShotgun_03(const CEntityEvent &__eeInput);
  BOOL H0x0192004a_FireSingleShotgun_04(const CEntityEvent &__eeInput);
  BOOL H0x0192004b_FireSingleShotgun_05(const CEntityEvent &__eeInput);
  BOOL H0x0192004c_FireSingleShotgun_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireDoubleShotgun 0x0192004d
  BOOL FireDoubleShotgun(const CEntityEvent &__eeInput);
  BOOL H0x0192004e_FireDoubleShotgun_01(const CEntityEvent &__eeInput);
  BOOL H0x0192004f_FireDoubleShotgun_02(const CEntityEvent &__eeInput);
  BOOL H0x01920050_FireDoubleShotgun_03(const CEntityEvent &__eeInput);
  BOOL H0x01920051_FireDoubleShotgun_04(const CEntityEvent &__eeInput);
  BOOL H0x01920052_FireDoubleShotgun_05(const CEntityEvent &__eeInput);
  BOOL H0x01920053_FireDoubleShotgun_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_TommyGunStart 0x01920054
  BOOL TommyGunStart(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_TommyGunStop 0x01920055
  BOOL TommyGunStop(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireTommyGun 0x01920056
  BOOL FireTommyGun(const CEntityEvent &__eeInput);
  BOOL H0x01920057_FireTommyGun_01(const CEntityEvent &__eeInput);
  BOOL H0x01920058_FireTommyGun_02(const CEntityEvent &__eeInput);
  BOOL H0x01920059_FireTommyGun_03(const CEntityEvent &__eeInput);
  BOOL H0x0192005a_FireTommyGun_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunSpinUp 0x0192005b
  BOOL MiniGunSpinUp(const CEntityEvent &__eeInput);
  BOOL H0x0192005c_MiniGunSpinUp_01(const CEntityEvent &__eeInput);
  BOOL H0x0192005d_MiniGunSpinUp_02(const CEntityEvent &__eeInput);
  BOOL H0x0192005e_MiniGunSpinUp_03(const CEntityEvent &__eeInput);
  BOOL H0x0192005f_MiniGunSpinUp_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunFire 0x01920060
  BOOL MiniGunFire(const CEntityEvent &__eeInput);
  BOOL H0x01920061_MiniGunFire_01(const CEntityEvent &__eeInput);
  BOOL H0x01920062_MiniGunFire_02(const CEntityEvent &__eeInput);
  BOOL H0x01920063_MiniGunFire_03(const CEntityEvent &__eeInput);
  BOOL H0x01920064_MiniGunFire_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_MiniGunSpinDown 0x01920065
  BOOL MiniGunSpinDown(const CEntityEvent &__eeInput);
  BOOL H0x01920066_MiniGunSpinDown_01(const CEntityEvent &__eeInput);
  BOOL H0x01920067_MiniGunSpinDown_02(const CEntityEvent &__eeInput);
  BOOL H0x01920068_MiniGunSpinDown_03(const CEntityEvent &__eeInput);
  BOOL H0x01920069_MiniGunSpinDown_04(const CEntityEvent &__eeInput);
  BOOL H0x0192006a_MiniGunSpinDown_05(const CEntityEvent &__eeInput);
  BOOL H0x0192006b_MiniGunSpinDown_06(const CEntityEvent &__eeInput);
  BOOL H0x0192006c_MiniGunSpinDown_07(const CEntityEvent &__eeInput);
  BOOL H0x0192006d_MiniGunSpinDown_08(const CEntityEvent &__eeInput);
  BOOL H0x0192006e_MiniGunSpinDown_09(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireRocketLauncher 0x0192006f
  BOOL FireRocketLauncher(const CEntityEvent &__eeInput);
  BOOL H0x01920070_FireRocketLauncher_01(const CEntityEvent &__eeInput);
  BOOL H0x01920071_FireRocketLauncher_02(const CEntityEvent &__eeInput);
  BOOL H0x01920072_FireRocketLauncher_03(const CEntityEvent &__eeInput);
  BOOL H0x01920073_FireRocketLauncher_04(const CEntityEvent &__eeInput);
  BOOL H0x01920074_FireRocketLauncher_05(const CEntityEvent &__eeInput);
  BOOL H0x01920075_FireRocketLauncher_06(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireGrenadeLauncher 0x01920076
  BOOL FireGrenadeLauncher(const CEntityEvent &__eeInput);
  BOOL H0x01920077_FireGrenadeLauncher_01(const CEntityEvent &__eeInput);
  BOOL H0x01920078_FireGrenadeLauncher_02(const CEntityEvent &__eeInput);
  BOOL H0x01920079_FireGrenadeLauncher_03(const CEntityEvent &__eeInput);
  BOOL H0x0192007a_FireGrenadeLauncher_04(const CEntityEvent &__eeInput);
  BOOL H0x0192007b_FireGrenadeLauncher_05(const CEntityEvent &__eeInput);
  BOOL H0x0192007c_FireGrenadeLauncher_06(const CEntityEvent &__eeInput);
  BOOL H0x0192007d_FireGrenadeLauncher_07(const CEntityEvent &__eeInput);
  BOOL H0x0192007e_FireGrenadeLauncher_08(const CEntityEvent &__eeInput);
  BOOL H0x0192007f_FireGrenadeLauncher_09(const CEntityEvent &__eeInput);
  BOOL H0x01920080_FireGrenadeLauncher_10(const CEntityEvent &__eeInput);
  BOOL H0x01920081_FireGrenadeLauncher_11(const CEntityEvent &__eeInput);
  BOOL H0x01920082_FireGrenadeLauncher_12(const CEntityEvent &__eeInput);
  BOOL H0x01920083_FireGrenadeLauncher_13(const CEntityEvent &__eeInput);
  BOOL H0x01920084_FireGrenadeLauncher_14(const CEntityEvent &__eeInput);
  BOOL H0x01920085_FireGrenadeLauncher_15(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_FireLaser 0x01920086
  BOOL FireLaser(const CEntityEvent &__eeInput);
  BOOL H0x01920087_FireLaser_01(const CEntityEvent &__eeInput);
  BOOL H0x01920088_FireLaser_02(const CEntityEvent &__eeInput);
  BOOL H0x01920089_FireLaser_03(const CEntityEvent &__eeInput);
  BOOL H0x0192008a_FireLaser_04(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_CannonFireStart 0x0192008b
  BOOL CannonFireStart(const CEntityEvent &__eeInput);
  BOOL H0x0192008c_CannonFireStart_01(const CEntityEvent &__eeInput);
  BOOL H0x0192008d_CannonFireStart_02(const CEntityEvent &__eeInput);
  BOOL H0x0192008e_CannonFireStart_03(const CEntityEvent &__eeInput);
  BOOL H0x0192008f_CannonFireStart_04(const CEntityEvent &__eeInput);
  BOOL H0x01920090_CannonFireStart_05(const CEntityEvent &__eeInput);
  BOOL H0x01920091_CannonFireStart_06(const CEntityEvent &__eeInput);
  BOOL H0x01920092_CannonFireStart_07(const CEntityEvent &__eeInput);
  BOOL H0x01920093_CannonFireStart_08(const CEntityEvent &__eeInput);
  BOOL H0x01920094_CannonFireStart_09(const CEntityEvent &__eeInput);
  BOOL H0x01920095_CannonFireStart_10(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Reload 0x01920096
  BOOL Reload(const CEntityEvent &__eeInput);
  BOOL H0x01920097_Reload_01(const CEntityEvent &__eeInput);
  BOOL H0x01920098_Reload_02(const CEntityEvent &__eeInput);
  BOOL H0x01920099_Reload_03(const CEntityEvent &__eeInput);
  BOOL H0x0192009a_Reload_04(const CEntityEvent &__eeInput);
  BOOL H0x0192009b_Reload_05(const CEntityEvent &__eeInput);
  BOOL H0x0192009c_Reload_06(const CEntityEvent &__eeInput);
  BOOL H0x0192009d_Reload_07(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChangeKnifeStand 0x0192009e
  BOOL ChangeKnifeStand(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_ChangeToIronCannon 0x0192009f
  BOOL ChangeToIronCannon(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_BoringWeaponAnimation 0x019200a0
  BOOL BoringWeaponAnimation(const CEntityEvent &__eeInput);
  BOOL H0x019200a1_BoringWeaponAnimation_01(const CEntityEvent &__eeInput);
  BOOL H0x019200a2_BoringWeaponAnimation_02(const CEntityEvent &__eeInput);
  BOOL H0x019200a3_BoringWeaponAnimation_03(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Idle 0x019200a4
  BOOL Idle(const CEntityEvent &__eeInput);
  BOOL H0x019200a5_Idle_01(const CEntityEvent &__eeInput);
  BOOL H0x019200a6_Idle_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Stopped 0x019200a7
  BOOL Stopped(const CEntityEvent &__eeInput);
  BOOL H0x019200a8_Stopped_01(const CEntityEvent &__eeInput);
  BOOL H0x019200a9_Stopped_02(const CEntityEvent &__eeInput);
#define  STATE_CPlayerWeapons_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x019200aa_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x019200ab_Main_02(const CEntityEvent &__eeInput);
};

static const char *CPlayerWeapons_propnames[] = {
  "m_penPlayer",
  "m_bFireWeapon",
  "m_bHasAmmo",
  "m_iCurrentWeapon",
  "m_iWantedWeapon",
  "m_iPreviousWeapon",
  "m_iAvailableWeapons",
  "m_bChangeWeapon",
  "m_bReloadWeapon",
  "m_bMirrorFire",
  "m_iAnim",
  "m_fAnimWaitTime",
  "m_tmRangeSoundSpawned",
  "m_strLastTarget",
  "m_tmTargetingStarted",
  "m_tmLastTarget",
  "m_tmSnoopingStarted",
  "m_penTargeting",
  "m_moWeapon",
  "m_moWeaponSecond",
  "m_tmWeaponChangeRequired",
  "m_penRayHit",
  "m_fRayHitDistance",
  "m_fEnemyHealth",
  "m_vRayHit",
  "m_vRayHitLast",
  "m_iBullets",
  "m_iMaxBullets",
  "m_iShells",
  "m_iMaxShells",
  "m_iRockets",
  "m_iMaxRockets",
  "m_iGrenades",
  "m_iMaxGrenades",
  "m_iElectricity",
  "m_iMaxElectricity",
  "m_iIronBalls",
  "m_iMaxIronBalls",
  "m_iKnifeStand",
  "m_iColtBullets",
  "m_aMiniGun",
  "m_aMiniGunLast",
  "m_aMiniGunSpeed",
  "m_iLastBulletPosition",
  "m_iBulletsOnFireStart",
  "m_iLaserBarrel",
  "m_iFlare",
  "m_iSecondFlare",
  "m_fWeaponDrawPowerOld",
  "m_fWeaponDrawPower",
  "m_tmDrawStartTime",
  "m_penPrediction",
};
#define CPlayerWeapons_propnamesct ARRAYCOUNT(CPlayerWeapons_propnames)

#endif // _EntitiesV_PlayerWeapons_INCLUDED
