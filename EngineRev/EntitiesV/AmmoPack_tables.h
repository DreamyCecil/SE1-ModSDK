// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(AmmoPackType)
  EP_ENUMVALUE(APT_CUSTOM, "Custom pack"),
  EP_ENUMVALUE(APT_SERIOUS, "Serious pack"),
EP_ENUMEND(AmmoPackType);

#define ENTITYCLASS CAmmoPack

CEntityProperty CAmmoPack_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &AmmoPackType_enum, (0x326<<8)+1, 0x418, "Type", 'Y', "m_aptPackType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+10, 0x41C, "Shells", 'S', "m_iShells", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+11, 0x420, "Bullets", 'B', "m_iBullets", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+12, 0x424, "Rockets", 'C', "m_iRockets", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+13, 0x428, "Grenades", 'G', "m_iGrenades", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+14, 0x42C, "Napalm", 'P', "m_iNapalm", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+15, 0x430, "Electricity", 'E', "m_iElectricity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+16, 0x434, "Iron balls", 'I', "m_iIronBalls", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+17, 0x438, "Sniper bullets", 'N', "m_iSniperBullets", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+18, 0x43C, "Plasma packs", 'L', "m_iPlasmaPacks", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x326<<8)+19, 0x440, "Mine packs", 'M', "m_iMinePacks", 0x7F0000FFUL, 0),
};
#define CAmmoPack_propertiesct ARRAYCOUNT(CAmmoPack_properties)

CEntityComponent CAmmoPack_components[] = {
#define CLASS_BASE ((0x00000326<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\Item.ecl"),
#define MODEL_BACKPACK ((0x00000326<<8)+60)
 CEntityComponent(ECT_MODEL, MODEL_BACKPACK, "EFNM" "Models\\Items\\PowerUps\\BackPack\\BackPack.mdl"),
#define TEXTURE_BACKPACK ((0x00000326<<8)+61)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BACKPACK, "EFNM" "Models\\Items\\PowerUps\\BackPack\\BackPack.tex"),
#define MODEL_SERIOUSPACK ((0x00000326<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_SERIOUSPACK, "EFNM" "Models\\Items\\PowerUps\\SeriousPack\\SeriousPack.mdl"),
#define TEXTURE_SERIOUSPACK ((0x00000326<<8)+71)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SERIOUSPACK, "EFNM" "Models\\Items\\PowerUps\\SeriousPack\\SeriousPack.tex"),
#define TEXTURE_FLARE ((0x00000326<<8)+100)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.tex"),
#define MODEL_FLARE ((0x00000326<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Items\\Flares\\Flare.mdl"),
#define SOUND_PICK ((0x00000326<<8)+213)
 CEntityComponent(ECT_SOUND, SOUND_PICK, "EFNM" "Sounds\\Items\\Ammo.wav"),
};
#define CAmmoPack_componentsct ARRAYCOUNT(CAmmoPack_components)

CEventHandlerEntry CAmmoPack_handlers[] = {
 {0x03260001, STATE_CItem_ItemCollected, CEntity::pEventHandler(&CAmmoPack::ItemCollected),DEBUGSTRING("CAmmoPack::ItemCollected")},
 {1, -1, CEntity::pEventHandler(&CAmmoPack::Main),DEBUGSTRING("CAmmoPack::Main")},
};
#define CAmmoPack_handlersct ARRAYCOUNT(CAmmoPack_handlers)

CEntity *CAmmoPack_New(void) { return new CAmmoPack; };
void CAmmoPack_OnInitClass(void) {};
void CAmmoPack_OnEndClass(void) {};
void CAmmoPack_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAmmoPack_OnWorldEnd(CWorld *pwo) {};
void CAmmoPack_OnWorldInit(CWorld *pwo) {};
void CAmmoPack_OnWorldTick(CWorld *pwo) {};
void CAmmoPack_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAmmoPack, CItem, "Ammo Pack", "Thumbnails\\AmmoPack.tbn", 806);
DECLARE_CTFILENAME(_fnmCAmmoPack_tbn, "Thumbnails\\AmmoPack.tbn");
