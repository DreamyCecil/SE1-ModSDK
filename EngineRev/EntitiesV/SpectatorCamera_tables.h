// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSpectatorCamera

CEntityProperty CSpectatorCamera_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf3<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf3<<8)+2, 0xEC, "FOV", 'F', "m_fFOV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf3<<8)+3, 0xF0, "Next spectator camera", 'V', "m_penNext", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf3<<8)+4, 0xF4, "Title", 'T', "m_strTitle", 0x7F0000FFUL, 0),
};
#define CSpectatorCamera_propertiesct ARRAYCOUNT(CSpectatorCamera_properties)

CEntityComponent CSpectatorCamera_components[] = {
#define CSpectatorCamera_MODEL_1 0xF301 // (0xf3<<8)+1
 CEntityComponent(ECT_MODEL, CSpectatorCamera_MODEL_1, "EFNM" "Models\\Editor\\CameraMarker.mdl"),
#define CSpectatorCamera_TEXTURE_2 0xF302 // (0xf3<<8)+2
 CEntityComponent(ECT_TEXTURE, CSpectatorCamera_TEXTURE_2, "EFNM" "Models\\Editor\\CameraMarker.tex"),
};
#define CSpectatorCamera_componentsct ARRAYCOUNT(CSpectatorCamera_components)

CEventHandlerEntry CSpectatorCamera_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSpectatorCamera::Main), DEBUGSTRING("CSpectatorCamera::Main")},
};
#define CSpectatorCamera_handlersct ARRAYCOUNT(CSpectatorCamera_handlers)

CEntity *CSpectatorCamera_New(void) { return new CSpectatorCamera; };
void CSpectatorCamera_OnInitClass(void) {};
void CSpectatorCamera_OnEndClass(void) {};
void CSpectatorCamera_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSpectatorCamera_OnWorldEnd(CWorld *pwo) {};
void CSpectatorCamera_OnWorldInit(CWorld *pwo) {};
void CSpectatorCamera_OnWorldTick(CWorld *pwo) {};
void CSpectatorCamera_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSpectatorCamera, CEntity, "Spectator Camera", "Thumbnails\\SpectatorCamera.tbn", 243);
DECLARE_CTFILENAME(_fnmCSpectatorCamera_tbn, "Thumbnails\\SpectatorCamera.tbn");
