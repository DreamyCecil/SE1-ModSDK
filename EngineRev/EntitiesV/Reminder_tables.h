// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CReminder

CEntityProperty CReminder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2bf<<8)+1, 0x110, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x2bf<<8)+2, 0x114, "", 0, "m_fWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x2bf<<8)+3, 0x118, "", 0, "m_iValue", 0x0UL, 0),
};
#define CReminder_propertiesct ARRAYCOUNT(CReminder_properties)

CEntityComponent CReminder_components[] = {
  CEntityComponent()
};
#define CReminder_componentsct 0


CEventHandlerEntry CReminder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CReminder::Main),DEBUGSTRING("CReminder::Main")},
 {0x02bf0001, -1, CEntity::pEventHandler(&CReminder::H0x02bf0001_Main_01), DEBUGSTRING("CReminder::H0x02bf0001_Main_01")},
 {0x02bf0002, -1, CEntity::pEventHandler(&CReminder::H0x02bf0002_Main_02), DEBUGSTRING("CReminder::H0x02bf0002_Main_02")},
 {0x02bf0003, -1, CEntity::pEventHandler(&CReminder::H0x02bf0003_Main_03), DEBUGSTRING("CReminder::H0x02bf0003_Main_03")},
};
#define CReminder_handlersct ARRAYCOUNT(CReminder_handlers)

CEntity *CReminder_New(void) { return new CReminder; };
void CReminder_OnInitClass(void) {};
void CReminder_OnEndClass(void) {};
void CReminder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CReminder_OnWorldEnd(CWorld *pwo) {};
void CReminder_OnWorldInit(CWorld *pwo) {};
void CReminder_OnWorldTick(CWorld *pwo) {};
void CReminder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CReminder, CRationalEntity, "Reminder", "", 703);
DECLARE_CTFILENAME(_fnmCReminder_tbn, "");
