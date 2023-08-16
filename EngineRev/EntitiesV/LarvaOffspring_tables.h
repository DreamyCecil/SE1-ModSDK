// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CLarvaOffspring

CEntityProperty CLarvaOffspring_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x161<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x161<<8)+5, 0x344, "", 0, "m_penTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+11, 0x348, "", 0, "m_fIgnoreTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+12, 0x34C, "", 0, "m_fFlyTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+13, 0x350, "", 0, "m_fStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+14, 0x354, "", 0, "m_fDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+15, 0x358, "", 0, "m_fRangeDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+16, 0x35C, "", 0, "m_fDamageHotSpotRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+17, 0x360, "", 0, "m_fDamageFallOffRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+18, 0x364, "", 0, "m_fSoundRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x161<<8)+19, 0x368, "", 0, "m_bExplode", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+24, 0x36C, "", 0, "m_aRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x161<<8)+25, 0x370, "", 0, "m_tmExpandBox", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x161<<8)+30, 0x374, "", 0, "m_soEffect", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x161<<8)+50, 0x3F0, "", 0, "bLockedOn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x161<<8)+255, 0x3F4, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CLarvaOffspring_propertiesct ARRAYCOUNT(CLarvaOffspring_properties)

CEntityComponent CLarvaOffspring_components[] = {
#define CLASS_BASIC_EFFECT ((0x00000161<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_LARVA_TAIL ((0x00000161<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_LARVA_TAIL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\TailProjectile.mdl"),
#define TEXTURE_LARVA_TAIL ((0x00000161<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LARVA_TAIL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\TailProjectile.tex"),
#define SOUND_LARVETTE ((0x00000161<<8)+12)
 CEntityComponent(ECT_SOUND, SOUND_LARVETTE, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\Squeak.wav"),
};
#define CLarvaOffspring_componentsct ARRAYCOUNT(CLarvaOffspring_components)

CEventHandlerEntry CLarvaOffspring_handlers[] = {
 {0x01610001, -1, CEntity::pEventHandler(&CLarvaOffspring::LarvaOffspringGuidedSlide),DEBUGSTRING("CLarvaOffspring::LarvaOffspringGuidedSlide")},
 {0x01610002, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610002_LarvaOffspringGuidedSlide_01), DEBUGSTRING("CLarvaOffspring::H0x01610002_LarvaOffspringGuidedSlide_01")},
 {0x01610003, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610003_LarvaOffspringGuidedSlide_02), DEBUGSTRING("CLarvaOffspring::H0x01610003_LarvaOffspringGuidedSlide_02")},
 {0x01610004, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610004_LarvaOffspringGuidedSlide_03), DEBUGSTRING("CLarvaOffspring::H0x01610004_LarvaOffspringGuidedSlide_03")},
 {0x01610005, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610005_LarvaOffspringGuidedSlide_04), DEBUGSTRING("CLarvaOffspring::H0x01610005_LarvaOffspringGuidedSlide_04")},
 {1, -1, CEntity::pEventHandler(&CLarvaOffspring::Main),DEBUGSTRING("CLarvaOffspring::Main")},
 {0x01610006, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610006_Main_01), DEBUGSTRING("CLarvaOffspring::H0x01610006_Main_01")},
 {0x01610007, -1, CEntity::pEventHandler(&CLarvaOffspring::H0x01610007_Main_02), DEBUGSTRING("CLarvaOffspring::H0x01610007_Main_02")},
};
#define CLarvaOffspring_handlersct ARRAYCOUNT(CLarvaOffspring_handlers)

CEntity *CLarvaOffspring_New(void) { return new CLarvaOffspring; };
void CLarvaOffspring_OnInitClass(void) {};
void CLarvaOffspring_OnEndClass(void) {};
void CLarvaOffspring_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CLarvaOffspring_OnWorldEnd(CWorld *pwo) {};
void CLarvaOffspring_OnWorldInit(CWorld *pwo) {};
void CLarvaOffspring_OnWorldTick(CWorld *pwo) {};
void CLarvaOffspring_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CLarvaOffspring, CMovableModelEntity, "LarvaOffspring", "", 353);
DECLARE_CTFILENAME(_fnmCLarvaOffspring_tbn, "");
