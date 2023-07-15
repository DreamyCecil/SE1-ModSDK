// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CControlZoneEntity

CEntityProperty CControlZoneEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x70<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
};
#define CControlZoneEntity_propertiesct ARRAYCOUNT(CControlZoneEntity_properties)

CEntityComponent CControlZoneEntity_components[] = {
#define CControlZoneEntity_TEXTURE_1 0x7001 // (0x70<<8)+1
 CEntityComponent(ECT_TEXTURE, CControlZoneEntity_TEXTURE_1, "EFNM" "Models\\Editor\\ControlZoneBox.tex"),
};
#define CControlZoneEntity_componentsct ARRAYCOUNT(CControlZoneEntity_components)

CEventHandlerEntry CControlZoneEntity_handlers[] = {
 {0x700000, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700000_Procedure_0), DEBUGSTRING("CControlZoneEntity::H0x700000_Procedure_0")},
 {0x700001, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700001_Procedure_1), DEBUGSTRING("CControlZoneEntity::H0x700001_Procedure_1")},
 {0x700002, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700002_Procedure_2), DEBUGSTRING("CControlZoneEntity::H0x700002_Procedure_2")},
 {0x700003, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700003_Procedure_3), DEBUGSTRING("CControlZoneEntity::H0x700003_Procedure_3")},
 {0x700004, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700004_Procedure_4), DEBUGSTRING("CControlZoneEntity::H0x700004_Procedure_4")},
 {1, -1, CEntity::pEventHandler(&CControlZoneEntity::Main), DEBUGSTRING("CControlZoneEntity::Main")},
 {0x700005, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700005_Procedure_6), DEBUGSTRING("CControlZoneEntity::H0x700005_Procedure_6")},
 {0x700006, -1, CEntity::pEventHandler(&CControlZoneEntity::H0x700006_Procedure_7), DEBUGSTRING("CControlZoneEntity::H0x700006_Procedure_7")},
};
#define CControlZoneEntity_handlersct ARRAYCOUNT(CControlZoneEntity_handlers)

CEntity *CControlZoneEntity_New(void) { return new CControlZoneEntity; };
void CControlZoneEntity_OnInitClass(void) {};
void CControlZoneEntity_OnEndClass(void) {};
void CControlZoneEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CControlZoneEntity_OnWorldEnd(CWorld *pwo) {};
void CControlZoneEntity_OnWorldInit(CWorld *pwo) {};
void CControlZoneEntity_OnWorldTick(CWorld *pwo) {};
void CControlZoneEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CControlZoneEntity, CRationalEntity, "Control Zone", "Thumbnails\\ControlZone.tbn", 112);
DECLARE_CTFILENAME(_fnmCControlZoneEntity_tbn, "Thumbnails\\ControlZone.tbn");
