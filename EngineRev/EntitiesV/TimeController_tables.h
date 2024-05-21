// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTimeController

CEntityProperty CTimeController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+1, 0x110, "Time speed", 0, "m_fTimeStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+2, 0x114, "Fade in time", 0, "m_tmFadeIn", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+3, 0x118, "Auto clear stretch after...", 0, "m_tmInterval", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x265<<8)+4, 0x11C, "Absolute", 0, "m_bAbsolute", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+5, 0x120, "", 0, "m_fMyTimer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+6, 0x124, "", 0, "m_tmStretchChangeStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x265<<8)+7, 0x128, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+8, 0x12C, "", 0, "m_fOldTimeStretch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x265<<8)+9, 0x130, "", 0, "m_fNewTimeStretch", 0x0UL, 0),
};
#define CTimeController_propertiesct ARRAYCOUNT(CTimeController_properties)

CEntityComponent CTimeController_components[] = {
#define MODEL_TIME_CONTROLLER ((0x00000265<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TIME_CONTROLLER, "EFNM" "ModelsMP\\Editor\\TimeControler.mdl"),
#define TEXTURE_TIME_CONTROLLER ((0x00000265<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TIME_CONTROLLER, "EFNM" "ModelsMP\\Editor\\TimeController.tex"),
};
#define CTimeController_componentsct ARRAYCOUNT(CTimeController_components)

CEventHandlerEntry CTimeController_handlers[] = {
 {0x02650000, -1, CEntity::pEventHandler(&CTimeController::ChangeTimeStretch),DEBUGSTRING("CTimeController::ChangeTimeStretch")},
 {0x02650001, -1, CEntity::pEventHandler(&CTimeController::H0x02650001_ChangeTimeStretch_01), DEBUGSTRING("CTimeController::H0x02650001_ChangeTimeStretch_01")},
 {0x02650002, -1, CEntity::pEventHandler(&CTimeController::H0x02650002_ChangeTimeStretch_02), DEBUGSTRING("CTimeController::H0x02650002_ChangeTimeStretch_02")},
 {0x02650003, -1, CEntity::pEventHandler(&CTimeController::H0x02650003_ChangeTimeStretch_03), DEBUGSTRING("CTimeController::H0x02650003_ChangeTimeStretch_03")},
 {0x02650004, -1, CEntity::pEventHandler(&CTimeController::H0x02650004_ChangeTimeStretch_04), DEBUGSTRING("CTimeController::H0x02650004_ChangeTimeStretch_04")},
 {0x02650005, -1, CEntity::pEventHandler(&CTimeController::ApplyTimeStretch),DEBUGSTRING("CTimeController::ApplyTimeStretch")},
 {0x02650006, -1, CEntity::pEventHandler(&CTimeController::H0x02650006_ApplyTimeStretch_01), DEBUGSTRING("CTimeController::H0x02650006_ApplyTimeStretch_01")},
 {0x02650007, -1, CEntity::pEventHandler(&CTimeController::H0x02650007_ApplyTimeStretch_02), DEBUGSTRING("CTimeController::H0x02650007_ApplyTimeStretch_02")},
 {0x02650008, -1, CEntity::pEventHandler(&CTimeController::H0x02650008_ApplyTimeStretch_03), DEBUGSTRING("CTimeController::H0x02650008_ApplyTimeStretch_03")},
 {0x02650009, -1, CEntity::pEventHandler(&CTimeController::H0x02650009_ApplyTimeStretch_04), DEBUGSTRING("CTimeController::H0x02650009_ApplyTimeStretch_04")},
 {0x0265000a, -1, CEntity::pEventHandler(&CTimeController::H0x0265000a_ApplyTimeStretch_05), DEBUGSTRING("CTimeController::H0x0265000a_ApplyTimeStretch_05")},
 {0x0265000b, -1, CEntity::pEventHandler(&CTimeController::H0x0265000b_ApplyTimeStretch_06), DEBUGSTRING("CTimeController::H0x0265000b_ApplyTimeStretch_06")},
 {0x0265000c, -1, CEntity::pEventHandler(&CTimeController::H0x0265000c_ApplyTimeStretch_07), DEBUGSTRING("CTimeController::H0x0265000c_ApplyTimeStretch_07")},
 {0x0265000d, -1, CEntity::pEventHandler(&CTimeController::ResetTimeStretch),DEBUGSTRING("CTimeController::ResetTimeStretch")},
 {0x0265000e, -1, CEntity::pEventHandler(&CTimeController::H0x0265000e_ResetTimeStretch_01), DEBUGSTRING("CTimeController::H0x0265000e_ResetTimeStretch_01")},
 {0x0265000f, -1, CEntity::pEventHandler(&CTimeController::H0x0265000f_ResetTimeStretch_02), DEBUGSTRING("CTimeController::H0x0265000f_ResetTimeStretch_02")},
 {1, -1, CEntity::pEventHandler(&CTimeController::Main),DEBUGSTRING("CTimeController::Main")},
 {0x02650010, -1, CEntity::pEventHandler(&CTimeController::H0x02650010_Main_01), DEBUGSTRING("CTimeController::H0x02650010_Main_01")},
 {0x02650011, -1, CEntity::pEventHandler(&CTimeController::H0x02650011_Main_02), DEBUGSTRING("CTimeController::H0x02650011_Main_02")},
 {0x02650012, -1, CEntity::pEventHandler(&CTimeController::H0x02650012_Main_03), DEBUGSTRING("CTimeController::H0x02650012_Main_03")},
 {0x02650013, -1, CEntity::pEventHandler(&CTimeController::H0x02650013_Main_04), DEBUGSTRING("CTimeController::H0x02650013_Main_04")},
};
#define CTimeController_handlersct ARRAYCOUNT(CTimeController_handlers)

CEntity *CTimeController_New(void) { return new CTimeController; };
void CTimeController_OnInitClass(void) {};
void CTimeController_OnEndClass(void) {};
void CTimeController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTimeController_OnWorldEnd(CWorld *pwo) {};
void CTimeController_OnWorldInit(CWorld *pwo) {};
void CTimeController_OnWorldTick(CWorld *pwo) {};
void CTimeController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTimeController, CRationalEntity, "TimeController", "Thumbnails\\TimeController.tbn", 613);
DECLARE_CTFILENAME(_fnmCTimeController_tbn, "Thumbnails\\TimeController.tbn");