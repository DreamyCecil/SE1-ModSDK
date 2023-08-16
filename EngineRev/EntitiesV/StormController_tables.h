// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CStormController

CEntityProperty CStormController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+1, 0x110, "", 0, "m_penwsc", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x25e<<8)+2, 0x114, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+3, 0x118, "", 0, "m_fNextLightningDelay", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25e<<8)+4, 0x11C, "", 0, "m_bStormOn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+5, 0x120, "", 0, "m_fNextLightningStrike", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+10, 0x124, "Lightning 1", 'T', "m_penLightning00", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+11, 0x128, "Lightning 2", 'Y', "m_penLightning01", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+12, 0x12C, "Lightning 3", 'U', "m_penLightning02", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+13, 0x130, "Lightning 4", 'I', "m_penLightning03", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+14, 0x134, "Lightning 5", 'O', "m_penLightning04", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+15, 0x138, "Lightning 6", 'P', "m_penLightning05", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+16, 0x13C, "Lightning 7", 0, "m_penLightning06", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+17, 0x140, "Lightning 8", 0, "m_penLightning07", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+18, 0x144, "Lightning 9", 0, "m_penLightning08", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+19, 0x148, "Lightning 10", 0, "m_penLightning09", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+20, 0x14C, "Lightning 11", 0, "m_penLightning10", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+21, 0x150, "Lightning 12", 0, "m_penLightning11", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+22, 0x154, "Lightning 13", 0, "m_penLightning12", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+23, 0x158, "Lightning 14", 0, "m_penLightning13", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+24, 0x15C, "Lightning 15", 0, "m_penLightning14", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+25, 0x160, "Lightning 16", 0, "m_penLightning15", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+26, 0x164, "Lightning 17", 0, "m_penLightning16", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+27, 0x168, "Lightning 18", 0, "m_penLightning17", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+28, 0x16C, "Lightning 19", 0, "m_penLightning18", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25e<<8)+29, 0x170, "Lightning 20", 0, "m_penLightning19", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+40, 0x174, "Storm appear time", 0, "m_tmStormAppearTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+41, 0x178, "Storm disappear time", 0, "m_tmStormDisappearTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+42, 0x17C, "First lightning delay", 0, "m_fFirstLightningDelay", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+43, 0x180, "Max lightning period", 0, "m_fMaxLightningPeriod", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+44, 0x184, "Min lightning period", 0, "m_fMinLightningPeriod", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25e<<8)+45, 0x188, "Max storm power time", 0, "m_fMaxStormPowerTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25e<<8)+50, 0x18C, "Color blend start", 'B', "m_colBlendStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25e<<8)+51, 0x190, "Color blend stop", 0, "m_colBlendStop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25e<<8)+52, 0x194, "Color shade start", 'S', "m_colShadeStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25e<<8)+53, 0x198, "Color shade stop", 0, "m_colShadeStop", 0x7F0000FFUL, 0),
};
#define CStormController_propertiesct ARRAYCOUNT(CStormController_properties)

CEntityComponent CStormController_components[] = {
#define MODEL_STORM_CONTROLLER ((0x0000025e<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_STORM_CONTROLLER, "EFNM" "Models\\Editor\\StormController.mdl"),
#define TEXTURE_STORM_CONTROLLER ((0x0000025e<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STORM_CONTROLLER, "EFNM" "Models\\Editor\\StormController.tex"),
};
#define CStormController_componentsct ARRAYCOUNT(CStormController_components)

CEventHandlerEntry CStormController_handlers[] = {
 {0x025e0000, -1, CEntity::pEventHandler(&CStormController::Storm),DEBUGSTRING("CStormController::Storm")},
 {0x025e0001, -1, CEntity::pEventHandler(&CStormController::H0x025e0001_Storm_01), DEBUGSTRING("CStormController::H0x025e0001_Storm_01")},
 {0x025e0002, -1, CEntity::pEventHandler(&CStormController::H0x025e0002_Storm_02), DEBUGSTRING("CStormController::H0x025e0002_Storm_02")},
 {0x025e0003, -1, CEntity::pEventHandler(&CStormController::StormInternal),DEBUGSTRING("CStormController::StormInternal")},
 {0x025e0004, -1, CEntity::pEventHandler(&CStormController::H0x025e0004_StormInternal_01), DEBUGSTRING("CStormController::H0x025e0004_StormInternal_01")},
 {0x025e0005, -1, CEntity::pEventHandler(&CStormController::H0x025e0005_StormInternal_02), DEBUGSTRING("CStormController::H0x025e0005_StormInternal_02")},
 {0x025e0006, -1, CEntity::pEventHandler(&CStormController::H0x025e0006_StormInternal_03), DEBUGSTRING("CStormController::H0x025e0006_StormInternal_03")},
 {0x025e0007, -1, CEntity::pEventHandler(&CStormController::H0x025e0007_StormInternal_04), DEBUGSTRING("CStormController::H0x025e0007_StormInternal_04")},
 {0x025e0008, -1, CEntity::pEventHandler(&CStormController::H0x025e0008_StormInternal_05), DEBUGSTRING("CStormController::H0x025e0008_StormInternal_05")},
 {0x025e0009, -1, CEntity::pEventHandler(&CStormController::H0x025e0009_StormInternal_06), DEBUGSTRING("CStormController::H0x025e0009_StormInternal_06")},
 {0x025e000a, -1, CEntity::pEventHandler(&CStormController::H0x025e000a_StormInternal_07), DEBUGSTRING("CStormController::H0x025e000a_StormInternal_07")},
 {0x025e000b, -1, CEntity::pEventHandler(&CStormController::H0x025e000b_StormInternal_08), DEBUGSTRING("CStormController::H0x025e000b_StormInternal_08")},
 {1, -1, CEntity::pEventHandler(&CStormController::Main),DEBUGSTRING("CStormController::Main")},
 {0x025e000c, -1, CEntity::pEventHandler(&CStormController::H0x025e000c_Main_01), DEBUGSTRING("CStormController::H0x025e000c_Main_01")},
 {0x025e000d, -1, CEntity::pEventHandler(&CStormController::H0x025e000d_Main_02), DEBUGSTRING("CStormController::H0x025e000d_Main_02")},
 {0x025e000e, -1, CEntity::pEventHandler(&CStormController::H0x025e000e_Main_03), DEBUGSTRING("CStormController::H0x025e000e_Main_03")},
 {0x025e000f, -1, CEntity::pEventHandler(&CStormController::H0x025e000f_Main_04), DEBUGSTRING("CStormController::H0x025e000f_Main_04")},
 {0x025e0010, -1, CEntity::pEventHandler(&CStormController::H0x025e0010_Main_05), DEBUGSTRING("CStormController::H0x025e0010_Main_05")},
 {0x025e0011, -1, CEntity::pEventHandler(&CStormController::H0x025e0011_Main_06), DEBUGSTRING("CStormController::H0x025e0011_Main_06")},
};
#define CStormController_handlersct ARRAYCOUNT(CStormController_handlers)

CEntity *CStormController_New(void) { return new CStormController; };
void CStormController_OnInitClass(void) {};
void CStormController_OnEndClass(void) {};
void CStormController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CStormController_OnWorldEnd(CWorld *pwo) {};
void CStormController_OnWorldInit(CWorld *pwo) {};
void CStormController_OnWorldTick(CWorld *pwo) {};
void CStormController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CStormController, CRationalEntity, "Storm controller", "Thumbnails\\StormController.tbn", 606);
DECLARE_CTFILENAME(_fnmCStormController_tbn, "Thumbnails\\StormController.tbn");
