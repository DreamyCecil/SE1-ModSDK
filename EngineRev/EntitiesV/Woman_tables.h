// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWoman

CEntityProperty CWoman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x140<<8)+10, 0x620, "Kamikaze Carrier", 0, "m_bKamikazeCarrier", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x140<<8)+11, 0x624, "Kamikaze Drop Range", 0, "m_rKamikazeDropDistance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x140<<8)+20, 0x628, "", 0, "m_bKamikazeAttached", 0x0UL, 0),
};
#define CWoman_propertiesct ARRAYCOUNT(CWoman_properties)

CEntityComponent CWoman_components[] = {
#define CLASS_BASE ((0x00000140<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyFly.ecl"),
#define MODEL_WOMAN ((0x00000140<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WOMAN, "EFNM" "ModelsMP\\Enemies\\Woman\\Woman.mdl"),
#define TEXTURE_WOMAN ((0x00000140<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WOMAN, "EFNM" "Models\\Enemies\\Woman\\Woman.tex"),
#define CLASS_PROJECTILE ((0x00000140<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_HEADMAN ((0x00000140<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_HEADMAN, "EFNM" "Classes\\Headman.ecl"),
#define MODEL_HEADMAN ((0x00000140<<8)+7)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN, "EFNM" "Models\\Enemies\\Headman\\Headman.mdl"),
#define TEXTURE_HEADMAN ((0x00000140<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEADMAN, "EFNM" "Models\\Enemies\\Headman\\Kamikaze.tex"),
#define MODEL_BOMB ((0x00000140<<8)+9)
 CEntityComponent(ECT_MODEL, MODEL_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.mdl"),
#define TEXTURE_BOMB ((0x00000140<<8)+10)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.tex"),
#define SOUND_IDLE ((0x00000140<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000140<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000140<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000140<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000140<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000140<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Woman\\Sounds\\Death.wav"),
};
#define CWoman_componentsct ARRAYCOUNT(CWoman_components)

CEventHandlerEntry CWoman_handlers[] = {
 {0x01400000, STATE_CEnemyFly_FlyFire, CEntity::pEventHandler(&CWoman::FlyFire),DEBUGSTRING("CWoman::FlyFire")},
 {0x01400001, -1, CEntity::pEventHandler(&CWoman::H0x01400001_FlyFire_01), DEBUGSTRING("CWoman::H0x01400001_FlyFire_01")},
 {0x01400002, -1, CEntity::pEventHandler(&CWoman::H0x01400002_FlyFire_02), DEBUGSTRING("CWoman::H0x01400002_FlyFire_02")},
 {0x01400003, -1, CEntity::pEventHandler(&CWoman::H0x01400003_FlyFire_03), DEBUGSTRING("CWoman::H0x01400003_FlyFire_03")},
 {0x01400004, -1, CEntity::pEventHandler(&CWoman::H0x01400004_FlyFire_04), DEBUGSTRING("CWoman::H0x01400004_FlyFire_04")},
 {0x01400005, -1, CEntity::pEventHandler(&CWoman::H0x01400005_FlyFire_05), DEBUGSTRING("CWoman::H0x01400005_FlyFire_05")},
 {0x01400006, -1, CEntity::pEventHandler(&CWoman::H0x01400006_FlyFire_06), DEBUGSTRING("CWoman::H0x01400006_FlyFire_06")},
 {0x01400007, STATE_CEnemyFly_FlyHit, CEntity::pEventHandler(&CWoman::FlyHit),DEBUGSTRING("CWoman::FlyHit")},
 {0x01400008, STATE_CEnemyFly_Death, CEntity::pEventHandler(&CWoman::Death),DEBUGSTRING("CWoman::Death")},
 {0x01400009, STATE_CEnemyFly_AirToGround, CEntity::pEventHandler(&CWoman::AirToGround),DEBUGSTRING("CWoman::AirToGround")},
 {0x0140000a, -1, CEntity::pEventHandler(&CWoman::FlyOnEnemy),DEBUGSTRING("CWoman::FlyOnEnemy")},
 {0x0140000b, -1, CEntity::pEventHandler(&CWoman::H0x0140000b_FlyOnEnemy_01), DEBUGSTRING("CWoman::H0x0140000b_FlyOnEnemy_01")},
 {0x0140000c, -1, CEntity::pEventHandler(&CWoman::H0x0140000c_FlyOnEnemy_02), DEBUGSTRING("CWoman::H0x0140000c_FlyOnEnemy_02")},
 {0x0140000d, -1, CEntity::pEventHandler(&CWoman::H0x0140000d_FlyOnEnemy_03), DEBUGSTRING("CWoman::H0x0140000d_FlyOnEnemy_03")},
 {0x0140000e, -1, CEntity::pEventHandler(&CWoman::H0x0140000e_FlyOnEnemy_04), DEBUGSTRING("CWoman::H0x0140000e_FlyOnEnemy_04")},
 {0x0140000f, STATE_CEnemyFly_GroundFire, CEntity::pEventHandler(&CWoman::GroundFire),DEBUGSTRING("CWoman::GroundFire")},
 {0x01400010, -1, CEntity::pEventHandler(&CWoman::H0x01400010_GroundFire_01), DEBUGSTRING("CWoman::H0x01400010_GroundFire_01")},
 {0x01400011, -1, CEntity::pEventHandler(&CWoman::H0x01400011_GroundFire_02), DEBUGSTRING("CWoman::H0x01400011_GroundFire_02")},
 {0x01400012, -1, CEntity::pEventHandler(&CWoman::H0x01400012_GroundFire_03), DEBUGSTRING("CWoman::H0x01400012_GroundFire_03")},
 {0x01400013, -1, CEntity::pEventHandler(&CWoman::H0x01400013_GroundFire_04), DEBUGSTRING("CWoman::H0x01400013_GroundFire_04")},
 {0x01400014, -1, CEntity::pEventHandler(&CWoman::H0x01400014_GroundFire_05), DEBUGSTRING("CWoman::H0x01400014_GroundFire_05")},
 {0x01400015, -1, CEntity::pEventHandler(&CWoman::H0x01400015_GroundFire_06), DEBUGSTRING("CWoman::H0x01400015_GroundFire_06")},
 {0x01400016, STATE_CEnemyFly_GroundHit, CEntity::pEventHandler(&CWoman::GroundHit),DEBUGSTRING("CWoman::GroundHit")},
 {0x01400017, -1, CEntity::pEventHandler(&CWoman::H0x01400017_GroundHit_01), DEBUGSTRING("CWoman::H0x01400017_GroundHit_01")},
 {0x01400018, -1, CEntity::pEventHandler(&CWoman::H0x01400018_GroundHit_02), DEBUGSTRING("CWoman::H0x01400018_GroundHit_02")},
 {0x01400019, -1, CEntity::pEventHandler(&CWoman::H0x01400019_GroundHit_03), DEBUGSTRING("CWoman::H0x01400019_GroundHit_03")},
 {0x0140001a, -1, CEntity::pEventHandler(&CWoman::H0x0140001a_GroundHit_04), DEBUGSTRING("CWoman::H0x0140001a_GroundHit_04")},
 {1, -1, CEntity::pEventHandler(&CWoman::Main),DEBUGSTRING("CWoman::Main")},
 {0x0140001b, -1, CEntity::pEventHandler(&CWoman::H0x0140001b_Main_01), DEBUGSTRING("CWoman::H0x0140001b_Main_01")},
 {0x0140001c, -1, CEntity::pEventHandler(&CWoman::H0x0140001c_Main_02), DEBUGSTRING("CWoman::H0x0140001c_Main_02")},
};
#define CWoman_handlersct ARRAYCOUNT(CWoman_handlers)

CEntity *CWoman_New(void) { return new CWoman; };
void CWoman_OnInitClass(void) {};
void CWoman_OnEndClass(void) {};
void CWoman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWoman_OnWorldEnd(CWorld *pwo) {};
void CWoman_OnWorldInit(CWorld *pwo) {};
void CWoman_OnWorldTick(CWorld *pwo) {};
void CWoman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWoman, CEnemyFly, "Woman", "Thumbnails\\Woman.tbn", 320);
DECLARE_CTFILENAME(_fnmCWoman_tbn, "Thumbnails\\Woman.tbn");
