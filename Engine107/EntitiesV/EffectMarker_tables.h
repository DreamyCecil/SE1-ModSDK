// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(EffectMarkerType)
  EP_ENUMVALUE(EMT_NONE, "None"),
  EP_ENUMVALUE(EMT_PLAYER_APPEAR, "Player appear"),
  EP_ENUMVALUE(EMT_APPEARING_BIG_BLUE_FLARE, "Appear big blue flare"),
  EP_ENUMVALUE(EMT_BLEND_MODELS, "Blend two models"),
  EP_ENUMVALUE(EMT_DISAPPEAR_MODEL, "Disappear model"),
  EP_ENUMVALUE(EMT_APPEAR_MODEL, "Appear model"),
  EP_ENUMVALUE(EMT_HIDE_ENTITY, "Hide entity"),
  EP_ENUMVALUE(EMT_SHOW_ENTITY, "Show entity"),
  EP_ENUMVALUE(EMT_SHAKE_IT_BABY, "Shake it baby"),
  EP_ENUMVALUE(EMT_APPEAR_DISAPPEAR, "Appear or Disappear model"),
  EP_ENUMVALUE(EMT_SET_PLACEMENT, "Teleport"),
  EP_ENUMVALUE(EMT_SET_PARENT, "Set parent"),
  EP_ENUMVALUE(EMT_CLEAR_PARENT, "Clear parent"),
  EP_ENUMVALUE(EMT_BASIC_EFFECT, "Basic effect"),
  EP_ENUMVALUE(EMT_GLARE, "Glare"),
EP_ENUMEND(EffectMarkerType);

#define ENTITYCLASS CEffectMarker

CEntityProperty CEffectMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &EffectMarkerType_enum, (0x00000263<<8)+1, offsetof(CEffectMarker, m_emtType), "Effect type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000263<<8)+2, offsetof(CEffectMarker, m_penModel), "FX Entity 1", 'E', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+3, offsetof(CEffectMarker, m_tmEffectLife), "FX Life time", 'L', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000263<<8)+4, offsetof(CEffectMarker, m_penModel2), "FX Entity 2", 'R', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000263<<8)+5, offsetof(CEffectMarker, m_penEffector), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+6, offsetof(CEffectMarker, m_fShakeFalloff), "Shake fall off", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+7, offsetof(CEffectMarker, m_fShakeFade), "Shake fade", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+8, offsetof(CEffectMarker, m_fShakeIntensityY), "Shake intensity Y", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+9, offsetof(CEffectMarker, m_fShakeFrequencyY), "Shake frequency Y", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+10, offsetof(CEffectMarker, m_fShakeIntensityB), "Shake intensity B", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+11, offsetof(CEffectMarker, m_fShakeFrequencyB), "Shake frequency B", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+12, offsetof(CEffectMarker, m_fShakeIntensityZ), "Shake intensity Z", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+13, offsetof(CEffectMarker, m_fShakeFrequencyZ), "Shake frequency Z", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0x00000263<<8)+20, offsetof(CEffectMarker, m_betType), "Basic effect type", 'P', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000263<<8)+21, offsetof(CEffectMarker, m_fStretch), "Stretch", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x00000263<<8)+22, offsetof(CEffectMarker, m_colColor), "FX color", 'C', 0x7F0000FFUL, 0),
};
#define CEffectMarker_propertiesct ARRAYCOUNT(CEffectMarker_properties)

CEntityComponent CEffectMarker_components[] = {
#define MODEL_MARKER ((0x00000263<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000263<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
#define CLASS_EFFECTOR ((0x00000263<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_EFFECTOR, "EFNM" "Classes\\Effector.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000263<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CEffectMarker_componentsct ARRAYCOUNT(CEffectMarker_components)

CEventHandlerEntry CEffectMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEffectMarker::Main),DEBUGSTRING("CEffectMarker::Main")},
};
#define CEffectMarker_handlersct ARRAYCOUNT(CEffectMarker_handlers)

CEntity *CEffectMarker_New(void) { return new CEffectMarker; };
void CEffectMarker_OnInitClass(void) {};
void CEffectMarker_OnEndClass(void) {};
void CEffectMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEffectMarker_OnWorldEnd(CWorld *pwo) {};
void CEffectMarker_OnWorldInit(CWorld *pwo) {};
void CEffectMarker_OnWorldTick(CWorld *pwo) {};
void CEffectMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEffectMarker, CMarker, "Effect Marker", "Thumbnails\\EffectMarker.tbn", 0x00000263);
DECLARE_CTFILENAME(_fnmCEffectMarker_tbn, "Thumbnails\\EffectMarker.tbn");
