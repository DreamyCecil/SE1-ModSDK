// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWatchPlayers

CEntityProperty CWatchPlayers_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2be<<8)+1, 0x110, "Owner/Target", 'O', "m_penOwner", 0x5F3F0FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2be<<8)+10, 0x114, "Far Target", 'F', "m_penFar", 0xFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x2be<<8)+2, 0x118, "Wait time", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x2be<<8)+3, 0x11C, "Watch distance", 'D', "m_fDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x2be<<8)+4, 0x120, "Range watcher", 'R', "m_bRangeWatcher", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x2be<<8)+5, 0x124, "Close Event type", 'T', "m_eetEventClose", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x2be<<8)+6, 0x128, "Far Event type", 'Y', "m_eetEventFar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2be<<8)+7, 0x12C, "", 0, "m_penCurrentWatch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x2be<<8)+8, 0x130, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x2be<<8)+9, 0x134, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CWatchPlayers, CRationalEntity, "Watch Players", "Thumbnails\\WatchPlayers.tbn", 702);
DECLARE_CTFILENAME(_fnmCWatchPlayers_tbn, "Thumbnails\\WatchPlayers.tbn");
