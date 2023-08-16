// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

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
 CEntityProperty(CEntityProperty::EPT_ENUM, &EffectMarkerType_enum, (0x263<<8)+1, 0xF4, "Effect type", 'Y', "m_emtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x263<<8)+2, 0xF8, "FX Entity 1", 'E', "m_penModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+3, 0xFC, "FX Life time", 'L', "m_tmEffectLife", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x263<<8)+4, 0x100, "FX Entity 2", 'R', "m_penModel2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x263<<8)+5, 0x104, "", 0, "m_penEffector", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+6, 0x108, "Shake fall off", 0, "m_fShakeFalloff", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+7, 0x10C, "Shake fade", 0, "m_fShakeFade", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+8, 0x110, "Shake intensity Y", 0, "m_fShakeIntensityY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+9, 0x114, "Shake frequency Y", 0, "m_fShakeFrequencyY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+10, 0x118, "Shake intensity B", 0, "m_fShakeIntensityB", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+11, 0x11C, "Shake frequency B", 0, "m_fShakeFrequencyB", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+12, 0x120, "Shake intensity Z", 0, "m_fShakeIntensityZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+13, 0x124, "Shake frequency Z", 0, "m_fShakeFrequencyZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0x263<<8)+20, 0x128, "Basic effect type", 'P', "m_betType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x263<<8)+21, 0x12C, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x263<<8)+22, 0x130, "FX color", 'C', "m_colColor", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CEffectMarker, CMarker, "Effect Marker", "Thumbnails\\EffectMarker.tbn", 611);
DECLARE_CTFILENAME(_fnmCEffectMarker_tbn, "Thumbnails\\EffectMarker.tbn");
