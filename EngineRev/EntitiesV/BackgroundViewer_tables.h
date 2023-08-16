// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CBackgroundViewer

CEntityProperty CBackgroundViewer_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd3<<8)+1, 0xF4, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd3<<8)+2, 0xF8, "World settings controller", 'W', "m_penWorldSettingsController", 0x7F0000FFUL, 0),
};
#define CBackgroundViewer_propertiesct ARRAYCOUNT(CBackgroundViewer_properties)

CEntityComponent CBackgroundViewer_components[] = {
#define MODEL_MARKER ((0x000000d3<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000000d3<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CBackgroundViewer_componentsct ARRAYCOUNT(CBackgroundViewer_components)

CEventHandlerEntry CBackgroundViewer_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBackgroundViewer::Main),DEBUGSTRING("CBackgroundViewer::Main")},
};
#define CBackgroundViewer_handlersct ARRAYCOUNT(CBackgroundViewer_handlers)

CEntity *CBackgroundViewer_New(void) { return new CBackgroundViewer; };
void CBackgroundViewer_OnInitClass(void) {};
void CBackgroundViewer_OnEndClass(void) {};
void CBackgroundViewer_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBackgroundViewer_OnWorldEnd(CWorld *pwo) {};
void CBackgroundViewer_OnWorldInit(CWorld *pwo) {};
void CBackgroundViewer_OnWorldTick(CWorld *pwo) {};
void CBackgroundViewer_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBackgroundViewer, CMarker, "Background Viewer", "Thumbnails\\BackgroundViewer.tbn", 211);
DECLARE_CTFILENAME(_fnmCBackgroundViewer_tbn, "Thumbnails\\BackgroundViewer.tbn");
