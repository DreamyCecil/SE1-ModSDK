// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(LightType)
  EP_ENUMVALUE(LT_POINT, "Point light"),
  EP_ENUMVALUE(LT_AMBIENT, "Ambient light"),
  EP_ENUMVALUE(LT_STRONG_AMBIENT, "Strong ambient light"),
  EP_ENUMVALUE(LT_DIRECTIONAL, "Directional light"),
  EP_ENUMVALUE(LT_STRONG_POINT, "Strong point light"),
EP_ENUMEND(LightType);

EP_ENUMBEG(LensFlareType)
  EP_ENUMVALUE(LFT_NONE, "None"),
  EP_ENUMVALUE(LFT_STANDARD, "Standard"),
  EP_ENUMVALUE(LFT_STANDARD_REFLECTIONS, "Standard reflections"),
  EP_ENUMVALUE(LFT_YELLOW_STAR_RED_RING, "Yellow star with red ring"),
  EP_ENUMVALUE(LFT_WHITE_GLOW_STAR_RED_RING, "White glow star with red ring"),
  EP_ENUMVALUE(LFT_WHITE_GLOW_STAR, "White glow star"),
  EP_ENUMVALUE(LFT_WHITE_STAR_RED_RING_STREAKS, "White star with red ring and streaks"),
  EP_ENUMVALUE(LFT_WHITE_STAR_RED_REFLECTIONS, "White star with red reflections"),
  EP_ENUMVALUE(LFT_BLUE_STAR_BLUE_REFLECTIONS, "Blue star with blue reflections"),
  EP_ENUMVALUE(LFT_PV_SPACE_SHIP_WINDOW_FLARE, "Pyramid valley space ship window flare"),
  EP_ENUMVALUE(LFT_WHITE_GLOW_STAR_RED_RING_FAR, "Yellow star with red ring far"),
  EP_ENUMVALUE(LFT_WHITE_GLOW_FAR, "White glow far"),
  EP_ENUMVALUE(LFT_WHITE_GLOW_STAR_NG, "White glow star no glare"),
EP_ENUMEND(LensFlareType);

#define ENTITYCLASS CLight

CEntityProperty CLight_properties[] = {
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xc8<<8)+2, 0xE8, "Color", 'C', "m_colColor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xc8<<8)+9, 0xEC, "Directional ambient", 'E', "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xc8<<8)+1, 0xF0, "Fall-off", 'F', "m_rFallOffRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xc8<<8)+4, 0xF4, "Hot-spot", 'H', "m_rHotSpotRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ILLUMINATIONTYPE, NULL, (0xc8<<8)+7, 0xF8, "Polygon illumination", 'I', "m_itIllumination", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &LightType_enum, (0xc8<<8)+8, 0xFC, "Type", 'Y', "m_ltType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xc8<<8)+10, 0x100, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xc8<<8)+11, 0x104, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+12, 0x108, "Dark light", 'A', "m_bDarkLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xc8<<8)+13, 0x10C, "Clip near", 0, "m_fNearClip", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xc8<<8)+14, 0x110, "Clip far", 0, "m_fFarClip", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+15, 0x114, "Substract sector ambient", 'S', "m_bSubstractSectorAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+16, 0x118, "Render as small", 'R', "m_bRenderAsSmallLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &LensFlareType_enum, (0xc8<<8)+17, 0x11C, "Lens flare", 'L', "m_lftLensFlare", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+18, 0x120, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+19, 0x124, "Lens flare only", 'O', "m_bLensFlareOnly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xc8<<8)+20, 0x128, "Light animation file", 0, "m_fnmLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xc8<<8)+21, 0x130, "Light animation", 0, "m_iLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xc8<<8)+25, 0x134, "Light animation offset", 0, "m_tmOffsetPhase", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0xc8<<8)+22, 0x138, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+24, 0x158, "Targetable", 0, "m_bTargetable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+26, 0x15C, "Dynamic", 0, "m_bDynamic", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xc8<<8)+27, 0x160, "Diffusion", 'D', "m_bDiffusion", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xc8<<8)+30, 0x164, "Ambient light animation file", 0, "m_fnmAmbientLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xc8<<8)+31, 0x16C, "Ambient light animation", 0, "m_iAmbientLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0xc8<<8)+32, 0x170, "", 0, "m_aoAmbientLightAnimation", 0x0UL, 0),
};
#define CLight_propertiesct ARRAYCOUNT(CLight_properties)

CEntityComponent CLight_components[] = {
#define MODEL_LIGHT_SOURCE ((0x000000c8<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_LIGHT_SOURCE, "EFNM" "Models\\Editor\\LightSource.mdl"),
#define TEXTURE_POINT_LIGHT ((0x000000c8<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_POINT_LIGHT, "EFNM" "Models\\Editor\\PointLight.tex"),
#define TEXTURE_AMBIENT_LIGHT ((0x000000c8<<8)+3)
 CEntityComponent(ECT_TEXTURE, TEXTURE_AMBIENT_LIGHT, "EFNM" "Models\\Editor\\AmbientLight.tex"),
#define TEXTURE_REAL_AMBIENT_LIGHT ((0x000000c8<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_REAL_AMBIENT_LIGHT, "EFNM" "Models\\Editor\\RealAmbientLight.tex"),
#define MODEL_SPOT_LIGHT ((0x000000c8<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_SPOT_LIGHT, "EFNM" "Models\\Editor\\SpotLight.mdl"),
#define TEXTURE_SPOT_LIGHT ((0x000000c8<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPOT_LIGHT, "EFNM" "Models\\Editor\\SpotLight.tex"),
};
#define CLight_componentsct ARRAYCOUNT(CLight_components)

CEventHandlerEntry CLight_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CLight::Main),DEBUGSTRING("CLight::Main")},
};
#define CLight_handlersct ARRAYCOUNT(CLight_handlers)

CEntity *CLight_New(void) { return new CLight; };
void CLight_OnInitClass(void);
void CLight_OnEndClass(void);
void CLight_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CLight_OnWorldEnd(CWorld *pwo) {};
void CLight_OnWorldInit(CWorld *pwo) {};
void CLight_OnWorldTick(CWorld *pwo) {};
void CLight_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CLight, CEntity, "Light", "Thumbnails\\Light.tbn", 200);
DECLARE_CTFILENAME(_fnmCLight_tbn, "Thumbnails\\Light.tbn");
