// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCyborgBike

CEntityProperty CCyborgBike_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14b<<8)+1, 0x340, "", 0, "m_fSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x14b<<8)+2, 0x344, "", 0, "m_iIndex", 0x0UL, 0),
};
#define CCyborgBike_propertiesct ARRAYCOUNT(CCyborgBike_properties)

CEntityComponent CCyborgBike_components[] = {
#define CLASS_DEBRIS ((0x0000014b<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_DEBRIS, "EFNM" "Classes\\Debris.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000014b<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_BIKE ((0x0000014b<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_BIKE, "EFNM" "Models\\Enemies\\Cyborg\\Bike.mdl"),
#define TEXTURE_BIKE ((0x0000014b<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BIKE, "EFNM" "Models\\Enemies\\Cyborg\\Bike.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x0000014b<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_SPEC_MEDIUM ((0x0000014b<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
};
#define CCyborgBike_componentsct ARRAYCOUNT(CCyborgBike_components)

CEventHandlerEntry CCyborgBike_handlers[] = {
 {0x014b0001, -1, CEntity::pEventHandler(&CCyborgBike::MainLoop),DEBUGSTRING("CCyborgBike::MainLoop")},
 {0x014b0002, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0002_MainLoop_01), DEBUGSTRING("CCyborgBike::H0x014b0002_MainLoop_01")},
 {0x014b0003, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0003_MainLoop_02), DEBUGSTRING("CCyborgBike::H0x014b0003_MainLoop_02")},
 {0x014b0004, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0004_MainLoop_03), DEBUGSTRING("CCyborgBike::H0x014b0004_MainLoop_03")},
 {0x014b0005, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0005_MainLoop_04), DEBUGSTRING("CCyborgBike::H0x014b0005_MainLoop_04")},
 {0x014b0006, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0006_MainLoop_05), DEBUGSTRING("CCyborgBike::H0x014b0006_MainLoop_05")},
 {0x014b0007, -1, CEntity::pEventHandler(&CCyborgBike::H0x014b0007_MainLoop_06), DEBUGSTRING("CCyborgBike::H0x014b0007_MainLoop_06")},
 {1, -1, CEntity::pEventHandler(&CCyborgBike::Main),DEBUGSTRING("CCyborgBike::Main")},
};
#define CCyborgBike_handlersct ARRAYCOUNT(CCyborgBike_handlers)

CEntity *CCyborgBike_New(void) { return new CCyborgBike; };
void CCyborgBike_OnInitClass(void) {};
void CCyborgBike_OnEndClass(void) {};
void CCyborgBike_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCyborgBike_OnWorldEnd(CWorld *pwo) {};
void CCyborgBike_OnWorldInit(CWorld *pwo) {};
void CCyborgBike_OnWorldTick(CWorld *pwo) {};
void CCyborgBike_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCyborgBike, CMovableModelEntity, "Cyborg Bike", "", 331);
DECLARE_CTFILENAME(_fnmCCyborgBike_tbn, "");
