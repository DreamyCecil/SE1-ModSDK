// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(EffectorEffectType)
  EP_ENUMVALUE(ET_NONE, "None"),
  EP_ENUMVALUE(ET_DESTROY_OBELISK, "Destroy obelisk"),
  EP_ENUMVALUE(ET_DESTROY_PYLON, "Destroy pylon"),
  EP_ENUMVALUE(ET_HIT_GROUND, "Hit ground"),
  EP_ENUMVALUE(ET_LIGHTNING, "Lightning"),
  EP_ENUMVALUE(ET_SIZING_BIG_BLUE_FLARE, "Sizing big blue flare"),
  EP_ENUMVALUE(ET_SIZING_RING_FLARE, "Sizing ring flare"),
  EP_ENUMVALUE(ET_MOVING_RING, "Moving ring"),
  EP_ENUMVALUE(ET_PORTAL_LIGHTNING, "Portal lightnings"),
  EP_ENUMVALUE(ET_MORPH_MODELS, "Morph two models"),
  EP_ENUMVALUE(ET_DISAPPEAR_MODEL, "Disappear model"),
  EP_ENUMVALUE(ET_APPEAR_MODEL, "Appear model"),
  EP_ENUMVALUE(ET_DISAPPEAR_MODEL_NOW, "Disappear model now"),
  EP_ENUMVALUE(ET_APPEAR_MODEL_NOW, "Appear model now"),
EP_ENUMEND(EffectorEffectType);

#define ENTITYCLASS CEffector

CEntityProperty CEffector_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &EffectorEffectType_enum, (0x260<<8)+1, 0x340, "", 0, "m_eetType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x260<<8)+2, 0x344, "", 0, "m_tmStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x260<<8)+3, 0x348, "", 0, "m_vDamageDir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x260<<8)+4, 0x354, "", 0, "m_vFXDestination", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x260<<8)+5, 0x360, "", 0, "m_tmLifeTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x260<<8)+6, 0x364, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x260<<8)+8, 0x368, "", 0, "m_ctCount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x260<<8)+10, 0x36C, "", 0, "m_bLightSource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0x260<<8)+11, 0x370, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x260<<8)+12, 0x390, "", 0, "m_iLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x260<<8)+13, 0x394, "", 0, "m_bAlive", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x260<<8)+14, 0x398, "", 0, "m_penModel", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x260<<8)+15, 0x39C, "", 0, "m_penModel2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x260<<8)+16, 0x3A0, "", 0, "m_bWaitTrigger", 0x0UL, 0),
};
#define CEffector_propertiesct ARRAYCOUNT(CEffector_properties)

CEntityComponent CEffector_components[] = {
#define MODEL_MARKER ((0x00000260<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000260<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
#define MODEL_POWER_RING ((0x00000260<<8)+3)
 CEntityComponent(ECT_MODEL, MODEL_POWER_RING, "EFNM" "Models\\CutSequences\\SpaceShip\\PowerRing.mdl"),
#define TEXTURE_POWER_RING ((0x00000260<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_POWER_RING, "EFNM" "Models\\CutSequences\\SpaceShip\\PowerRing.tex"),
};
#define CEffector_componentsct ARRAYCOUNT(CEffector_components)

CEventHandlerEntry CEffector_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEffector::Main),DEBUGSTRING("CEffector::Main")},
 {0x02600001, -1, CEntity::pEventHandler(&CEffector::H0x02600001_Main_01), DEBUGSTRING("CEffector::H0x02600001_Main_01")},
 {0x02600002, -1, CEntity::pEventHandler(&CEffector::H0x02600002_Main_02), DEBUGSTRING("CEffector::H0x02600002_Main_02")},
 {0x02600003, -1, CEntity::pEventHandler(&CEffector::H0x02600003_Main_03), DEBUGSTRING("CEffector::H0x02600003_Main_03")},
 {0x02600004, -1, CEntity::pEventHandler(&CEffector::H0x02600004_Main_04), DEBUGSTRING("CEffector::H0x02600004_Main_04")},
 {0x02600005, -1, CEntity::pEventHandler(&CEffector::H0x02600005_Main_05), DEBUGSTRING("CEffector::H0x02600005_Main_05")},
 {0x02600006, -1, CEntity::pEventHandler(&CEffector::H0x02600006_Main_06), DEBUGSTRING("CEffector::H0x02600006_Main_06")},
};
#define CEffector_handlersct ARRAYCOUNT(CEffector_handlers)

CEntity *CEffector_New(void) { return new CEffector; };
void CEffector_OnInitClass(void) {};
void CEffector_OnEndClass(void) {};
void CEffector_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CEffector_OnWorldEnd(CWorld *pwo) {};
void CEffector_OnWorldInit(CWorld *pwo) {};
void CEffector_OnWorldTick(CWorld *pwo) {};
void CEffector_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEffector, CMovableModelEntity, "Effector", "", 608);
DECLARE_CTFILENAME(_fnmCEffector_tbn, "");
