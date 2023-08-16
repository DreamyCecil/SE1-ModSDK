// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(DoorType)
  EP_ENUMVALUE(DT_AUTO, "Auto"),
  EP_ENUMVALUE(DT_TRIGGERED, "Triggered"),
  EP_ENUMVALUE(DT_LOCKED, "Locked"),
  EP_ENUMVALUE(DT_TRIGGEREDAUTO, "Triggered Auto"),
EP_ENUMEND(DoorType);

#define ENTITYCLASS CDoorController

CEntityProperty CDoorController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdd<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdd<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdd<<8)+3, 0x118, "Target1", 'T', "m_penTarget1", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdd<<8)+4, 0x11C, "Target2", 0, "m_penTarget2", 0xFF00FFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdd<<8)+5, 0x120, "Width", 'W', "m_fWidth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdd<<8)+6, 0x124, "Height", 'H', "m_fHeight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdd<<8)+7, 0x128, "Players Only", 'P', "m_bPlayersOnly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DoorType_enum, (0xdd<<8)+8, 0x12C, "Type", 'Y', "m_dtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRINGTRANS, NULL, (0xdd<<8)+9, 0x130, "Locked message", 'L', "m_strLockedMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdd<<8)+13, 0x134, "Locked target", 0, "m_penLockedTarget", 0x7F007FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &KeyItemType_enum, (0xdd<<8)+12, 0x138, "Key", 'K', "m_kitKey", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdd<<8)+14, 0x13C, "Trigger on anything", 0, "m_bTriggerOnAnything", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdd<<8)+15, 0x140, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdd<<8)+10, 0x144, "", 0, "m_bLocked", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdd<<8)+11, 0x148, "", 0, "m_penCaused", 0x0UL, 0),
};
#define CDoorController_propertiesct ARRAYCOUNT(CDoorController_properties)

CEntityComponent CDoorController_components[] = {
#define MODEL_DOORCONTROLLER ((0x000000dd<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_DOORCONTROLLER, "EFNM" "Models\\Editor\\DoorController.mdl"),
#define TEXTURE_DOORCONTROLLER ((0x000000dd<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DOORCONTROLLER, "EFNM" "Models\\Editor\\DoorController.tex"),
};
#define CDoorController_componentsct ARRAYCOUNT(CDoorController_components)

CEventHandlerEntry CDoorController_handlers[] = {
 {0x00dd0000, -1, CEntity::pEventHandler(&CDoorController::DoorAuto),DEBUGSTRING("CDoorController::DoorAuto")},
 {0x00dd0001, -1, CEntity::pEventHandler(&CDoorController::DoorAutoActive),DEBUGSTRING("CDoorController::DoorAutoActive")},
 {0x00dd0002, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0002_DoorAutoActive_01), DEBUGSTRING("CDoorController::H0x00dd0002_DoorAutoActive_01")},
 {0x00dd0003, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0003_DoorAutoActive_02), DEBUGSTRING("CDoorController::H0x00dd0003_DoorAutoActive_02")},
 {0x00dd0004, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0004_DoorAutoActive_03), DEBUGSTRING("CDoorController::H0x00dd0004_DoorAutoActive_03")},
 {0x00dd0005, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0005_DoorAutoActive_04), DEBUGSTRING("CDoorController::H0x00dd0005_DoorAutoActive_04")},
 {0x00dd0006, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0006_DoorAutoActive_05), DEBUGSTRING("CDoorController::H0x00dd0006_DoorAutoActive_05")},
 {0x00dd0007, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0007_DoorAutoActive_06), DEBUGSTRING("CDoorController::H0x00dd0007_DoorAutoActive_06")},
 {0x00dd0008, -1, CEntity::pEventHandler(&CDoorController::DoorAutoInactive),DEBUGSTRING("CDoorController::DoorAutoInactive")},
 {0x00dd0009, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0009_DoorAutoInactive_01), DEBUGSTRING("CDoorController::H0x00dd0009_DoorAutoInactive_01")},
 {0x00dd000a, -1, CEntity::pEventHandler(&CDoorController::H0x00dd000a_DoorAutoInactive_02), DEBUGSTRING("CDoorController::H0x00dd000a_DoorAutoInactive_02")},
 {0x00dd000b, -1, CEntity::pEventHandler(&CDoorController::H0x00dd000b_DoorAutoInactive_03), DEBUGSTRING("CDoorController::H0x00dd000b_DoorAutoInactive_03")},
 {0x00dd000c, -1, CEntity::pEventHandler(&CDoorController::H0x00dd000c_DoorAutoInactive_04), DEBUGSTRING("CDoorController::H0x00dd000c_DoorAutoInactive_04")},
 {0x00dd000d, -1, CEntity::pEventHandler(&CDoorController::H0x00dd000d_DoorAutoInactive_05), DEBUGSTRING("CDoorController::H0x00dd000d_DoorAutoInactive_05")},
 {0x00dd000e, -1, CEntity::pEventHandler(&CDoorController::H0x00dd000e_DoorAutoInactive_06), DEBUGSTRING("CDoorController::H0x00dd000e_DoorAutoInactive_06")},
 {0x00dd000f, -1, CEntity::pEventHandler(&CDoorController::DoorDummy),DEBUGSTRING("CDoorController::DoorDummy")},
 {0x00dd0010, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0010_DoorDummy_01), DEBUGSTRING("CDoorController::H0x00dd0010_DoorDummy_01")},
 {0x00dd0011, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0011_DoorDummy_02), DEBUGSTRING("CDoorController::H0x00dd0011_DoorDummy_02")},
 {0x00dd0012, -1, CEntity::pEventHandler(&CDoorController::DoorTriggered),DEBUGSTRING("CDoorController::DoorTriggered")},
 {0x00dd0013, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0013_DoorTriggered_01), DEBUGSTRING("CDoorController::H0x00dd0013_DoorTriggered_01")},
 {0x00dd0014, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0014_DoorTriggered_02), DEBUGSTRING("CDoorController::H0x00dd0014_DoorTriggered_02")},
 {0x00dd0015, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0015_DoorTriggered_03), DEBUGSTRING("CDoorController::H0x00dd0015_DoorTriggered_03")},
 {0x00dd0016, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0016_DoorTriggered_04), DEBUGSTRING("CDoorController::H0x00dd0016_DoorTriggered_04")},
 {0x00dd0017, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0017_DoorTriggered_05), DEBUGSTRING("CDoorController::H0x00dd0017_DoorTriggered_05")},
 {0x00dd0018, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0018_DoorTriggered_06), DEBUGSTRING("CDoorController::H0x00dd0018_DoorTriggered_06")},
 {0x00dd0019, -1, CEntity::pEventHandler(&CDoorController::DoorLocked),DEBUGSTRING("CDoorController::DoorLocked")},
 {0x00dd001a, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001a_DoorLocked_01), DEBUGSTRING("CDoorController::H0x00dd001a_DoorLocked_01")},
 {0x00dd001b, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001b_DoorLocked_02), DEBUGSTRING("CDoorController::H0x00dd001b_DoorLocked_02")},
 {0x00dd001c, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001c_DoorLocked_03), DEBUGSTRING("CDoorController::H0x00dd001c_DoorLocked_03")},
 {0x00dd001d, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001d_DoorLocked_04), DEBUGSTRING("CDoorController::H0x00dd001d_DoorLocked_04")},
 {0x00dd001e, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001e_DoorLocked_05), DEBUGSTRING("CDoorController::H0x00dd001e_DoorLocked_05")},
 {0x00dd001f, -1, CEntity::pEventHandler(&CDoorController::H0x00dd001f_DoorLocked_06), DEBUGSTRING("CDoorController::H0x00dd001f_DoorLocked_06")},
 {0x00dd0020, -1, CEntity::pEventHandler(&CDoorController::DoorTriggeredAuto),DEBUGSTRING("CDoorController::DoorTriggeredAuto")},
 {0x00dd0021, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0021_DoorTriggeredAuto_01), DEBUGSTRING("CDoorController::H0x00dd0021_DoorTriggeredAuto_01")},
 {0x00dd0022, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0022_DoorTriggeredAuto_02), DEBUGSTRING("CDoorController::H0x00dd0022_DoorTriggeredAuto_02")},
 {0x00dd0023, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0023_DoorTriggeredAuto_03), DEBUGSTRING("CDoorController::H0x00dd0023_DoorTriggeredAuto_03")},
 {0x00dd0024, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0024_DoorTriggeredAuto_04), DEBUGSTRING("CDoorController::H0x00dd0024_DoorTriggeredAuto_04")},
 {0x00dd0025, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0025_DoorTriggeredAuto_05), DEBUGSTRING("CDoorController::H0x00dd0025_DoorTriggeredAuto_05")},
 {0x00dd0026, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0026_DoorTriggeredAuto_06), DEBUGSTRING("CDoorController::H0x00dd0026_DoorTriggeredAuto_06")},
 {1, -1, CEntity::pEventHandler(&CDoorController::Main),DEBUGSTRING("CDoorController::Main")},
 {0x00dd0027, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0027_Main_01), DEBUGSTRING("CDoorController::H0x00dd0027_Main_01")},
 {0x00dd0028, -1, CEntity::pEventHandler(&CDoorController::H0x00dd0028_Main_02), DEBUGSTRING("CDoorController::H0x00dd0028_Main_02")},
};
#define CDoorController_handlersct ARRAYCOUNT(CDoorController_handlers)

CEntity *CDoorController_New(void) { return new CDoorController; };
void CDoorController_OnInitClass(void) {};
void CDoorController_OnEndClass(void) {};
void CDoorController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDoorController_OnWorldEnd(CWorld *pwo) {};
void CDoorController_OnWorldInit(CWorld *pwo) {};
void CDoorController_OnWorldTick(CWorld *pwo) {};
void CDoorController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDoorController, CRationalEntity, "DoorController", "Thumbnails\\DoorController.tbn", 221);
DECLARE_CTFILENAME(_fnmCDoorController_tbn, "Thumbnails\\DoorController.tbn");
