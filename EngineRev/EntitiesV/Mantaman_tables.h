// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMantaman

CEntityProperty CMantaman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x149<<8)+1, 0x600, "Fixed state", 'X', "m_FixedState", 0x7F0000FFUL, 0),
};
#define CMantaman_propertiesct ARRAYCOUNT(CMantaman_properties)

CEntityComponent CMantaman_components[] = {
#define CLASS_BASE ((0x00000149<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyDive.ecl"),
#define MODEL_MANTAMAN ((0x00000149<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MANTAMAN, "EFNM" "Models\\Enemies\\Mantaman\\Mantaman.mdl"),
#define TEXTURE_MANTAMAN ((0x00000149<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MANTAMAN, "EFNM" "Models\\Enemies\\Mantaman\\Mantaman.tex"),
#define SOUND_IDLE ((0x00000149<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000149<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000149<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000149<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000149<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000149<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Mantaman\\Sounds\\Death.wav"),
};
#define CMantaman_componentsct ARRAYCOUNT(CMantaman_components)

CEventHandlerEntry CMantaman_handlers[] = {
 {0x01490000, STATE_CEnemyBase_AttackEnemy, CEntity::pEventHandler(&CMantaman::AttackEnemy),DEBUGSTRING("CMantaman::AttackEnemy")},
 {0x01490001, -1, CEntity::pEventHandler(&CMantaman::H0x01490001_AttackEnemy_01), DEBUGSTRING("CMantaman::H0x01490001_AttackEnemy_01")},
 {0x01490002, -1, CEntity::pEventHandler(&CMantaman::H0x01490002_AttackEnemy_02), DEBUGSTRING("CMantaman::H0x01490002_AttackEnemy_02")},
 {0x01490003, -1, CEntity::pEventHandler(&CMantaman::H0x01490003_AttackEnemy_03), DEBUGSTRING("CMantaman::H0x01490003_AttackEnemy_03")},
 {0x01490004, STATE_CEnemyDive_DiveFire, CEntity::pEventHandler(&CMantaman::DiveFire),DEBUGSTRING("CMantaman::DiveFire")},
 {0x01490005, -1, CEntity::pEventHandler(&CMantaman::H0x01490005_DiveFire_01), DEBUGSTRING("CMantaman::H0x01490005_DiveFire_01")},
 {0x01490006, -1, CEntity::pEventHandler(&CMantaman::H0x01490006_DiveFire_02), DEBUGSTRING("CMantaman::H0x01490006_DiveFire_02")},
 {0x01490007, -1, CEntity::pEventHandler(&CMantaman::H0x01490007_DiveFire_03), DEBUGSTRING("CMantaman::H0x01490007_DiveFire_03")},
 {0x01490008, -1, CEntity::pEventHandler(&CMantaman::H0x01490008_DiveFire_04), DEBUGSTRING("CMantaman::H0x01490008_DiveFire_04")},
 {0x01490009, -1, CEntity::pEventHandler(&CMantaman::H0x01490009_DiveFire_05), DEBUGSTRING("CMantaman::H0x01490009_DiveFire_05")},
 {0x0149000a, -1, CEntity::pEventHandler(&CMantaman::H0x0149000a_DiveFire_06), DEBUGSTRING("CMantaman::H0x0149000a_DiveFire_06")},
 {1, -1, CEntity::pEventHandler(&CMantaman::Main),DEBUGSTRING("CMantaman::Main")},
};
#define CMantaman_handlersct ARRAYCOUNT(CMantaman_handlers)

CEntity *CMantaman_New(void) { return new CMantaman; };
void CMantaman_OnInitClass(void) {};
void CMantaman_OnEndClass(void) {};
void CMantaman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMantaman_OnWorldEnd(CWorld *pwo) {};
void CMantaman_OnWorldInit(CWorld *pwo) {};
void CMantaman_OnWorldTick(CWorld *pwo) {};
void CMantaman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMantaman, CEnemyDive, "Mantaman", "Thumbnails\\Mantaman.tbn", 329);
DECLARE_CTFILENAME(_fnmCMantaman_tbn, "Thumbnails\\Mantaman.tbn");
