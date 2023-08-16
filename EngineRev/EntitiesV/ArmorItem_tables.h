// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(ArmorItemType)
  EP_ENUMVALUE(ARIT_SHARD, "Shard"),
  EP_ENUMVALUE(ARIT_SMALL, "Small"),
  EP_ENUMVALUE(ARIT_MEDIUM, "Medium"),
  EP_ENUMVALUE(ARIT_STRONG, "Strong"),
  EP_ENUMVALUE(ARIT_SUPER, "Super"),
  EP_ENUMVALUE(ARIT_HELM, "Helm"),
EP_ENUMEND(ArmorItemType);

#define ENTITYCLASS CArmorItem

CEntityProperty CArmorItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &ArmorItemType_enum, (0x324<<8)+1, 0x418, "Type", 'Y', "m_EaitType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x324<<8)+2, 0x41C, "", 0, "m_bOverTopArmor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x324<<8)+3, 0x420, "", 0, "m_iSoundComponent", 0x0UL, 0),
};
#define CArmorItem_propertiesct ARRAYCOUNT(CArmorItem_properties)

CEntityComponent CArmorItem_components[] = {
#define CLASS_BASE ((0x00000324<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_1 ((0x00000324<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_1, "EFNM" "Models\\Items\\Armor\\Armor_1.mdl"),
#define TEXTURE_1 ((0x00000324<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_1, "EFNM" "Models\\Items\\Armor\\Armor_1.tex"),
#define MODEL_25 ((0x00000324<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_25, "EFNM" "Models\\Items\\Armor\\Armor_25.mdl"),
#define TEXTURE_25 ((0x00000324<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_25, "EFNM" "Models\\Items\\Armor\\Armor_25.tex"),
#define MODEL_50 ((0x00000324<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_50, "EFNM" "Models\\Items\\Armor\\Armor_50.mdl"),
#define TEXTURE_50 ((0x00000324<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_50, "EFNM" "Models\\Items\\Armor\\Armor_50.tex"),
#define MODEL_100 ((0x00000324<<8)+22)
 CEntityComponent(ECT_MODEL, MODEL_100, "EFNM" "Models\\Items\\Armor\\Armor_100.mdl"),
#define TEXTURE_100 ((0x00000324<<8)+23)
 CEntityComponent(ECT_TEXTURE, TEXTURE_100, "EFNM" "Models\\Items\\Armor\\Armor_100.tex"),
#define MODEL_200 ((0x00000324<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_200, "EFNM" "Models\\Items\\Armor\\Armor_200.mdl"),
#define TEXTURE_200 ((0x00000324<<8)+41)
 CEntityComponent(ECT_TEXTURE, TEXTURE_200, "EFNM" "Models\\Items\\Armor\\Armor_200.tex"),
#define MODEL_5 ((0x00000324<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_5, "EFNM" "ModelsMP\\Items\\Armor\\Armor_5.mdl"),
#define TEXTURE_5 ((0x00000324<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_5, "EFNM" "ModelsMP\\Items\\Armor\\Armor_5.tex"),
#define TEXTURE_FLARE ((0x00000324<<8)+100)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000324<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define TEX_REFL_LIGHTMETAL01 ((0x00000324<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_SPEC_MEDIUM ((0x00000324<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define SOUND_SHARD ((0x00000324<<8)+301)
 CEntityComponent(ECT_SOUND, SOUND_SHARD, "EFNM" "Sounds\\Items\\ArmourShard.wav"),
#define SOUND_SMALL ((0x00000324<<8)+302)
 CEntityComponent(ECT_SOUND, SOUND_SMALL, "EFNM" "Sounds\\Items\\ArmourSmall.wav"),
#define SOUND_MEDIUM ((0x00000324<<8)+303)
 CEntityComponent(ECT_SOUND, SOUND_MEDIUM, "EFNM" "Sounds\\Items\\ArmourMedium.wav"),
#define SOUND_STRONG ((0x00000324<<8)+304)
 CEntityComponent(ECT_SOUND, SOUND_STRONG, "EFNM" "Sounds\\Items\\ArmourStrong.wav"),
#define SOUND_SUPER ((0x00000324<<8)+305)
 CEntityComponent(ECT_SOUND, SOUND_SUPER, "EFNM" "Sounds\\Items\\ArmourSuper.wav"),
#define SOUND_HELM ((0x00000324<<8)+306)
 CEntityComponent(ECT_SOUND, SOUND_HELM, "EFNM" "SoundsMP\\Items\\ArmourHelm.wav"),
};
#define CArmorItem_componentsct ARRAYCOUNT(CArmorItem_components)

CEventHandlerEntry CArmorItem_handlers[] = {
 {0x03240001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CArmorItem::ItemCollected),DEBUGSTRING("CArmorItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CArmorItem::Main),DEBUGSTRING("CArmorItem::Main")},
};
#define CArmorItem_handlersct ARRAYCOUNT(CArmorItem_handlers)

CEntity *CArmorItem_New(void) { return new CArmorItem; };
void CArmorItem_OnInitClass(void) {};
void CArmorItem_OnEndClass(void) {};
void CArmorItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CArmorItem_OnWorldEnd(CWorld *pwo) {};
void CArmorItem_OnWorldInit(CWorld *pwo) {};
void CArmorItem_OnWorldTick(CWorld *pwo) {};
void CArmorItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CArmorItem, CItem, "Armor Item", "Thumbnails\\ArmorItem.tbn", 804);
DECLARE_CTFILENAME(_fnmCArmorItem_tbn, "Thumbnails\\ArmorItem.tbn");
