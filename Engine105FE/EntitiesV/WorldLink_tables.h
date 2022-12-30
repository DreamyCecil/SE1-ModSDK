// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(WorldLinkType)
  EP_ENUMVALUE(WLT_FIXED, "Fixed"),
  EP_ENUMVALUE(WLT_RELATIVE, "Relative"),
EP_ENUMEND(WorldLinkType);

#define ENTITYCLASS CWorldLink

CEntityProperty CWorldLink_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000d6<<8)+1, offsetof(CWorldLink, m_strGroup), "Group", 'G', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAMENODEP, NULL, (0x000000d6<<8)+2, offsetof(CWorldLink, m_strWorld), "World", 'W', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d6<<8)+3, offsetof(CWorldLink, m_bStoreWorld), "Store world", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WorldLinkType_enum, (0x000000d6<<8)+4, offsetof(CWorldLink, m_EwltType), "Type", 'Y', 0x7F0000FFUL, 0),
};
#define CWorldLink_propertiesct ARRAYCOUNT(CWorldLink_properties)

CEntityComponent CWorldLink_components[] = {
#define MODEL_WORLDLINK ((0x000000d6<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WORLDLINK, "EFNM" "Models\\Editor\\WorldLink.mdl"),
#define TEXTURE_WORLDLINK ((0x000000d6<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WORLDLINK, "EFNM" "Models\\Editor\\WorldLink.tex"),
};
#define CWorldLink_componentsct ARRAYCOUNT(CWorldLink_components)

CEventHandlerEntry CWorldLink_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldLink::Main),DEBUGSTRING("CWorldLink::Main")},
};
#define CWorldLink_handlersct ARRAYCOUNT(CWorldLink_handlers)

CEntity *CWorldLink_New(void) { return new CWorldLink; };
void CWorldLink_OnInitClass(void) {};
void CWorldLink_OnEndClass(void) {};
void CWorldLink_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldLink_OnWorldEnd(CWorld *pwo) {};
void CWorldLink_OnWorldInit(CWorld *pwo) {};
void CWorldLink_OnWorldTick(CWorld *pwo) {};
void CWorldLink_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWorldLink, CMarker, "World link", "Thumbnails\\WorldLink.tbn", 0x000000d6);
DECLARE_CTFILENAME(_fnmCWorldLink_tbn, "Thumbnails\\WorldLink.tbn");
