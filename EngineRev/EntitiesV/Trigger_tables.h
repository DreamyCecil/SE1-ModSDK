// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTrigger

CEntityProperty CTrigger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xcd<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+3, 0x114, "Target 01", 'T', "m_penTarget1", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+4, 0x118, "Target 02", 'Y', "m_penTarget2", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+5, 0x11C, "Target 03", 'U', "m_penTarget3", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+6, 0x120, "Target 04", 'I', "m_penTarget4", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+7, 0x124, "Target 05", 'O', "m_penTarget5", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+20, 0x128, "Target 06", 0, "m_penTarget6", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+21, 0x12C, "Target 07", 0, "m_penTarget7", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+22, 0x130, "Target 08", 0, "m_penTarget8", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+23, 0x134, "Target 09", 0, "m_penTarget9", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+24, 0x138, "Target 10", 0, "m_penTarget10", 0xFF0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+8, 0x13C, "Event type Target 01", 'G', "m_eetEvent1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+9, 0x140, "Event type Target 02", 'H', "m_eetEvent2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+10, 0x144, "Event type Target 03", 'J', "m_eetEvent3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+11, 0x148, "Event type Target 04", 'K', "m_eetEvent4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+12, 0x14C, "Event type Target 05", 'L', "m_eetEvent5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+50, 0x150, "Event type Target 06", 0, "m_eetEvent6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+51, 0x154, "Event type Target 07", 0, "m_eetEvent7", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+52, 0x158, "Event type Target 08", 0, "m_eetEvent8", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+53, 0x15C, "Event type Target 09", 0, "m_eetEvent9", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+54, 0x160, "Event type Target 10", 0, "m_eetEvent10", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRINGTRANS, NULL, (0xcd<<8)+13, 0x164, "Message", 'M', "m_strMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcd<<8)+14, 0x168, "Message time", 0, "m_fMessageTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &MessageSound_enum, (0xcd<<8)+15, 0x16C, "Message sound", 0, "m_mssMessageSound", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcd<<8)+16, 0x170, "Score", 'S', "m_fScore", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xcd<<8)+30, 0x174, "Wait", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcd<<8)+31, 0x178, "Auto start", 'A', "m_bAutoStart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xcd<<8)+32, 0x17C, "Count", 'C', "m_iCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcd<<8)+33, 0x180, "Count use", 0, "m_bUseCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcd<<8)+34, 0x184, "Count reuse", 0, "m_bReuseCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcd<<8)+35, 0x188, "Count tell", 0, "m_bTellCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xcd<<8)+36, 0x18C, "Active", 'V', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xcd<<8)+37, 0x190, "Send Range", 'R', "m_fSendRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xcd<<8)+38, 0x194, "Event type Range", 0, "m_eetRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xcd<<8)+40, 0x198, "", 0, "m_iCountTmp", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xcd<<8)+41, 0x19C, "", 0, "m_penCaused", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xcd<<8)+42, 0x1A0, "Max trigs", 'X', "m_ctMaxTrigs", 0x7F0000FFUL, 0),
};
#define CTrigger_propertiesct ARRAYCOUNT(CTrigger_properties)

CEntityComponent CTrigger_components[] = {
#define MODEL_MARKER ((0x000000cd<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Trigger.mdl"),
#define TEXTURE_MARKER ((0x000000cd<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Camera.tex"),
};
#define CTrigger_componentsct ARRAYCOUNT(CTrigger_components)

CEventHandlerEntry CTrigger_handlers[] = {
 {0x00cd0000, -1, CEntity::pEventHandler(&CTrigger::SendEventToTargets),DEBUGSTRING("CTrigger::SendEventToTargets")},
 {0x00cd0001, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0001_SendEventToTargets_01), DEBUGSTRING("CTrigger::H0x00cd0001_SendEventToTargets_01")},
 {0x00cd0002, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0002_SendEventToTargets_02), DEBUGSTRING("CTrigger::H0x00cd0002_SendEventToTargets_02")},
 {0x00cd0003, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0003_SendEventToTargets_03), DEBUGSTRING("CTrigger::H0x00cd0003_SendEventToTargets_03")},
 {0x00cd0004, -1, CEntity::pEventHandler(&CTrigger::Active),DEBUGSTRING("CTrigger::Active")},
 {0x00cd0005, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0005_Active_01), DEBUGSTRING("CTrigger::H0x00cd0005_Active_01")},
 {0x00cd0006, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0006_Active_02), DEBUGSTRING("CTrigger::H0x00cd0006_Active_02")},
 {0x00cd0007, -1, CEntity::pEventHandler(&CTrigger::Inactive),DEBUGSTRING("CTrigger::Inactive")},
 {0x00cd0008, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0008_Inactive_01), DEBUGSTRING("CTrigger::H0x00cd0008_Inactive_01")},
 {0x00cd0009, -1, CEntity::pEventHandler(&CTrigger::H0x00cd0009_Inactive_02), DEBUGSTRING("CTrigger::H0x00cd0009_Inactive_02")},
 {0x00cd000a, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000a_Inactive_03), DEBUGSTRING("CTrigger::H0x00cd000a_Inactive_03")},
 {0x00cd000b, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000b_Inactive_04), DEBUGSTRING("CTrigger::H0x00cd000b_Inactive_04")},
 {0x00cd000c, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000c_Inactive_05), DEBUGSTRING("CTrigger::H0x00cd000c_Inactive_05")},
 {0x00cd000d, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000d_Inactive_06), DEBUGSTRING("CTrigger::H0x00cd000d_Inactive_06")},
 {1, -1, CEntity::pEventHandler(&CTrigger::Main),DEBUGSTRING("CTrigger::Main")},
 {0x00cd000e, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000e_Main_01), DEBUGSTRING("CTrigger::H0x00cd000e_Main_01")},
 {0x00cd000f, -1, CEntity::pEventHandler(&CTrigger::H0x00cd000f_Main_02), DEBUGSTRING("CTrigger::H0x00cd000f_Main_02")},
};
#define CTrigger_handlersct ARRAYCOUNT(CTrigger_handlers)

CEntity *CTrigger_New(void) { return new CTrigger; };
void CTrigger_OnInitClass(void) {};
void CTrigger_OnEndClass(void) {};
void CTrigger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTrigger_OnWorldEnd(CWorld *pwo) {};
void CTrigger_OnWorldInit(CWorld *pwo) {};
void CTrigger_OnWorldTick(CWorld *pwo) {};
void CTrigger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTrigger, CRationalEntity, "Trigger", "Thumbnails\\Trigger.tbn", 205);
DECLARE_CTFILENAME(_fnmCTrigger_tbn, "Thumbnails\\Trigger.tbn");
