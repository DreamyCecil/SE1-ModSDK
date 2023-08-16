// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(BigHeadType)
  EP_ENUMVALUE(BHT_NORMAL, "Normal"),
  EP_ENUMVALUE(BHT_ZOMBIE, "Zombie"),
  EP_ENUMVALUE(BHT_SAINT, "Saint"),
EP_ENUMEND(BigHeadType);

#define ENTITYCLASS CBigHead

CEntityProperty CBigHead_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x154<<8)+1, 0x5C0, "Head texture", 'H', "m_fnmHeadTex", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x154<<8)+2, 0x5C8, "Name sound", 'S', "m_fnmNameSnd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x154<<8)+3, 0x5D0, "", 0, "m_tmLastGreetTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BigHeadType_enum, (0x154<<8)+4, 0x5D4, "Type", 'Y', "m_bhtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x154<<8)+5, 0x5D8, "Ignore player", 'I', "m_bIgnorePlayer", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x154<<8)+6, 0x5DC, "", 0, "m_bPlayingWalkSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x154<<8)+7, 0x5E0, "Sleeping", 'S', "m_bSleeping", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x154<<8)+8, 0x5E4, "", 0, "m_tmLastWalkingSoundTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x154<<8)+9, 0x5E8, "Walk sound frequency", 0, "m_tmWalkingSound", 0x7F0000FFUL, 0),
};
#define CBigHead_propertiesct ARRAYCOUNT(CBigHead_properties)

CEntityComponent CBigHead_components[] = {
#define CLASS_BASE ((0x00000154<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BLOOD_SPRAY ((0x00000154<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000154<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_MENTAL ((0x00000154<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_MENTAL, "EFNM" "ModelsMP\\Enemies\\Mental\\Mental.mdl"),
#define TEXTURE_MENTAL ((0x00000154<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MENTAL, "EFNM" "ModelsMP\\Enemies\\Mental\\Mental.tex"),
#define MODEL_HEAD ((0x00000154<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_HEAD, "EFNM" "ModelsMP\\Enemies\\Mental\\Head.mdl"),
#define MODEL_HORNS ((0x00000154<<8)+13)
 CEntityComponent(ECT_MODEL, MODEL_HORNS, "EFNM" "ModelsMP\\Enemies\\Mental\\Horns.mdl"),
#define TEXTURE_HORNS ((0x00000154<<8)+14)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HORNS, "EFNM" "ModelsMP\\Enemies\\Mental\\Horns.tex"),
#define MODEL_AURA ((0x00000154<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_AURA, "EFNM" "ModelsMP\\Enemies\\Mental\\Aura.mdl"),
#define TEXTURE_AURA ((0x00000154<<8)+16)
 CEntityComponent(ECT_TEXTURE, TEXTURE_AURA, "EFNM" "ModelsMP\\Enemies\\Mental\\Aura.tex"),
#define SOUND_IDLE ((0x00000154<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Mental\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000154<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Mental\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000154<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Mental\\Sounds\\Wound.wav"),
#define SOUND_DEATH ((0x00000154<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Mental\\Sounds\\Death.wav"),
#define SOUND_WALKZOMBIE ((0x00000154<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_WALKZOMBIE, "EFNM" "ModelsMP\\Enemies\\Mental\\Sounds\\ComeToDaddy.wav"),
#define SOUND_WALKSAINT ((0x00000154<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_WALKSAINT, "EFNM" "ModelsMP\\Enemies\\Mental\\Sounds\\PeaceWithYou.wav"),
};
#define CBigHead_componentsct ARRAYCOUNT(CBigHead_components)

CEventHandlerEntry CBigHead_handlers[] = {
 {0x01540000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CBigHead::Fire),DEBUGSTRING("CBigHead::Fire")},
 {0x01540001, -1, CEntity::pEventHandler(&CBigHead::H0x01540001_Fire_01), DEBUGSTRING("CBigHead::H0x01540001_Fire_01")},
 {0x01540002, -1, CEntity::pEventHandler(&CBigHead::H0x01540002_Fire_02), DEBUGSTRING("CBigHead::H0x01540002_Fire_02")},
 {0x01540003, -1, CEntity::pEventHandler(&CBigHead::H0x01540003_Fire_03), DEBUGSTRING("CBigHead::H0x01540003_Fire_03")},
 {0x01540004, -1, CEntity::pEventHandler(&CBigHead::Sleep),DEBUGSTRING("CBigHead::Sleep")},
 {0x01540005, -1, CEntity::pEventHandler(&CBigHead::H0x01540005_Sleep_01), DEBUGSTRING("CBigHead::H0x01540005_Sleep_01")},
 {0x01540006, -1, CEntity::pEventHandler(&CBigHead::H0x01540006_Sleep_02), DEBUGSTRING("CBigHead::H0x01540006_Sleep_02")},
 {0x01540007, -1, CEntity::pEventHandler(&CBigHead::WakeUp),DEBUGSTRING("CBigHead::WakeUp")},
 {0x01540008, -1, CEntity::pEventHandler(&CBigHead::H0x01540008_WakeUp_01), DEBUGSTRING("CBigHead::H0x01540008_WakeUp_01")},
 {0x01540009, -1, CEntity::pEventHandler(&CBigHead::H0x01540009_WakeUp_02), DEBUGSTRING("CBigHead::H0x01540009_WakeUp_02")},
 {0x0154000a, STATE_CEnemyBase_PreMainLoop, CEntity::pEventHandler(&CBigHead::PreMainLoop),DEBUGSTRING("CBigHead::PreMainLoop")},
 {0x0154000b, -1, CEntity::pEventHandler(&CBigHead::H0x0154000b_PreMainLoop_01), DEBUGSTRING("CBigHead::H0x0154000b_PreMainLoop_01")},
 {0x0154000c, -1, CEntity::pEventHandler(&CBigHead::H0x0154000c_PreMainLoop_02), DEBUGSTRING("CBigHead::H0x0154000c_PreMainLoop_02")},
 {0x0154000d, -1, CEntity::pEventHandler(&CBigHead::H0x0154000d_PreMainLoop_03), DEBUGSTRING("CBigHead::H0x0154000d_PreMainLoop_03")},
 {1, -1, CEntity::pEventHandler(&CBigHead::Main),DEBUGSTRING("CBigHead::Main")},
};
#define CBigHead_handlersct ARRAYCOUNT(CBigHead_handlers)

CEntity *CBigHead_New(void) { return new CBigHead; };
void CBigHead_OnInitClass(void) {};
void CBigHead_OnEndClass(void) {};
void CBigHead_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBigHead_OnWorldEnd(CWorld *pwo) {};
void CBigHead_OnWorldInit(CWorld *pwo) {};
void CBigHead_OnWorldTick(CWorld *pwo) {};
void CBigHead_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBigHead, CEnemyBase, "BigHead", "Thumbnails\\Mental.tbn", 340);
DECLARE_CTFILENAME(_fnmCBigHead_tbn, "Thumbnails\\Mental.tbn");
