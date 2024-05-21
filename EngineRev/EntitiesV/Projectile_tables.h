// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(ProjectileType)
  EP_ENUMVALUE(PRT_ROCKET, "Rocket"),
  EP_ENUMVALUE(PRT_GRENADE, "Grenade"),
  EP_ENUMVALUE(PRT_FLAME, "Flame"),
  EP_ENUMVALUE(PRT_LASER_RAY, "Laser"),
  EP_ENUMVALUE(PRT_WALKER_ROCKET, "WalkerRocket"),
  EP_ENUMVALUE(PRT_CATMAN_FIRE, "Catman"),
  EP_ENUMVALUE(PRT_HEADMAN_FIRECRACKER, "Firecracker"),
  EP_ENUMVALUE(PRT_HEADMAN_ROCKETMAN, "Rocketman"),
  EP_ENUMVALUE(PRT_HEADMAN_BOMBERMAN, "Bomberman"),
  EP_ENUMVALUE(PRT_BONEMAN_FIRE, "Boneman"),
  EP_ENUMVALUE(PRT_WOMAN_FIRE, "Woman"),
  EP_ENUMVALUE(PRT_DRAGONMAN_FIRE, "Dragonman"),
  EP_ENUMVALUE(PRT_DRAGONMAN_STRONG_FIRE, "Dragonman Strong"),
  EP_ENUMVALUE(PRT_STONEMAN_FIRE, "Stoneman"),
  EP_ENUMVALUE(PRT_STONEMAN_BIG_FIRE, "Stoneman Big"),
  EP_ENUMVALUE(PRT_STONEMAN_LARGE_FIRE, "Stoneman Large"),
  EP_ENUMVALUE(PRT_LAVAMAN_BIG_BOMB, "Lavaman Big Bomb"),
  EP_ENUMVALUE(PRT_LAVAMAN_BOMB, "Lavaman Bomb"),
  EP_ENUMVALUE(PRT_LAVAMAN_STONE, "Lavaman Stone"),
  EP_ENUMVALUE(PRT_ICEMAN_FIRE, "Iceman"),
  EP_ENUMVALUE(PRT_ICEMAN_BIG_FIRE, "Iceman Big"),
  EP_ENUMVALUE(PRT_ICEMAN_LARGE_FIRE, "Iceman Large"),
  EP_ENUMVALUE(PRT_WATERMAN_OLD, "Waterman (Old)"),
  EP_ENUMVALUE(PRT_WATERMAN_BIG, "Waterman Big"),
  EP_ENUMVALUE(PRT_WATERMAN_LARGE, "Waterman Large"),
  EP_ENUMVALUE(PRT_WATERMAN_SMALL, "Waterman Small"),
  EP_ENUMVALUE(PRT_HUANMAN_FIRE, "Huanman"),
  EP_ENUMVALUE(PRT_FISHMAN_FIRE, "Fishman"),
  EP_ENUMVALUE(PRT_MANTAMAN_FIRE, "Mantaman"),
  EP_ENUMVALUE(PRT_CYBORG_LASER, "Cyborg Laser"),
  EP_ENUMVALUE(PRT_CYBORG_BOMB, "Cyborg Bomb"),
  EP_ENUMVALUE(PRT_LAVA_COMET, "Lava Comet"),
  EP_ENUMVALUE(PRT_BEAST_PROJECTILE, "Beast Projectile"),
  EP_ENUMVALUE(PRT_BEAST_BIG_PROJECTILE, "Beast Big Projectile"),
  EP_ENUMVALUE(PRT_BEAST_DEBRIS, "Beast Debris"),
  EP_ENUMVALUE(PRT_BEAST_BIG_DEBRIS, "Beast Big Debris"),
  EP_ENUMVALUE(PRT_DEVIL_LASER, "Devil Laser"),
  EP_ENUMVALUE(PRT_DEVIL_ROCKET, "Devil Rocket"),
  EP_ENUMVALUE(PRT_DEVIL_GUIDED_PROJECTILE, "Devil Guided Projectile"),
  EP_ENUMVALUE(PRT_GRUNT_PROJECTILE_SOL, "Grunt Soldier Laser"),
  EP_ENUMVALUE(PRT_GRUNT_PROJECTILE_COM, "Grunt Commander Laser"),
  EP_ENUMVALUE(PRT_GUFFY_PROJECTILE, "Guffy Projectile"),
  EP_ENUMVALUE(PRT_DEMON_FIREBALL, "Demon Fireball"),
  EP_ENUMVALUE(PRT_DEMON_FIREBALL_DEBRIS, "Demon Fireball Debris"),
  EP_ENUMVALUE(PRT_SHOOTER_WOODEN_DART, "Shooter Wooden Dart"),
  EP_ENUMVALUE(PRT_SHOOTER_FIREBALL, "Shooter Fireball"),
  EP_ENUMVALUE(PRT_SHOOTER_FLAME, "Shooter Flame"),
  EP_ENUMVALUE(PRT_LARVA_PLASMA, "ExotechLarva Plasma"),
  EP_ENUMVALUE(PRT_LARVA_TAIL_PROJECTILE, "ExotechLarva Tail Projectile"),
  EP_ENUMVALUE(PRT_AIRELEMENTAL_WIND, "Air Elemental Wind Blast"),
  EP_ENUMVALUE(PRT_AFTERBURNER_DEBRIS, "Afterburner debris"),
  EP_ENUMVALUE(PRT_METEOR, "Meteor"),
  EP_ENUMVALUE(PRT_PLASMA, "Plasma"),
  EP_ENUMVALUE(PRT_RAILBOLT, "Railbolt"),
  EP_ENUMVALUE(PRT_RAILBOLT_SPRAY, "Railbolt spray"),
  EP_ENUMVALUE(PRT_AIRMAN_LARGE, "Airman Large"),
  EP_ENUMVALUE(PRT_AIRMAN_BIG, "Airman Big"),
  EP_ENUMVALUE(PRT_AIRMAN_SMALL, "Airman Small"),
  EP_ENUMVALUE(PRT_EARTHMAN_BIG_BOMB, "Earthman Big Bomb"),
  EP_ENUMVALUE(PRT_EARTHMAN_BIG, "Earthman Bomb"),
  EP_ENUMVALUE(PRT_EARTHMAN_STONE, "Earthman Stone"),
EP_ENUMEND(ProjectileType);

EP_ENUMBEG(ProjectileMovingType)
  EP_ENUMVALUE(PMT_FLYING, ""),
  EP_ENUMVALUE(PMT_SLIDING, ""),
  EP_ENUMVALUE(PMT_GUIDED, ""),
  EP_ENUMVALUE(PMT_GUIDED_FAST, ""),
  EP_ENUMVALUE(PMT_FLYING_REBOUNDING, ""),
  EP_ENUMVALUE(PMT_GUIDED_SLIDING, ""),
EP_ENUMEND(ProjectileMovingType);

#define ENTITYCLASS CProjectile

CEntityProperty CProjectile_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f5<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileType_enum, (0x1f5<<8)+2, 0x344, "", 0, "m_prtType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileMovingType_enum, (0x1f5<<8)+3, 0x348, "", 0, "m_pmtMove", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f5<<8)+4, 0x34C, "", 0, "m_penParticles", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f5<<8)+5, 0x350, "", 0, "m_penTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f5<<8)+6, 0x354, "", 0, "m_penLastDamaged", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+10, 0x358, "", 0, "m_fSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+11, 0x35C, "", 0, "m_fIgnoreTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+12, 0x360, "", 0, "m_fFlyTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+13, 0x364, "", 0, "m_fStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+14, 0x368, "", 0, "m_fDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+15, 0x36C, "", 0, "m_fRangeDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+16, 0x370, "", 0, "m_fDamageHotSpotRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+17, 0x374, "", 0, "m_fDamageFallOffRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+18, 0x378, "", 0, "m_fSoundRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+19, 0x37C, "", 0, "m_bExplode", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+20, 0x380, "", 0, "m_bLightSource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+21, 0x384, "", 0, "m_bCanHitHimself", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+22, 0x388, "", 0, "m_bCanBeDestroyed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+23, 0x38C, "", 0, "m_fWaitAfterDeath", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+24, 0x390, "", 0, "m_aRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+25, 0x394, "", 0, "m_tmExpandBox", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+26, 0x398, "", 0, "m_tmInvisibility", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f5<<8)+27, 0x39C, "", 0, "m_iRebounds", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+28, 0x3A0, "", 0, "m_fStretch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x1f5<<8)+30, 0x3A4, "", 0, "m_soEffect", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x1f5<<8)+31, 0x420, "", 0, "m_soExplosion", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f5<<8)+35, 0x49C, "", 0, "m_fGuidedMaxSpeedFactor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+50, 0x4A0, "", 0, "bLockedOn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f5<<8)+51, 0x4A4, "", 0, "m_bLeftFlame", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f5<<8)+52, 0x4A8, "", 0, "m_iTeam", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f5<<8)+255, 0x4AC, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CProjectile_propertiesct ARRAYCOUNT(CProjectile_properties)

CEntityComponent CProjectile_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001f5<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_LIGHT ((0x000001f5<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define CLASS_PROJECTILE ((0x000001f5<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BLOOD_SPRAY ((0x000001f5<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define MODEL_ROCKET ((0x000001f5<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.mdl"),
#define TEXTURE_ROCKET ((0x000001f5<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.tex"),
#define SOUND_FLYING ((0x000001f5<<8)+8)
 CEntityComponent(ECT_SOUND, SOUND_FLYING, "EFNM" "Sounds\\Weapons\\RocketFly.wav"),
#define SOUND_BEAST_FLYING ((0x000001f5<<8)+9)
 CEntityComponent(ECT_SOUND, SOUND_BEAST_FLYING, "EFNM" "Sounds\\Weapons\\ProjectileFly.wav"),
#define MODEL_GRENADE ((0x000001f5<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Grenade\\Grenade.mdl"),
#define TEXTURE_GRENADE ((0x000001f5<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Grenade\\Grenade.tex"),
#define SOUND_GRENADE_BOUNCE ((0x000001f5<<8)+12)
 CEntityComponent(ECT_SOUND, SOUND_GRENADE_BOUNCE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Sounds\\Bounce.wav"),
#define TEXTURE_GRENADE_BLUE ((0x000001f5<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GRENADE_BLUE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Grenade\\GrenadeBlue.tex"),
#define MODEL_FLAME ((0x000001f5<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_FLAME, "EFNM" "ModelsMP\\Weapons\\Flamer\\Projectile\\Invisible.mdl"),
#define CLASS_FLAME ((0x000001f5<<8)+16)
 CEntityComponent(ECT_CLASS, CLASS_FLAME, "EFNM" "Classes\\Flame.ecl"),
#define MODEL_PLAYER_LASER ((0x000001f5<<8)+17)
 CEntityComponent(ECT_MODEL, MODEL_PLAYER_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectile.mdl"),
#define TEXTURE_PLAYER_LASER_BLUE ((0x000001f5<<8)+18)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PLAYER_LASER_BLUE, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectileBlue.tex"),
#define MODEL_CATMAN_FIRE ((0x000001f5<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_CATMAN_FIRE, "EFNM" "Models\\Enemies\\Catman\\Projectile\\Projectile.mdl"),
#define TEXTURE_CATMAN_FIRE ((0x000001f5<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CATMAN_FIRE, "EFNM" "Models\\Enemies\\Catman\\Projectile\\Projectile.tex"),
#define MODEL_HEADMAN_FIRECRACKER ((0x000001f5<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN_FIRECRACKER, "EFNM" "Models\\Enemies\\Headman\\Projectile\\FireCracker.mdl"),
#define TEXTURE_HEADMAN_FIRECRACKER ((0x000001f5<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEADMAN_FIRECRACKER, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Texture.tex"),
#define MODEL_HEADMAN_BLADE ((0x000001f5<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN_BLADE, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Blade.mdl"),
#define TEXTURE_HEADMAN_BLADE ((0x000001f5<<8)+33)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEADMAN_BLADE, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Blade.tex"),
#define MODEL_HEADMAN_BLADE_FLAME ((0x000001f5<<8)+34)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN_BLADE_FLAME, "EFNM" "Models\\Enemies\\Headman\\Projectile\\FireTrail.mdl"),
#define TEXTURE_HEADMAN_BLADE_FLAME ((0x000001f5<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEADMAN_BLADE_FLAME, "EFNM" "Models\\Enemies\\Headman\\Projectile\\FireTrail.tex"),
#define MODEL_HEADMAN_BOMB ((0x000001f5<<8)+36)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.mdl"),
#define TEXTURE_HEADMAN_BOMB ((0x000001f5<<8)+37)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEADMAN_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.tex"),
#define MODEL_LAVA ((0x000001f5<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_LAVA, "EFNM" "Models\\Effects\\Debris\\Lava01\\Lava.mdl"),
#define TEXTURE_LAVA ((0x000001f5<<8)+41)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LAVA, "EFNM" "Models\\Effects\\Debris\\Lava01\\Lava.tex"),
#define MODEL_LAVA_FLARE ((0x000001f5<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_LAVA_FLARE, "EFNM" "Models\\Effects\\Debris\\Lava01\\LavaFlare.mdl"),
#define TEXTURE_LAVA_FLARE ((0x000001f5<<8)+43)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LAVA_FLARE, "EFNM" "Models\\Effects\\Debris\\Lava01\\Flare.tex"),
#define MODEL_LASER ((0x000001f5<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectile.mdl"),
#define TEXTURE_GREEN_LASER ((0x000001f5<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GREEN_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectile.tex"),
#define TEXTURE_BLUE_LASER ((0x000001f5<<8)+52)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BLUE_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectileBlue.tex"),
#define TEXTURE_RED_LASER ((0x000001f5<<8)+53)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RED_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectileRed.tex"),
#define MODEL_BONEMAN_FIRE ((0x000001f5<<8)+60)
 CEntityComponent(ECT_MODEL, MODEL_BONEMAN_FIRE, "EFNM" "Models\\Enemies\\Boneman\\Projectile\\Projectile.mdl"),
#define TEXTURE_BONEMAN_FIRE ((0x000001f5<<8)+61)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BONEMAN_FIRE, "EFNM" "Models\\Enemies\\Boneman\\Projectile\\Projectile.tex"),
#define MODEL_WOMAN_FIRE ((0x000001f5<<8)+65)
 CEntityComponent(ECT_MODEL, MODEL_WOMAN_FIRE, "EFNM" "Models\\Enemies\\Woman\\Projectile\\Projectile.mdl"),
#define TEXTURE_WOMAN_FIRE ((0x000001f5<<8)+66)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WOMAN_FIRE, "EFNM" "Models\\Enemies\\Woman\\Projectile\\Projectile.tex"),
#define MODEL_DRAGONMAN_FIRE ((0x000001f5<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_DRAGONMAN_FIRE, "EFNM" "Models\\Enemies\\Dragonman\\Projectile\\Projectile.mdl"),
#define TEXTURE_DRAGONMAN_FIRE1 ((0x000001f5<<8)+71)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DRAGONMAN_FIRE1, "EFNM" "Models\\Enemies\\Dragonman\\Projectile\\Projectile1.tex"),
#define TEXTURE_DRAGONMAN_FIRE2 ((0x000001f5<<8)+72)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DRAGONMAN_FIRE2, "EFNM" "Models\\Enemies\\Dragonman\\Projectile\\Projectile2.tex"),
#define TEXTURE_ELEM_EARTH ((0x000001f5<<8)+77)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_EARTH, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\Earth.tex"),
#define MODEL_ELEM_STONE ((0x000001f5<<8)+78)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_STONE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\Stone.mdl"),
#define MODEL_ELEM_ICE ((0x000001f5<<8)+81)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_ICE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\IcePyramid.mdl"),
#define MODEL_ELEM_ICE_FLARE ((0x000001f5<<8)+82)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_ICE_FLARE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\IcePyramidFlare.mdl"),
#define MODEL_ELEM_LAVA_BOMB ((0x000001f5<<8)+83)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_LAVA_BOMB, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaBomb.mdl"),
#define MODEL_ELEM_LAVA_BOMB_FLARE ((0x000001f5<<8)+84)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_LAVA_BOMB_FLARE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaBombFlare.mdl"),
#define MODEL_ELEM_LAVA_STONE ((0x000001f5<<8)+85)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_LAVA_STONE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaStone.mdl"),
#define MODEL_ELEM_LAVA_STONE_FLARE ((0x000001f5<<8)+86)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_LAVA_STONE_FLARE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaStoneFlare.mdl"),
#define TEXTURE_ELEM_STONE ((0x000001f5<<8)+90)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_STONE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\Stone.tex"),
#define TEXTURE_ELEM_ICE ((0x000001f5<<8)+91)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_ICE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\IcePyramid.tex"),
#define TEXTURE_ELEM_LAVA_BOMB ((0x000001f5<<8)+93)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_LAVA_BOMB, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaBomb.tex"),
#define TEXTURE_ELEM_LAVA_BOMB_FLARE ((0x000001f5<<8)+94)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_LAVA_BOMB_FLARE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaBombFlare.tex"),
#define TEXTURE_ELEM_LAVA_STONE ((0x000001f5<<8)+95)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_LAVA_STONE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaStone.tex"),
#define TEXTURE_ELEM_LAVA_STONE_FLARE ((0x000001f5<<8)+96)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_LAVA_STONE_FLARE, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\LavaBombFlare.tex"),
#define MODEL_ELEM_WATER_DROP ((0x000001f5<<8)+98)
 CEntityComponent(ECT_MODEL, MODEL_ELEM_WATER_DROP, "EFNM" "Models\\Enemies\\ElementalWater\\Projectile\\WaterDrop.mdl"),
#define TEXTURE_ELEM_WATERMAN ((0x000001f5<<8)+99)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEM_WATERMAN, "EFNM" "Models\\Enemies\\ElementalWater\\Projectile\\WaterManFX.tex"),
#define MODEL_HUANMAN_FIRE ((0x000001f5<<8)+105)
 CEntityComponent(ECT_MODEL, MODEL_HUANMAN_FIRE, "EFNM" "Models\\Enemies\\Huanman\\Projectile\\Projectile.mdl"),
#define TEXTURE_HUANMAN_FIRE ((0x000001f5<<8)+106)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HUANMAN_FIRE, "EFNM" "Models\\Enemies\\Huanman\\Projectile\\Projectile.tex"),
#define MODEL_HUANMAN_FLARE ((0x000001f5<<8)+107)
 CEntityComponent(ECT_MODEL, MODEL_HUANMAN_FLARE, "EFNM" "Models\\Enemies\\Huanman\\Projectile\\Flare.mdl"),
#define TEXTURE_HUANMAN_FLARE ((0x000001f5<<8)+108)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HUANMAN_FLARE, "EFNM" "Textures\\Effects\\Flares\\01\\WhiteRedRing66.tex"),
#define MODEL_FISHMAN_FIRE ((0x000001f5<<8)+110)
 CEntityComponent(ECT_MODEL, MODEL_FISHMAN_FIRE, "EFNM" "Models\\Enemies\\Fishman\\Projectile\\Projectile.mdl"),
#define TEXTURE_FISHMAN_FIRE ((0x000001f5<<8)+111)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FISHMAN_FIRE, "EFNM" "Models\\Enemies\\Fishman\\Projectile\\Water.tex"),
#define MODEL_MANTAMAN_FIRE ((0x000001f5<<8)+120)
 CEntityComponent(ECT_MODEL, MODEL_MANTAMAN_FIRE, "EFNM" "Models\\Enemies\\Mantaman\\Projectile\\Projectile.mdl"),
#define TEXTURE_MANTAMAN_FIRE ((0x000001f5<<8)+121)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MANTAMAN_FIRE, "EFNM" "Models\\Enemies\\Mantaman\\Projectile\\Water.tex"),
#define MODEL_CYBORG_LASER ((0x000001f5<<8)+130)
 CEntityComponent(ECT_MODEL, MODEL_CYBORG_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectile.mdl"),
#define TEXTURE_CYBORG_LASER ((0x000001f5<<8)+132)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CYBORG_LASER, "EFNM" "Models\\Weapons\\Laser\\Projectile\\LaserProjectileBlue.tex"),
#define MODEL_CYBORG_BOMB ((0x000001f5<<8)+133)
 CEntityComponent(ECT_MODEL, MODEL_CYBORG_BOMB, "EFNM" "Models\\Enemies\\Cyborg\\Projectile\\Projectile.mdl"),
#define TEXTURE_CYBORG_BOMB ((0x000001f5<<8)+134)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CYBORG_BOMB, "EFNM" "Models\\Enemies\\Cyborg\\Projectile\\Projectile.tex"),
#define MODEL_GRUNT_PROJECTILE ((0x000001f5<<8)+135)
 CEntityComponent(ECT_MODEL, MODEL_GRUNT_PROJECTILE, "EFNM" "ModelsMP\\Enemies\\Grunt\\Projectile\\GruntProjectile.mdl"),
#define TEXTURE_GRUNT_PROJECTILE_01 ((0x000001f5<<8)+136)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GRUNT_PROJECTILE_01, "EFNM" "ModelsMP\\Enemies\\Grunt\\Projectile\\GruntProjectileSoldier.tex"),
#define TEXTURE_GRUNT_PROJECTILE_02 ((0x000001f5<<8)+137)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GRUNT_PROJECTILE_02, "EFNM" "ModelsMP\\Enemies\\Grunt\\Projectile\\GruntProjectileCommander.tex"),
#define MODEL_BEAST_FIRE ((0x000001f5<<8)+140)
 CEntityComponent(ECT_MODEL, MODEL_BEAST_FIRE, "EFNM" "Models\\Enemies\\Beast\\Projectile\\Projectile.mdl"),
#define TEXTURE_BEAST_FIRE ((0x000001f5<<8)+141)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAST_FIRE, "EFNM" "Models\\Enemies\\Beast\\Projectile\\Projectile.tex"),
#define TEXTURE_BEAST_BIG_FIRE ((0x000001f5<<8)+142)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAST_BIG_FIRE, "EFNM" "Models\\Enemies\\Beast\\Projectile\\ProjectileBig.tex"),
#define MODEL_DEMON_FIREBALL ((0x000001f5<<8)+150)
 CEntityComponent(ECT_MODEL, MODEL_DEMON_FIREBALL, "EFNM" "ModelsMP\\Enemies\\Demon\\Projectile\\Projectile.mdl"),
#define TEXTURE_DEMON_FIREBALL ((0x000001f5<<8)+151)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DEMON_FIREBALL, "EFNM" "ModelsMP\\Enemies\\Demon\\Projectile\\Projectile.tex"),
#define SOUND_DEMON_FLYING ((0x000001f5<<8)+152)
 CEntityComponent(ECT_SOUND, SOUND_DEMON_FLYING, "EFNM" "SoundsMP\\Weapons\\ProjectileFly.wav"),
#define MODEL_SHTR_WOODEN_DART ((0x000001f5<<8)+160)
 CEntityComponent(ECT_MODEL, MODEL_SHTR_WOODEN_DART, "EFNM" "ModelsMP\\Enemies\\Shooters\\Arrow01.mdl"),
#define TEX_SHTR_WOODEN_DART ((0x000001f5<<8)+161)
 CEntityComponent(ECT_TEXTURE, TEX_SHTR_WOODEN_DART, "EFNM" "ModelsMP\\Enemies\\Shooters\\Arrow01.tex"),
#define MODEL_GUFFY_PROJECTILE ((0x000001f5<<8)+170)
 CEntityComponent(ECT_MODEL, MODEL_GUFFY_PROJECTILE, "EFNM" "ModelsMP\\Enemies\\Guffy\\Projectile\\GuffyProjectile.mdl"),
#define TEXTURE_GUFFY_PROJECTILE ((0x000001f5<<8)+171)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GUFFY_PROJECTILE, "EFNM" "ModelsMP\\Enemies\\Guffy\\Projectile\\GuffyProjectile.tex"),
#define MODEL_LARVA_PLASMA ((0x000001f5<<8)+172)
 CEntityComponent(ECT_MODEL, MODEL_LARVA_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\Projectile.mdl"),
#define TEXTURE_LARVA_PLASMA ((0x000001f5<<8)+173)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LARVA_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\Projectile.tex"),
#define MODEL_LARVA_PLASMA_BALL ((0x000001f5<<8)+174)
 CEntityComponent(ECT_MODEL, MODEL_LARVA_PLASMA_BALL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Weapons\\PlasmaGun.mdl"),
#define TEXTURE_LARVA_PLASMA_BALL ((0x000001f5<<8)+175)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LARVA_PLASMA_BALL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Weapons\\PlasmaGun.tex"),
#define MODEL_LARVA_TAIL ((0x000001f5<<8)+176)
 CEntityComponent(ECT_MODEL, MODEL_LARVA_TAIL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\TailProjectile.mdl"),
#define TEXTURE_LARVA_TAIL ((0x000001f5<<8)+177)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LARVA_TAIL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\TailProjectile.tex"),
#define SOUND_LARVETTE ((0x000001f5<<8)+178)
 CEntityComponent(ECT_SOUND, SOUND_LARVETTE, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\Squeak.wav"),
#define MODEL_WINDBLAST ((0x000001f5<<8)+180)
 CEntityComponent(ECT_MODEL, MODEL_WINDBLAST, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Projectile\\WindBlast.mdl"),
#define TEXTURE_WINDBLAST ((0x000001f5<<8)+181)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WINDBLAST, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Projectile\\WindBlast.tex"),
#define SOUND_METEOR_BLAST ((0x000001f5<<8)+185)
 CEntityComponent(ECT_SOUND, SOUND_METEOR_BLAST, "EFNM" "SoundsMP\\Weapons\\MeteorBlast.wav"),
#define MODEL_BANANA ((0x000001f5<<8)+190)
 CEntityComponent(ECT_MODEL, MODEL_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.mdl"),
#define TEXTURE_BANANA ((0x000001f5<<8)+191)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.tex"),
#define TEX_REFL_BWRIPLES01 ((0x000001f5<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_REFL_BWRIPLES02 ((0x000001f5<<8)+201)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES02, "EFNM" "Models\\ReflectionTextures\\BWRiples02.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x000001f5<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_REFL_LIGHTBLUEMETAL01 ((0x000001f5<<8)+203)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTBLUEMETAL01, "EFNM" "Models\\ReflectionTextures\\LightBlueMetal01.tex"),
#define TEX_REFL_DARKMETAL ((0x000001f5<<8)+204)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_DARKMETAL, "EFNM" "Models\\ReflectionTextures\\DarkMetal.tex"),
#define TEX_REFL_PURPLE01 ((0x000001f5<<8)+205)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_PURPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEX_SPEC_WEAK ((0x000001f5<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x000001f5<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x000001f5<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define MODEL_MARKER ((0x000001f5<<8)+220)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000001f5<<8)+221)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CProjectile_componentsct ARRAYCOUNT(CProjectile_components)

CEventHandlerEntry CProjectile_handlers[] = {
 {0x01f50001, -1, CEntity::pEventHandler(&CProjectile::ProjectileFly),DEBUGSTRING("CProjectile::ProjectileFly")},
 {0x01f50002, -1, CEntity::pEventHandler(&CProjectile::H0x01f50002_ProjectileFly_01), DEBUGSTRING("CProjectile::H0x01f50002_ProjectileFly_01")},
 {0x01f50003, -1, CEntity::pEventHandler(&CProjectile::H0x01f50003_ProjectileFly_02), DEBUGSTRING("CProjectile::H0x01f50003_ProjectileFly_02")},
 {0x01f50004, -1, CEntity::pEventHandler(&CProjectile::ProjectileGuidedFly),DEBUGSTRING("CProjectile::ProjectileGuidedFly")},
 {0x01f50005, -1, CEntity::pEventHandler(&CProjectile::H0x01f50005_ProjectileGuidedFly_01), DEBUGSTRING("CProjectile::H0x01f50005_ProjectileGuidedFly_01")},
 {0x01f50006, -1, CEntity::pEventHandler(&CProjectile::H0x01f50006_ProjectileGuidedFly_02), DEBUGSTRING("CProjectile::H0x01f50006_ProjectileGuidedFly_02")},
 {0x01f50007, -1, CEntity::pEventHandler(&CProjectile::H0x01f50007_ProjectileGuidedFly_03), DEBUGSTRING("CProjectile::H0x01f50007_ProjectileGuidedFly_03")},
 {0x01f50008, -1, CEntity::pEventHandler(&CProjectile::H0x01f50008_ProjectileGuidedFly_04), DEBUGSTRING("CProjectile::H0x01f50008_ProjectileGuidedFly_04")},
 {0x01f50009, -1, CEntity::pEventHandler(&CProjectile::ProjectileGuidedFastFly),DEBUGSTRING("CProjectile::ProjectileGuidedFastFly")},
 {0x01f5000a, -1, CEntity::pEventHandler(&CProjectile::H0x01f5000a_ProjectileGuidedFastFly_01), DEBUGSTRING("CProjectile::H0x01f5000a_ProjectileGuidedFastFly_01")},
 {0x01f5000b, -1, CEntity::pEventHandler(&CProjectile::H0x01f5000b_ProjectileGuidedFastFly_02), DEBUGSTRING("CProjectile::H0x01f5000b_ProjectileGuidedFastFly_02")},
 {0x01f5000c, -1, CEntity::pEventHandler(&CProjectile::H0x01f5000c_ProjectileGuidedFastFly_03), DEBUGSTRING("CProjectile::H0x01f5000c_ProjectileGuidedFastFly_03")},
 {0x01f5000d, -1, CEntity::pEventHandler(&CProjectile::H0x01f5000d_ProjectileGuidedFastFly_04), DEBUGSTRING("CProjectile::H0x01f5000d_ProjectileGuidedFastFly_04")},
 {0x01f5000e, -1, CEntity::pEventHandler(&CProjectile::ProjectileGuidedSlide),DEBUGSTRING("CProjectile::ProjectileGuidedSlide")},
 {0x01f5000f, -1, CEntity::pEventHandler(&CProjectile::H0x01f5000f_ProjectileGuidedSlide_01), DEBUGSTRING("CProjectile::H0x01f5000f_ProjectileGuidedSlide_01")},
 {0x01f50010, -1, CEntity::pEventHandler(&CProjectile::H0x01f50010_ProjectileGuidedSlide_02), DEBUGSTRING("CProjectile::H0x01f50010_ProjectileGuidedSlide_02")},
 {0x01f50011, -1, CEntity::pEventHandler(&CProjectile::H0x01f50011_ProjectileGuidedSlide_03), DEBUGSTRING("CProjectile::H0x01f50011_ProjectileGuidedSlide_03")},
 {0x01f50012, -1, CEntity::pEventHandler(&CProjectile::H0x01f50012_ProjectileGuidedSlide_04), DEBUGSTRING("CProjectile::H0x01f50012_ProjectileGuidedSlide_04")},
 {0x01f50013, -1, CEntity::pEventHandler(&CProjectile::ProjectileSlide),DEBUGSTRING("CProjectile::ProjectileSlide")},
 {0x01f50014, -1, CEntity::pEventHandler(&CProjectile::H0x01f50014_ProjectileSlide_01), DEBUGSTRING("CProjectile::H0x01f50014_ProjectileSlide_01")},
 {0x01f50015, -1, CEntity::pEventHandler(&CProjectile::H0x01f50015_ProjectileSlide_02), DEBUGSTRING("CProjectile::H0x01f50015_ProjectileSlide_02")},
 {0x01f50016, -1, CEntity::pEventHandler(&CProjectile::ProjectileFlyRebounding),DEBUGSTRING("CProjectile::ProjectileFlyRebounding")},
 {0x01f50017, -1, CEntity::pEventHandler(&CProjectile::H0x01f50017_ProjectileFlyRebounding_01), DEBUGSTRING("CProjectile::H0x01f50017_ProjectileFlyRebounding_01")},
 {0x01f50018, -1, CEntity::pEventHandler(&CProjectile::H0x01f50018_ProjectileFlyRebounding_02), DEBUGSTRING("CProjectile::H0x01f50018_ProjectileFlyRebounding_02")},
 {1, -1, CEntity::pEventHandler(&CProjectile::Main),DEBUGSTRING("CProjectile::Main")},
 {0x01f50019, -1, CEntity::pEventHandler(&CProjectile::H0x01f50019_Main_01), DEBUGSTRING("CProjectile::H0x01f50019_Main_01")},
 {0x01f5001a, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001a_Main_02), DEBUGSTRING("CProjectile::H0x01f5001a_Main_02")},
 {0x01f5001b, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001b_Main_03), DEBUGSTRING("CProjectile::H0x01f5001b_Main_03")},
 {0x01f5001c, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001c_Main_04), DEBUGSTRING("CProjectile::H0x01f5001c_Main_04")},
 {0x01f5001d, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001d_Main_05), DEBUGSTRING("CProjectile::H0x01f5001d_Main_05")},
 {0x01f5001e, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001e_Main_06), DEBUGSTRING("CProjectile::H0x01f5001e_Main_06")},
 {0x01f5001f, -1, CEntity::pEventHandler(&CProjectile::H0x01f5001f_Main_07), DEBUGSTRING("CProjectile::H0x01f5001f_Main_07")},
 {0x01f50020, -1, CEntity::pEventHandler(&CProjectile::H0x01f50020_Main_08), DEBUGSTRING("CProjectile::H0x01f50020_Main_08")},
 {0x01f50021, -1, CEntity::pEventHandler(&CProjectile::H0x01f50021_Main_09), DEBUGSTRING("CProjectile::H0x01f50021_Main_09")},
 {0x01f50022, -1, CEntity::pEventHandler(&CProjectile::H0x01f50022_Main_10), DEBUGSTRING("CProjectile::H0x01f50022_Main_10")},
 {0x01f50023, -1, CEntity::pEventHandler(&CProjectile::H0x01f50023_Main_11), DEBUGSTRING("CProjectile::H0x01f50023_Main_11")},
 {0x01f50024, -1, CEntity::pEventHandler(&CProjectile::H0x01f50024_Main_12), DEBUGSTRING("CProjectile::H0x01f50024_Main_12")},
 {0x01f50025, -1, CEntity::pEventHandler(&CProjectile::H0x01f50025_Main_13), DEBUGSTRING("CProjectile::H0x01f50025_Main_13")},
 {0x01f50026, -1, CEntity::pEventHandler(&CProjectile::H0x01f50026_Main_14), DEBUGSTRING("CProjectile::H0x01f50026_Main_14")},
 {0x01f50027, -1, CEntity::pEventHandler(&CProjectile::H0x01f50027_Main_15), DEBUGSTRING("CProjectile::H0x01f50027_Main_15")},
 {0x01f50028, -1, CEntity::pEventHandler(&CProjectile::H0x01f50028_Main_16), DEBUGSTRING("CProjectile::H0x01f50028_Main_16")},
 {0x01f50029, -1, CEntity::pEventHandler(&CProjectile::H0x01f50029_Main_17), DEBUGSTRING("CProjectile::H0x01f50029_Main_17")},
 {0x01f5002a, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002a_Main_18), DEBUGSTRING("CProjectile::H0x01f5002a_Main_18")},
 {0x01f5002b, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002b_Main_19), DEBUGSTRING("CProjectile::H0x01f5002b_Main_19")},
 {0x01f5002c, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002c_Main_20), DEBUGSTRING("CProjectile::H0x01f5002c_Main_20")},
 {0x01f5002d, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002d_Main_21), DEBUGSTRING("CProjectile::H0x01f5002d_Main_21")},
 {0x01f5002e, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002e_Main_22), DEBUGSTRING("CProjectile::H0x01f5002e_Main_22")},
 {0x01f5002f, -1, CEntity::pEventHandler(&CProjectile::H0x01f5002f_Main_23), DEBUGSTRING("CProjectile::H0x01f5002f_Main_23")},
 {0x01f50030, -1, CEntity::pEventHandler(&CProjectile::H0x01f50030_Main_24), DEBUGSTRING("CProjectile::H0x01f50030_Main_24")},
 {0x01f50031, -1, CEntity::pEventHandler(&CProjectile::H0x01f50031_Main_25), DEBUGSTRING("CProjectile::H0x01f50031_Main_25")},
 {0x01f50032, -1, CEntity::pEventHandler(&CProjectile::H0x01f50032_Main_26), DEBUGSTRING("CProjectile::H0x01f50032_Main_26")},
};
#define CProjectile_handlersct ARRAYCOUNT(CProjectile_handlers)

CEntity *CProjectile_New(void) { return new CProjectile; };
void CProjectile_OnInitClass(void);
void CProjectile_OnEndClass(void) {};
void CProjectile_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CProjectile_OnWorldEnd(CWorld *pwo) {};
void CProjectile_OnWorldInit(CWorld *pwo) {};
void CProjectile_OnWorldTick(CWorld *pwo) {};
void CProjectile_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CProjectile, CMovableModelEntity, "Projectile", "", 501);
DECLARE_CTFILENAME(_fnmCProjectile_tbn, "");
