// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CGameInfoEntity

CEntityProperty CGameInfoEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6d<<8)+1, 0x110, "", 0, "m_tmStartMatch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6d<<8)+2, 0x114, "", 0, "m_tmStartCountDown", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6d<<8)+3, 0x118, "", 0, "m_tmSecondTimer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6d<<8)+4, 0x11C, "", 0, "m_bWarmup", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6d<<8)+5, 0x120, "", 0, "m_bInGame", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6d<<8)+6, 0x124, "", 0, "m_bGameEnded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x6d<<8)+7, 0x128, "", 0, "m_iControlZoneTeam0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x6d<<8)+8, 0x12C, "", 0, "m_iControlZoneTeam1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x6d<<8)+9, 0x130, "", 0, "m_iClanArenaTeam0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x6d<<8)+10, 0x134, "", 0, "m_iClanArenaTeam1", 0x0UL, 0),
};
#define CGameInfoEntity_propertiesct ARRAYCOUNT(CGameInfoEntity_properties)

CEntityComponent CGameInfoEntity_components[] = {
 CEntityComponent(),
};
#define CGameInfoEntity_componentsct ARRAYCOUNT(CGameInfoEntity_components)

CEventHandlerEntry CGameInfoEntity_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGameInfoEntity::Main), DEBUGSTRING("CGameInfoEntity::Main")},
 {0x6D0000, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0000_Procedure_1), DEBUGSTRING("CGameInfoEntity::H0x6D0000_Procedure_1")},
 {0x6D0001, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0001_Procedure_2), DEBUGSTRING("CGameInfoEntity::H0x6D0001_Procedure_2")},
 {0x6D0002, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0002_Procedure_3), DEBUGSTRING("CGameInfoEntity::H0x6D0002_Procedure_3")},
 {0x6D0003, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0003_Procedure_4), DEBUGSTRING("CGameInfoEntity::H0x6D0003_Procedure_4")},
 {0x6D0004, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0004_Procedure_5), DEBUGSTRING("CGameInfoEntity::H0x6D0004_Procedure_5")},
 {0x6D0005, -1, CEntity::pEventHandler(&CGameInfoEntity::H0x6D0005_Procedure_6), DEBUGSTRING("CGameInfoEntity::H0x6D0005_Procedure_6")},
};
#define CGameInfoEntity_handlersct ARRAYCOUNT(CGameInfoEntity_handlers)

CEntity *CGameInfoEntity_New(void) { return new CGameInfoEntity; };
void CGameInfoEntity_OnInitClass(void) {};
void CGameInfoEntity_OnEndClass(void) {};
void CGameInfoEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGameInfoEntity_OnWorldEnd(CWorld *pwo) {};
void CGameInfoEntity_OnWorldInit(CWorld *pwo) {};
void CGameInfoEntity_OnWorldTick(CWorld *pwo) {};
void CGameInfoEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGameInfoEntity, CRationalEntity, "GameInfo", "Thumbnails\\Marker.tbn", 109);
DECLARE_CTFILENAME(_fnmCGameInfoEntity_tbn, "Thumbnails\\Marker.tbn");
