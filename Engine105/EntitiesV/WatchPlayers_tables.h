// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CWatchPlayers

CEntityProperty CWatchPlayers_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002be<<8)+1, offsetof(CWatchPlayers, m_penOwner), "Owner/Target", 'O', C_dBROWN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002be<<8)+10, offsetof(CWatchPlayers, m_penFar), "Far Target", 'F', C_BLACK  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000002be<<8)+2, offsetof(CWatchPlayers, m_fWaitTime), "Wait time", 'W', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x000002be<<8)+3, offsetof(CWatchPlayers, m_fDistance), "Watch distance", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000002be<<8)+4, offsetof(CWatchPlayers, m_bRangeWatcher), "Range watcher", 'R', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000002be<<8)+5, offsetof(CWatchPlayers, m_eetEventClose), "Close Event type", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000002be<<8)+6, offsetof(CWatchPlayers, m_eetEventFar), "Far Event type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002be<<8)+7, offsetof(CWatchPlayers, m_penCurrentWatch), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000002be<<8)+8, offsetof(CWatchPlayers, m_bActive), "Active", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000002be<<8)+9, offsetof(CWatchPlayers, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
};
#define CWatchPlayers_propertiesct ARRAYCOUNT(CWatchPlayers_properties)

CEntityComponent CWatchPlayers_components[] = {
#define MODEL_WATCHPLAYERS ((0x000002be<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WATCHPLAYERS, "EFNM" "Models\\Editor\\WatchPlayers.mdl"),
#define TEXTURE_WATCHPLAYERS ((0x000002be<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WATCHPLAYERS, "EFNM" "Models\\Editor\\WatchPlayers.tex"),
};
#define CWatchPlayers_componentsct ARRAYCOUNT(CWatchPlayers_components)

CEventHandlerEntry CWatchPlayers_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWatchPlayers::Main),DEBUGSTRING("CWatchPlayers::Main")},
 {0x02be0000, -1, CEntity::pEventHandler(&CWatchPlayers::Active),DEBUGSTRING("CWatchPlayers::Active")},
 {0x02be0001, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0001_Active_01), DEBUGSTRING("CWatchPlayers::H0x02be0001_Active_01")},
 {0x02be0002, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0002_Active_02), DEBUGSTRING("CWatchPlayers::H0x02be0002_Active_02")},
 {0x02be0003, -1, CEntity::pEventHandler(&CWatchPlayers::Inactive),DEBUGSTRING("CWatchPlayers::Inactive")},
 {0x02be0004, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0004_Inactive_01), DEBUGSTRING("CWatchPlayers::H0x02be0004_Inactive_01")},
 {0x02be0005, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0005_Inactive_02), DEBUGSTRING("CWatchPlayers::H0x02be0005_Inactive_02")},
 {0x02be0006, -1, CEntity::pEventHandler(&CWatchPlayers::CloseWatch),DEBUGSTRING("CWatchPlayers::CloseWatch")},
 {0x02be0007, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0007_CloseWatch_01), DEBUGSTRING("CWatchPlayers::H0x02be0007_CloseWatch_01")},
 {0x02be0008, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0008_CloseWatch_02), DEBUGSTRING("CWatchPlayers::H0x02be0008_CloseWatch_02")},
 {0x02be0009, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be0009_CloseWatch_03), DEBUGSTRING("CWatchPlayers::H0x02be0009_CloseWatch_03")},
 {0x02be000a, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be000a_CloseWatch_04), DEBUGSTRING("CWatchPlayers::H0x02be000a_CloseWatch_04")},
 {0x02be000b, -1, CEntity::pEventHandler(&CWatchPlayers::FarWatch),DEBUGSTRING("CWatchPlayers::FarWatch")},
 {0x02be000c, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be000c_FarWatch_01), DEBUGSTRING("CWatchPlayers::H0x02be000c_FarWatch_01")},
 {0x02be000d, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be000d_FarWatch_02), DEBUGSTRING("CWatchPlayers::H0x02be000d_FarWatch_02")},
 {0x02be000e, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be000e_FarWatch_03), DEBUGSTRING("CWatchPlayers::H0x02be000e_FarWatch_03")},
 {0x02be000f, -1, CEntity::pEventHandler(&CWatchPlayers::H0x02be000f_FarWatch_04), DEBUGSTRING("CWatchPlayers::H0x02be000f_FarWatch_04")},
};
#define CWatchPlayers_handlersct ARRAYCOUNT(CWatchPlayers_handlers)

CEntity *CWatchPlayers_New(void) { return new CWatchPlayers; };
void CWatchPlayers_OnInitClass(void) {};
void CWatchPlayers_OnEndClass(void) {};
void CWatchPlayers_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWatchPlayers_OnWorldEnd(CWorld *pwo) {};
void CWatchPlayers_OnWorldInit(CWorld *pwo) {};
void CWatchPlayers_OnWorldTick(CWorld *pwo) {};
void CWatchPlayers_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWatchPlayers, CRationalEntity, "Watch Players", "Thumbnails\\WatchPlayers.tbn", 0x000002be);
DECLARE_CTFILENAME(_fnmCWatchPlayers_tbn, "Thumbnails\\WatchPlayers.tbn");
