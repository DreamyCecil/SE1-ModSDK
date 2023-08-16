// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(HealthItemType)
  EP_ENUMVALUE(HIT_PILL, "Pill"),
  EP_ENUMVALUE(HIT_SMALL, "Small"),
  EP_ENUMVALUE(HIT_MEDIUM, "Medium"),
  EP_ENUMVALUE(HIT_LARGE, "Large"),
  EP_ENUMVALUE(HIT_SUPER, "Super"),
EP_ENUMEND(HealthItemType);

#define ENTITYCLASS CHealthItem

CEntityProperty CHealthItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &HealthItemType_enum, (0x321<<8)+1, 0x418, "Type", 'Y', "m_EhitType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x321<<8)+2, 0x41C, "", 0, "m_bOverTopHealth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x321<<8)+3, 0x420, "", 0, "m_iSoundComponent", 0x0UL, 0),
};
#define CHealthItem_propertiesct ARRAYCOUNT(CHealthItem_properties)

CEntityComponent CHealthItem_components[] = {
#define CLASS_BASE ((0x00000321<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_PILL ((0x00000321<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_PILL, "EFNM" "Models\\Items\\Health\\Pill\\Pill.mdl"),
#define TEXTURE_PILL ((0x00000321<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PILL, "EFNM" "Models\\Items\\Health\\Pill\\Pill.tex"),
#define TEXTURE_PILL_BUMP ((0x00000321<<8)+3)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PILL_BUMP, "EFNM" "Models\\Items\\Health\\Pill\\PillBump.tex"),
#define MODEL_SMALL ((0x00000321<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_SMALL, "EFNM" "Models\\Items\\Health\\Small\\Small.mdl"),
#define TEXTURE_SMALL ((0x00000321<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SMALL, "EFNM" "Models\\Items\\Health\\Small\\Small.tex"),
#define MODEL_MEDIUM ((0x00000321<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_MEDIUM, "EFNM" "Models\\Items\\Health\\Medium\\Medium.mdl"),
#define TEXTURE_MEDIUM ((0x00000321<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MEDIUM, "EFNM" "Models\\Items\\Health\\Medium\\Medium.tex"),
#define MODEL_LARGE ((0x00000321<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_LARGE, "EFNM" "Models\\Items\\Health\\Large\\Large.mdl"),
#define TEXTURE_LARGE ((0x00000321<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LARGE, "EFNM" "Models\\Items\\Health\\Large\\Large.tex"),
#define MODEL_SUPER ((0x00000321<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_SUPER, "EFNM" "Models\\Items\\Health\\Super\\Super.mdl"),
#define TEXTURE_SUPER ((0x00000321<<8)+41)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SUPER, "EFNM" "Models\\Items\\Health\\Super\\Super.tex"),
#define TEXTURE_SPECULAR_STRONG ((0x00000321<<8)+50)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPECULAR_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define TEXTURE_SPECULAR_MEDIUM ((0x00000321<<8)+51)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPECULAR_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEXTURE_REFLECTION_LIGHTMETAL01 ((0x00000321<<8)+52)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEXTURE_REFLECTION_GOLD01 ((0x00000321<<8)+53)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_GOLD01, "EFNM" "Models\\ReflectionTextures\\Gold01.tex"),
#define TEXTURE_REFLECTION_PUPLE01 ((0x00000321<<8)+54)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REFLECTION_PUPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEXTURE_FLARE ((0x00000321<<8)+55)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000321<<8)+56)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define SOUND_PILL ((0x00000321<<8)+301)
 CEntityComponent(ECT_SOUND, SOUND_PILL, "EFNM" "Sounds\\Items\\HealthPill.wav"),
#define SOUND_SMALL ((0x00000321<<8)+302)
 CEntityComponent(ECT_SOUND, SOUND_SMALL, "EFNM" "Sounds\\Items\\HealthSmall.wav"),
#define SOUND_MEDIUM ((0x00000321<<8)+303)
 CEntityComponent(ECT_SOUND, SOUND_MEDIUM, "EFNM" "Sounds\\Items\\HealthMedium.wav"),
#define SOUND_LARGE ((0x00000321<<8)+304)
 CEntityComponent(ECT_SOUND, SOUND_LARGE, "EFNM" "Sounds\\Items\\HealthLarge.wav"),
#define SOUND_SUPER ((0x00000321<<8)+305)
 CEntityComponent(ECT_SOUND, SOUND_SUPER, "EFNM" "Sounds\\Items\\HealthSuper.wav"),
};
#define CHealthItem_componentsct ARRAYCOUNT(CHealthItem_components)

CEventHandlerEntry CHealthItem_handlers[] = {
 {0x03210001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CHealthItem::ItemCollected),DEBUGSTRING("CHealthItem::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CHealthItem::Main),DEBUGSTRING("CHealthItem::Main")},
};
#define CHealthItem_handlersct ARRAYCOUNT(CHealthItem_handlers)

CEntity *CHealthItem_New(void) { return new CHealthItem; };
void CHealthItem_OnInitClass(void) {};
void CHealthItem_OnEndClass(void) {};
void CHealthItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CHealthItem_OnWorldEnd(CWorld *pwo) {};
void CHealthItem_OnWorldInit(CWorld *pwo) {};
void CHealthItem_OnWorldTick(CWorld *pwo) {};
void CHealthItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CHealthItem, CItem, "Health Item", "Thumbnails\\HealthItem.tbn", 801);
DECLARE_CTFILENAME(_fnmCHealthItem_tbn, "Thumbnails\\HealthItem.tbn");
