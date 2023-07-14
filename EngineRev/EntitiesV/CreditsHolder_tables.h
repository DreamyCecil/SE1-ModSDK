// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CCreditsHolder

CEntityProperty CCreditsHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000f0<<8)+1, offsetof(CCreditsHolder, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000f0<<8)+2, offsetof(CCreditsHolder, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000000f0<<8)+3, offsetof(CCreditsHolder, m_fnmMessage), "Scroll Text", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000f0<<8)+4, offsetof(CCreditsHolder, m_fMyTimer), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000f0<<8)+6, offsetof(CCreditsHolder, m_fMyTimerLast), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000f0<<8)+5, offsetof(CCreditsHolder, m_iTotalEntries), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000f0<<8)+10, offsetof(CCreditsHolder, m_bEnd), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000f0<<8)+15, offsetof(CCreditsHolder, m_penEndCreditsTrigger), "EndCredits trigger", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000f0<<8)+20, offsetof(CCreditsHolder, m_bDataError), "", 0, 0, 0),
};
#define CCreditsHolder_propertiesct ARRAYCOUNT(CCreditsHolder_properties)

CEntityComponent CCreditsHolder_components[] = {
#define MODEL_HOLDER ((0x000000f0<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_HOLDER, "EFNM" "Models\\Editor\\MessageHolder.mdl"),
#define TEXTURE_HOLDER ((0x000000f0<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HOLDER, "EFNM" "Models\\Editor\\MessageHolder.tex"),
};
#define CCreditsHolder_componentsct ARRAYCOUNT(CCreditsHolder_components)

CEventHandlerEntry CCreditsHolder_handlers[] = {
 {0x00f00000, -1, CEntity::pEventHandler(&CCreditsHolder::WaitScrollingToEnd),DEBUGSTRING("CCreditsHolder::WaitScrollingToEnd")},
 {0x00f00001, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00001_WaitScrollingToEnd_01), DEBUGSTRING("CCreditsHolder::H0x00f00001_WaitScrollingToEnd_01")},
 {0x00f00002, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00002_WaitScrollingToEnd_02), DEBUGSTRING("CCreditsHolder::H0x00f00002_WaitScrollingToEnd_02")},
 {0x00f00003, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00003_WaitScrollingToEnd_03), DEBUGSTRING("CCreditsHolder::H0x00f00003_WaitScrollingToEnd_03")},
 {0x00f00004, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00004_WaitScrollingToEnd_04), DEBUGSTRING("CCreditsHolder::H0x00f00004_WaitScrollingToEnd_04")},
 {1, -1, CEntity::pEventHandler(&CCreditsHolder::Main),DEBUGSTRING("CCreditsHolder::Main")},
 {0x00f00005, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00005_Main_01), DEBUGSTRING("CCreditsHolder::H0x00f00005_Main_01")},
 {0x00f00006, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00006_Main_02), DEBUGSTRING("CCreditsHolder::H0x00f00006_Main_02")},
 {0x00f00007, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00007_Main_03), DEBUGSTRING("CCreditsHolder::H0x00f00007_Main_03")},
 {0x00f00008, -1, CEntity::pEventHandler(&CCreditsHolder::H0x00f00008_Main_04), DEBUGSTRING("CCreditsHolder::H0x00f00008_Main_04")},
};
#define CCreditsHolder_handlersct ARRAYCOUNT(CCreditsHolder_handlers)

CEntity *CCreditsHolder_New(void) { return new CCreditsHolder; };
void CCreditsHolder_OnInitClass(void) {};
void CCreditsHolder_OnEndClass(void) {};
void CCreditsHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCreditsHolder_OnWorldEnd(CWorld *pwo) {};
void CCreditsHolder_OnWorldInit(CWorld *pwo) {};
void CCreditsHolder_OnWorldTick(CWorld *pwo) {};
void CCreditsHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCreditsHolder, CRationalEntity, "CreditsHolder", "Thumbnails\\ScrollHolder.tbn", 0x000000f0);
DECLARE_CTFILENAME(_fnmCCreditsHolder_tbn, "Thumbnails\\ScrollHolder.tbn");
