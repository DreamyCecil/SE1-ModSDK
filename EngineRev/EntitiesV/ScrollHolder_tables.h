// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CScrollHolder

CEntityProperty CScrollHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xee<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xee<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xee<<8)+3, 0x118, "Scroll Text", 'T', "m_fnmMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xee<<8)+4, 0x120, "", 0, "m_fMyTimer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xee<<8)+6, 0x124, "", 0, "m_fMyTimerLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xee<<8)+5, 0x128, "", 0, "m_fSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xee<<8)+15, 0x12C, "EndScroll trigger", 0, "m_penEndCreditsTrigger", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xee<<8)+20, 0x130, "", 0, "m_bDataError", 0x0UL, 0),
};
#define CScrollHolder_propertiesct ARRAYCOUNT(CScrollHolder_properties)

CEntityComponent CScrollHolder_components[] = {
#define MODEL_MARKER ((0x000000ee<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MessageHolder.mdl"),
#define TEXTURE_MARKER ((0x000000ee<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MessageHolder.tex"),
};
#define CScrollHolder_componentsct ARRAYCOUNT(CScrollHolder_components)

CEventHandlerEntry CScrollHolder_handlers[] = {
 {0x00ee0000, -1, CEntity::pEventHandler(&CScrollHolder::WaitScrollingToEnd),DEBUGSTRING("CScrollHolder::WaitScrollingToEnd")},
 {0x00ee0001, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0001_WaitScrollingToEnd_01), DEBUGSTRING("CScrollHolder::H0x00ee0001_WaitScrollingToEnd_01")},
 {0x00ee0002, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0002_WaitScrollingToEnd_02), DEBUGSTRING("CScrollHolder::H0x00ee0002_WaitScrollingToEnd_02")},
 {0x00ee0003, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0003_WaitScrollingToEnd_03), DEBUGSTRING("CScrollHolder::H0x00ee0003_WaitScrollingToEnd_03")},
 {0x00ee0004, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0004_WaitScrollingToEnd_04), DEBUGSTRING("CScrollHolder::H0x00ee0004_WaitScrollingToEnd_04")},
 {1, -1, CEntity::pEventHandler(&CScrollHolder::Main),DEBUGSTRING("CScrollHolder::Main")},
 {0x00ee0005, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0005_Main_01), DEBUGSTRING("CScrollHolder::H0x00ee0005_Main_01")},
 {0x00ee0006, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0006_Main_02), DEBUGSTRING("CScrollHolder::H0x00ee0006_Main_02")},
 {0x00ee0007, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0007_Main_03), DEBUGSTRING("CScrollHolder::H0x00ee0007_Main_03")},
 {0x00ee0008, -1, CEntity::pEventHandler(&CScrollHolder::H0x00ee0008_Main_04), DEBUGSTRING("CScrollHolder::H0x00ee0008_Main_04")},
};
#define CScrollHolder_handlersct ARRAYCOUNT(CScrollHolder_handlers)

CEntity *CScrollHolder_New(void) { return new CScrollHolder; };
void CScrollHolder_OnInitClass(void) {};
void CScrollHolder_OnEndClass(void) {};
void CScrollHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CScrollHolder_OnWorldEnd(CWorld *pwo) {};
void CScrollHolder_OnWorldInit(CWorld *pwo) {};
void CScrollHolder_OnWorldTick(CWorld *pwo) {};
void CScrollHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CScrollHolder, CRationalEntity, "ScrollHolder", "Thumbnails\\ScrollHolder.tbn", 238);
DECLARE_CTFILENAME(_fnmCScrollHolder_tbn, "Thumbnails\\ScrollHolder.tbn");
