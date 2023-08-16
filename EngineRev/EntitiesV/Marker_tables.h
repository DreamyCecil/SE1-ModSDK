// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMarker

CEntityProperty CMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xca<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xca<<8)+3, 0xEC, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xca<<8)+2, 0xF0, "Target", 'T', "m_penTarget", 0x7F00FFUL, 0),
};
#define CMarker_propertiesct ARRAYCOUNT(CMarker_properties)

CEntityComponent CMarker_components[] = {
#define MODEL_MARKER ((0x000000ca<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000000ca<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CMarker_componentsct ARRAYCOUNT(CMarker_components)

CEventHandlerEntry CMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMarker::Main),DEBUGSTRING("CMarker::Main")},
};
#define CMarker_handlersct ARRAYCOUNT(CMarker_handlers)

CEntity *CMarker_New(void) { return new CMarker; };
void CMarker_OnInitClass(void) {};
void CMarker_OnEndClass(void) {};
void CMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMarker_OnWorldEnd(CWorld *pwo) {};
void CMarker_OnWorldInit(CWorld *pwo) {};
void CMarker_OnWorldTick(CWorld *pwo) {};
void CMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMarker, CEntity, "Marker", "Thumbnails\\Marker.tbn", 202);
DECLARE_CTFILENAME(_fnmCMarker_tbn, "Thumbnails\\Marker.tbn");
