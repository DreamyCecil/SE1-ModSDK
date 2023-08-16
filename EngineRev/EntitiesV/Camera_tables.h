// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCamera

CEntityProperty CCamera_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+1, 0x340, "Time", 'E', "m_tmTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+2, 0x344, "FOV", 'F', "m_fFOV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+5, 0x348, "", 0, "m_fLastFOV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+3, 0x34C, "Target", 'T', "m_penTarget", 0x7F7FFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdc<<8)+4, 0x350, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+6, 0x354, "OnBreak", 'B', "m_penOnBreak", 0xFF7F7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdc<<8)+7, 0x358, "WideScreen", 'W', "m_bWideScreen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+10, 0x35C, "", 0, "m_tmAtMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+11, 0x360, "", 0, "m_tmDelta", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+13, 0x364, "", 0, "m_vPNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+14, 0x370, "", 0, "m_vPNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+15, 0x37C, "", 0, "m_vTNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+16, 0x388, "", 0, "m_vTNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+17, 0x394, "", 0, "m_fFOVp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+18, 0x398, "", 0, "m_fFOVp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+19, 0x39C, "", 0, "m_fTFOVp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+20, 0x3A0, "", 0, "m_fTFOVp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0xdc<<8)+31, 0x3A4, "", 0, "m_qPNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0xdc<<8)+32, 0x3B4, "", 0, "m_qPNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0xdc<<8)+33, 0x3C4, "", 0, "m_qANp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0xdc<<8)+34, 0x3D4, "", 0, "m_qANp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+40, 0x3E4, "", 0, "m_penLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+41, 0x3E8, "", 0, "m_penPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdc<<8)+42, 0x3EC, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdc<<8)+43, 0x3F0, "", 0, "m_bStopMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xdc<<8)+50, 0x3F4, "", 0, "m_colFade0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xdc<<8)+51, 0x3F8, "", 0, "m_colFade1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdc<<8)+52, 0x3FC, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+53, 0x400, "", 0, "m_penViewTarget0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+54, 0x404, "", 0, "m_penViewTarget1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+55, 0x408, "", 0, "m_vPosRatio0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+56, 0x414, "", 0, "m_vPosRatio1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+60, 0x420, "", 0, "m_fMyTimer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+61, 0x424, "", 0, "m_fMyTimerLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdc<<8)+62, 0x428, "Ignore time stretch", 0, "m_bIgnoreTimeStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdc<<8)+63, 0x42C, "Auto rotate (AR)", 'A', "m_bAutoRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+64, 0x430, "AR start heading", 'D', "m_fStartHdg", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+65, 0x434, "AR Rotate speed", 'S', "m_fRotateSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+66, 0x438, "AR Rotate time", 'I', "m_fRotateTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+67, 0x43C, "AR Radius X", 'X', "m_fRadX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+68, 0x440, "AR Height (controlls pitch)", 'H', "m_fHeight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdc<<8)+69, 0x444, "AR Radius Z", 'Z', "m_fRadZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xdc<<8)+70, 0x448, "Auto camera end target", 0, "m_penAutoCameraEndTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xdc<<8)+71, 0x44C, "Auto camera end event", 0, "m_eetAutoCameraEndEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xdc<<8)+72, 0x450, "", 0, "m_vRelTargetOffset", 0x0UL, 0),
};
#define CCamera_propertiesct ARRAYCOUNT(CCamera_properties)

CEntityComponent CCamera_components[] = {
#define MODEL_CAMERA ((0x000000dc<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_CAMERA, "EFNM" "Models\\Editor\\Camera.mdl"),
#define TEXTURE_CAMERA ((0x000000dc<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CAMERA, "EFNM" "Models\\Editor\\Camera.tex"),
};
#define CCamera_componentsct ARRAYCOUNT(CCamera_components)

CEventHandlerEntry CCamera_handlers[] = {
 {0x00dc0000, -1, CEntity::pEventHandler(&CCamera::PlayStaticCamera),DEBUGSTRING("CCamera::PlayStaticCamera")},
 {0x00dc0001, -1, CEntity::pEventHandler(&CCamera::H0x00dc0001_PlayStaticCamera_01), DEBUGSTRING("CCamera::H0x00dc0001_PlayStaticCamera_01")},
 {0x00dc0002, -1, CEntity::pEventHandler(&CCamera::H0x00dc0002_PlayStaticCamera_02), DEBUGSTRING("CCamera::H0x00dc0002_PlayStaticCamera_02")},
 {0x00dc0003, -1, CEntity::pEventHandler(&CCamera::PlayAutoRotatingCamera),DEBUGSTRING("CCamera::PlayAutoRotatingCamera")},
 {0x00dc0004, -1, CEntity::pEventHandler(&CCamera::H0x00dc0004_PlayAutoRotatingCamera_01), DEBUGSTRING("CCamera::H0x00dc0004_PlayAutoRotatingCamera_01")},
 {0x00dc0005, -1, CEntity::pEventHandler(&CCamera::H0x00dc0005_PlayAutoRotatingCamera_02), DEBUGSTRING("CCamera::H0x00dc0005_PlayAutoRotatingCamera_02")},
 {0x00dc0006, -1, CEntity::pEventHandler(&CCamera::PlayMovingCamera),DEBUGSTRING("CCamera::PlayMovingCamera")},
 {0x00dc0007, -1, CEntity::pEventHandler(&CCamera::H0x00dc0007_PlayMovingCamera_01), DEBUGSTRING("CCamera::H0x00dc0007_PlayMovingCamera_01")},
 {0x00dc0008, -1, CEntity::pEventHandler(&CCamera::H0x00dc0008_PlayMovingCamera_02), DEBUGSTRING("CCamera::H0x00dc0008_PlayMovingCamera_02")},
 {0x00dc0009, -1, CEntity::pEventHandler(&CCamera::PlayCamera),DEBUGSTRING("CCamera::PlayCamera")},
 {1, -1, CEntity::pEventHandler(&CCamera::Main),DEBUGSTRING("CCamera::Main")},
 {0x00dc000a, -1, CEntity::pEventHandler(&CCamera::H0x00dc000a_Main_01), DEBUGSTRING("CCamera::H0x00dc000a_Main_01")},
 {0x00dc000b, -1, CEntity::pEventHandler(&CCamera::H0x00dc000b_Main_02), DEBUGSTRING("CCamera::H0x00dc000b_Main_02")},
 {0x00dc000c, -1, CEntity::pEventHandler(&CCamera::H0x00dc000c_Main_03), DEBUGSTRING("CCamera::H0x00dc000c_Main_03")},
 {0x00dc000d, -1, CEntity::pEventHandler(&CCamera::H0x00dc000d_Main_04), DEBUGSTRING("CCamera::H0x00dc000d_Main_04")},
 {0x00dc000e, -1, CEntity::pEventHandler(&CCamera::H0x00dc000e_Main_05), DEBUGSTRING("CCamera::H0x00dc000e_Main_05")},
 {0x00dc000f, -1, CEntity::pEventHandler(&CCamera::H0x00dc000f_Main_06), DEBUGSTRING("CCamera::H0x00dc000f_Main_06")},
 {0x00dc0010, -1, CEntity::pEventHandler(&CCamera::H0x00dc0010_Main_07), DEBUGSTRING("CCamera::H0x00dc0010_Main_07")},
};
#define CCamera_handlersct ARRAYCOUNT(CCamera_handlers)

CEntity *CCamera_New(void) { return new CCamera; };
void CCamera_OnInitClass(void) {};
void CCamera_OnEndClass(void) {};
void CCamera_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCamera_OnWorldEnd(CWorld *pwo) {};
void CCamera_OnWorldInit(CWorld *pwo) {};
void CCamera_OnWorldTick(CWorld *pwo) {};
void CCamera_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCamera, CMovableModelEntity, "Camera", "Thumbnails\\Camera.tbn", 220);
DECLARE_CTFILENAME(_fnmCCamera_tbn, "Thumbnails\\Camera.tbn");
