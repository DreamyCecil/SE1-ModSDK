// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WarpRotation)
  EP_ENUMVALUE(WR_NONE, "none"),
  EP_ENUMVALUE(WR_BANKING, "banking"),
  EP_ENUMVALUE(WR_TWIRLING, "twirling"),
EP_ENUMEND(WarpRotation);

#define ENTITYCLASS CMirrorMarker

CEntityProperty CMirrorMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &WarpRotation_enum, (0xda<<8)+1, 0xF4, "Rotation Type", 'R', "m_wrRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xda<<8)+2, 0xF8, "Rotation Speed", 'S', "m_fRotationSpeed", 0x7F0000FFUL, 0),
};
#define CMirrorMarker_propertiesct ARRAYCOUNT(CMirrorMarker_properties)

CEntityComponent CMirrorMarker_components[] = {
#define MODEL_IN ((0x000000da<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_IN, "EFNM" "Models\\Editor\\WarpEntrance.mdl"),
#define TEXTURE_IN ((0x000000da<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_IN, "EFNM" "Models\\Editor\\Warp.tex"),
#define MODEL_OUT ((0x000000da<<8)+3)
 CEntityComponent(ECT_MODEL, MODEL_OUT, "EFNM" "Models\\Editor\\WarpExit.mdl"),
#define TEXTURE_OUT ((0x000000da<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_OUT, "EFNM" "Models\\Editor\\Warp.tex"),
};
#define CMirrorMarker_componentsct ARRAYCOUNT(CMirrorMarker_components)

CEventHandlerEntry CMirrorMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMirrorMarker::Main),DEBUGSTRING("CMirrorMarker::Main")},
};
#define CMirrorMarker_handlersct ARRAYCOUNT(CMirrorMarker_handlers)

CEntity *CMirrorMarker_New(void) { return new CMirrorMarker; };
void CMirrorMarker_OnInitClass(void) {};
void CMirrorMarker_OnEndClass(void) {};
void CMirrorMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMirrorMarker_OnWorldEnd(CWorld *pwo) {};
void CMirrorMarker_OnWorldInit(CWorld *pwo) {};
void CMirrorMarker_OnWorldTick(CWorld *pwo) {};
void CMirrorMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMirrorMarker, CMarker, "Mirror Marker", "Thumbnails\\WarpMarker.tbn", 218);
DECLARE_CTFILENAME(_fnmCMirrorMarker_tbn, "Thumbnails\\WarpMarker.tbn");
