// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(PowerUpItemType)
  EP_ENUMVALUE(PUIT_INVISIB, "Invisibility"),
  EP_ENUMVALUE(PUIT_INVULNER, "Invulnerability"),
  EP_ENUMVALUE(PUIT_DAMAGE, "SeriousDamage"),
  EP_ENUMVALUE(PUIT_SPEED, "SeriousSpeed"),
  EP_ENUMVALUE(PUIT_BOMB, "SeriousBomb"),
  EP_ENUMVALUE(PUIT_JUMP, "SeriousJump"),
EP_ENUMEND(PowerUpItemType);

#define ENTITYCLASS CPowerUpItem

CEntityProperty CPowerUpItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &PowerUpItemType_enum, (0x328<<8)+1, 0x418, "Type", 'Y', "m_puitType", 0x7F0000FFUL, 0),
};
#define CPowerUpItem_propertiesct ARRAYCOUNT(CPowerUpItem_properties)

CEntityComponent CPowerUpItem_components[] = {
#define CLASS_BASE ((0x00000328<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_INVISIB ((0x00000328<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_INVISIB, "EFNM" "ModelsMP\\Items\\PowerUps\\Invisibility\\Invisibility.mdl"),
#define MODEL_INVULNER ((0x00000328<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_INVULNER, "EFNM" "ModelsMP\\Items\\PowerUps\\Invulnerability\\Invulnerability.mdl"),
#define MODEL_DAMAGE ((0x00000328<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_DAMAGE, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousDamage\\SeriousDamage.mdl"),
#define TEXTURE_DAMAGE ((0x00000328<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DAMAGE, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousDamage\\SeriousDamage.tex"),
#define MODEL_SPEED ((0x00000328<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_SPEED, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousSpeed\\SeriousSpeed.mdl"),
#define TEXTURE_SPEED ((0x00000328<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPEED, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousSpeed\\SeriousSpeed.tex"),
#define MODEL_BOMB ((0x00000328<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_BOMB, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousBomb\\SeriousBomb.mdl"),
#define TEXTURE_BOMB ((0x00000328<<8)+41)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BOMB, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousBomb\\SeriousBomb.tex"),
#define TEXTURE_SPECULAR_STRONG ((0x00000328<<8)+50)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPECULAR_STRONG, "EFNM" "ModelsMP\\SpecularTextures\\Strong.tex"),
#define TEXTURE_SPECULAR_MEDIUM ((0x00000328<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPECULAR_MEDIUM, "EFNM" "ModelsMP\\SpecularTextures\\Medium.tex"),
#define TEXTURE_REFLECTION_METAL ((0x00000328<<8)+52)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_METAL, "EFNM" "ModelsMP\\ReflectionTextures\\LightMetal01.tex"),
#define TEXTURE_REFLECTION_GOLD ((0x00000328<<8)+53)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_GOLD, "EFNM" "ModelsMP\\ReflectionTextures\\Gold01.tex"),
#define TEXTURE_REFLECTION_PUPLE ((0x00000328<<8)+54)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_PUPLE, "EFNM" "ModelsMP\\ReflectionTextures\\Purple01.tex"),
#define TEXTURE_FLARE ((0x00000328<<8)+55)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000328<<8)+56)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define MODEL_JUMP ((0x00000328<<8)+60)
 CEntityComponent(ECT_MODEL, MODEL_JUMP, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousJump\\SeriousJump.mdl"),
#define TEXTURE_JUMP ((0x00000328<<8)+61)
 CEntityComponent(ECT_TEXTURE, TEXTURE_JUMP, "EFNM" "ModelsMP\\Items\\PowerUps\\SeriousJump\\SeriousJump.tex"),
#define SOUND_PICKUP ((0x00000328<<8)+301)
 CEntityComponent(ECT_SOUND, SOUND_PICKUP, "EFNM" "SoundsMP\\Items\\PowerUp.wav"),
#define SOUND_BOMB ((0x00000328<<8)+305)
 CEntityComponent(ECT_SOUND, SOUND_BOMB, "EFNM" "SoundsMP\\Items\\SeriousBomb.wav"),
};
#define CPowerUpItem_componentsct ARRAYCOUNT(CPowerUpItem_components)

CEventHandlerEntry CPowerUpItem_handlers[] = {
 {0x03280001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CPowerUpItem::ItemCollected),DEBUGSTRING("CPowerUpItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CPowerUpItem::Main),DEBUGSTRING("CPowerUpItem::Main")},
};
#define CPowerUpItem_handlersct ARRAYCOUNT(CPowerUpItem_handlers)

CEntity *CPowerUpItem_New(void) { return new CPowerUpItem; };
void CPowerUpItem_OnInitClass(void) {};
void CPowerUpItem_OnEndClass(void) {};
void CPowerUpItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPowerUpItem_OnWorldEnd(CWorld *pwo) {};
void CPowerUpItem_OnWorldInit(CWorld *pwo) {};
void CPowerUpItem_OnWorldTick(CWorld *pwo) {};
void CPowerUpItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPowerUpItem, CItem, "PowerUp Item", "Thumbnails\\PowerUpItem.tbn", 808);
DECLARE_CTFILENAME(_fnmCPowerUpItem_tbn, "Thumbnails\\PowerUpItem.tbn");
