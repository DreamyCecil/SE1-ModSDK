// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMessageHolder

CEntityProperty CMessageHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe2<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe2<<8)+3, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xe2<<8)+2, 0x118, "Message", 'M', "m_fnmMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe2<<8)+4, 0x120, "Distance", 'D', "m_fDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe2<<8)+5, 0x124, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe2<<8)+6, 0x128, "Next", 'X', "m_penNext", 0x7F0000FFUL, 0),
};
#define CMessageHolder_propertiesct ARRAYCOUNT(CMessageHolder_properties)

CEntityComponent CMessageHolder_components[] = {
#define MODEL_MARKER ((0x000000e2<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MessageHolder.mdl"),
#define TEXTURE_MARKER ((0x000000e2<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MessageHolder.tex"),
};
#define CMessageHolder_componentsct ARRAYCOUNT(CMessageHolder_components)

CEventHandlerEntry CMessageHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMessageHolder::Main),DEBUGSTRING("CMessageHolder::Main")},
 {0x00e20000, -1, CEntity::pEventHandler(&CMessageHolder::H0x00e20000_Main_01), DEBUGSTRING("CMessageHolder::H0x00e20000_Main_01")},
 {0x00e20001, -1, CEntity::pEventHandler(&CMessageHolder::H0x00e20001_Main_02), DEBUGSTRING("CMessageHolder::H0x00e20001_Main_02")},
};
#define CMessageHolder_handlersct ARRAYCOUNT(CMessageHolder_handlers)

CEntity *CMessageHolder_New(void) { return new CMessageHolder; };
void CMessageHolder_OnInitClass(void) {};
void CMessageHolder_OnEndClass(void) {};
void CMessageHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMessageHolder_OnWorldEnd(CWorld *pwo) {};
void CMessageHolder_OnWorldInit(CWorld *pwo) {};
void CMessageHolder_OnWorldTick(CWorld *pwo) {};
void CMessageHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMessageHolder, CRationalEntity, "MessageHolder", "Thumbnails\\MessageHolder.tbn", 226);
DECLARE_CTFILENAME(_fnmCMessageHolder_tbn, "Thumbnails\\MessageHolder.tbn");
