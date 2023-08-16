// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(FogAttenuationType)
  EP_ENUMVALUE(FA_LINEAR, "Linear"),
  EP_ENUMVALUE(FA_EXP, "Exp"),
  EP_ENUMVALUE(FA_EXP2, "Exp2"),
EP_ENUMEND(FogAttenuationType);

EP_ENUMBEG(FogGraduationType2)
  EP_ENUMVALUE(FG_CONSTANT, "Constant"),
  EP_ENUMVALUE(FG_LINEAR, "Linear"),
  EP_ENUMVALUE(FG_EXP, "Exp"),
EP_ENUMEND(FogGraduationType2);

#define ENTITYCLASS CFogMarker

CEntityProperty CFogMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+1, 0xF4, "Depth", 'E', "m_fDepth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+2, 0xF8, "Above", 'O', "m_fAbove", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+3, 0xFC, "Below", 'B', "m_fBelow", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+4, 0x100, "Far", 'F', "m_fFar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &FogAttenuationType_enum, (0xd7<<8)+10, 0x104, "Attenuation Type", 'A', "m_faType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+11, 0x108, "Density", 'D', "m_fDensity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &FogGraduationType2_enum, (0xd7<<8)+12, 0x10C, "Graduation Type", 'G', "m_fgType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+13, 0x110, "Graduation", 'R', "m_fGraduation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd7<<8)+14, 0x114, "Density Direct", 0, "m_bDensityDirect", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+15, 0x118, "DensityPercentage", 0, "m_fDensityPercentage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+16, 0x11C, "DensityDistance", 0, "m_fDensityDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd7<<8)+17, 0x120, "Graduation Direct", 0, "m_bGraduationDirect", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+18, 0x124, "GraduationPercentage", 0, "m_fGraduationPercentage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd7<<8)+19, 0x128, "GraduationDistance", 0, "m_fGraduationDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd7<<8)+22, 0x12C, "Size Distance", 'S', "m_iSizeL", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd7<<8)+23, 0x130, "Size Depth", 'I', "m_iSizeH", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd7<<8)+24, 0x134, "Color", 'C', "m_colColor", 0x7F0000FFUL, 0),
};
#define CFogMarker_propertiesct ARRAYCOUNT(CFogMarker_properties)

CEntityComponent CFogMarker_components[] = {
#define MODEL_MARKER ((0x000000d7<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Fog.mdl"),
#define TEXTURE_MARKER ((0x000000d7<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Fog.tex"),
};
#define CFogMarker_componentsct ARRAYCOUNT(CFogMarker_components)

CEventHandlerEntry CFogMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CFogMarker::Main),DEBUGSTRING("CFogMarker::Main")},
};
#define CFogMarker_handlersct ARRAYCOUNT(CFogMarker_handlers)

CEntity *CFogMarker_New(void) { return new CFogMarker; };
void CFogMarker_OnInitClass(void) {};
void CFogMarker_OnEndClass(void) {};
void CFogMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CFogMarker_OnWorldEnd(CWorld *pwo) {};
void CFogMarker_OnWorldInit(CWorld *pwo) {};
void CFogMarker_OnWorldTick(CWorld *pwo) {};
void CFogMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFogMarker, CMarker, "Fog Marker", "Thumbnails\\FogMarker.tbn", 215);
DECLARE_CTFILENAME(_fnmCFogMarker_tbn, "Thumbnails\\FogMarker.tbn");
