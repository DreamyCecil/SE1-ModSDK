// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_BasicEffects_INCLUDED
#define _EntitiesV_BasicEffects_INCLUDED 1
#include <EntitiesV/Light.h>
extern DECL_DLL CEntityPropertyEnumType BasicEffectType_enum;
enum BasicEffectType {
  BET_NONE = 0,
  BET_ROCKET = 1,
  BET_ROCKET_PLANE = 2,
  BET_GRENADE = 3,
  BET_GRENADE_PLANE = 4,
  BET_EXPLOSIONSTAIN = 5,
  BET_SHOCKWAVE = 6,
  BET_LASERWAVE = 7,
  BET_BLOODSPILL = 10,
  BET_BLOODSTAIN = 11,
  BET_BLOODSTAINGROW = 19,
  BET_BLOODEXPLODE = 12,
  BET_CANNON = 13,
  BET_CANNON_PLANE = 14,
  BET_CANNONEXPLOSIONSTAIN = 15,
  BET_CANNONSHOCKWAVE = 16,
  BET_TELEPORT = 17,
  BET_BOMB = 18,
  BET_BULLETTRAIL = 20,
  BET_GIZMO_SPLASH_FX = 21,
  BET_GIZMOSTAIN = 22,
  BET_BULLETSTAINSTONE = 30,
  BET_BULLETSTAINSAND = 31,
  BET_BULLETSTAINWATER = 32,
  BET_BULLETSTAINUNDERWATER = 33,
  BET_BULLETSTAINSTONENOSOUND = 34,
  BET_BULLETSTAINSANDNOSOUND = 35,
  BET_BULLETSTAINWATERNOSOUND = 36,
  BET_BULLETSTAINUNDERWATERNOSOUND = 37,
  BET_BULLETSTAINREDSAND = 38,
  BET_BULLETSTAINREDSANDNOSOUND = 39,
  BET_LIGHT_CANNON = 40,
  BET_CANNON_NOLIGHT = 41,
  BET_BULLETSTAINGRASS = 42,
  BET_BULLETSTAINWOOD = 43,
  BET_BULLETSTAINGRASSNOSOUND = 44,
  BET_BULLETSTAINWOODNOSOUND = 45,
  BET_EXPLOSION_DEBRIS = 46,
  BET_EXPLOSION_SMOKE = 47,
  BET_SUMMONERSTAREXPLOSION = 48,
  BET_COLLECT_ENERGY = 49,
  BET_GROWING_SWIRL = 50,
  BET_DISAPPEAR_DUST = 52,
  BET_DUST_FALL = 53,
  BET_BULLETSTAINSNOW = 54,
  BET_BULLETSTAINSNOWNOSOUND = 55,
  BET_PLASMA = 56,
};
DECL_DLL inline void ClearToDefault(BasicEffectType &e) { e = (BasicEffectType)0; } ;
#define EVENTCODE_ESpawnEffect 0x02590000
class DECL_DLL ESpawnEffect : public CEntityEvent {
public:
ESpawnEffect();
CEntityEvent *MakeCopy(void);
enum BasicEffectType betType;
FLOAT3D vNormal;
FLOAT3D vDirection;
FLOAT3D vStretch;
COLOR colMuliplier;
};
DECL_DLL inline void ClearToDefault(ESpawnEffect &e) { e = ESpawnEffect(); } ;
#define CBasicEffect_ClassID 601
extern "C" DECL_DLL CDLLEntityClass CBasicEffect_DLLClass;
class CBasicEffect : public CRationalEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
  DECL_DLL virtual void SetDefaultProperties(void);
  enum BasicEffectType m_betType;
  FLOAT m_fWaitTime;
  FLOAT m_fFadeTime;
  BOOL m_bFade;
  FLOAT m_fFadeStartTime;
  FLOAT m_fFadeStartAlpha;
  FLOAT3D m_vNormal;
  FLOAT3D m_vStretch;
  FLOAT3D m_vDirection;
  FLOAT m_fDepthSortOffset;
  FLOAT m_fFadeInSpeed;
  FLOAT m_tmSpawn;
  FLOAT m_tmWaitAfterDeath;
  BOOL m_bLightSource;
  CAnimObject m_aoLightAnimation;
  INDEX m_iLightAnimation;
  COLOR m_colMultiplyColor;
  CSoundObject m_soEffect;
  FLOAT m_fSoundTime;
  enum EffectParticlesType m_eptType;
  FLOAT m_tmWhenShot;
  FLOAT3D m_vGravity;
  CEntityPointer m_penPrediction;
CLightSource m_lsLightSource;
  DECL_DLL   void DumpSync_t(CTStream & strm,INDEX iExtensiveSyncCheck);
   void Read_t(CTStream * istr);
   CLightSource * GetLightSource(void);
   void SetupLightSource(void);
   void RenderParticles(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   FLOAT GetDepthSortOffset(void);
   void SetNonLoopingTexAnims(void);
   void SetNormalForHalfFaceForward(void);
   void SetNormal(void);
   void SetNormalWithRandomBanking(void);
   void FindGravityVectorFromSector(void);
   void SetNormalAndDirection(void);
   void RandomBanking(void);
   void Stretch(void);
   void ParentToNearestPolygonAndStretch(void);
   void ProjectileExplosion(void);
   void ProjectilePlaneExplosion(void);
   void BombExplosion(void);
   void GizmoSplashFX(void);
   void ExplosionDebris(void);
   void CollectEnergy(void);
   void GrowingSwirl(void);
   void DisappearDust(void);
   void DustFall(void);
   void SniperResidue(void);
   void ExplosionSmoke(void);
   void GrenadeExplosion(void);
   void GrenadePlaneExplosion(void);
   void CannonExplosion(BOOL bLoVolume,BOOL bNoLight);
   void CannonPlaneExplosion(void);
   void Stain(void);
   void CannonStain(void);
   void ShockWave(void);
   void CannonShockWave(void);
   void LaserWave(void);
   void TeleportEffect(void);
   void SummonerStarExplosion();
   void BulletStainSand(BOOL bSound);
   void BulletStainRedSand(BOOL bSound);
   void BulletStainStone(BOOL bSound,BOOL bSmoke);
   void BulletStainWater(BOOL bSound);
   void BulletTrail(void);
   void BulletStainGrass(BOOL bSound);
   void BulletStainWood(BOOL bSound);
   void BulletStainSnow(BOOL bSound);
   void BloodExplode(void);
   void BloodStain(void);
   void BloodStainGrow(void);
   void GizmoStain(void);
   void BloodSpill(COLOR colBloodSpillColor);
#define  STATE_CBasicEffect_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x02590001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x02590002_Main_02(const CEntityEvent &__eeInput);
#define  STATE_CBasicEffect_EffectLoop 0x02590003
  BOOL EffectLoop(const CEntityEvent &__eeInput);
  BOOL H0x02590004_EffectLoop_01(const CEntityEvent &__eeInput);
  BOOL H0x02590005_EffectLoop_02(const CEntityEvent &__eeInput);
  BOOL H0x02590006_EffectLoop_03(const CEntityEvent &__eeInput);
  BOOL H0x02590007_EffectLoop_04(const CEntityEvent &__eeInput);
  BOOL H0x02590008_EffectLoop_05(const CEntityEvent &__eeInput);
  BOOL H0x02590009_EffectLoop_06(const CEntityEvent &__eeInput);
  BOOL H0x0259000a_EffectLoop_07(const CEntityEvent &__eeInput);
  BOOL H0x0259000b_EffectLoop_08(const CEntityEvent &__eeInput);
  BOOL H0x0259000c_EffectLoop_09(const CEntityEvent &__eeInput);
  BOOL H0x0259000d_EffectLoop_10(const CEntityEvent &__eeInput);
  BOOL H0x0259000e_EffectLoop_11(const CEntityEvent &__eeInput);
  BOOL H0x0259000f_EffectLoop_12(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_BasicEffects_INCLUDED