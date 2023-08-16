// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CHazeMarker

CEntityProperty CHazeMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &FogAttenuationType_enum, (0xd8<<8)+10, 0xF4, "Attenuation Type", 'A', "m_faType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd8<<8)+11, 0xF8, "Density", 'D', "m_fDensity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd8<<8)+12, 0xFC, "Near", 0, "m_fNear", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd8<<8)+13, 0x100, "Far", 0, "m_fFar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd8<<8)+14, 0x104, "Visible from outside", 0, "m_bVisibleFromOutside", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd8<<8)+22, 0x108, "Size", 0, "m_iSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+23, 0x10C, "Base Color", 'C', "m_colBase", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+24, 0x110, "Color (up)", 0, "m_colUp", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+25, 0x114, "Color (down)", 0, "m_colDown", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+26, 0x118, "Color (north)", 0, "m_colNorth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+27, 0x11C, "Color (south)", 0, "m_colSouth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+28, 0x120, "Color (east)", 0, "m_colEast", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd8<<8)+29, 0x124, "Color (west)", 0, "m_colWest", 0x7F0000FFUL, 0),
};
#define CHazeMarker_propertiesct ARRAYCOUNT(CHazeMarker_properties)

CEntityComponent CHazeMarker_components[] = {
#define MODEL_MARKER ((0x000000d8<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Haze.mdl"),
#define TEXTURE_MARKER ((0x000000d8<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Haze.tex"),
};
#define CHazeMarker_componentsct ARRAYCOUNT(CHazeMarker_components)

CEventHandlerEntry CHazeMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CHazeMarker::Main),DEBUGSTRING("CHazeMarker::Main")},
};
#define CHazeMarker_handlersct ARRAYCOUNT(CHazeMarker_handlers)

CEntity *CHazeMarker_New(void) { return new CHazeMarker; };
void CHazeMarker_OnInitClass(void) {};
void CHazeMarker_OnEndClass(void) {};
void CHazeMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CHazeMarker_OnWorldEnd(CWorld *pwo) {};
void CHazeMarker_OnWorldInit(CWorld *pwo) {};
void CHazeMarker_OnWorldTick(CWorld *pwo) {};
void CHazeMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CHazeMarker, CMarker, "Haze Marker", "Thumbnails\\HazeMarker.tbn", 216);
DECLARE_CTFILENAME(_fnmCHazeMarker_tbn, "Thumbnails\\HazeMarker.tbn");
