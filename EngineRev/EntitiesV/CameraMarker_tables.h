// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCameraMarker

CEntityProperty CCameraMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+1, 0xF4, "Delta time", 'D', "m_fDeltaTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+2, 0xF8, "Bias", 'B', "m_fBias", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+3, 0xFC, "Tension", 'E', "m_fTension", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+4, 0x100, "Continuity", 'C', "m_fContinuity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe0<<8)+5, 0x104, "Stop moving", 'O', "m_bStopMoving", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+6, 0x108, "FOV", 'F', "m_fFOV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe0<<8)+7, 0x10C, "Skip to next", 'S', "m_bSkipToNext", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xe0<<8)+8, 0x110, "Fade Color", 'C', "m_colFade", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe0<<8)+9, 0x114, "Trigger", 'G', "m_penTrigger", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe0<<8)+10, 0x118, "View Target", 'V', "m_penViewTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xe0<<8)+11, 0x11C, "", 0, "m_vPosRatio", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+12, 0x128, "View pos ratio X", 'X', "m_fRatioX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+13, 0x12C, "View pos ratio Y", 'Y', "m_fRatioY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe0<<8)+14, 0x130, "View pos ratio Z", 'Z', "m_fRatioZ", 0x7F0000FFUL, 0),
};
#define CCameraMarker_propertiesct ARRAYCOUNT(CCameraMarker_properties)

CEntityComponent CCameraMarker_components[] = {
#define MODEL_MARKER ((0x000000e0<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\CameraMarker.mdl"),
#define TEXTURE_MARKER ((0x000000e0<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\CameraMarker.tex"),
};
#define CCameraMarker_componentsct ARRAYCOUNT(CCameraMarker_components)

CEventHandlerEntry CCameraMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CCameraMarker::Main),DEBUGSTRING("CCameraMarker::Main")},
};
#define CCameraMarker_handlersct ARRAYCOUNT(CCameraMarker_handlers)

CEntity *CCameraMarker_New(void) { return new CCameraMarker; };
void CCameraMarker_OnInitClass(void) {};
void CCameraMarker_OnEndClass(void) {};
void CCameraMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCameraMarker_OnWorldEnd(CWorld *pwo) {};
void CCameraMarker_OnWorldInit(CWorld *pwo) {};
void CCameraMarker_OnWorldTick(CWorld *pwo) {};
void CCameraMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCameraMarker, CMarker, "Camera Marker", "Thumbnails\\CameraMarker.tbn", 224);
DECLARE_CTFILENAME(_fnmCCameraMarker_tbn, "Thumbnails\\CameraMarker.tbn");
