// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMamutman

CEntityProperty CMamutman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x146<<8)+1, 0x5C0, "", 0, "m_penBullet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x146<<8)+2, 0x5C4, "", 0, "m_bSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x146<<8)+3, 0x5C8, "", 0, "m_bSpawnedPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x146<<8)+4, 0x5CC, "", 0, "m_bCountAsKill", 0x0UL, 0),
};
#define CMamutman_propertiesct ARRAYCOUNT(CMamutman_properties)

CEntityComponent CMamutman_components[] = {
#define CLASS_BASE ((0x00000146<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BULLET ((0x00000146<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BULLET, "EFNM" "Classes\\Bullet.ecl"),
#define MODEL_MAMUTMAN ((0x00000146<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_MAMUTMAN, "EFNM" "Models\\Enemies\\Mamutman\\Mamutman.mdl"),
#define TEXTURE_MAMUTMAN ((0x00000146<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MAMUTMAN, "EFNM" "Models\\Enemies\\Mamutman\\Mamutman.tex"),
#define SOUND_IDLE ((0x00000146<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Mamutman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000146<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Mamutman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000146<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Mamutman\\Sounds\\Wound.wav"),
#define SOUND_DEATH ((0x00000146<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Mamutman\\Sounds\\Death.wav"),
#define SOUND_FIRE ((0x00000146<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Weapons\\Colt\\Sounds\\Fire.wav"),
};
#define CMamutman_componentsct ARRAYCOUNT(CMamutman_components)

CEventHandlerEntry CMamutman_handlers[] = {
 {0x01460000, -1, CEntity::pEventHandler(&CMamutman::FallOnFloor),DEBUGSTRING("CMamutman::FallOnFloor")},
 {0x01460001, -1, CEntity::pEventHandler(&CMamutman::H0x01460001_FallOnFloor_01), DEBUGSTRING("CMamutman::H0x01460001_FallOnFloor_01")},
 {0x01460002, -1, CEntity::pEventHandler(&CMamutman::H0x01460002_FallOnFloor_02), DEBUGSTRING("CMamutman::H0x01460002_FallOnFloor_02")},
 {0x01460003, -1, CEntity::pEventHandler(&CMamutman::H0x01460003_FallOnFloor_03), DEBUGSTRING("CMamutman::H0x01460003_FallOnFloor_03")},
 {0x01460004, -1, CEntity::pEventHandler(&CMamutman::H0x01460004_FallOnFloor_04), DEBUGSTRING("CMamutman::H0x01460004_FallOnFloor_04")},
 {0x01460005, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CMamutman::BeWounded),DEBUGSTRING("CMamutman::BeWounded")},
 {0x01460006, -1, CEntity::pEventHandler(&CMamutman::H0x01460006_BeWounded_01), DEBUGSTRING("CMamutman::H0x01460006_BeWounded_01")},
 {0x01460007, -1, CEntity::pEventHandler(&CMamutman::H0x01460007_BeWounded_02), DEBUGSTRING("CMamutman::H0x01460007_BeWounded_02")},
 {0x01460008, -1, CEntity::pEventHandler(&CMamutman::H0x01460008_BeWounded_03), DEBUGSTRING("CMamutman::H0x01460008_BeWounded_03")},
 {0x01460009, -1, CEntity::pEventHandler(&CMamutman::H0x01460009_BeWounded_04), DEBUGSTRING("CMamutman::H0x01460009_BeWounded_04")},
 {0x0146000a, -1, CEntity::pEventHandler(&CMamutman::H0x0146000a_BeWounded_05), DEBUGSTRING("CMamutman::H0x0146000a_BeWounded_05")},
 {0x0146000b, -1, CEntity::pEventHandler(&CMamutman::H0x0146000b_BeWounded_06), DEBUGSTRING("CMamutman::H0x0146000b_BeWounded_06")},
 {0x0146000c, -1, CEntity::pEventHandler(&CMamutman::H0x0146000c_BeWounded_07), DEBUGSTRING("CMamutman::H0x0146000c_BeWounded_07")},
 {0x0146000d, -1, CEntity::pEventHandler(&CMamutman::H0x0146000d_BeWounded_08), DEBUGSTRING("CMamutman::H0x0146000d_BeWounded_08")},
 {0x0146000e, -1, CEntity::pEventHandler(&CMamutman::H0x0146000e_BeWounded_09), DEBUGSTRING("CMamutman::H0x0146000e_BeWounded_09")},
 {0x0146000f, -1, CEntity::pEventHandler(&CMamutman::H0x0146000f_BeWounded_10), DEBUGSTRING("CMamutman::H0x0146000f_BeWounded_10")},
 {0x01460010, -1, CEntity::pEventHandler(&CMamutman::H0x01460010_BeWounded_11), DEBUGSTRING("CMamutman::H0x01460010_BeWounded_11")},
 {0x01460011, -1, CEntity::pEventHandler(&CMamutman::H0x01460011_BeWounded_12), DEBUGSTRING("CMamutman::H0x01460011_BeWounded_12")},
 {0x01460012, -1, CEntity::pEventHandler(&CMamutman::H0x01460012_BeWounded_13), DEBUGSTRING("CMamutman::H0x01460012_BeWounded_13")},
 {0x01460013, -1, CEntity::pEventHandler(&CMamutman::H0x01460013_BeWounded_14), DEBUGSTRING("CMamutman::H0x01460013_BeWounded_14")},
 {0x01460014, -1, CEntity::pEventHandler(&CMamutman::H0x01460014_BeWounded_15), DEBUGSTRING("CMamutman::H0x01460014_BeWounded_15")},
 {0x01460015, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CMamutman::Fire),DEBUGSTRING("CMamutman::Fire")},
 {0x01460016, -1, CEntity::pEventHandler(&CMamutman::H0x01460016_Fire_01), DEBUGSTRING("CMamutman::H0x01460016_Fire_01")},
 {0x01460017, -1, CEntity::pEventHandler(&CMamutman::H0x01460017_Fire_02), DEBUGSTRING("CMamutman::H0x01460017_Fire_02")},
 {0x01460018, -1, CEntity::pEventHandler(&CMamutman::H0x01460018_Fire_03), DEBUGSTRING("CMamutman::H0x01460018_Fire_03")},
 {0x01460019, -1, CEntity::pEventHandler(&CMamutman::H0x01460019_Fire_04), DEBUGSTRING("CMamutman::H0x01460019_Fire_04")},
 {1, -1, CEntity::pEventHandler(&CMamutman::Main),DEBUGSTRING("CMamutman::Main")},
};
#define CMamutman_handlersct ARRAYCOUNT(CMamutman_handlers)

CEntity *CMamutman_New(void) { return new CMamutman; };
void CMamutman_OnInitClass(void) {};
void CMamutman_OnEndClass(void) {};
void CMamutman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMamutman_OnWorldEnd(CWorld *pwo) {};
void CMamutman_OnWorldInit(CWorld *pwo) {};
void CMamutman_OnWorldTick(CWorld *pwo) {};
void CMamutman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMamutman, CEnemyBase, "Mamutman", "Thumbnails\\Mamutman.tbn", 326);
DECLARE_CTFILENAME(_fnmCMamutman_tbn, "Thumbnails\\Mamutman.tbn");
