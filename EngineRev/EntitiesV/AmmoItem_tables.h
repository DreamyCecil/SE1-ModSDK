// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(AmmoItemType)
  EP_ENUMVALUE(AIT_SHELLS, "Shells"),
  EP_ENUMVALUE(AIT_BULLETS, "Bullets"),
  EP_ENUMVALUE(AIT_ROCKETS, "Rockets"),
  EP_ENUMVALUE(AIT_GRENADES, "Grenades"),
  EP_ENUMVALUE(AIT_ELECTRICITY, "Electricity"),
  EP_ENUMVALUE(AIT_NUKEBALL, "obsolete"),
  EP_ENUMVALUE(AIT_IRONBALLS, "IronBalls"),
  EP_ENUMVALUE(AIT_SERIOUSPACK, "SeriousPack - don't use"),
  EP_ENUMVALUE(AIT_BACKPACK, "BackPack - don't use"),
  EP_ENUMVALUE(AIT_NAPALM, "Napalm"),
  EP_ENUMVALUE(AIT_SNIPERBULLETS, "Sniper bullets"),
  EP_ENUMVALUE(AIT_PLASMAPACKS, "Plasma packs"),
  EP_ENUMVALUE(AIT_MINEPACKS, "Mine packs"),
EP_ENUMEND(AmmoItemType);

#define ENTITYCLASS CAmmoItem

CEntityProperty CAmmoItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &AmmoItemType_enum, (0x323<<8)+1, 0x418, "Type", 'Y', "m_EaitType", 0x7F0000FFUL, 0),
};
#define CAmmoItem_propertiesct ARRAYCOUNT(CAmmoItem_properties)

CEntityComponent CAmmoItem_components[] = {
#define CLASS_BASE ((0x00000323<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_SHELLS ((0x00000323<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_SHELLS, "EFNM" "Models\\Items\\Ammo\\Shells\\Shells.mdl"),
#define TEXTURE_SHELLS ((0x00000323<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SHELLS, "EFNM" "Models\\Items\\Ammo\\Shells\\Shells.tex"),
#define MODEL_BULLETS ((0x00000323<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_BULLETS, "EFNM" "Models\\Items\\Ammo\\Bullets\\Bullets.mdl"),
#define TEXTURE_BULLETS ((0x00000323<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BULLETS, "EFNM" "Models\\Items\\Ammo\\Bullets\\Bullets.tex"),
#define MODEL_ROCKETS ((0x00000323<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETS, "EFNM" "Models\\Items\\Ammo\\Rockets\\Rockets.mdl"),
#define MODEL_RC_ROCKET ((0x00000323<<8)+21)
 CEntityComponent(ECT_MODEL, MODEL_RC_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.mdl"),
#define TEXTURE_ROCKET ((0x00000323<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.tex"),
#define MODEL_GRENADES ((0x00000323<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_GRENADES, "EFNM" "Models\\Items\\Ammo\\Grenades\\Grenades.mdl"),
#define MODEL_GR_GRENADE ((0x00000323<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_GR_GRENADE, "EFNM" "Models\\Items\\Ammo\\Grenades\\Grenade.mdl"),
#define TEXTURE_GRENADES ((0x00000323<<8)+32)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GRENADES, "EFNM" "Models\\Items\\Ammo\\Grenades\\Grenades.tex"),
#define TEXTURE_GR_GRENADE ((0x00000323<<8)+33)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GR_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Grenade\\Grenade.tex"),
#define MODEL_ELECTRICITY ((0x00000323<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_ELECTRICITY, "EFNM" "Models\\Items\\Ammo\\Electricity\\Electricity.mdl"),
#define MODEL_EL_EFFECT ((0x00000323<<8)+41)
 CEntityComponent(ECT_MODEL, MODEL_EL_EFFECT, "EFNM" "Models\\Items\\Ammo\\Electricity\\Effect.mdl"),
#define MODEL_EL_EFFECT2 ((0x00000323<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_EL_EFFECT2, "EFNM" "Models\\Items\\Ammo\\Electricity\\Effect2.mdl"),
#define TEXTURE_ELECTRICITY ((0x00000323<<8)+43)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELECTRICITY, "EFNM" "Models\\Items\\Ammo\\Electricity\\Electricity.tex"),
#define TEXTURE_EL_EFFECT ((0x00000323<<8)+44)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EL_EFFECT, "EFNM" "Models\\Items\\Ammo\\Electricity\\Effect.tex"),
#define MODEL_CANNONBALL ((0x00000323<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_CANNONBALL, "EFNM" "Models\\Items\\Ammo\\Cannonball\\Cannonball.mdl"),
#define MODEL_CANNONBALLS ((0x00000323<<8)+51)
 CEntityComponent(ECT_MODEL, MODEL_CANNONBALLS, "EFNM" "Models\\Items\\Ammo\\Cannonball\\CannonballQuad.mdl"),
#define TEXTURE_IRONBALL ((0x00000323<<8)+52)
 CEntityComponent(ECT_TEXTURE, TEXTURE_IRONBALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\IronBall.tex"),
#define MODEL_BACKPACK ((0x00000323<<8)+60)
 CEntityComponent(ECT_MODEL, MODEL_BACKPACK, "EFNM" "Models\\Items\\PowerUps\\BackPack\\BackPack.mdl"),
#define TEXTURE_BACKPACK ((0x00000323<<8)+61)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BACKPACK, "EFNM" "Models\\Items\\PowerUps\\BackPack\\BackPack.tex"),
#define MODEL_SERIOUSPACK ((0x00000323<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_SERIOUSPACK, "EFNM" "Models\\Items\\PowerUps\\SeriousPack\\SeriousPack.mdl"),
#define TEXTURE_SERIOUSPACK ((0x00000323<<8)+71)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SERIOUSPACK, "EFNM" "Models\\Items\\PowerUps\\SeriousPack\\SeriousPack.tex"),
#define MODEL_FL_RESERVOIR ((0x00000323<<8)+80)
 CEntityComponent(ECT_MODEL, MODEL_FL_RESERVOIR, "EFNM" "ModelsMP\\Items\\Ammo\\Napalm\\Napalm.mdl"),
#define TEXTURE_FL_FUELRESERVOIR ((0x00000323<<8)+81)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FUELRESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.tex"),
#define MODEL_SNIPER_BULLETS ((0x00000323<<8)+90)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER_BULLETS, "EFNM" "ModelsMP\\Items\\Ammo\\SniperBullets\\SniperBullets.mdl"),
#define TEXTURE_SNIPER_BULLETS ((0x00000323<<8)+91)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SNIPER_BULLETS, "EFNM" "ModelsMP\\Items\\Ammo\\SniperBullets\\SniperBullets.tex"),
#define MODEL_PLASMAPACK ((0x00000323<<8)+92)
 CEntityComponent(ECT_MODEL, MODEL_PLASMAPACK, "EFNM" "Models\\Items\\Ammo\\PlasmaPacks\\PlasmaPack.mdl"),
#define TEXTURE_PLASMAPACK ((0x00000323<<8)+93)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PLASMAPACK, "EFNM" "Models\\Items\\Ammo\\PlasmaPacks\\PlasmaPack.tex"),
#define MODEL_MINEPACK ((0x00000323<<8)+94)
 CEntityComponent(ECT_MODEL, MODEL_MINEPACK, "EFNM" "Models\\Items\\Ammo\\MinePacks\\MinePack.mdl"),
#define TEXTURE_MINEPACK ((0x00000323<<8)+95)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MINEPACK, "EFNM" "Models\\Items\\Ammo\\MinePacks\\MinePack.tex"),
#define TEXTURE_FLARE ((0x00000323<<8)+100)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000323<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define TEX_REFL_BWRIPLES01 ((0x00000323<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_REFL_BWRIPLES02 ((0x00000323<<8)+201)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES02, "EFNM" "Models\\ReflectionTextures\\BWRiples02.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x00000323<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_REFL_LIGHTBLUEMETAL01 ((0x00000323<<8)+203)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTBLUEMETAL01, "EFNM" "Models\\ReflectionTextures\\LightBlueMetal01.tex"),
#define TEX_REFL_DARKMETAL ((0x00000323<<8)+204)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_DARKMETAL, "EFNM" "Models\\ReflectionTextures\\DarkMetal.tex"),
#define TEX_REFL_PURPLE01 ((0x00000323<<8)+205)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_PURPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEX_SPEC_WEAK ((0x00000323<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x00000323<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x00000323<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define SOUND_PICK ((0x00000323<<8)+213)
 CEntityComponent(ECT_SOUND, SOUND_PICK, "EFNM" "Sounds\\Items\\Ammo.wav"),
#define SOUND_DEFAULT ((0x00000323<<8)+214)
 CEntityComponent(ECT_SOUND, SOUND_DEFAULT, "EFNM" "Sounds\\Default.wav"),
};
#define CAmmoItem_componentsct ARRAYCOUNT(CAmmoItem_components)

CEventHandlerEntry CAmmoItem_handlers[] = {
 {0x03230001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CAmmoItem::ItemCollected),DEBUGSTRING("CAmmoItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CAmmoItem::Main),DEBUGSTRING("CAmmoItem::Main")},
};
#define CAmmoItem_handlersct ARRAYCOUNT(CAmmoItem_handlers)

CEntity *CAmmoItem_New(void) { return new CAmmoItem; };
void CAmmoItem_OnInitClass(void) {};
void CAmmoItem_OnEndClass(void) {};
void CAmmoItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAmmoItem_OnWorldEnd(CWorld *pwo) {};
void CAmmoItem_OnWorldInit(CWorld *pwo) {};
void CAmmoItem_OnWorldTick(CWorld *pwo) {};
void CAmmoItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAmmoItem, CItem, "Ammo Item", "Thumbnails\\AmmoItem.tbn", 803);
DECLARE_CTFILENAME(_fnmCAmmoItem_tbn, "Thumbnails\\AmmoItem.tbn");
