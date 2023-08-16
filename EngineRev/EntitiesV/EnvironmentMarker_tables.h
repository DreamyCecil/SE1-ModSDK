// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEnvironmentMarker

CEntityProperty CEnvironmentMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x385<<8)+1, 0xF4, "Wait time", 'W', "m_fWaitTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x385<<8)+2, 0xF8, "Random time", 'E', "m_fRandomTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x385<<8)+3, 0xFC, "Marker range", 'R', "m_fMarkerRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x385<<8)+4, 0x100, "Fixed anim length", 'F', "m_bFixedAnimLength", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x385<<8)+5, 0x104, "Change default anim", 'C', "m_bChangeDefaultAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x385<<8)+6, 0x108, "Move speed", 'V', "m_fMoveSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x385<<8)+7, 0x10C, "Rotate speed", 'B', "m_fRotateSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x385<<8)+20, 0x110, "Model", 'M', "m_fnMdl", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x385<<8)+21, 0x118, "Animation", 'A', "m_iAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0x385<<8)+22, 0x120, "", 0, "m_moAnimData", 0x0UL, 0),
};
#define CEnvironmentMarker_propertiesct ARRAYCOUNT(CEnvironmentMarker_properties)

CEntityComponent CEnvironmentMarker_components[] = {
#define MODEL_MARKER ((0x00000385<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\EnvironmentMarker.mdl"),
#define TEXTURE_MARKER ((0x00000385<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\EnvironmentMarker.tex"),
};
#define CEnvironmentMarker_componentsct ARRAYCOUNT(CEnvironmentMarker_components)

CEventHandlerEntry CEnvironmentMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEnvironmentMarker::Main),DEBUGSTRING("CEnvironmentMarker::Main")},
};
#define CEnvironmentMarker_handlersct ARRAYCOUNT(CEnvironmentMarker_handlers)

CEntity *CEnvironmentMarker_New(void) { return new CEnvironmentMarker; };
void CEnvironmentMarker_OnInitClass(void) {};
void CEnvironmentMarker_OnEndClass(void) {};
void CEnvironmentMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnvironmentMarker_OnWorldEnd(CWorld *pwo) {};
void CEnvironmentMarker_OnWorldInit(CWorld *pwo) {};
void CEnvironmentMarker_OnWorldTick(CWorld *pwo) {};
void CEnvironmentMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnvironmentMarker, CMarker, "Environment Marker", "Thumbnails\\EnvironmentMarker.tbn", 901);
DECLARE_CTFILENAME(_fnmCEnvironmentMarker_tbn, "Thumbnails\\EnvironmentMarker.tbn");
