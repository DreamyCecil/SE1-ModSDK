// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CFlagItem

CEntityProperty CFlagItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x329<<8)+1, 0x418, "Owner team", 'T', "m_iTeam", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x329<<8)+2, 0x41C, "Loose", 0, "m_iLoose", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x329<<8)+3, 0x420, "", 0, "m_iPicked", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x329<<8)+5, 0x424, "", 0, "m_tmRecovered", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x329<<8)+6, 0x428, "", 0, "m_penLooseReminder", 0x0UL, 0),
};
#define CFlagItem_propertiesct ARRAYCOUNT(CFlagItem_properties)

CEntityComponent CFlagItem_components[] = {
#define CFlagItem_CLASS_0 0x32900 // (0x329<<8)+0
 CEntityComponent(ECT_CLASS, CFlagItem_CLASS_0, "EFNM" "Classes\\Item.ecl"),
#define CFlagItem_MODEL_1 0x32901 // (0x329<<8)+1
 CEntityComponent(ECT_MODEL, CFlagItem_MODEL_1, "EFNM" "Models\\Flag\\Flag.mdl"),
#define CFlagItem_TEXTURE_2 0x32902 // (0x329<<8)+2
 CEntityComponent(ECT_TEXTURE, CFlagItem_TEXTURE_2, "EFNM" "Models\\Flag\\Flag.tex"),
#define CFlagItem_TEXTURE_3 0x32903 // (0x329<<8)+3
 CEntityComponent(ECT_TEXTURE, CFlagItem_TEXTURE_3, "EFNM" "Models\\Flag\\FlagBlue.tex"),
};
#define CFlagItem_componentsct ARRAYCOUNT(CFlagItem_components)

CEventHandlerEntry CFlagItem_handlers[] = {
 {0x3290001, 0x3200000, CEntity::pEventHandler(&CFlagItem::H0x3290001_Procedure_0), DEBUGSTRING("CFlagItem::H0x3290001_Procedure_0")},
 {1, -1, CEntity::pEventHandler(&CFlagItem::Main), DEBUGSTRING("CFlagItem::Main")},
 {0x3290002, -1, CEntity::pEventHandler(&CFlagItem::H0x3290002_Procedure_2), DEBUGSTRING("CFlagItem::H0x3290002_Procedure_2")},
 {0x3290003, -1, CEntity::pEventHandler(&CFlagItem::H0x3290003_Procedure_3), DEBUGSTRING("CFlagItem::H0x3290003_Procedure_3")},
 {0x3290004, -1, CEntity::pEventHandler(&CFlagItem::H0x3290004_Procedure_4), DEBUGSTRING("CFlagItem::H0x3290004_Procedure_4")},
 {0x3290005, -1, CEntity::pEventHandler(&CFlagItem::H0x3290005_Procedure_5), DEBUGSTRING("CFlagItem::H0x3290005_Procedure_5")},
};
#define CFlagItem_handlersct ARRAYCOUNT(CFlagItem_handlers)

CEntity *CFlagItem_New(void) { return new CFlagItem; };
void CFlagItem_OnInitClass(void) {};
void CFlagItem_OnEndClass(void) {};
void CFlagItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CFlagItem_OnWorldEnd(CWorld *pwo) {};
void CFlagItem_OnWorldInit(CWorld *pwo) {};
void CFlagItem_OnWorldTick(CWorld *pwo) {};
void CFlagItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFlagItem, CItem, "FlagItem", "Thumbnails\\FlagItem.tbn", 809);
DECLARE_CTFILENAME(_fnmCFlagItem_tbn, "Thumbnails\\FlagItem.tbn");
