// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTacticsChanger

CEntityProperty CTacticsChanger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xec<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xec<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &TacticType_enum, (0xec<<8)+10, 0x118, "Type", 'Y', "m_tctType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xec<<8)+11, 0x11C, "Parameter 1", 'D', "m_fParam1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xec<<8)+12, 0x120, "Parameter 2", 'F', "m_fParam2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xec<<8)+13, 0x124, "Parameter 3", 'G', "m_fParam3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xec<<8)+14, 0x128, "Parameter 4", 'H', "m_fParam4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xec<<8)+15, 0x12C, "Parameter 5", 'J', "m_fParam5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xec<<8)+18, 0x130, "Tactics holder", 'H', "m_penTacticsHolder", 0x7F0000FFUL, 0),
};
#define CTacticsChanger_propertiesct ARRAYCOUNT(CTacticsChanger_properties)

CEntityComponent CTacticsChanger_components[] = {
#define MODEL_MANAGER ((0x000000ec<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsChanger.mdl"),
#define TEXTURE_MANAGER ((0x000000ec<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsChanger.tex"),
};
#define CTacticsChanger_componentsct ARRAYCOUNT(CTacticsChanger_components)

CEventHandlerEntry CTacticsChanger_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTacticsChanger::Main),DEBUGSTRING("CTacticsChanger::Main")},
 {0x00ec0000, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0000_Main_01), DEBUGSTRING("CTacticsChanger::H0x00ec0000_Main_01")},
 {0x00ec0001, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0001_Main_02), DEBUGSTRING("CTacticsChanger::H0x00ec0001_Main_02")},
 {0x00ec0002, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0002_Main_03), DEBUGSTRING("CTacticsChanger::H0x00ec0002_Main_03")},
 {0x00ec0003, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0003_Main_04), DEBUGSTRING("CTacticsChanger::H0x00ec0003_Main_04")},
 {0x00ec0004, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0004_Main_05), DEBUGSTRING("CTacticsChanger::H0x00ec0004_Main_05")},
 {0x00ec0005, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0005_Main_06), DEBUGSTRING("CTacticsChanger::H0x00ec0005_Main_06")},
 {0x00ec0006, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0006_Main_07), DEBUGSTRING("CTacticsChanger::H0x00ec0006_Main_07")},
 {0x00ec0007, -1, CEntity::pEventHandler(&CTacticsChanger::H0x00ec0007_Main_08), DEBUGSTRING("CTacticsChanger::H0x00ec0007_Main_08")},
};
#define CTacticsChanger_handlersct ARRAYCOUNT(CTacticsChanger_handlers)

CEntity *CTacticsChanger_New(void) { return new CTacticsChanger; };
void CTacticsChanger_OnInitClass(void) {};
void CTacticsChanger_OnEndClass(void) {};
void CTacticsChanger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTacticsChanger_OnWorldEnd(CWorld *pwo) {};
void CTacticsChanger_OnWorldInit(CWorld *pwo) {};
void CTacticsChanger_OnWorldTick(CWorld *pwo) {};
void CTacticsChanger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTacticsChanger, CRationalEntity, "TacticsChanger", "Thumbnails\\TacticsChanger.tbn", 236);
DECLARE_CTFILENAME(_fnmCTacticsChanger_tbn, "Thumbnails\\TacticsChanger.tbn");
