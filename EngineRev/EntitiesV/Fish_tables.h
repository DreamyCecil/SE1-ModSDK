// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CFish

CEntityProperty CFish_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x151<<8)+0, 0x600, "", 0, "m_bAttackingByElectricity", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x151<<8)+1, 0x604, "", 0, "m_tmElectricityTimeStart", 0x0UL, 0),
};
#define CFish_propertiesct ARRAYCOUNT(CFish_properties)

CEntityComponent CFish_components[] = {
#define CLASS_BASE ((0x00000151<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyDive.ecl"),
#define MODEL_FISH ((0x00000151<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_FISH, "EFNM" "Models\\Enemies\\Fish\\Fish.mdl"),
#define TEXTURE_FISH ((0x00000151<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FISH, "EFNM" "Models\\Enemies\\Fish\\Fish1.tex"),
#define MODEL_GLOW ((0x00000151<<8)+3)
 CEntityComponent(ECT_MODEL, MODEL_GLOW, "EFNM" "Models\\Enemies\\Fish\\Glow.mdl"),
#define TEXTURE_GLOW ((0x00000151<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GLOW, "EFNM" "Models\\Enemies\\Fish\\Glow.tex"),
#define TEXTURE_SPECULAR ((0x00000151<<8)+5)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPECULAR, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define SOUND_IDLE ((0x00000151<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Fish\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000151<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Fish\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000151<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Fish\\Sounds\\Wound.wav"),
#define SOUND_DEATH ((0x00000151<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Fish\\Sounds\\Death.wav"),
#define SOUND_ATTACK ((0x00000151<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_ATTACK, "EFNM" "Models\\Enemies\\Fish\\Sounds\\Attack.wav"),
#define SOUND_WOUNDAIR ((0x00000151<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_WOUNDAIR, "EFNM" "Models\\Enemies\\Fish\\Sounds\\WoundAir.wav"),
#define SOUND_DEATHAIR ((0x00000151<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DEATHAIR, "EFNM" "Models\\Enemies\\Fish\\Sounds\\DeathAir.wav"),
};
#define CFish_componentsct ARRAYCOUNT(CFish_components)

CEventHandlerEntry CFish_handlers[] = {
 {0x01510000, STATE_CEnemyDive_DiveHit, CEntity::pEventHandler(&CFish::DiveHit),DEBUGSTRING("CFish::DiveHit")},
 {0x01510001, -1, CEntity::pEventHandler(&CFish::H0x01510001_DiveHit_01), DEBUGSTRING("CFish::H0x01510001_DiveHit_01")},
 {0x01510002, -1, CEntity::pEventHandler(&CFish::H0x01510002_DiveHit_02), DEBUGSTRING("CFish::H0x01510002_DiveHit_02")},
 {0x01510003, -1, CEntity::pEventHandler(&CFish::H0x01510003_DiveHit_03), DEBUGSTRING("CFish::H0x01510003_DiveHit_03")},
 {0x01510004, -1, CEntity::pEventHandler(&CFish::H0x01510004_DiveHit_04), DEBUGSTRING("CFish::H0x01510004_DiveHit_04")},
 {0x01510005, -1, CEntity::pEventHandler(&CFish::H0x01510005_DiveHit_05), DEBUGSTRING("CFish::H0x01510005_DiveHit_05")},
 {0x01510006, -1, CEntity::pEventHandler(&CFish::H0x01510006_DiveHit_06), DEBUGSTRING("CFish::H0x01510006_DiveHit_06")},
 {0x01510007, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CFish::Hit),DEBUGSTRING("CFish::Hit")},
 {1, -1, CEntity::pEventHandler(&CFish::Main),DEBUGSTRING("CFish::Main")},
};
#define CFish_handlersct ARRAYCOUNT(CFish_handlers)

CEntity *CFish_New(void) { return new CFish; };
void CFish_OnInitClass(void) {};
void CFish_OnEndClass(void) {};
void CFish_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CFish_OnWorldEnd(CWorld *pwo) {};
void CFish_OnWorldInit(CWorld *pwo) {};
void CFish_OnWorldTick(CWorld *pwo) {};
void CFish_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFish, CEnemyDive, "Fish", "Thumbnails\\Fish.tbn", 337);
DECLARE_CTFILENAME(_fnmCFish_tbn, "Thumbnails\\Fish.tbn");
