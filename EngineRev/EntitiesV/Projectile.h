// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Projectile_INCLUDED
#define _EntitiesV_Projectile_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#include <EntitiesV/Light.h>
#include <EntitiesV/Flame.h>
extern DECL_DLL CEntityPropertyEnumType ProjectileType_enum;
enum ProjectileType {
  PRT_ROCKET = 0,
  PRT_GRENADE = 1,
  PRT_FLAME = 2,
  PRT_LASER_RAY = 3,
  PRT_WALKER_ROCKET = 4,
  PRT_CATMAN_FIRE = 10,
  PRT_HEADMAN_FIRECRACKER = 11,
  PRT_HEADMAN_ROCKETMAN = 12,
  PRT_HEADMAN_BOMBERMAN = 13,
  PRT_BONEMAN_FIRE = 14,
  PRT_WOMAN_FIRE = 15,
  PRT_DRAGONMAN_FIRE = 16,
  PRT_DRAGONMAN_STRONG_FIRE = 17,
  PRT_STONEMAN_FIRE = 18,
  PRT_STONEMAN_BIG_FIRE = 19,
  PRT_STONEMAN_LARGE_FIRE = 20,
  PRT_LAVAMAN_BIG_BOMB = 21,
  PRT_LAVAMAN_BOMB = 22,
  PRT_LAVAMAN_STONE = 23,
  PRT_ICEMAN_FIRE = 27,
  PRT_ICEMAN_BIG_FIRE = 28,
  PRT_ICEMAN_LARGE_FIRE = 29,
  PRT_WATERMAN_OLD = 30,
  PRT_WATERMAN_BIG = 31,
  PRT_WATERMAN_LARGE = 32,
  PRT_WATERMAN_SMALL = 33,
  PRT_HUANMAN_FIRE = 41,
  PRT_FISHMAN_FIRE = 42,
  PRT_MANTAMAN_FIRE = 43,
  PRT_CYBORG_LASER = 44,
  PRT_CYBORG_BOMB = 45,
  PRT_LAVA_COMET = 50,
  PRT_BEAST_PROJECTILE = 51,
  PRT_BEAST_BIG_PROJECTILE = 52,
  PRT_BEAST_DEBRIS = 53,
  PRT_BEAST_BIG_DEBRIS = 54,
  PRT_DEVIL_LASER = 55,
  PRT_DEVIL_ROCKET = 56,
  PRT_DEVIL_GUIDED_PROJECTILE = 57,
  PRT_GRUNT_PROJECTILE_SOL = 60,
  PRT_GRUNT_PROJECTILE_COM = 64,
  PRT_GUFFY_PROJECTILE = 61,
  PRT_DEMON_FIREBALL = 62,
  PRT_DEMON_FIREBALL_DEBRIS = 63,
  PRT_SHOOTER_WOODEN_DART = 70,
  PRT_SHOOTER_FIREBALL = 71,
  PRT_SHOOTER_FLAME = 72,
  PRT_LARVA_PLASMA = 73,
  PRT_LARVA_TAIL_PROJECTILE = 74,
  PRT_AIRELEMENTAL_WIND = 75,
  PRT_AFTERBURNER_DEBRIS = 76,
  PRT_METEOR = 77,
  PRT_PLASMA = 78,
  PRT_RAILBOLT = 79,
  PRT_RAILBOLT_SPRAY = 80,
  PRT_AIRMAN_LARGE = 81,
  PRT_AIRMAN_BIG = 82,
  PRT_AIRMAN_SMALL = 83,
  PRT_EARTHMAN_BIG_BOMB = 90,
  PRT_EARTHMAN_BIG = 91,
  PRT_EARTHMAN_STONE = 92,
};
DECL_DLL inline void ClearToDefault(ProjectileType &e) { e = (ProjectileType)0; } ;
extern DECL_DLL CEntityPropertyEnumType ProjectileMovingType_enum;
enum ProjectileMovingType {
  PMT_FLYING = 0,
  PMT_SLIDING = 1,
  PMT_GUIDED = 2,
  PMT_GUIDED_FAST = 3,
  PMT_FLYING_REBOUNDING = 4,
  PMT_GUIDED_SLIDING = 5,
};
DECL_DLL inline void ClearToDefault(ProjectileMovingType &e) { e = (ProjectileMovingType)0; } ;
#define EVENTCODE_ELaunchProjectile 0x01f50000
class DECL_DLL ELaunchProjectile : public CEntityEvent {
public:
ELaunchProjectile();
CEntityEvent *MakeCopy(void);
CEntityPointer penLauncher;
enum ProjectileType prtType;
FLOAT fSpeed;
FLOAT fStretch;
};
DECL_DLL inline void ClearToDefault(ELaunchProjectile &e) { e = ELaunchProjectile(); } ;
extern "C" DECL_DLL CDLLEntityClass CProjectile_DLLClass;
class DECL_DLL  CProjectile : public CMovableModelEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
   virtual void SetDefaultProperties(void);
  CEntityPointer m_penLauncher;
  enum ProjectileType m_prtType;
  enum ProjectileMovingType m_pmtMove;
  CEntityPointer m_penParticles;
  CEntityPointer m_penTarget;
  CEntityPointer m_penLastDamaged;
  FLOAT m_fSpeed;
  FLOAT m_fIgnoreTime;
  FLOAT m_fFlyTime;
  FLOAT m_fStartTime;
  FLOAT m_fDamageAmount;
  FLOAT m_fRangeDamageAmount;
  FLOAT m_fDamageHotSpotRange;
  FLOAT m_fDamageFallOffRange;
  FLOAT m_fSoundRange;
  BOOL m_bExplode;
  BOOL m_bLightSource;
  BOOL m_bCanHitHimself;
  BOOL m_bCanBeDestroyed;
  FLOAT m_fWaitAfterDeath;
  FLOAT m_aRotateSpeed;
  FLOAT m_tmExpandBox;
  FLOAT m_tmInvisibility;
  INDEX m_iRebounds;
  FLOAT m_fStretch;
  CSoundObject m_soEffect;
  CSoundObject m_soExplosion;
  FLOAT m_fGuidedMaxSpeedFactor;
  BOOL bLockedOn;
  BOOL m_bLeftFlame;
  INDEX m_iTeam;
  CEntityPointer m_penPrediction;
CLightSource m_lsLightSource;
   void PreMoving(void);
   void PostMoving(void);
   void Read_t(CTStream * istr);
   void DumpSync_t(CTStream & strm,INDEX iExtensiveSyncCheck);
   CLightSource * GetLightSource(void);
   void Copy(CEntity & enOther,ULONG ulFlags);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void SetupLightSource(BOOL bLive);
   void RenderParticles(void);
   void PlayerRocket(void);
   void WalkerRocket(void);
   void WalkerRocketExplosion(void);
   void PlayerRocketExplosion(void);
   void PlayerGrenade(void);
   void PlayerGrenadeExplosion(void);
   void PlayerPlasmaExplosion(void);
   void PlayerPlasma(void);
   void PlayerRailBolt(void);
   void PlayerRailBoltSpray(void);
   void PlayerFlame(void);
   void PlayerLaserRay(void);
   void PlayerLaserWave(void);
   void CatmanProjectile(void);
   void HeadmanFirecracker(void);
   void HeadmanRocketman(void);
   void HeadmanBomberman(void);
   void HeadmanBombermanExplosion(void);
   void CyborgBombExplosion(void);
   void BonemanProjectile(void);
   void WomanProjectile(void);
   void WaterDropProjectile(void);
   void DragonmanProjectile(INDEX iType);
   void ElementalRock(INDEX iSize,INDEX iType);
   void EarthManBomb(void);
   void EarthanBombExplosion(void);
   void EarthmanBombDebrisExplosion(void);
   void LavaManBomb(void);
   void LavamanBombExplosion(void);
   void LavamanBombDebrisExplosion(void);
   void HuanmanProjectile(void);
   void HuanmanProjectileExplosion(void);
   void BeastProjectile(void);
   void BeastBigProjectile(void);
   void BeastDebris(void);
   void BeastBigDebris(void);
   void BeastDebrisExplosion(void);
   void BeastBigDebrisExplosion(void);
   void BeastProjectileExplosion(void);
   void BeastBigProjectileExplosion(void);
   void FishmanProjectile(void);
   void MantamanProjectile(void);
   void DevilLaser(void);
   void DevilRocket(void);
   void DevilRocketExplosion(void);
   void DevilGuidedProjectile(void);
   void DevilGuidedProjectileExplosion(void);
   void CyborgLaser(void);
   void CyborgBomb(void);
   void LavaBall(void);
   void LavaBallExplosion(void);
   void GruntSoldierLaser(void);
   void GruntCommanderLaser(void);
   void GuffyProjectile(void);
   void GuffyProjectileExplosion(void);
   void DemonFireball(void);
   void DemonFireballExplosion(void);
   void LarvaPlasma(void);
   void LarvaPlasmaExplosion(void);
   void LarvaTail(void);
   void LarvaTailExplosion(void);
   void WaterManPlasmaSmall(void);
   void WaterManPlasmaSmallExplosion(void);
   void WaterManPlasmaBig(void);
   void WaterManPlasmaBigExplosion(void);
   void WaterManPlasmaLarge(void);
   void WaterManPlasmaLargeExplosion(void);
   void WindBlastLarge(void);
   void WindBlastBig(void);
   void WindBlastSmall(void);
   void WindBlast(void);
   void Meteor();
   void MeteorExplosion();
   void ShooterWoodenDart(void);
   void ShooterWoodenDartExplosion();
   void ShooterFireball(void);
   void ShooterFireballExplosion();
   void ShooterFlame(void);
   void AfterburnerDebris(void);
   void ProjectileTouch(CEntityPointer penHit);
   void ProjectileHit(void);
   void SpawnEffect(const CPlacement3D & plEffect,const ESpawnEffect & eSpawnEffect);
   void BounceSound(void);
   ANGLE GetRotationSpeed(ANGLE aWantedAngle,ANGLE aRotateSpeed,FLOAT fWaitFrequency);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
#define  STATE_CProjectile_ProjectileFly 0x01f50001
  BOOL ProjectileFly(const CEntityEvent &__eeInput);
  BOOL H0x01f50002_ProjectileFly_01(const CEntityEvent &__eeInput);
  BOOL H0x01f50003_ProjectileFly_02(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedFly 0x01f50004
  BOOL ProjectileGuidedFly(const CEntityEvent &__eeInput);
  BOOL H0x01f50005_ProjectileGuidedFly_01(const CEntityEvent &__eeInput);
  BOOL H0x01f50006_ProjectileGuidedFly_02(const CEntityEvent &__eeInput);
  BOOL H0x01f50007_ProjectileGuidedFly_03(const CEntityEvent &__eeInput);
  BOOL H0x01f50008_ProjectileGuidedFly_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedFastFly 0x01f50009
  BOOL ProjectileGuidedFastFly(const CEntityEvent &__eeInput);
  BOOL H0x01f5000a_ProjectileGuidedFastFly_01(const CEntityEvent &__eeInput);
  BOOL H0x01f5000b_ProjectileGuidedFastFly_02(const CEntityEvent &__eeInput);
  BOOL H0x01f5000c_ProjectileGuidedFastFly_03(const CEntityEvent &__eeInput);
  BOOL H0x01f5000d_ProjectileGuidedFastFly_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedSlide 0x01f5000e
  BOOL ProjectileGuidedSlide(const CEntityEvent &__eeInput);
  BOOL H0x01f5000f_ProjectileGuidedSlide_01(const CEntityEvent &__eeInput);
  BOOL H0x01f50010_ProjectileGuidedSlide_02(const CEntityEvent &__eeInput);
  BOOL H0x01f50011_ProjectileGuidedSlide_03(const CEntityEvent &__eeInput);
  BOOL H0x01f50012_ProjectileGuidedSlide_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileSlide 0x01f50013
  BOOL ProjectileSlide(const CEntityEvent &__eeInput);
  BOOL H0x01f50014_ProjectileSlide_01(const CEntityEvent &__eeInput);
  BOOL H0x01f50015_ProjectileSlide_02(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileFlyRebounding 0x01f50016
  BOOL ProjectileFlyRebounding(const CEntityEvent &__eeInput);
  BOOL H0x01f50017_ProjectileFlyRebounding_01(const CEntityEvent &__eeInput);
  BOOL H0x01f50018_ProjectileFlyRebounding_02(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x01f50019_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x01f5001a_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x01f5001b_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x01f5001c_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x01f5001d_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x01f5001e_Main_06(const CEntityEvent &__eeInput);
  BOOL H0x01f5001f_Main_07(const CEntityEvent &__eeInput);
  BOOL H0x01f50020_Main_08(const CEntityEvent &__eeInput);
  BOOL H0x01f50021_Main_09(const CEntityEvent &__eeInput);
  BOOL H0x01f50022_Main_10(const CEntityEvent &__eeInput);
  BOOL H0x01f50023_Main_11(const CEntityEvent &__eeInput);
  BOOL H0x01f50024_Main_12(const CEntityEvent &__eeInput);
  BOOL H0x01f50025_Main_13(const CEntityEvent &__eeInput);
  BOOL H0x01f50026_Main_14(const CEntityEvent &__eeInput);
  BOOL H0x01f50027_Main_15(const CEntityEvent &__eeInput);
  BOOL H0x01f50028_Main_16(const CEntityEvent &__eeInput);
  BOOL H0x01f50029_Main_17(const CEntityEvent &__eeInput);
  BOOL H0x01f5002a_Main_18(const CEntityEvent &__eeInput);
  BOOL H0x01f5002b_Main_19(const CEntityEvent &__eeInput);
  BOOL H0x01f5002c_Main_20(const CEntityEvent &__eeInput);
  BOOL H0x01f5002d_Main_21(const CEntityEvent &__eeInput);
  BOOL H0x01f5002e_Main_22(const CEntityEvent &__eeInput);
  BOOL H0x01f5002f_Main_23(const CEntityEvent &__eeInput);
  BOOL H0x01f50030_Main_24(const CEntityEvent &__eeInput);
  BOOL H0x01f50031_Main_25(const CEntityEvent &__eeInput);
  BOOL H0x01f50032_Main_26(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Projectile_INCLUDED
