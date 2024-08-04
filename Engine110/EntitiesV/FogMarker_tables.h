// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

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
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+1, offsetof(CFogMarker, m_fDepth), "Depth", 'E', "m_fDepth", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+2, offsetof(CFogMarker, m_fAbove), "Above", 'O', "m_fAbove", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+3, offsetof(CFogMarker, m_fBelow), "Below", 'B', "m_fBelow", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+4, offsetof(CFogMarker, m_fFar), "Far", 'F', "m_fFar", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &FogAttenuationType_enum, (0x000000d7<<8)+10, offsetof(CFogMarker, m_faType), "Attenuation Type", 'A', "m_faType", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+11, offsetof(CFogMarker, m_fDensity), "Density", 'D', "m_fDensity", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &FogGraduationType2_enum, (0x000000d7<<8)+12, offsetof(CFogMarker, m_fgType), "Graduation Type", 'G', "m_fgType", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+13, offsetof(CFogMarker, m_fGraduation), "Graduation", 'R', "m_fGraduation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000d7<<8)+14, offsetof(CFogMarker, m_bDensityDirect), "Density Direct", 0, "m_bDensityDirect", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+15, offsetof(CFogMarker, m_fDensityPercentage), "DensityPercentage", 0, "m_fDensityPercentage", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+16, offsetof(CFogMarker, m_fDensityDistance), "DensityDistance", 0, "m_fDensityDistance", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000d7<<8)+17, offsetof(CFogMarker, m_bGraduationDirect), "Graduation Direct", 0, "m_bGraduationDirect", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+18, offsetof(CFogMarker, m_fGraduationPercentage), "GraduationPercentage", 0, "m_fGraduationPercentage", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000000d7<<8)+19, offsetof(CFogMarker, m_fGraduationDistance), "GraduationDistance", 0, "m_fGraduationDistance", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000000d7<<8)+22, offsetof(CFogMarker, m_iSizeL), "Size Distance", 'S', "m_iSizeL", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000000d7<<8)+23, offsetof(CFogMarker, m_iSizeH), "Size Depth", 'I', "m_iSizeH", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_COLOR, NULL, (0x000000d7<<8)+24, offsetof(CFogMarker, m_colColor), "Color", 'C', "m_colColor", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CFogMarker, CMarker, "Fog Marker", "Thumbnails\\FogMarker.tbn", 0x000000d7);
DECLARE_CTFILENAME(_fnmCFogMarker_tbn, "Thumbnails\\FogMarker.tbn");
