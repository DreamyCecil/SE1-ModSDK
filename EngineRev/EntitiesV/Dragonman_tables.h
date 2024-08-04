// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(DragonmanType)
  EP_ENUMVALUE(DT_SOLDIER, "Soldier"),
  EP_ENUMVALUE(DT_SERGEANT, "Sergeant"),
  EP_ENUMVALUE(DT_MONSTER, "Monster"),
EP_ENUMEND(DragonmanType);

#define ENTITYCLASS CDragonman

CEntityProperty CDragonman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &DragonmanType_enum, (0x141<<8)+1, 0x620, "Character", 'C', "m_EdtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x141<<8)+2, 0x624, "", 0, "m_vFlameSource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x141<<8)+3, 0x630, "", 0, "m_penFlame", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x141<<8)+4, 0x634, "", 0, "m_bBurnEnemy", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x141<<8)+5, 0x638, "", 0, "m_fFireTime", 0x0UL, 0),
};
#define CDragonman_propertiesct ARRAYCOUNT(CDragonman_properties)

CEntityComponent CDragonman_components[] = {
#define CLASS_BASE ((0x00000141<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyFly.ecl"),
#define CLASS_PROJECTILE ((0x00000141<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define MODEL_DRAGONMAN ((0x00000141<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_DRAGONMAN, "EFNM" "Models\\Enemies\\Dragonman\\Dragonman.mdl"),
#define TEXTURE_DRAGONMAN1 ((0x00000141<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DRAGONMAN1, "EFNM" "Models\\Enemies\\Dragonman\\Dragonman01.tex"),
#define TEXTURE_DRAGONMAN2 ((0x00000141<<8)+7)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DRAGONMAN2, "EFNM" "Models\\Enemies\\Dragonman\\Dragonman02.tex"),
#define TEXTURE_DRAGONMAN3 ((0x00000141<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DRAGONMAN3, "EFNM" "Models\\Enemies\\Dragonman\\Dragonman03.tex"),
#define SOUND_IDLE ((0x00000141<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000141<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000141<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000141<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000141<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000141<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Dragonman\\Sounds\\Death.wav"),
};
#define CDragonman_componentsct ARRAYCOUNT(CDragonman_components)

CEventHandlerEntry CDragonman_handlers[] = {
 {0x01410000, STATE_CEnemyFly_BeWounded, CEntity::pEventHandler(&CDragonman::BeWounded),DEBUGSTRING("CDragonman::BeWounded")},
 {0x01410001, STATE_CEnemyFly_FlyFire, CEntity::pEventHandler(&CDragonman::FlyFire),DEBUGSTRING("CDragonman::FlyFire")},
 {0x01410002, -1, CEntity::pEventHandler(&CDragonman::H0x01410002_FlyFire_01), DEBUGSTRING("CDragonman::H0x01410002_FlyFire_01")},
 {0x01410003, -1, CEntity::pEventHandler(&CDragonman::H0x01410003_FlyFire_02), DEBUGSTRING("CDragonman::H0x01410003_FlyFire_02")},
 {0x01410004, -1, CEntity::pEventHandler(&CDragonman::H0x01410004_FlyFire_03), DEBUGSTRING("CDragonman::H0x01410004_FlyFire_03")},
 {0x01410005, -1, CEntity::pEventHandler(&CDragonman::H0x01410005_FlyFire_04), DEBUGSTRING("CDragonman::H0x01410005_FlyFire_04")},
 {0x01410006, -1, CEntity::pEventHandler(&CDragonman::H0x01410006_FlyFire_05), DEBUGSTRING("CDragonman::H0x01410006_FlyFire_05")},
 {0x01410007, -1, CEntity::pEventHandler(&CDragonman::H0x01410007_FlyFire_06), DEBUGSTRING("CDragonman::H0x01410007_FlyFire_06")},
 {0x01410008, STATE_CEnemyFly_FlyHit, CEntity::pEventHandler(&CDragonman::FlyHit),DEBUGSTRING("CDragonman::FlyHit")},
 {0x01410009, -1, CEntity::pEventHandler(&CDragonman::FlyOnEnemy),DEBUGSTRING("CDragonman::FlyOnEnemy")},
 {0x0141000a, -1, CEntity::pEventHandler(&CDragonman::H0x0141000a_FlyOnEnemy_01), DEBUGSTRING("CDragonman::H0x0141000a_FlyOnEnemy_01")},
 {0x0141000b, -1, CEntity::pEventHandler(&CDragonman::H0x0141000b_FlyOnEnemy_02), DEBUGSTRING("CDragonman::H0x0141000b_FlyOnEnemy_02")},
 {0x0141000c, -1, CEntity::pEventHandler(&CDragonman::H0x0141000c_FlyOnEnemy_03), DEBUGSTRING("CDragonman::H0x0141000c_FlyOnEnemy_03")},
 {0x0141000d, -1, CEntity::pEventHandler(&CDragonman::H0x0141000d_FlyOnEnemy_04), DEBUGSTRING("CDragonman::H0x0141000d_FlyOnEnemy_04")},
 {0x0141000e, -1, CEntity::pEventHandler(&CDragonman::FlyBurn),DEBUGSTRING("CDragonman::FlyBurn")},
 {0x0141000f, -1, CEntity::pEventHandler(&CDragonman::H0x0141000f_FlyBurn_01), DEBUGSTRING("CDragonman::H0x0141000f_FlyBurn_01")},
 {0x01410010, -1, CEntity::pEventHandler(&CDragonman::H0x01410010_FlyBurn_02), DEBUGSTRING("CDragonman::H0x01410010_FlyBurn_02")},
 {0x01410011, -1, CEntity::pEventHandler(&CDragonman::H0x01410011_FlyBurn_03), DEBUGSTRING("CDragonman::H0x01410011_FlyBurn_03")},
 {0x01410012, -1, CEntity::pEventHandler(&CDragonman::H0x01410012_FlyBurn_04), DEBUGSTRING("CDragonman::H0x01410012_FlyBurn_04")},
 {0x01410013, -1, CEntity::pEventHandler(&CDragonman::H0x01410013_FlyBurn_05), DEBUGSTRING("CDragonman::H0x01410013_FlyBurn_05")},
 {0x01410014, -1, CEntity::pEventHandler(&CDragonman::H0x01410014_FlyBurn_06), DEBUGSTRING("CDragonman::H0x01410014_FlyBurn_06")},
 {0x01410015, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CDragonman::Fire),DEBUGSTRING("CDragonman::Fire")},
 {0x01410016, -1, CEntity::pEventHandler(&CDragonman::H0x01410016_Fire_01), DEBUGSTRING("CDragonman::H0x01410016_Fire_01")},
 {0x01410017, -1, CEntity::pEventHandler(&CDragonman::H0x01410017_Fire_02), DEBUGSTRING("CDragonman::H0x01410017_Fire_02")},
 {0x01410018, -1, CEntity::pEventHandler(&CDragonman::H0x01410018_Fire_03), DEBUGSTRING("CDragonman::H0x01410018_Fire_03")},
 {0x01410019, -1, CEntity::pEventHandler(&CDragonman::H0x01410019_Fire_04), DEBUGSTRING("CDragonman::H0x01410019_Fire_04")},
 {0x0141001a, -1, CEntity::pEventHandler(&CDragonman::H0x0141001a_Fire_05), DEBUGSTRING("CDragonman::H0x0141001a_Fire_05")},
 {0x0141001b, -1, CEntity::pEventHandler(&CDragonman::H0x0141001b_Fire_06), DEBUGSTRING("CDragonman::H0x0141001b_Fire_06")},
 {0x0141001c, -1, CEntity::pEventHandler(&CDragonman::H0x0141001c_Fire_07), DEBUGSTRING("CDragonman::H0x0141001c_Fire_07")},
 {0x0141001d, -1, CEntity::pEventHandler(&CDragonman::H0x0141001d_Fire_08), DEBUGSTRING("CDragonman::H0x0141001d_Fire_08")},
 {0x0141001e, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CDragonman::Hit),DEBUGSTRING("CDragonman::Hit")},
 {0x0141001f, -1, CEntity::pEventHandler(&CDragonman::BurnEnemy),DEBUGSTRING("CDragonman::BurnEnemy")},
 {0x01410020, -1, CEntity::pEventHandler(&CDragonman::H0x01410020_BurnEnemy_01), DEBUGSTRING("CDragonman::H0x01410020_BurnEnemy_01")},
 {0x01410021, -1, CEntity::pEventHandler(&CDragonman::H0x01410021_BurnEnemy_02), DEBUGSTRING("CDragonman::H0x01410021_BurnEnemy_02")},
 {0x01410022, -1, CEntity::pEventHandler(&CDragonman::H0x01410022_BurnEnemy_03), DEBUGSTRING("CDragonman::H0x01410022_BurnEnemy_03")},
 {0x01410023, -1, CEntity::pEventHandler(&CDragonman::H0x01410023_BurnEnemy_04), DEBUGSTRING("CDragonman::H0x01410023_BurnEnemy_04")},
 {0x01410024, -1, CEntity::pEventHandler(&CDragonman::H0x01410024_BurnEnemy_05), DEBUGSTRING("CDragonman::H0x01410024_BurnEnemy_05")},
 {0x01410025, -1, CEntity::pEventHandler(&CDragonman::H0x01410025_BurnEnemy_06), DEBUGSTRING("CDragonman::H0x01410025_BurnEnemy_06")},
 {1, -1, CEntity::pEventHandler(&CDragonman::Main),DEBUGSTRING("CDragonman::Main")},
};
#define CDragonman_handlersct ARRAYCOUNT(CDragonman_handlers)

CEntity *CDragonman_New(void) { return new CDragonman; };
void CDragonman_OnInitClass(void) {};
void CDragonman_OnEndClass(void) {};
void CDragonman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDragonman_OnWorldEnd(CWorld *pwo) {};
void CDragonman_OnWorldInit(CWorld *pwo) {};
void CDragonman_OnWorldTick(CWorld *pwo) {};
void CDragonman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDragonman, CEnemyFly, "Dragonman", "Thumbnails\\Dragonman.tbn", 321);
DECLARE_CTFILENAME(_fnmCDragonman_tbn, "Thumbnails\\Dragonman.tbn");