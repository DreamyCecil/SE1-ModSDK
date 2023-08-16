// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(BasicEffectType)
  EP_ENUMVALUE(BET_NONE, "None"),
  EP_ENUMVALUE(BET_ROCKET, "Rocket"),
  EP_ENUMVALUE(BET_ROCKET_PLANE, "Rocket plane"),
  EP_ENUMVALUE(BET_GRENADE, "Grenade"),
  EP_ENUMVALUE(BET_GRENADE_PLANE, "Grenade plane"),
  EP_ENUMVALUE(BET_EXPLOSIONSTAIN, "Explosionstain"),
  EP_ENUMVALUE(BET_SHOCKWAVE, "Shockwave"),
  EP_ENUMVALUE(BET_LASERWAVE, "Laserwave"),
  EP_ENUMVALUE(BET_BLOODSPILL, "Blood spill"),
  EP_ENUMVALUE(BET_BLOODSTAIN, "Blood stain"),
  EP_ENUMVALUE(BET_BLOODSTAINGROW, "Blood staingrow"),
  EP_ENUMVALUE(BET_BLOODEXPLODE, "Blood explode"),
  EP_ENUMVALUE(BET_CANNON, "Cannon"),
  EP_ENUMVALUE(BET_CANNON_PLANE, "Cannon plane"),
  EP_ENUMVALUE(BET_CANNONEXPLOSIONSTAIN, "Cannon explosion stain"),
  EP_ENUMVALUE(BET_CANNONSHOCKWAVE, "Cannon shockwave"),
  EP_ENUMVALUE(BET_TELEPORT, "Teleport"),
  EP_ENUMVALUE(BET_BOMB, "Bomb"),
  EP_ENUMVALUE(BET_BULLETTRAIL, "Bullet trail"),
  EP_ENUMVALUE(BET_GIZMO_SPLASH_FX, "Gizmo splash fx"),
  EP_ENUMVALUE(BET_GIZMOSTAIN, "Gizmo stain"),
  EP_ENUMVALUE(BET_BULLETSTAINSTONE, "Bullet stain stone"),
  EP_ENUMVALUE(BET_BULLETSTAINSAND, "Bullet stain sand"),
  EP_ENUMVALUE(BET_BULLETSTAINWATER, "Bullet stain water"),
  EP_ENUMVALUE(BET_BULLETSTAINUNDERWATER, "Bullet stain underwater"),
  EP_ENUMVALUE(BET_BULLETSTAINSTONENOSOUND, "Bullet stain stonenosound"),
  EP_ENUMVALUE(BET_BULLETSTAINSANDNOSOUND, "Bullet stain sandnosound"),
  EP_ENUMVALUE(BET_BULLETSTAINWATERNOSOUND, "Bullet stain waternosound"),
  EP_ENUMVALUE(BET_BULLETSTAINUNDERWATERNOSOUND, "Bullet stain underwater no sound"),
  EP_ENUMVALUE(BET_BULLETSTAINREDSAND, "Bullet stain red sand"),
  EP_ENUMVALUE(BET_BULLETSTAINREDSANDNOSOUND, "Bullet stain red sand no sound"),
  EP_ENUMVALUE(BET_LIGHT_CANNON, "Light cannon"),
  EP_ENUMVALUE(BET_CANNON_NOLIGHT, "Cannon no light"),
  EP_ENUMVALUE(BET_BULLETSTAINGRASS, "Bullet stain grass"),
  EP_ENUMVALUE(BET_BULLETSTAINWOOD, "Bullet stain wood"),
  EP_ENUMVALUE(BET_BULLETSTAINGRASSNOSOUND, "Bullet stain grass no sound"),
  EP_ENUMVALUE(BET_BULLETSTAINWOODNOSOUND, "Bullet stain wood no sound"),
  EP_ENUMVALUE(BET_EXPLOSION_DEBRIS, "Explosion debris"),
  EP_ENUMVALUE(BET_EXPLOSION_SMOKE, "Explosion smoke"),
  EP_ENUMVALUE(BET_SUMMONERSTAREXPLOSION, "Summoner star explosion"),
  EP_ENUMVALUE(BET_COLLECT_ENERGY, "Collect energy"),
  EP_ENUMVALUE(BET_GROWING_SWIRL, "Growing swirl"),
  EP_ENUMVALUE(BET_DISAPPEAR_DUST, "Disappear dust"),
  EP_ENUMVALUE(BET_DUST_FALL, "Dust fall"),
  EP_ENUMVALUE(BET_BULLETSTAINSNOW, "Bullet stain snow"),
  EP_ENUMVALUE(BET_BULLETSTAINSNOWNOSOUND, "Bullet stain snow"),
  EP_ENUMVALUE(BET_PLASMA, "Plasma"),
EP_ENUMEND(BasicEffectType);

#define ENTITYCLASS CBasicEffect

CEntityProperty CBasicEffect_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0x259<<8)+1, 0x110, "", 0, "m_betType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+2, 0x114, "", 0, "m_fWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+3, 0x118, "", 0, "m_fFadeTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x259<<8)+4, 0x11C, "", 0, "m_bFade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+5, 0x120, "", 0, "m_fFadeStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+9, 0x124, "", 0, "m_fFadeStartAlpha", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x259<<8)+6, 0x128, "", 0, "m_vNormal", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x259<<8)+7, 0x134, "", 0, "m_vStretch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x259<<8)+8, 0x140, "", 0, "m_vDirection", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+10, 0x14C, "", 0, "m_fDepthSortOffset", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+11, 0x150, "", 0, "m_fFadeInSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+12, 0x154, "", 0, "m_tmSpawn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+13, 0x158, "", 0, "m_tmWaitAfterDeath", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x259<<8)+20, 0x15C, "", 0, "m_bLightSource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0x259<<8)+21, 0x160, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x259<<8)+22, 0x180, "", 0, "m_iLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x259<<8)+23, 0x184, "", 0, "m_colMultiplyColor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x259<<8)+30, 0x188, "", 0, "m_soEffect", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+31, 0x204, "", 0, "m_fSoundTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EffectParticlesType_enum, (0x259<<8)+40, 0x208, "", 0, "m_eptType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x259<<8)+41, 0x20C, "", 0, "m_tmWhenShot", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x259<<8)+42, 0x210, "", 0, "m_vGravity", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x259<<8)+255, 0x21C, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CBasicEffect_propertiesct ARRAYCOUNT(CBasicEffect_properties)

CEntityComponent CBasicEffect_components[] = {
#define MDL_ROCKET_EXPLOSION ((0x00000259<<8)+1)
 CEntityComponent(ECT_MODEL, MDL_ROCKET_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionRocket\\ExplosionRocket.mdl"),
#define MDL_ROCKET3D_EXPLOSION ((0x00000259<<8)+2)
 CEntityComponent(ECT_MODEL, MDL_ROCKET3D_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionRocket\\ExplosionRocket3D.mdl"),
#define TXT_ROCKET_EXPLOSION ((0x00000259<<8)+3)
 CEntityComponent(ECT_TEXTURE, TXT_ROCKET_EXPLOSION, "EFNM" "Models\\Effects\\Explosionrocket\\Texture.tex"),
#define MDL_GRENADE_EXPLOSION ((0x00000259<<8)+4)
 CEntityComponent(ECT_MODEL, MDL_GRENADE_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\ExplosionGrenade.mdl"),
#define MDL_GRENADE3D_EXPLOSION ((0x00000259<<8)+5)
 CEntityComponent(ECT_MODEL, MDL_GRENADE3D_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\ExplosionGrenade3D.mdl"),
#define TXT_GRENADE_EXPLOSION ((0x00000259<<8)+6)
 CEntityComponent(ECT_TEXTURE, TXT_GRENADE_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\Texture.tex"),
#define MDL_PARTICLES_EXPLOSION ((0x00000259<<8)+7)
 CEntityComponent(ECT_MODEL, MDL_PARTICLES_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionParticles\\Particles.mdl"),
#define MDL_PARTICLES3D_EXPLOSION ((0x00000259<<8)+8)
 CEntityComponent(ECT_MODEL, MDL_PARTICLES3D_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionParticles\\Particles3D.mdl"),
#define TXT_PARTICLES_EXPLOSION ((0x00000259<<8)+9)
 CEntityComponent(ECT_TEXTURE, TXT_PARTICLES_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionParticles\\Texture.tex"),
#define SOUND_EXPLOSION ((0x00000259<<8)+10)
 CEntityComponent(ECT_SOUND, SOUND_EXPLOSION, "EFNM" "Sounds\\Weapons\\_Explosion02.wav"),
#define MDL_CANNON_EXPLOSION ((0x00000259<<8)+11)
 CEntityComponent(ECT_MODEL, MDL_CANNON_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\ExplosionGrenade.mdl"),
#define MDL_CANNON3D_EXPLOSION ((0x00000259<<8)+12)
 CEntityComponent(ECT_MODEL, MDL_CANNON3D_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\ExplosionGrenade3D.mdl"),
#define TXT_CANNON_EXPLOSION ((0x00000259<<8)+13)
 CEntityComponent(ECT_TEXTURE, TXT_CANNON_EXPLOSION, "EFNM" "Models\\Effects\\ExplosionGrenade\\Texture.tex"),
#define MODEL_BULLET_HIT ((0x00000259<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_BULLET_HIT, "EFNM" "Models\\Effects\\BulletParticles\\BulletParticles.mdl"),
#define TEXTURE_BULLET_HIT ((0x00000259<<8)+16)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BULLET_HIT, "EFNM" "Models\\Effects\\BulletParticles\\BulletParticles.tex"),
#define MODEL_BULLET_STAIN ((0x00000259<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_BULLET_STAIN, "EFNM" "Models\\Effects\\BulletOnTheWall\\Bullet.mdl"),
#define TEXTURE_BULLET_STAIN ((0x00000259<<8)+19)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BULLET_STAIN, "EFNM" "Models\\Effects\\BulletOnTheWall\\Bullet.tex"),
#define TEXTURE_BULLET_TRAIL ((0x00000259<<8)+70)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BULLET_TRAIL, "EFNM" "Models\\Effects\\BulletTrail\\BulletTrail.tex"),
#define MODEL_BULLET_TRAIL ((0x00000259<<8)+71)
 CEntityComponent(ECT_MODEL, MODEL_BULLET_TRAIL, "EFNM" "Models\\Effects\\BulletTrail\\BulletTrail.mdl"),
#define SOUND_BULLET_STONE ((0x00000259<<8)+90)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_STONE, "EFNM" "Sounds\\Weapons\\_BulletHitWall.wav"),
#define SOUND_BULLET_SAND ((0x00000259<<8)+91)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_SAND, "EFNM" "Sounds\\Weapons\\BulletHitSand.wav"),
#define SOUND_BULLET_WATER ((0x00000259<<8)+92)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_WATER, "EFNM" "Sounds\\Weapons\\BulletHitWater.wav"),
#define SOUND_BULLET_FLESH ((0x00000259<<8)+93)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_FLESH, "EFNM" "Sounds\\Weapons\\_BulletHitFlesh.wav"),
#define TEXTURE_BULLET_SAND ((0x00000259<<8)+94)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BULLET_SAND, "EFNM" "Models\\Effects\\BulletOnTheWall\\BulletSand.tex"),
#define SOUND_BULLET_GRASS ((0x00000259<<8)+95)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_GRASS, "EFNM" "SoundsMP\\Weapons\\BulletHitGrass.wav"),
#define SOUND_BULLET_WOOD ((0x00000259<<8)+96)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_WOOD, "EFNM" "SoundsMP\\Weapons\\BulletHitWood.wav"),
#define SOUND_BULLET_SNOW ((0x00000259<<8)+97)
 CEntityComponent(ECT_SOUND, SOUND_BULLET_SNOW, "EFNM" "SoundsMP\\Weapons\\BulletHitSnow.wav"),
#define MODEL_BLOOD_EXPLODE ((0x00000259<<8)+21)
 CEntityComponent(ECT_MODEL, MODEL_BLOOD_EXPLODE, "EFNM" "Models\\Effects\\BloodCloud\\BloodCloud.mdl"),
#define TEXTURE_BLOOD_EXPLODE ((0x00000259<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_EXPLODE, "EFNM" "Models\\Effects\\BloodCloud\\BloodCloud.tex"),
#define MODEL_BLOOD_STAIN ((0x00000259<<8)+23)
 CEntityComponent(ECT_MODEL, MODEL_BLOOD_STAIN, "EFNM" "Models\\Effects\\BloodOnTheWall01\\Blood.mdl"),
#define TEXTURE_BLOOD_STAIN1 ((0x00000259<<8)+24)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_STAIN1, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStain01.tex"),
#define TEXTURE_BLOOD_STAIN2 ((0x00000259<<8)+25)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_STAIN2, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStain02.tex"),
#define TEXTURE_BLOOD_STAIN3 ((0x00000259<<8)+26)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_STAIN3, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStain03.tex"),
#define TEXTURE_BLOOD_STAIN4 ((0x00000259<<8)+27)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_STAIN4, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStain04.tex"),
#define TEXTURE_BLOOD_SPILL1 ((0x00000259<<8)+28)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_SPILL1, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodSpill02.tex"),
#define TEXTURE_BLOOD_SPILL2 ((0x00000259<<8)+29)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_SPILL2, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodSpill05.tex"),
#define TEXTURE_BLOOD_SPILL3 ((0x00000259<<8)+30)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_SPILL3, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodSpill06.tex"),
#define TEXTURE_BLOOD_FLOWER1 ((0x00000259<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_FLOWER1, "EFNM" "Models\\Effects\\Flowers\\Flowers1s.tex"),
#define TEXTURE_BLOOD_FLOWER2 ((0x00000259<<8)+32)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_FLOWER2, "EFNM" "Models\\Effects\\Flowers\\Flowers2s.tex"),
#define TEXTURE_BLOOD_FLOWER3 ((0x00000259<<8)+33)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLOOD_FLOWER3, "EFNM" "Models\\Effects\\Flowers\\Flowers3s.tex"),
#define TEXTURE_STAIN_LIGHT1 ((0x00000259<<8)+34)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STAIN_LIGHT1, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStainLight01.tex"),
#define TEXTURE_STAIN_LIGHT2 ((0x00000259<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STAIN_LIGHT2, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStainLight02.tex"),
#define TEXTURE_STAIN_LIGHT3 ((0x00000259<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STAIN_LIGHT3, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStainLight03.tex"),
#define TEXTURE_STAIN_LIGHT4 ((0x00000259<<8)+37)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STAIN_LIGHT4, "EFNM" "Models\\Effects\\BloodOnTheWall01\\BloodStainLight04.tex"),
#define MODEL_SHOCKWAVE ((0x00000259<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_SHOCKWAVE, "EFNM" "Models\\Effects\\ShockWave01\\ShockWave.mdl"),
#define TEXTURE_SHOCKWAVE ((0x00000259<<8)+41)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SHOCKWAVE, "EFNM" "Models\\Effects\\ShockWave01\\Textures\\ShockWave.tex"),
#define MODEL_CANNONSHOCKWAVE ((0x00000259<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_CANNONSHOCKWAVE, "EFNM" "Models\\Effects\\ShockWave01\\ShockWave.mdl"),
#define TEXTURE_CANNONSHOCKWAVE ((0x00000259<<8)+43)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNONSHOCKWAVE, "EFNM" "Models\\Effects\\ShockWave01\\Textures\\ShockWave.tex"),
#define MODEL_EXPLOSION_STAIN ((0x00000259<<8)+45)
 CEntityComponent(ECT_MODEL, MODEL_EXPLOSION_STAIN, "EFNM" "Models\\Effects\\BurnedStainOnTheWall\\BurnedStainOnTheWall.mdl"),
#define TEXTURE_EXPLOSION_STAIN ((0x00000259<<8)+46)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EXPLOSION_STAIN, "EFNM" "Models\\Effects\\BurnedStainOnTheWall\\BurnedStainOnTheWall.tex"),
#define MODEL_CANNON_EXPLOSION_STAIN ((0x00000259<<8)+47)
 CEntityComponent(ECT_MODEL, MODEL_CANNON_EXPLOSION_STAIN, "EFNM" "Models\\Effects\\BurnedStainOnTheWall\\BurnedStainOnTheWall.mdl"),
#define TEXTURE_CANNON_EXPLOSION_STAIN ((0x00000259<<8)+48)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON_EXPLOSION_STAIN, "EFNM" "Models\\Effects\\BurnedStainOnTheWall\\BurnedStainOnTheWall.tex"),
#define MODEL_LASERWAVE ((0x00000259<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_LASERWAVE, "EFNM" "Models\\Effects\\ShockWaveGreen\\ShockWaveGreen.mdl"),
#define TEXTURE_LASERWAVE ((0x00000259<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LASERWAVE, "EFNM" "Models\\Effects\\ShockWaveGreen\\ShockWaveGreen.tex"),
#define MODEL_TELEPORT_EFFECT ((0x00000259<<8)+61)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT_EFFECT, "EFNM" "Models\\Effects\\Teleport01\\Teleport.mdl"),
#define TEXTURE_TELEPORT_EFFECT ((0x00000259<<8)+62)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT_EFFECT, "EFNM" "Textures\\Effects\\Effect01\\Effect.tex"),
#define SOUND_TELEPORT ((0x00000259<<8)+63)
 CEntityComponent(ECT_SOUND, SOUND_TELEPORT, "EFNM" "Sounds\\Misc\\Teleport.wav"),
#define SOUND_GIZMO_SPLASH ((0x00000259<<8)+80)
 CEntityComponent(ECT_SOUND, SOUND_GIZMO_SPLASH, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Death.wav"),
#define SOUND_PLAZMA_EXPLOSION ((0x00000259<<8)+201)
 CEntityComponent(ECT_SOUND, SOUND_PLAZMA_EXPLOSION, "EFNM" "Models\\Weapons\\PlasmaThrower\\Sounds\\_Explosion.wav"),
#define TEXTURE_WATER_WAVE ((0x00000259<<8)+100)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WATER_WAVE, "EFNM" "Models\\Effects\\ShockWave01\\Textures\\WaterWave.tex"),
};
#define CBasicEffect_componentsct ARRAYCOUNT(CBasicEffect_components)

CEventHandlerEntry CBasicEffect_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBasicEffect::Main),DEBUGSTRING("CBasicEffect::Main")},
 {0x02590001, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590001_Main_01), DEBUGSTRING("CBasicEffect::H0x02590001_Main_01")},
 {0x02590002, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590002_Main_02), DEBUGSTRING("CBasicEffect::H0x02590002_Main_02")},
 {0x02590003, -1, CEntity::pEventHandler(&CBasicEffect::EffectLoop),DEBUGSTRING("CBasicEffect::EffectLoop")},
 {0x02590004, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590004_EffectLoop_01), DEBUGSTRING("CBasicEffect::H0x02590004_EffectLoop_01")},
 {0x02590005, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590005_EffectLoop_02), DEBUGSTRING("CBasicEffect::H0x02590005_EffectLoop_02")},
 {0x02590006, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590006_EffectLoop_03), DEBUGSTRING("CBasicEffect::H0x02590006_EffectLoop_03")},
 {0x02590007, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590007_EffectLoop_04), DEBUGSTRING("CBasicEffect::H0x02590007_EffectLoop_04")},
 {0x02590008, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590008_EffectLoop_05), DEBUGSTRING("CBasicEffect::H0x02590008_EffectLoop_05")},
 {0x02590009, -1, CEntity::pEventHandler(&CBasicEffect::H0x02590009_EffectLoop_06), DEBUGSTRING("CBasicEffect::H0x02590009_EffectLoop_06")},
 {0x0259000a, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000a_EffectLoop_07), DEBUGSTRING("CBasicEffect::H0x0259000a_EffectLoop_07")},
 {0x0259000b, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000b_EffectLoop_08), DEBUGSTRING("CBasicEffect::H0x0259000b_EffectLoop_08")},
 {0x0259000c, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000c_EffectLoop_09), DEBUGSTRING("CBasicEffect::H0x0259000c_EffectLoop_09")},
 {0x0259000d, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000d_EffectLoop_10), DEBUGSTRING("CBasicEffect::H0x0259000d_EffectLoop_10")},
 {0x0259000e, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000e_EffectLoop_11), DEBUGSTRING("CBasicEffect::H0x0259000e_EffectLoop_11")},
 {0x0259000f, -1, CEntity::pEventHandler(&CBasicEffect::H0x0259000f_EffectLoop_12), DEBUGSTRING("CBasicEffect::H0x0259000f_EffectLoop_12")},
};
#define CBasicEffect_handlersct ARRAYCOUNT(CBasicEffect_handlers)

CEntity *CBasicEffect_New(void) { return new CBasicEffect; };
void CBasicEffect_OnInitClass(void) {};
void CBasicEffect_OnEndClass(void) {};
void CBasicEffect_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CBasicEffect_OnWorldEnd(CWorld *pwo) {};
void CBasicEffect_OnWorldInit(CWorld *pwo) {};
void CBasicEffect_OnWorldTick(CWorld *pwo) {};
void CBasicEffect_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBasicEffect, CRationalEntity, "BasicEffect", "", 601);
DECLARE_CTFILENAME(_fnmCBasicEffect_tbn, "");
