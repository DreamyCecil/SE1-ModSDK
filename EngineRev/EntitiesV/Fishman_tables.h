// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CFishman

CEntityProperty CFishman_properties[] = {
  CEntityProperty()
};
#define CFishman_propertiesct 0


CEntityComponent CFishman_components[] = {
#define CLASS_BASE ((0x00000148<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyDive.ecl"),
#define MODEL_FISHMAN ((0x00000148<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_FISHMAN, "EFNM" "Models\\Enemies\\Fishman\\Fishman.mdl"),
#define TEXTURE_FISHMAN ((0x00000148<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FISHMAN, "EFNM" "Models\\Enemies\\Fishman\\Fishman.tex"),
#define SOUND_IDLE_WATER ((0x00000148<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE_WATER, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\IdleWater.wav"),
#define SOUND_IDLE_GROUND ((0x00000148<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_IDLE_GROUND, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\IdleGround.wav"),
#define SOUND_SIGHT_WATER ((0x00000148<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT_WATER, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\SightWater.wav"),
#define SOUND_SIGHT_GROUND ((0x00000148<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT_GROUND, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\SightGround.wav"),
#define SOUND_WOUND_WATER ((0x00000148<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_WOUND_WATER, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\WoundWater.wav"),
#define SOUND_WOUND_GROUND ((0x00000148<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_WOUND_GROUND, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\WoundGround.wav"),
#define SOUND_DEATH_WATER ((0x00000148<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DEATH_WATER, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\DeathWater.wav"),
#define SOUND_DEATH_GROUND ((0x00000148<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_DEATH_GROUND, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\DeathGround.wav"),
#define SOUND_FIRE ((0x00000148<<8)+58)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000148<<8)+59)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Fishman\\Sounds\\Kick.wav"),
};
#define CFishman_componentsct ARRAYCOUNT(CFishman_components)

CEventHandlerEntry CFishman_handlers[] = {
 {0x01480000, STATE_CEnemyDive_DiveFire, CEntity::pEventHandler(&CFishman::DiveFire),DEBUGSTRING("CFishman::DiveFire")},
 {0x01480001, -1, CEntity::pEventHandler(&CFishman::H0x01480001_DiveFire_01), DEBUGSTRING("CFishman::H0x01480001_DiveFire_01")},
 {0x01480002, -1, CEntity::pEventHandler(&CFishman::H0x01480002_DiveFire_02), DEBUGSTRING("CFishman::H0x01480002_DiveFire_02")},
 {0x01480003, -1, CEntity::pEventHandler(&CFishman::H0x01480003_DiveFire_03), DEBUGSTRING("CFishman::H0x01480003_DiveFire_03")},
 {0x01480004, -1, CEntity::pEventHandler(&CFishman::H0x01480004_DiveFire_04), DEBUGSTRING("CFishman::H0x01480004_DiveFire_04")},
 {0x01480005, -1, CEntity::pEventHandler(&CFishman::H0x01480005_DiveFire_05), DEBUGSTRING("CFishman::H0x01480005_DiveFire_05")},
 {0x01480006, -1, CEntity::pEventHandler(&CFishman::H0x01480006_DiveFire_06), DEBUGSTRING("CFishman::H0x01480006_DiveFire_06")},
 {0x01480007, STATE_CEnemyDive_DiveHit, CEntity::pEventHandler(&CFishman::DiveHit),DEBUGSTRING("CFishman::DiveHit")},
 {0x01480008, -1, CEntity::pEventHandler(&CFishman::H0x01480008_DiveHit_01), DEBUGSTRING("CFishman::H0x01480008_DiveHit_01")},
 {0x01480009, -1, CEntity::pEventHandler(&CFishman::H0x01480009_DiveHit_02), DEBUGSTRING("CFishman::H0x01480009_DiveHit_02")},
 {0x0148000a, -1, CEntity::pEventHandler(&CFishman::H0x0148000a_DiveHit_03), DEBUGSTRING("CFishman::H0x0148000a_DiveHit_03")},
 {0x0148000b, -1, CEntity::pEventHandler(&CFishman::H0x0148000b_DiveHit_04), DEBUGSTRING("CFishman::H0x0148000b_DiveHit_04")},
 {0x0148000c, -1, CEntity::pEventHandler(&CFishman::H0x0148000c_DiveHit_05), DEBUGSTRING("CFishman::H0x0148000c_DiveHit_05")},
 {0x0148000d, -1, CEntity::pEventHandler(&CFishman::H0x0148000d_DiveHit_06), DEBUGSTRING("CFishman::H0x0148000d_DiveHit_06")},
 {0x0148000e, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CFishman::Fire),DEBUGSTRING("CFishman::Fire")},
 {0x0148000f, -1, CEntity::pEventHandler(&CFishman::H0x0148000f_Fire_01), DEBUGSTRING("CFishman::H0x0148000f_Fire_01")},
 {0x01480010, -1, CEntity::pEventHandler(&CFishman::H0x01480010_Fire_02), DEBUGSTRING("CFishman::H0x01480010_Fire_02")},
 {0x01480011, -1, CEntity::pEventHandler(&CFishman::H0x01480011_Fire_03), DEBUGSTRING("CFishman::H0x01480011_Fire_03")},
 {0x01480012, -1, CEntity::pEventHandler(&CFishman::H0x01480012_Fire_04), DEBUGSTRING("CFishman::H0x01480012_Fire_04")},
 {0x01480013, -1, CEntity::pEventHandler(&CFishman::H0x01480013_Fire_05), DEBUGSTRING("CFishman::H0x01480013_Fire_05")},
 {0x01480014, -1, CEntity::pEventHandler(&CFishman::H0x01480014_Fire_06), DEBUGSTRING("CFishman::H0x01480014_Fire_06")},
 {0x01480015, -1, CEntity::pEventHandler(&CFishman::H0x01480015_Fire_07), DEBUGSTRING("CFishman::H0x01480015_Fire_07")},
 {0x01480016, -1, CEntity::pEventHandler(&CFishman::H0x01480016_Fire_08), DEBUGSTRING("CFishman::H0x01480016_Fire_08")},
 {0x01480017, -1, CEntity::pEventHandler(&CFishman::H0x01480017_Fire_09), DEBUGSTRING("CFishman::H0x01480017_Fire_09")},
 {0x01480018, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CFishman::Hit),DEBUGSTRING("CFishman::Hit")},
 {0x01480019, -1, CEntity::pEventHandler(&CFishman::H0x01480019_Hit_01), DEBUGSTRING("CFishman::H0x01480019_Hit_01")},
 {0x0148001a, -1, CEntity::pEventHandler(&CFishman::H0x0148001a_Hit_02), DEBUGSTRING("CFishman::H0x0148001a_Hit_02")},
 {0x0148001b, -1, CEntity::pEventHandler(&CFishman::H0x0148001b_Hit_03), DEBUGSTRING("CFishman::H0x0148001b_Hit_03")},
 {0x0148001c, -1, CEntity::pEventHandler(&CFishman::H0x0148001c_Hit_04), DEBUGSTRING("CFishman::H0x0148001c_Hit_04")},
 {0x0148001d, -1, CEntity::pEventHandler(&CFishman::H0x0148001d_Hit_05), DEBUGSTRING("CFishman::H0x0148001d_Hit_05")},
 {0x0148001e, -1, CEntity::pEventHandler(&CFishman::H0x0148001e_Hit_06), DEBUGSTRING("CFishman::H0x0148001e_Hit_06")},
 {0x0148001f, -1, CEntity::pEventHandler(&CFishman::H0x0148001f_Hit_07), DEBUGSTRING("CFishman::H0x0148001f_Hit_07")},
 {0x01480020, -1, CEntity::pEventHandler(&CFishman::H0x01480020_Hit_08), DEBUGSTRING("CFishman::H0x01480020_Hit_08")},
 {0x01480021, -1, CEntity::pEventHandler(&CFishman::H0x01480021_Hit_09), DEBUGSTRING("CFishman::H0x01480021_Hit_09")},
 {0x01480022, -1, CEntity::pEventHandler(&CFishman::H0x01480022_Hit_10), DEBUGSTRING("CFishman::H0x01480022_Hit_10")},
 {0x01480023, -1, CEntity::pEventHandler(&CFishman::H0x01480023_Hit_11), DEBUGSTRING("CFishman::H0x01480023_Hit_11")},
 {1, -1, CEntity::pEventHandler(&CFishman::Main),DEBUGSTRING("CFishman::Main")},
};
#define CFishman_handlersct ARRAYCOUNT(CFishman_handlers)

CEntity *CFishman_New(void) { return new CFishman; };
void CFishman_OnInitClass(void) {};
void CFishman_OnEndClass(void) {};
void CFishman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CFishman_OnWorldEnd(CWorld *pwo) {};
void CFishman_OnWorldInit(CWorld *pwo) {};
void CFishman_OnWorldTick(CWorld *pwo) {};
void CFishman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFishman, CEnemyDive, "Fishman", "Thumbnails\\Fishman.tbn", 328);
DECLARE_CTFILENAME(_fnmCFishman_tbn, "Thumbnails\\Fishman.tbn");
