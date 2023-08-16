// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAirWave

CEntityProperty CAirWave_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1fe<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fe<<8)+10, 0x344, "", 0, "m_fDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fe<<8)+11, 0x348, "", 0, "m_fIgnoreTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fe<<8)+12, 0x34C, "", 0, "m_fStartTime", 0x0UL, 0),
};
#define CAirWave_propertiesct ARRAYCOUNT(CAirWave_properties)

CEntityComponent CAirWave_components[] = {
#define MODEL_AIRWAVE ((0x000001fe<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_AIRWAVE, "EFNM" "Models\\Enemies\\Mamut\\Projectile\\MamutProjectile.mdl"),
#define TEXTURE_AIRWAVE ((0x000001fe<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_AIRWAVE, "EFNM" "Models\\Enemies\\Mamut\\Projectile\\MamutProjectile.tex"),
};
#define CAirWave_componentsct ARRAYCOUNT(CAirWave_components)

CEventHandlerEntry CAirWave_handlers[] = {
 {0x01fe0001, -1, CEntity::pEventHandler(&CAirWave::AirWaveSlide),DEBUGSTRING("CAirWave::AirWaveSlide")},
 {0x01fe0002, -1, CEntity::pEventHandler(&CAirWave::H0x01fe0002_AirWaveSlide_01), DEBUGSTRING("CAirWave::H0x01fe0002_AirWaveSlide_01")},
 {0x01fe0003, -1, CEntity::pEventHandler(&CAirWave::H0x01fe0003_AirWaveSlide_02), DEBUGSTRING("CAirWave::H0x01fe0003_AirWaveSlide_02")},
 {1, -1, CEntity::pEventHandler(&CAirWave::Main),DEBUGSTRING("CAirWave::Main")},
 {0x01fe0004, -1, CEntity::pEventHandler(&CAirWave::H0x01fe0004_Main_01), DEBUGSTRING("CAirWave::H0x01fe0004_Main_01")},
 {0x01fe0005, -1, CEntity::pEventHandler(&CAirWave::H0x01fe0005_Main_02), DEBUGSTRING("CAirWave::H0x01fe0005_Main_02")},
};
#define CAirWave_handlersct ARRAYCOUNT(CAirWave_handlers)

CEntity *CAirWave_New(void) { return new CAirWave; };
void CAirWave_OnInitClass(void) {};
void CAirWave_OnEndClass(void) {};
void CAirWave_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAirWave_OnWorldEnd(CWorld *pwo) {};
void CAirWave_OnWorldInit(CWorld *pwo) {};
void CAirWave_OnWorldTick(CWorld *pwo) {};
void CAirWave_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAirWave, CMovableModelEntity, "Air wave", "", 510);
DECLARE_CTFILENAME(_fnmCAirWave_tbn, "");
