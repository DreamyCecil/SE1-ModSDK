// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CGradientMarker

CEntityProperty CGradientMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe6<<8)+1, 0xF4, "Height", 'H', "m_fHeight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe6<<8)+2, 0xF8, "Dark light", 'D', "m_bDarkLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xe6<<8)+3, 0xFC, "Color 0", 'C', "m_colColor0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xe6<<8)+4, 0x100, "Color 1", 'A', "m_colColor1", 0x7F0000FFUL, 0),
};
#define CGradientMarker_propertiesct ARRAYCOUNT(CGradientMarker_properties)

CEntityComponent CGradientMarker_components[] = {
#define MODEL_MARKER ((0x000000e6<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\GradientMarker.mdl"),
#define TEXTURE_MARKER ((0x000000e6<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\GradientMarker.tex"),
};
#define CGradientMarker_componentsct ARRAYCOUNT(CGradientMarker_components)

CEventHandlerEntry CGradientMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGradientMarker::Main),DEBUGSTRING("CGradientMarker::Main")},
};
#define CGradientMarker_handlersct ARRAYCOUNT(CGradientMarker_handlers)

CEntity *CGradientMarker_New(void) { return new CGradientMarker; };
void CGradientMarker_OnInitClass(void) {};
void CGradientMarker_OnEndClass(void) {};
void CGradientMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGradientMarker_OnWorldEnd(CWorld *pwo) {};
void CGradientMarker_OnWorldInit(CWorld *pwo) {};
void CGradientMarker_OnWorldTick(CWorld *pwo) {};
void CGradientMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGradientMarker, CMarker, "Gradient Marker", "Thumbnails\\GradientMarker.tbn", 230);
DECLARE_CTFILENAME(_fnmCGradientMarker_tbn, "Thumbnails\\GradientMarker.tbn");
