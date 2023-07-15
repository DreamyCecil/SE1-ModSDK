// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CNavigationMarker

CEntityProperty CNavigationMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000002c0<<8)+1, offsetof(CNavigationMarker, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x000002c0<<8)+2, offsetof(CNavigationMarker, m_fMarkerRange), "Marker Range", 'M', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+100, offsetof(CNavigationMarker, m_penTarget0), "Target 0", 'T', C_dBLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+101, offsetof(CNavigationMarker, m_penTarget1), "Target 1", 0, C_dBLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+102, offsetof(CNavigationMarker, m_penTarget2), "Target 2", 0, C_dBLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+103, offsetof(CNavigationMarker, m_penTarget3), "Target 3", 0, C_dBLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+104, offsetof(CNavigationMarker, m_penTarget4), "Target 4", 0, C_dBLUE  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000002c0<<8)+105, offsetof(CNavigationMarker, m_penTarget5), "Target 5", 0, C_dBLUE  | 0xFF, 0),
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
ENTITY_CLASSDEFINITION(CNavigationMarker, CEntity, "NavigationMarker", "Thumbnails\\NavigationMarker.tbn", 0x000002c0);
DECLARE_CTFILENAME(_fnmCNavigationMarker_tbn, "Thumbnails\\NavigationMarker.tbn");