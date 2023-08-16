// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(MamutChar)
  EP_ENUMVALUE(MAT_SUMMER, "Summer"),
  EP_ENUMVALUE(MAT_WINTER, "Winter"),
EP_ENUMEND(MamutChar);

#define ENTITYCLASS CMamut

CEntityProperty CMamut_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &MamutChar_enum, (0x147<<8)+1, 0x5C0, "Character", 'C', "m_EmcChar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x147<<8)+2, 0x5C4, "Rider Front", 'H', "m_bFrontRider", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x147<<8)+3, 0x5C8, "Rider Middle", 'J', "m_bMiddleRider", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x147<<8)+4, 0x5CC, "Rider Rear", 'K', "m_bRearRider", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x147<<8)+5, 0x5D0, "", 0, "m_penBullet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x147<<8)+6, 0x5D4, "", 0, "m_fLastShootTime", 0x0UL, 0),
};
#define CMamut_propertiesct ARRAYCOUNT(CMamut_properties)

CEntityComponent CMamut_components[] = {
#define CLASS_BASE ((0x00000147<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BULLET ((0x00000147<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BULLET, "EFNM" "Classes\\Bullet.ecl"),
#define CLASS_MAMUTMAN ((0x00000147<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_MAMUTMAN, "EFNM" "Classes\\Mamutman.ecl"),
#define CLASS_AIRWAVE ((0x00000147<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_AIRWAVE, "EFNM" "Classes\\AirWave.ecl"),
#define MODEL_MAMUT ((0x00000147<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_MAMUT, "EFNM" "Models\\Enemies\\Mamut\\Mamut.mdl"),
#define TEXTURE_MAMUT_SUMMER ((0x00000147<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MAMUT_SUMMER, "EFNM" "Models\\Enemies\\Mamut\\Mamut.tex"),
#define TEXTURE_MAMUT_WINTER ((0x00000147<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MAMUT_WINTER, "EFNM" "Models\\Enemies\\Mamut\\Mamut3.tex"),
#define MODEL_MAMUTMAN ((0x00000147<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_MAMUTMAN, "EFNM" "Models\\Enemies\\Mamutman\\Mamutman.mdl"),
#define TEXTURE_MAMUTMAN ((0x00000147<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MAMUTMAN, "EFNM" "Models\\Enemies\\Mamutman\\Mamutman.tex"),
#define SOUND_IDLE ((0x00000147<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000147<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000147<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000147<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000147<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000147<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Mamut\\Sounds\\Death.wav"),
};
#define CMamut_componentsct ARRAYCOUNT(CMamut_components)

CEventHandlerEntry CMamut_handlers[] = {
 {0x01470000, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CMamut::BeWounded),DEBUGSTRING("CMamut::BeWounded")},
 {0x01470001, -1, CEntity::pEventHandler(&CMamut::H0x01470001_BeWounded_01), DEBUGSTRING("CMamut::H0x01470001_BeWounded_01")},
 {0x01470002, -1, CEntity::pEventHandler(&CMamut::H0x01470002_BeWounded_02), DEBUGSTRING("CMamut::H0x01470002_BeWounded_02")},
 {0x01470003, -1, CEntity::pEventHandler(&CMamut::H0x01470003_BeWounded_03), DEBUGSTRING("CMamut::H0x01470003_BeWounded_03")},
 {0x01470004, -1, CEntity::pEventHandler(&CMamut::H0x01470004_BeWounded_04), DEBUGSTRING("CMamut::H0x01470004_BeWounded_04")},
 {0x01470005, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CMamut::Fire),DEBUGSTRING("CMamut::Fire")},
 {0x01470006, -1, CEntity::pEventHandler(&CMamut::H0x01470006_Fire_01), DEBUGSTRING("CMamut::H0x01470006_Fire_01")},
 {0x01470007, -1, CEntity::pEventHandler(&CMamut::H0x01470007_Fire_02), DEBUGSTRING("CMamut::H0x01470007_Fire_02")},
 {0x01470008, -1, CEntity::pEventHandler(&CMamut::H0x01470008_Fire_03), DEBUGSTRING("CMamut::H0x01470008_Fire_03")},
 {0x01470009, -1, CEntity::pEventHandler(&CMamut::H0x01470009_Fire_04), DEBUGSTRING("CMamut::H0x01470009_Fire_04")},
 {0x0147000a, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CMamut::Hit),DEBUGSTRING("CMamut::Hit")},
 {0x0147000b, -1, CEntity::pEventHandler(&CMamut::H0x0147000b_Hit_01), DEBUGSTRING("CMamut::H0x0147000b_Hit_01")},
 {0x0147000c, -1, CEntity::pEventHandler(&CMamut::H0x0147000c_Hit_02), DEBUGSTRING("CMamut::H0x0147000c_Hit_02")},
 {0x0147000d, -1, CEntity::pEventHandler(&CMamut::H0x0147000d_Hit_03), DEBUGSTRING("CMamut::H0x0147000d_Hit_03")},
 {0x0147000e, -1, CEntity::pEventHandler(&CMamut::H0x0147000e_Hit_04), DEBUGSTRING("CMamut::H0x0147000e_Hit_04")},
 {0x0147000f, -1, CEntity::pEventHandler(&CMamut::H0x0147000f_Hit_05), DEBUGSTRING("CMamut::H0x0147000f_Hit_05")},
 {0x01470010, -1, CEntity::pEventHandler(&CMamut::H0x01470010_Hit_06), DEBUGSTRING("CMamut::H0x01470010_Hit_06")},
 {0x01470011, -1, CEntity::pEventHandler(&CMamut::RiderFire),DEBUGSTRING("CMamut::RiderFire")},
 {0x01470012, -1, CEntity::pEventHandler(&CMamut::H0x01470012_RiderFire_01), DEBUGSTRING("CMamut::H0x01470012_RiderFire_01")},
 {0x01470013, -1, CEntity::pEventHandler(&CMamut::H0x01470013_RiderFire_02), DEBUGSTRING("CMamut::H0x01470013_RiderFire_02")},
 {0x01470014, -1, CEntity::pEventHandler(&CMamut::H0x01470014_RiderFire_03), DEBUGSTRING("CMamut::H0x01470014_RiderFire_03")},
 {1, -1, CEntity::pEventHandler(&CMamut::Main),DEBUGSTRING("CMamut::Main")},
};
#define CMamut_handlersct ARRAYCOUNT(CMamut_handlers)

CEntity *CMamut_New(void) { return new CMamut; };
void CMamut_OnInitClass(void) {};
void CMamut_OnEndClass(void) {};
void CMamut_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMamut_OnWorldEnd(CWorld *pwo) {};
void CMamut_OnWorldInit(CWorld *pwo) {};
void CMamut_OnWorldTick(CWorld *pwo) {};
void CMamut_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMamut, CEnemyBase, "Mamut", "Thumbnails\\Mamut.tbn", 327);
DECLARE_CTFILENAME(_fnmCMamut_tbn, "Thumbnails\\Mamut.tbn");
