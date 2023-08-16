// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CBoneman

CEntityProperty CBoneman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x131<<8)+2, 0x5C0, "", 0, "m_bFistHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x131<<8)+3, 0x5C4, "", 0, "m_bTouchAnother", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x131<<8)+4, 0x5C8, "", 0, "m_soFeet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x131<<8)+5, 0x644, "", 0, "m_bRunSoundPlaying", 0x0UL, 0),
};
#define CBoneman_propertiesct ARRAYCOUNT(CBoneman_properties)

CEntityComponent CBoneman_components[] = {
#define CLASS_BASE ((0x00000131<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define MODEL_BONEMAN ((0x00000131<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_BONEMAN, "EFNM" "Models\\Enemies\\Boneman\\Boneman.mdl"),
#define TEXTURE_BONEMAN ((0x00000131<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BONEMAN, "EFNM" "Models\\Enemies\\Boneman\\Boneman.tex"),
#define CLASS_PROJECTILE ((0x00000131<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define MODEL_BONEMAN_BODY ((0x00000131<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_BONEMAN_BODY, "EFNM" "Models\\Enemies\\Boneman\\Debris\\Body.mdl"),
#define MODEL_BONEMAN_HAND ((0x00000131<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_BONEMAN_HAND, "EFNM" "Models\\Enemies\\Boneman\\Debris\\Hand.mdl"),
#define MODEL_BONEMAN_LEGS ((0x00000131<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_BONEMAN_LEGS, "EFNM" "Models\\Enemies\\Boneman\\Debris\\Legs.mdl"),
#define SOUND_IDLE ((0x00000131<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000131<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000131<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000131<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000131<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Kick.wav"),
#define SOUND_PUNCH ((0x00000131<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_PUNCH, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Punch.wav"),
#define SOUND_DEATH ((0x00000131<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Death.wav"),
#define SOUND_RUN ((0x00000131<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_RUN, "EFNM" "Models\\Enemies\\Boneman\\Sounds\\Run.wav"),
};
#define CBoneman_componentsct ARRAYCOUNT(CBoneman_components)

CEventHandlerEntry CBoneman_handlers[] = {
 {0x01310000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CBoneman::Fire),DEBUGSTRING("CBoneman::Fire")},
 {0x01310001, -1, CEntity::pEventHandler(&CBoneman::H0x01310001_Fire_01), DEBUGSTRING("CBoneman::H0x01310001_Fire_01")},
 {0x01310002, -1, CEntity::pEventHandler(&CBoneman::H0x01310002_Fire_02), DEBUGSTRING("CBoneman::H0x01310002_Fire_02")},
 {0x01310003, -1, CEntity::pEventHandler(&CBoneman::H0x01310003_Fire_03), DEBUGSTRING("CBoneman::H0x01310003_Fire_03")},
 {0x01310004, -1, CEntity::pEventHandler(&CBoneman::H0x01310004_Fire_04), DEBUGSTRING("CBoneman::H0x01310004_Fire_04")},
 {0x01310005, -1, CEntity::pEventHandler(&CBoneman::H0x01310005_Fire_05), DEBUGSTRING("CBoneman::H0x01310005_Fire_05")},
 {0x01310006, -1, CEntity::pEventHandler(&CBoneman::H0x01310006_Fire_06), DEBUGSTRING("CBoneman::H0x01310006_Fire_06")},
 {0x01310007, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CBoneman::Hit),DEBUGSTRING("CBoneman::Hit")},
 {0x01310008, -1, CEntity::pEventHandler(&CBoneman::JumpOnEnemy),DEBUGSTRING("CBoneman::JumpOnEnemy")},
 {0x01310009, -1, CEntity::pEventHandler(&CBoneman::H0x01310009_JumpOnEnemy_01), DEBUGSTRING("CBoneman::H0x01310009_JumpOnEnemy_01")},
 {0x0131000a, -1, CEntity::pEventHandler(&CBoneman::H0x0131000a_JumpOnEnemy_02), DEBUGSTRING("CBoneman::H0x0131000a_JumpOnEnemy_02")},
 {0x0131000b, -1, CEntity::pEventHandler(&CBoneman::H0x0131000b_JumpOnEnemy_03), DEBUGSTRING("CBoneman::H0x0131000b_JumpOnEnemy_03")},
 {0x0131000c, -1, CEntity::pEventHandler(&CBoneman::H0x0131000c_JumpOnEnemy_04), DEBUGSTRING("CBoneman::H0x0131000c_JumpOnEnemy_04")},
 {0x0131000d, -1, CEntity::pEventHandler(&CBoneman::HitWithBones),DEBUGSTRING("CBoneman::HitWithBones")},
 {0x0131000e, -1, CEntity::pEventHandler(&CBoneman::H0x0131000e_HitWithBones_01), DEBUGSTRING("CBoneman::H0x0131000e_HitWithBones_01")},
 {0x0131000f, -1, CEntity::pEventHandler(&CBoneman::H0x0131000f_HitWithBones_02), DEBUGSTRING("CBoneman::H0x0131000f_HitWithBones_02")},
 {0x01310010, -1, CEntity::pEventHandler(&CBoneman::H0x01310010_HitWithBones_03), DEBUGSTRING("CBoneman::H0x01310010_HitWithBones_03")},
 {0x01310011, -1, CEntity::pEventHandler(&CBoneman::H0x01310011_HitWithBones_04), DEBUGSTRING("CBoneman::H0x01310011_HitWithBones_04")},
 {0x01310012, -1, CEntity::pEventHandler(&CBoneman::H0x01310012_HitWithBones_05), DEBUGSTRING("CBoneman::H0x01310012_HitWithBones_05")},
 {0x01310013, -1, CEntity::pEventHandler(&CBoneman::H0x01310013_HitWithBones_06), DEBUGSTRING("CBoneman::H0x01310013_HitWithBones_06")},
 {0x01310014, -1, CEntity::pEventHandler(&CBoneman::H0x01310014_HitWithBones_07), DEBUGSTRING("CBoneman::H0x01310014_HitWithBones_07")},
 {0x01310015, -1, CEntity::pEventHandler(&CBoneman::H0x01310015_HitWithBones_08), DEBUGSTRING("CBoneman::H0x01310015_HitWithBones_08")},
 {1, -1, CEntity::pEventHandler(&CBoneman::Main),DEBUGSTRING("CBoneman::Main")},
};
#define CBoneman_handlersct ARRAYCOUNT(CBoneman_handlers)

CEntity *CBoneman_New(void) { return new CBoneman; };
void CBoneman_OnInitClass(void) {};
void CBoneman_OnEndClass(void) {};
void CBoneman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBoneman_OnWorldEnd(CWorld *pwo) {};
void CBoneman_OnWorldInit(CWorld *pwo) {};
void CBoneman_OnWorldTick(CWorld *pwo) {};
void CBoneman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBoneman, CEnemyBase, "Boneman", "Thumbnails\\Boneman.tbn", 305);
DECLARE_CTFILENAME(_fnmCBoneman_tbn, "Thumbnails\\Boneman.tbn");
