// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CHuanman

CEntityProperty CHuanman_properties[] = {
  CEntityProperty()
};
#define CHuanman_propertiesct 0


CEntityComponent CHuanman_components[] = {
#define CLASS_BASE ((0x00000145<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define MODEL_HUANMAN ((0x00000145<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_HUANMAN, "EFNM" "Models\\Enemies\\Huanman\\Huanman.mdl"),
#define TEXTURE_HUANMAN ((0x00000145<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HUANMAN, "EFNM" "Models\\Enemies\\Huanman\\Huanman.tex"),
#define SOUND_IDLE ((0x00000145<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000145<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000145<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000145<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000145<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000145<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Huanman\\Sounds\\Death.wav"),
};
#define CHuanman_componentsct ARRAYCOUNT(CHuanman_components)

CEventHandlerEntry CHuanman_handlers[] = {
 {0x01450000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CHuanman::Fire),DEBUGSTRING("CHuanman::Fire")},
 {0x01450001, -1, CEntity::pEventHandler(&CHuanman::H0x01450001_Fire_01), DEBUGSTRING("CHuanman::H0x01450001_Fire_01")},
 {0x01450002, -1, CEntity::pEventHandler(&CHuanman::H0x01450002_Fire_02), DEBUGSTRING("CHuanman::H0x01450002_Fire_02")},
 {0x01450003, -1, CEntity::pEventHandler(&CHuanman::H0x01450003_Fire_03), DEBUGSTRING("CHuanman::H0x01450003_Fire_03")},
 {0x01450004, -1, CEntity::pEventHandler(&CHuanman::H0x01450004_Fire_04), DEBUGSTRING("CHuanman::H0x01450004_Fire_04")},
 {0x01450005, -1, CEntity::pEventHandler(&CHuanman::H0x01450005_Fire_05), DEBUGSTRING("CHuanman::H0x01450005_Fire_05")},
 {0x01450006, -1, CEntity::pEventHandler(&CHuanman::H0x01450006_Fire_06), DEBUGSTRING("CHuanman::H0x01450006_Fire_06")},
 {0x01450007, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CHuanman::Hit),DEBUGSTRING("CHuanman::Hit")},
 {0x01450008, -1, CEntity::pEventHandler(&CHuanman::H0x01450008_Hit_01), DEBUGSTRING("CHuanman::H0x01450008_Hit_01")},
 {0x01450009, -1, CEntity::pEventHandler(&CHuanman::H0x01450009_Hit_02), DEBUGSTRING("CHuanman::H0x01450009_Hit_02")},
 {0x0145000a, -1, CEntity::pEventHandler(&CHuanman::H0x0145000a_Hit_03), DEBUGSTRING("CHuanman::H0x0145000a_Hit_03")},
 {0x0145000b, -1, CEntity::pEventHandler(&CHuanman::H0x0145000b_Hit_04), DEBUGSTRING("CHuanman::H0x0145000b_Hit_04")},
 {0x0145000c, -1, CEntity::pEventHandler(&CHuanman::H0x0145000c_Hit_05), DEBUGSTRING("CHuanman::H0x0145000c_Hit_05")},
 {0x0145000d, -1, CEntity::pEventHandler(&CHuanman::H0x0145000d_Hit_06), DEBUGSTRING("CHuanman::H0x0145000d_Hit_06")},
 {1, -1, CEntity::pEventHandler(&CHuanman::Main),DEBUGSTRING("CHuanman::Main")},
};
#define CHuanman_handlersct ARRAYCOUNT(CHuanman_handlers)

CEntity *CHuanman_New(void) { return new CHuanman; };
void CHuanman_OnInitClass(void) {};
void CHuanman_OnEndClass(void) {};
void CHuanman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CHuanman_OnWorldEnd(CWorld *pwo) {};
void CHuanman_OnWorldInit(CWorld *pwo) {};
void CHuanman_OnWorldTick(CWorld *pwo) {};
void CHuanman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CHuanman, CEnemyBase, "Huanman", "Thumbnails\\Huanman.tbn", 325);
DECLARE_CTFILENAME(_fnmCHuanman_tbn, "Thumbnails\\Huanman.tbn");
