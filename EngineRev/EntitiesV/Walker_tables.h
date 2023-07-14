// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(WalkerChar)
  EP_ENUMVALUE(WLC_SOLDIER, "Soldier"),
  EP_ENUMVALUE(WLC_SERGEANT, "Sergeant"),
EP_ENUMEND(WalkerChar);

#define ENTITYCLASS CWalker

CEntityProperty CWalker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &WalkerChar_enum, (0x00000144<<8)+1, offsetof(CWalker, m_EwcChar), "Character", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000144<<8)+2, offsetof(CWalker, m_iLoopCounter), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000144<<8)+3, offsetof(CWalker, m_fSize), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000144<<8)+4, offsetof(CWalker, m_bWalkSoundPlaying), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000144<<8)+5, offsetof(CWalker, m_fThreatDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000144<<8)+10, offsetof(CWalker, m_soFeet), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000144<<8)+11, offsetof(CWalker, m_soFire1), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000144<<8)+12, offsetof(CWalker, m_soFire2), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000144<<8)+13, offsetof(CWalker, m_soFire3), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000144<<8)+14, offsetof(CWalker, m_soFire4), "", 0, 0, 0),
};
#define CWalker_propertiesct ARRAYCOUNT(CWalker_properties)

CEntityComponent CWalker_components[] = {
#define CLASS_BASE ((0x00000144<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_PROJECTILE ((0x00000144<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000144<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_WALKER ((0x00000144<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_WALKER, "EFNM" "Models\\Enemies\\Walker\\Walker.mdl"),
#define TEXTURE_WALKER_SOLDIER ((0x00000144<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WALKER_SOLDIER, "EFNM" "Models\\Enemies\\Walker\\Walker02.tex"),
#define TEXTURE_WALKER_SERGEANT ((0x00000144<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WALKER_SERGEANT, "EFNM" "Models\\Enemies\\Walker\\Walker01.tex"),
#define MODEL_LASER ((0x00000144<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Enemies\\Walker\\Laser.mdl"),
#define TEXTURE_LASER ((0x00000144<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LASER, "EFNM" "Models\\Enemies\\Walker\\Laser.tex"),
#define MODEL_ROCKETLAUNCHER ((0x00000144<<8)+16)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Walker\\RocketLauncher.mdl"),
#define TEXTURE_ROCKETLAUNCHER ((0x00000144<<8)+17)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Walker\\RocketLauncher.tex"),
#define SOUND_SOLDIER_IDLE ((0x00000144<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_IDLE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Idle.wav"),
#define SOUND_SOLDIER_SIGHT ((0x00000144<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_SIGHT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Sight.wav"),
#define SOUND_SOLDIER_FIRE_LASER ((0x00000144<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_FIRE_LASER, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Fire.wav"),
#define SOUND_SOLDIER_DEATH ((0x00000144<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_DEATH, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Death.wav"),
#define SOUND_SOLDIER_WALK ((0x00000144<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_WALK, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Walk.wav"),
#define SOUND_SERGEANT_IDLE ((0x00000144<<8)+60)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_IDLE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Idle.wav"),
#define SOUND_SERGEANT_SIGHT ((0x00000144<<8)+61)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_SIGHT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Sight.wav"),
#define SOUND_SERGEANT_FIRE_ROCKET ((0x00000144<<8)+63)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_FIRE_ROCKET, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Fire.wav"),
#define SOUND_SERGEANT_DEATH ((0x00000144<<8)+64)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_DEATH, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Death.wav"),
#define SOUND_SERGEANT_WALK ((0x00000144<<8)+65)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_WALK, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Walk.wav"),
};
#define CWalker_componentsct ARRAYCOUNT(CWalker_components)

CEventHandlerEntry CWalker_handlers[] = {
 {0x01440000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CWalker::Fire),DEBUGSTRING("CWalker::Fire")},
 {0x01440001, -1, CEntity::pEventHandler(&CWalker::H0x01440001_Fire_01), DEBUGSTRING("CWalker::H0x01440001_Fire_01")},
 {0x01440002, -1, CEntity::pEventHandler(&CWalker::H0x01440002_Fire_02), DEBUGSTRING("CWalker::H0x01440002_Fire_02")},
 {0x01440003, -1, CEntity::pEventHandler(&CWalker::H0x01440003_Fire_03), DEBUGSTRING("CWalker::H0x01440003_Fire_03")},
 {0x01440004, -1, CEntity::pEventHandler(&CWalker::H0x01440004_Fire_04), DEBUGSTRING("CWalker::H0x01440004_Fire_04")},
 {0x01440005, -1, CEntity::pEventHandler(&CWalker::H0x01440005_Fire_05), DEBUGSTRING("CWalker::H0x01440005_Fire_05")},
 {0x01440006, -1, CEntity::pEventHandler(&CWalker::H0x01440006_Fire_06), DEBUGSTRING("CWalker::H0x01440006_Fire_06")},
 {0x01440007, -1, CEntity::pEventHandler(&CWalker::H0x01440007_Fire_07), DEBUGSTRING("CWalker::H0x01440007_Fire_07")},
 {0x01440008, -1, CEntity::pEventHandler(&CWalker::H0x01440008_Fire_08), DEBUGSTRING("CWalker::H0x01440008_Fire_08")},
 {0x01440009, -1, CEntity::pEventHandler(&CWalker::H0x01440009_Fire_09), DEBUGSTRING("CWalker::H0x01440009_Fire_09")},
 {0x0144000a, -1, CEntity::pEventHandler(&CWalker::H0x0144000a_Fire_10), DEBUGSTRING("CWalker::H0x0144000a_Fire_10")},
 {0x0144000b, -1, CEntity::pEventHandler(&CWalker::H0x0144000b_Fire_11), DEBUGSTRING("CWalker::H0x0144000b_Fire_11")},
 {0x0144000c, -1, CEntity::pEventHandler(&CWalker::H0x0144000c_Fire_12), DEBUGSTRING("CWalker::H0x0144000c_Fire_12")},
 {0x0144000d, -1, CEntity::pEventHandler(&CWalker::H0x0144000d_Fire_13), DEBUGSTRING("CWalker::H0x0144000d_Fire_13")},
 {0x0144000e, -1, CEntity::pEventHandler(&CWalker::H0x0144000e_Fire_14), DEBUGSTRING("CWalker::H0x0144000e_Fire_14")},
 {0x0144000f, -1, CEntity::pEventHandler(&CWalker::H0x0144000f_Fire_15), DEBUGSTRING("CWalker::H0x0144000f_Fire_15")},
 {0x01440010, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CWalker::Death),DEBUGSTRING("CWalker::Death")},
 {0x01440011, -1, CEntity::pEventHandler(&CWalker::H0x01440011_Death_01), DEBUGSTRING("CWalker::H0x01440011_Death_01")},
 {0x01440012, -1, CEntity::pEventHandler(&CWalker::H0x01440012_Death_02), DEBUGSTRING("CWalker::H0x01440012_Death_02")},
 {0x01440013, -1, CEntity::pEventHandler(&CWalker::H0x01440013_Death_03), DEBUGSTRING("CWalker::H0x01440013_Death_03")},
 {0x01440014, -1, CEntity::pEventHandler(&CWalker::H0x01440014_Death_04), DEBUGSTRING("CWalker::H0x01440014_Death_04")},
 {0x01440015, -1, CEntity::pEventHandler(&CWalker::H0x01440015_Death_05), DEBUGSTRING("CWalker::H0x01440015_Death_05")},
 {0x01440016, -1, CEntity::pEventHandler(&CWalker::H0x01440016_Death_06), DEBUGSTRING("CWalker::H0x01440016_Death_06")},
 {1, -1, CEntity::pEventHandler(&CWalker::Main),DEBUGSTRING("CWalker::Main")},
};
#define CWalker_handlersct ARRAYCOUNT(CWalker_handlers)

CEntity *CWalker_New(void) { return new CWalker; };
void CWalker_OnInitClass(void) {};
void CWalker_OnEndClass(void) {};
void CWalker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWalker_OnWorldEnd(CWorld *pwo) {};
void CWalker_OnWorldInit(CWorld *pwo) {};
void CWalker_OnWorldTick(CWorld *pwo) {};
void CWalker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWalker, CEnemyBase, "Walker", "Thumbnails\\Walker.tbn", 0x00000144);
DECLARE_CTFILENAME(_fnmCWalker_tbn, "Thumbnails\\Walker.tbn");
