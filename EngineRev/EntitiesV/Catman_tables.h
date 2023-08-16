// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(CatmanType)
  EP_ENUMVALUE(CMT_SOLDIER, "Soldier"),
  EP_ENUMVALUE(CMT_GENERAL, "General"),
  EP_ENUMVALUE(CMT_ROGUE, "Rogue"),
EP_ENUMEND(CatmanType);

#define ENTITYCLASS CCatman

CEntityProperty CCatman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &CatmanType_enum, (0x12d<<8)+1, 0x5C0, "Type", 'T', "m_cmtType", 0x7F0000FFUL, 0),
};
#define CCatman_propertiesct ARRAYCOUNT(CCatman_properties)

CEntityComponent CCatman_components[] = {
#define CLASS_BASE ((0x0000012d<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define MODEL_CATMAN ((0x0000012d<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_CATMAN, "EFNM" "Models\\Enemies\\Catman\\Catman.mdl"),
#define TEXTURE_SOLDIER ((0x0000012d<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SOLDIER, "EFNM" "Models\\Enemies\\Catman\\Catman03.tex"),
#define SOUND_IDLE ((0x0000012d<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x0000012d<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x0000012d<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x0000012d<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x0000012d<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x0000012d<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Catman\\Sounds\\Death.wav"),
};
#define CCatman_componentsct ARRAYCOUNT(CCatman_components)

CEventHandlerEntry CCatman_handlers[] = {
 {0x012d0000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CCatman::Fire),DEBUGSTRING("CCatman::Fire")},
 {0x012d0001, -1, CEntity::pEventHandler(&CCatman::H0x012d0001_Fire_01), DEBUGSTRING("CCatman::H0x012d0001_Fire_01")},
 {0x012d0002, -1, CEntity::pEventHandler(&CCatman::H0x012d0002_Fire_02), DEBUGSTRING("CCatman::H0x012d0002_Fire_02")},
 {0x012d0003, -1, CEntity::pEventHandler(&CCatman::H0x012d0003_Fire_03), DEBUGSTRING("CCatman::H0x012d0003_Fire_03")},
 {0x012d0004, -1, CEntity::pEventHandler(&CCatman::H0x012d0004_Fire_04), DEBUGSTRING("CCatman::H0x012d0004_Fire_04")},
 {1, -1, CEntity::pEventHandler(&CCatman::Main),DEBUGSTRING("CCatman::Main")},
};
#define CCatman_handlersct ARRAYCOUNT(CCatman_handlers)

CEntity *CCatman_New(void) { return new CCatman; };
void CCatman_OnInitClass(void) {};
void CCatman_OnEndClass(void) {};
void CCatman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCatman_OnWorldEnd(CWorld *pwo) {};
void CCatman_OnWorldInit(CWorld *pwo) {};
void CCatman_OnWorldTick(CWorld *pwo) {};
void CCatman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCatman, CEnemyBase, "Catman", "Thumbnails\\Catman.tbn", 301);
DECLARE_CTFILENAME(_fnmCCatman_tbn, "Thumbnails\\Catman.tbn");
