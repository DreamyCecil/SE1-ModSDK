// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWatcher

CEntityProperty CWatcher_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2bc<<8)+1, 0x110, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x2bc<<8)+2, 0x114, "", 0, "m_tmDelay", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x2bc<<8)+20, 0x118, "", 0, "m_fClosestPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x2bc<<8)+21, 0x11C, "", 0, "m_iPlayerToCheck", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2bc<<8)+255, 0x120, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CWatcher_propertiesct ARRAYCOUNT(CWatcher_properties)

CEntityComponent CWatcher_components[] = {
  CEntityComponent()
};
#define CWatcher_componentsct 0


CEventHandlerEntry CWatcher_handlers[] = {
 {0x02bc0002, -1, CEntity::pEventHandler(&CWatcher::Active),DEBUGSTRING("CWatcher::Active")},
 {0x02bc0003, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0003_Active_01), DEBUGSTRING("CWatcher::H0x02bc0003_Active_01")},
 {0x02bc0004, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0004_Active_02), DEBUGSTRING("CWatcher::H0x02bc0004_Active_02")},
 {0x02bc0005, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0005_Active_03), DEBUGSTRING("CWatcher::H0x02bc0005_Active_03")},
 {0x02bc0006, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0006_Active_04), DEBUGSTRING("CWatcher::H0x02bc0006_Active_04")},
 {0x02bc0007, -1, CEntity::pEventHandler(&CWatcher::Inactive),DEBUGSTRING("CWatcher::Inactive")},
 {0x02bc0008, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0008_Inactive_01), DEBUGSTRING("CWatcher::H0x02bc0008_Inactive_01")},
 {0x02bc0009, -1, CEntity::pEventHandler(&CWatcher::H0x02bc0009_Inactive_02), DEBUGSTRING("CWatcher::H0x02bc0009_Inactive_02")},
 {0x02bc000a, -1, CEntity::pEventHandler(&CWatcher::Dummy),DEBUGSTRING("CWatcher::Dummy")},
 {0x02bc000b, -1, CEntity::pEventHandler(&CWatcher::H0x02bc000b_Dummy_01), DEBUGSTRING("CWatcher::H0x02bc000b_Dummy_01")},
 {0x02bc000c, -1, CEntity::pEventHandler(&CWatcher::H0x02bc000c_Dummy_02), DEBUGSTRING("CWatcher::H0x02bc000c_Dummy_02")},
 {1, -1, CEntity::pEventHandler(&CWatcher::Main),DEBUGSTRING("CWatcher::Main")},
 {0x02bc000d, -1, CEntity::pEventHandler(&CWatcher::H0x02bc000d_Main_01), DEBUGSTRING("CWatcher::H0x02bc000d_Main_01")},
 {0x02bc000e, -1, CEntity::pEventHandler(&CWatcher::H0x02bc000e_Main_02), DEBUGSTRING("CWatcher::H0x02bc000e_Main_02")},
};
#define CWatcher_handlersct ARRAYCOUNT(CWatcher_handlers)

CEntity *CWatcher_New(void) { return new CWatcher; };
void CWatcher_OnInitClass(void) {};
void CWatcher_OnEndClass(void) {};
void CWatcher_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWatcher_OnWorldEnd(CWorld *pwo) {};
void CWatcher_OnWorldInit(CWorld *pwo) {};
void CWatcher_OnWorldTick(CWorld *pwo) {};
void CWatcher_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWatcher, CRationalEntity, "Watcher", "", 700);
DECLARE_CTFILENAME(_fnmCWatcher_tbn, "");
