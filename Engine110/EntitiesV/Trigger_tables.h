// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CTrigger

CEntityProperty CTrigger_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x000000cd<<8)+1, offsetof(CTrigger, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+3, offsetof(CTrigger, m_penTarget1), "Target 01", 'T', "m_penTarget1", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+4, offsetof(CTrigger, m_penTarget2), "Target 02", 'Y', "m_penTarget2", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+5, offsetof(CTrigger, m_penTarget3), "Target 03", 'U', "m_penTarget3", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+6, offsetof(CTrigger, m_penTarget4), "Target 04", 'I', "m_penTarget4", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+7, offsetof(CTrigger, m_penTarget5), "Target 05", 'O', "m_penTarget5", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+20, offsetof(CTrigger, m_penTarget6), "Target 06", 0, "m_penTarget6", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+21, offsetof(CTrigger, m_penTarget7), "Target 07", 0, "m_penTarget7", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+22, offsetof(CTrigger, m_penTarget8), "Target 08", 0, "m_penTarget8", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+23, offsetof(CTrigger, m_penTarget9), "Target 09", 0, "m_penTarget9", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+24, offsetof(CTrigger, m_penTarget10), "Target 10", 0, "m_penTarget10", C_RED  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+8, offsetof(CTrigger, m_eetEvent1), "Event type Target 01", 'G', "m_eetEvent1", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+9, offsetof(CTrigger, m_eetEvent2), "Event type Target 02", 'H', "m_eetEvent2", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+10, offsetof(CTrigger, m_eetEvent3), "Event type Target 03", 'J', "m_eetEvent3", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+11, offsetof(CTrigger, m_eetEvent4), "Event type Target 04", 'K', "m_eetEvent4", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+12, offsetof(CTrigger, m_eetEvent5), "Event type Target 05", 'L', "m_eetEvent5", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+50, offsetof(CTrigger, m_eetEvent6), "Event type Target 06", 0, "m_eetEvent6", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+51, offsetof(CTrigger, m_eetEvent7), "Event type Target 07", 0, "m_eetEvent7", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+52, offsetof(CTrigger, m_eetEvent8), "Event type Target 08", 0, "m_eetEvent8", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+53, offsetof(CTrigger, m_eetEvent9), "Event type Target 09", 0, "m_eetEvent9", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+54, offsetof(CTrigger, m_eetEvent10), "Event type Target 10", 0, "m_eetEvent10", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRINGTRANS, NULL, (0x000000cd<<8)+13, offsetof(CTrigger, m_strMessage), "Message", 'M', "m_strMessage", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000cd<<8)+14, offsetof(CTrigger, m_fMessageTime), "Message time", 0, "m_fMessageTime", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &MessageSound_enum, (0x000000cd<<8)+15, offsetof(CTrigger, m_mssMessageSound), "Message sound", 0, "m_mssMessageSound", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000cd<<8)+16, offsetof(CTrigger, m_fScore), "Score", 'S', "m_fScore", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000cd<<8)+30, offsetof(CTrigger, m_fWaitTime), "Wait", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000cd<<8)+31, offsetof(CTrigger, m_bAutoStart), "Auto start", 'A', "m_bAutoStart", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000000cd<<8)+32, offsetof(CTrigger, m_iCount), "Count", 'C', "m_iCount", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000cd<<8)+33, offsetof(CTrigger, m_bUseCount), "Count use", 0, "m_bUseCount", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000cd<<8)+34, offsetof(CTrigger, m_bReuseCount), "Count reuse", 0, "m_bReuseCount", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000cd<<8)+35, offsetof(CTrigger, m_bTellCount), "Count tell", 0, "m_bTellCount", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000cd<<8)+36, offsetof(CTrigger, m_bActive), "Active", 'V', "m_bActive", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_RANGE, NULL, (0x000000cd<<8)+37, offsetof(CTrigger, m_fSendRange), "Send Range", 'R', "m_fSendRange", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000cd<<8)+38, offsetof(CTrigger, m_eetRange), "Event type Range", 0, "m_eetRange", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000000cd<<8)+40, offsetof(CTrigger, m_iCountTmp), "", 0, "m_iCountTmp", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000cd<<8)+41, offsetof(CTrigger, m_penCaused), "", 0, "m_penCaused", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000000cd<<8)+42, offsetof(CTrigger, m_ctMaxTrigs), "Max trigs", 'X', "m_ctMaxTrigs", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CTrigger, CRationalEntity, "Trigger", "Thumbnails\\Trigger.tbn", 0x000000cd);
DECLARE_CTFILENAME(_fnmCTrigger_tbn, "Thumbnails\\Trigger.tbn");