// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAreaMarker

CEntityProperty CAreaMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xca<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xca<<8)+2, 0xEC, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0xca<<8)+3, 0xF0, "Area box", 'B', "m_boxArea", 0x7F0000FFUL, 0),
};
#define CAreaMarker_propertiesct ARRAYCOUNT(CAreaMarker_properties)

CEntityComponent CAreaMarker_components[] = {
#define MODEL_AREAMARKER ((0x000000ca<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_AREAMARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_AREAMARKER ((0x000000ca<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_AREAMARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CAreaMarker_componentsct ARRAYCOUNT(CAreaMarker_components)

CEventHandlerEntry CAreaMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CAreaMarker::Main),DEBUGSTRING("CAreaMarker::Main")},
};
#define CAreaMarker_handlersct ARRAYCOUNT(CAreaMarker_handlers)

CEntity *CAreaMarker_New(void) { return new CAreaMarker; };
void CAreaMarker_OnInitClass(void) {};
void CAreaMarker_OnEndClass(void) {};
void CAreaMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAreaMarker_OnWorldEnd(CWorld *pwo) {};
void CAreaMarker_OnWorldInit(CWorld *pwo) {};
void CAreaMarker_OnWorldTick(CWorld *pwo) {};
void CAreaMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAreaMarker, CEntity, "AreaMarker", "Thumbnails\\AreaMarker.tbn", 202);
DECLARE_CTFILENAME(_fnmCAreaMarker_tbn, "Thumbnails\\AreaMarker.tbn");
