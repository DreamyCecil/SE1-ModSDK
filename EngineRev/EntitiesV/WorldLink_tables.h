// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WorldLinkType)
  EP_ENUMVALUE(WLT_FIXED, "Fixed"),
  EP_ENUMVALUE(WLT_RELATIVE, "Relative"),
EP_ENUMEND(WorldLinkType);

#define ENTITYCLASS CWorldLink

CEntityProperty CWorldLink_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd6<<8)+1, 0xF4, "Group", 'G', "m_strGroup", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAMENODEP, NULL, (0xd6<<8)+2, 0xF8, "World", 'W', "m_strWorld", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd6<<8)+3, 0xFC, "Store world", 'S', "m_bStoreWorld", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WorldLinkType_enum, (0xd6<<8)+4, 0x100, "Type", 'Y', "m_EwltType", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CWorldLink, CMarker, "World link", "Thumbnails\\WorldLink.tbn", 214);
DECLARE_CTFILENAME(_fnmCWorldLink_tbn, "Thumbnails\\WorldLink.tbn");
