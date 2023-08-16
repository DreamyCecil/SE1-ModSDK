// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WaterSize)
  EP_ENUMVALUE(WTS_SMALL, ""),
  EP_ENUMVALUE(WTS_BIG, ""),
  EP_ENUMVALUE(WTS_LARGE, ""),
EP_ENUMEND(WaterSize);

#define ENTITYCLASS CWater

CEntityProperty CWater_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1fc<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WaterSize_enum, (0x1fc<<8)+2, 0x344, "", 0, "m_EwsSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fc<<8)+10, 0x348, "", 0, "m_fDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fc<<8)+11, 0x34C, "", 0, "m_fIgnoreTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fc<<8)+12, 0x350, "", 0, "m_fPushAwayFactor", 0x0UL, 0),
};
#define CWater_propertiesct ARRAYCOUNT(CWater_properties)

CEntityComponent CWater_components[] = {
#define CLASS_LIGHT ((0x000001fc<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define MODEL_WATER ((0x000001fc<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_WATER, "EFNM" "Models\\Enemies\\Elementals\\Projectile\\WaterDrop.mdl"),
#define TEXTURE_WATER ((0x000001fc<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WATER, "EFNM" "Models\\Enemies\\Elementals\\WaterManFX.tex"),
#define TEX_SPEC_WEAK ((0x000001fc<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x000001fc<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x000001fc<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
};
#define CWater_componentsct ARRAYCOUNT(CWater_components)

CEventHandlerEntry CWater_handlers[] = {
 {0x01fc0001, -1, CEntity::pEventHandler(&CWater::WaterFly),DEBUGSTRING("CWater::WaterFly")},
 {0x01fc0002, -1, CEntity::pEventHandler(&CWater::H0x01fc0002_WaterFly_01), DEBUGSTRING("CWater::H0x01fc0002_WaterFly_01")},
 {0x01fc0003, -1, CEntity::pEventHandler(&CWater::H0x01fc0003_WaterFly_02), DEBUGSTRING("CWater::H0x01fc0003_WaterFly_02")},
 {1, -1, CEntity::pEventHandler(&CWater::Main),DEBUGSTRING("CWater::Main")},
 {0x01fc0004, -1, CEntity::pEventHandler(&CWater::H0x01fc0004_Main_01), DEBUGSTRING("CWater::H0x01fc0004_Main_01")},
 {0x01fc0005, -1, CEntity::pEventHandler(&CWater::H0x01fc0005_Main_02), DEBUGSTRING("CWater::H0x01fc0005_Main_02")},
};
#define CWater_handlersct ARRAYCOUNT(CWater_handlers)

CEntity *CWater_New(void) { return new CWater; };
void CWater_OnInitClass(void) {};
void CWater_OnEndClass(void) {};
void CWater_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWater_OnWorldEnd(CWorld *pwo) {};
void CWater_OnWorldInit(CWorld *pwo) {};
void CWater_OnWorldTick(CWorld *pwo) {};
void CWater_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWater, CMovableModelEntity, "Water", "", 508);
DECLARE_CTFILENAME(_fnmCWater_tbn, "");
