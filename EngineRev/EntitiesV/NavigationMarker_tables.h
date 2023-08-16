// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CNavigationMarker

CEntityProperty CNavigationMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x2c0<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x2c0<<8)+2, 0xEC, "Marker Range", 'M', "m_fMarkerRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+100, 0xF0, "Target 0", 'T', "m_penTarget0", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+101, 0xF4, "Target 1", 0, "m_penTarget1", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+102, 0xF8, "Target 2", 0, "m_penTarget2", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+103, 0xFC, "Target 3", 0, "m_penTarget3", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+104, 0x100, "Target 4", 0, "m_penTarget4", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x2c0<<8)+105, 0x104, "Target 5", 0, "m_penTarget5", 0x7FFFUL, 0),
};
#define CNavigationMarker_propertiesct ARRAYCOUNT(CNavigationMarker_properties)

CEntityComponent CNavigationMarker_components[] = {
#define MODEL_MARKER ((0x000002c0<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\NavigationMarker.mdl"),
#define TEXTURE_MARKER ((0x000002c0<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\NavigationMarker.tex"),
};
#define CNavigationMarker_componentsct ARRAYCOUNT(CNavigationMarker_components)

CEventHandlerEntry CNavigationMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CNavigationMarker::Main),DEBUGSTRING("CNavigationMarker::Main")},
};
#define CNavigationMarker_handlersct ARRAYCOUNT(CNavigationMarker_handlers)

CEntity *CNavigationMarker_New(void) { return new CNavigationMarker; };
void CNavigationMarker_OnInitClass(void) {};
void CNavigationMarker_OnEndClass(void) {};
void CNavigationMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CNavigationMarker_OnWorldEnd(CWorld *pwo) {};
void CNavigationMarker_OnWorldInit(CWorld *pwo) {};
void CNavigationMarker_OnWorldTick(CWorld *pwo) {};
void CNavigationMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CNavigationMarker, CEntity, "NavigationMarker", "Thumbnails\\NavigationMarker.tbn", 704);
DECLARE_CTFILENAME(_fnmCNavigationMarker_tbn, "Thumbnails\\NavigationMarker.tbn");
