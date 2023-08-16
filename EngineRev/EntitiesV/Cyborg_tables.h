// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(CyborgType)
  EP_ENUMVALUE(CBT_GROUND, "Ground"),
  EP_ENUMVALUE(CBT_FLY, "Fly"),
  EP_ENUMVALUE(CBT_FLYGROUND, "Fly-Ground"),
EP_ENUMEND(CyborgType);

#define ENTITYCLASS CCyborg

CEntityProperty CCyborg_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &CyborgType_enum, (0x14a<<8)+1, 0x5C0, "Type", 'T', "m_EctType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x14a<<8)+2, 0x5C4, "", 0, "m_iCloseHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x14a<<8)+3, 0x5C8, "", 0, "m_iFireLaserCount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x14a<<8)+4, 0x5CC, "", 0, "m_ctBombsToDrop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14a<<8)+10, 0x5D0, "", 0, "m_tmLastBombDropped", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14a<<8)+5, 0x5D4, "", 0, "m_fFlyAboveEnemy", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14a<<8)+6, 0x5D8, "", 0, "m_fFlySpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14a<<8)+7, 0x5DC, "", 0, "m_aFlyRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x14a<<8)+8, 0x5E0, "", 0, "m_fFallStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x14a<<8)+9, 0x5E4, "Bombing", 'B', "m_bBombing", 0x7F0000FFUL, 0),
};
#define CCyborg_propertiesct ARRAYCOUNT(CCyborg_properties)

CEntityComponent CCyborg_components[] = {
#define CLASS_BASE ((0x0000014a<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyFly.ecl"),
#define CLASS_BULLET ((0x0000014a<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BULLET, "EFNM" "Classes\\Bullet.ecl"),
#define CLASS_CYBORG_BIKE ((0x0000014a<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_CYBORG_BIKE, "EFNM" "Classes\\CyborgBike.ecl"),
#define CLASS_PROJECTILE ((0x0000014a<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000014a<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_CYBORG ((0x0000014a<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_CYBORG, "EFNM" "Models\\Enemies\\Cyborg\\Cyborg.mdl"),
#define MODEL_ASS ((0x0000014a<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_ASS, "EFNM" "Models\\Enemies\\Cyborg\\AssHole.mdl"),
#define MODEL_TORSO ((0x0000014a<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_TORSO, "EFNM" "Models\\Enemies\\Cyborg\\Torso.mdl"),
#define MODEL_HEAD ((0x0000014a<<8)+13)
 CEntityComponent(ECT_MODEL, MODEL_HEAD, "EFNM" "Models\\Enemies\\Cyborg\\Head.mdl"),
#define MODEL_RIGHT_UPPER_ARM ((0x0000014a<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_RIGHT_UPPER_ARM, "EFNM" "Models\\Enemies\\Cyborg\\RightUpperArm.mdl"),
#define MODEL_RIGHT_LOWER_ARM ((0x0000014a<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_RIGHT_LOWER_ARM, "EFNM" "Models\\Enemies\\Cyborg\\RightLowerArm.mdl"),
#define MODEL_LEFT_UPPER_ARM ((0x0000014a<<8)+16)
 CEntityComponent(ECT_MODEL, MODEL_LEFT_UPPER_ARM, "EFNM" "Models\\Enemies\\Cyborg\\LeftUpperArm.mdl"),
#define MODEL_LEFT_LOWER_ARM ((0x0000014a<<8)+17)
 CEntityComponent(ECT_MODEL, MODEL_LEFT_LOWER_ARM, "EFNM" "Models\\Enemies\\Cyborg\\LeftLowerArm.mdl"),
#define MODEL_RIGHT_UPPER_LEG ((0x0000014a<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_RIGHT_UPPER_LEG, "EFNM" "Models\\Enemies\\Cyborg\\RightUpperLeg.mdl"),
#define MODEL_RIGHT_LOWER_LEG ((0x0000014a<<8)+19)
 CEntityComponent(ECT_MODEL, MODEL_RIGHT_LOWER_LEG, "EFNM" "Models\\Enemies\\Cyborg\\RightLowerLeg.mdl"),
#define MODEL_LEFT_UPPER_LEG ((0x0000014a<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_LEFT_UPPER_LEG, "EFNM" "Models\\Enemies\\Cyborg\\LeftUpperLeg.mdl"),
#define MODEL_LEFT_LOWER_LEG ((0x0000014a<<8)+21)
 CEntityComponent(ECT_MODEL, MODEL_LEFT_LOWER_LEG, "EFNM" "Models\\Enemies\\Cyborg\\LeftLowerLeg.mdl"),
#define MODEL_FOOT ((0x0000014a<<8)+22)
 CEntityComponent(ECT_MODEL, MODEL_FOOT, "EFNM" "Models\\Enemies\\Cyborg\\Foot.mdl"),
#define MODEL_BIKE ((0x0000014a<<8)+23)
 CEntityComponent(ECT_MODEL, MODEL_BIKE, "EFNM" "Models\\Enemies\\Cyborg\\Bike.mdl"),
#define TEXTURE_CYBORG ((0x0000014a<<8)+30)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CYBORG, "EFNM" "Models\\Enemies\\Cyborg\\Cyborg.tex"),
#define TEXTURE_BIKE ((0x0000014a<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BIKE, "EFNM" "Models\\Enemies\\Cyborg\\Bike.tex"),
#define SOUND_IDLE ((0x0000014a<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x0000014a<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x0000014a<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x0000014a<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x0000014a<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x0000014a<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Cyborg\\Sounds\\Death.wav"),
#define TEX_REFL_LIGHTMETAL01 ((0x0000014a<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_SPEC_MEDIUM ((0x0000014a<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x0000014a<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
};
#define CCyborg_componentsct ARRAYCOUNT(CCyborg_components)

CEventHandlerEntry CCyborg_handlers[] = {
 {0x014a0000, -1, CEntity::pEventHandler(&CCyborg::FallToFloor),DEBUGSTRING("CCyborg::FallToFloor")},
 {0x014a0001, -1, CEntity::pEventHandler(&CCyborg::H0x014a0001_FallToFloor_01), DEBUGSTRING("CCyborg::H0x014a0001_FallToFloor_01")},
 {0x014a0002, -1, CEntity::pEventHandler(&CCyborg::H0x014a0002_FallToFloor_02), DEBUGSTRING("CCyborg::H0x014a0002_FallToFloor_02")},
 {0x014a0003, -1, CEntity::pEventHandler(&CCyborg::H0x014a0003_FallToFloor_03), DEBUGSTRING("CCyborg::H0x014a0003_FallToFloor_03")},
 {0x014a0004, -1, CEntity::pEventHandler(&CCyborg::H0x014a0004_FallToFloor_04), DEBUGSTRING("CCyborg::H0x014a0004_FallToFloor_04")},
 {0x014a0005, -1, CEntity::pEventHandler(&CCyborg::H0x014a0005_FallToFloor_05), DEBUGSTRING("CCyborg::H0x014a0005_FallToFloor_05")},
 {0x014a0006, -1, CEntity::pEventHandler(&CCyborg::GetUp),DEBUGSTRING("CCyborg::GetUp")},
 {0x014a0007, -1, CEntity::pEventHandler(&CCyborg::H0x014a0007_GetUp_01), DEBUGSTRING("CCyborg::H0x014a0007_GetUp_01")},
 {0x014a0008, -1, CEntity::pEventHandler(&CCyborg::H0x014a0008_GetUp_02), DEBUGSTRING("CCyborg::H0x014a0008_GetUp_02")},
 {0x014a0009, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CCyborg::BeWounded),DEBUGSTRING("CCyborg::BeWounded")},
 {0x014a000a, -1, CEntity::pEventHandler(&CCyborg::H0x014a000a_BeWounded_01), DEBUGSTRING("CCyborg::H0x014a000a_BeWounded_01")},
 {0x014a000b, -1, CEntity::pEventHandler(&CCyborg::H0x014a000b_BeWounded_02), DEBUGSTRING("CCyborg::H0x014a000b_BeWounded_02")},
 {0x014a000c, -1, CEntity::pEventHandler(&CCyborg::H0x014a000c_BeWounded_03), DEBUGSTRING("CCyborg::H0x014a000c_BeWounded_03")},
 {0x014a000d, -1, CEntity::pEventHandler(&CCyborg::H0x014a000d_BeWounded_04), DEBUGSTRING("CCyborg::H0x014a000d_BeWounded_04")},
 {0x014a000e, -1, CEntity::pEventHandler(&CCyborg::H0x014a000e_BeWounded_05), DEBUGSTRING("CCyborg::H0x014a000e_BeWounded_05")},
 {0x014a000f, -1, CEntity::pEventHandler(&CCyborg::H0x014a000f_BeWounded_06), DEBUGSTRING("CCyborg::H0x014a000f_BeWounded_06")},
 {0x014a0010, -1, CEntity::pEventHandler(&CCyborg::H0x014a0010_BeWounded_07), DEBUGSTRING("CCyborg::H0x014a0010_BeWounded_07")},
 {0x014a0011, STATE_CEnemyBase_AttackEnemy, CEntity::pEventHandler(&CCyborg::AttackEnemy),DEBUGSTRING("CCyborg::AttackEnemy")},
 {0x014a0012, -1, CEntity::pEventHandler(&CCyborg::FlyAttackEnemy),DEBUGSTRING("CCyborg::FlyAttackEnemy")},
 {0x014a0013, -1, CEntity::pEventHandler(&CCyborg::H0x014a0013_FlyAttackEnemy_01), DEBUGSTRING("CCyborg::H0x014a0013_FlyAttackEnemy_01")},
 {0x014a0014, -1, CEntity::pEventHandler(&CCyborg::H0x014a0014_FlyAttackEnemy_02), DEBUGSTRING("CCyborg::H0x014a0014_FlyAttackEnemy_02")},
 {0x014a0015, -1, CEntity::pEventHandler(&CCyborg::H0x014a0015_FlyAttackEnemy_03), DEBUGSTRING("CCyborg::H0x014a0015_FlyAttackEnemy_03")},
 {0x014a0016, -1, CEntity::pEventHandler(&CCyborg::H0x014a0016_FlyAttackEnemy_04), DEBUGSTRING("CCyborg::H0x014a0016_FlyAttackEnemy_04")},
 {0x014a0017, -1, CEntity::pEventHandler(&CCyborg::H0x014a0017_FlyAttackEnemy_05), DEBUGSTRING("CCyborg::H0x014a0017_FlyAttackEnemy_05")},
 {0x014a0018, -1, CEntity::pEventHandler(&CCyborg::H0x014a0018_FlyAttackEnemy_06), DEBUGSTRING("CCyborg::H0x014a0018_FlyAttackEnemy_06")},
 {0x014a0019, -1, CEntity::pEventHandler(&CCyborg::H0x014a0019_FlyAttackEnemy_07), DEBUGSTRING("CCyborg::H0x014a0019_FlyAttackEnemy_07")},
 {0x014a001a, -1, CEntity::pEventHandler(&CCyborg::H0x014a001a_FlyAttackEnemy_08), DEBUGSTRING("CCyborg::H0x014a001a_FlyAttackEnemy_08")},
 {0x014a001b, -1, CEntity::pEventHandler(&CCyborg::H0x014a001b_FlyAttackEnemy_09), DEBUGSTRING("CCyborg::H0x014a001b_FlyAttackEnemy_09")},
 {0x014a001c, -1, CEntity::pEventHandler(&CCyborg::H0x014a001c_FlyAttackEnemy_10), DEBUGSTRING("CCyborg::H0x014a001c_FlyAttackEnemy_10")},
 {0x014a001d, -1, CEntity::pEventHandler(&CCyborg::H0x014a001d_FlyAttackEnemy_11), DEBUGSTRING("CCyborg::H0x014a001d_FlyAttackEnemy_11")},
 {0x014a001e, -1, CEntity::pEventHandler(&CCyborg::H0x014a001e_FlyAttackEnemy_12), DEBUGSTRING("CCyborg::H0x014a001e_FlyAttackEnemy_12")},
 {0x014a001f, -1, CEntity::pEventHandler(&CCyborg::H0x014a001f_FlyAttackEnemy_13), DEBUGSTRING("CCyborg::H0x014a001f_FlyAttackEnemy_13")},
 {0x014a0020, -1, CEntity::pEventHandler(&CCyborg::H0x014a0020_FlyAttackEnemy_14), DEBUGSTRING("CCyborg::H0x014a0020_FlyAttackEnemy_14")},
 {0x014a0021, -1, CEntity::pEventHandler(&CCyborg::FlyAttackRun),DEBUGSTRING("CCyborg::FlyAttackRun")},
 {0x014a0022, -1, CEntity::pEventHandler(&CCyborg::H0x014a0022_FlyAttackRun_01), DEBUGSTRING("CCyborg::H0x014a0022_FlyAttackRun_01")},
 {0x014a0023, -1, CEntity::pEventHandler(&CCyborg::H0x014a0023_FlyAttackRun_02), DEBUGSTRING("CCyborg::H0x014a0023_FlyAttackRun_02")},
 {0x014a0024, -1, CEntity::pEventHandler(&CCyborg::H0x014a0024_FlyAttackRun_03), DEBUGSTRING("CCyborg::H0x014a0024_FlyAttackRun_03")},
 {0x014a0025, -1, CEntity::pEventHandler(&CCyborg::H0x014a0025_FlyAttackRun_04), DEBUGSTRING("CCyborg::H0x014a0025_FlyAttackRun_04")},
 {0x014a0026, -1, CEntity::pEventHandler(&CCyborg::GoAwayAndRotate),DEBUGSTRING("CCyborg::GoAwayAndRotate")},
 {0x014a0027, -1, CEntity::pEventHandler(&CCyborg::H0x014a0027_GoAwayAndRotate_01), DEBUGSTRING("CCyborg::H0x014a0027_GoAwayAndRotate_01")},
 {0x014a0028, -1, CEntity::pEventHandler(&CCyborg::H0x014a0028_GoAwayAndRotate_02), DEBUGSTRING("CCyborg::H0x014a0028_GoAwayAndRotate_02")},
 {0x014a0029, -1, CEntity::pEventHandler(&CCyborg::H0x014a0029_GoAwayAndRotate_03), DEBUGSTRING("CCyborg::H0x014a0029_GoAwayAndRotate_03")},
 {0x014a002a, -1, CEntity::pEventHandler(&CCyborg::H0x014a002a_GoAwayAndRotate_04), DEBUGSTRING("CCyborg::H0x014a002a_GoAwayAndRotate_04")},
 {0x014a002b, -1, CEntity::pEventHandler(&CCyborg::H0x014a002b_GoAwayAndRotate_05), DEBUGSTRING("CCyborg::H0x014a002b_GoAwayAndRotate_05")},
 {0x014a002c, -1, CEntity::pEventHandler(&CCyborg::H0x014a002c_GoAwayAndRotate_06), DEBUGSTRING("CCyborg::H0x014a002c_GoAwayAndRotate_06")},
 {0x014a002d, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CCyborg::Fire),DEBUGSTRING("CCyborg::Fire")},
 {0x014a002e, -1, CEntity::pEventHandler(&CCyborg::H0x014a002e_Fire_01), DEBUGSTRING("CCyborg::H0x014a002e_Fire_01")},
 {0x014a002f, -1, CEntity::pEventHandler(&CCyborg::H0x014a002f_Fire_02), DEBUGSTRING("CCyborg::H0x014a002f_Fire_02")},
 {0x014a0030, -1, CEntity::pEventHandler(&CCyborg::H0x014a0030_Fire_03), DEBUGSTRING("CCyborg::H0x014a0030_Fire_03")},
 {0x014a0031, -1, CEntity::pEventHandler(&CCyborg::H0x014a0031_Fire_04), DEBUGSTRING("CCyborg::H0x014a0031_Fire_04")},
 {0x014a0032, -1, CEntity::pEventHandler(&CCyborg::H0x014a0032_Fire_05), DEBUGSTRING("CCyborg::H0x014a0032_Fire_05")},
 {0x014a0033, -1, CEntity::pEventHandler(&CCyborg::H0x014a0033_Fire_06), DEBUGSTRING("CCyborg::H0x014a0033_Fire_06")},
 {0x014a0034, -1, CEntity::pEventHandler(&CCyborg::H0x014a0034_Fire_07), DEBUGSTRING("CCyborg::H0x014a0034_Fire_07")},
 {0x014a0035, -1, CEntity::pEventHandler(&CCyborg::H0x014a0035_Fire_08), DEBUGSTRING("CCyborg::H0x014a0035_Fire_08")},
 {0x014a0036, -1, CEntity::pEventHandler(&CCyborg::H0x014a0036_Fire_09), DEBUGSTRING("CCyborg::H0x014a0036_Fire_09")},
 {0x014a0037, -1, CEntity::pEventHandler(&CCyborg::H0x014a0037_Fire_10), DEBUGSTRING("CCyborg::H0x014a0037_Fire_10")},
 {0x014a0038, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CCyborg::Hit),DEBUGSTRING("CCyborg::Hit")},
 {0x014a0039, -1, CEntity::pEventHandler(&CCyborg::H0x014a0039_Hit_01), DEBUGSTRING("CCyborg::H0x014a0039_Hit_01")},
 {0x014a003a, -1, CEntity::pEventHandler(&CCyborg::H0x014a003a_Hit_02), DEBUGSTRING("CCyborg::H0x014a003a_Hit_02")},
 {0x014a003b, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CCyborg::Death),DEBUGSTRING("CCyborg::Death")},
 {0x014a003c, -1, CEntity::pEventHandler(&CCyborg::H0x014a003c_Death_01), DEBUGSTRING("CCyborg::H0x014a003c_Death_01")},
 {0x014a003d, -1, CEntity::pEventHandler(&CCyborg::H0x014a003d_Death_02), DEBUGSTRING("CCyborg::H0x014a003d_Death_02")},
 {0x014a003e, -1, CEntity::pEventHandler(&CCyborg::H0x014a003e_Death_03), DEBUGSTRING("CCyborg::H0x014a003e_Death_03")},
 {0x014a003f, -1, CEntity::pEventHandler(&CCyborg::H0x014a003f_Death_04), DEBUGSTRING("CCyborg::H0x014a003f_Death_04")},
 {0x014a0040, -1, CEntity::pEventHandler(&CCyborg::H0x014a0040_Death_05), DEBUGSTRING("CCyborg::H0x014a0040_Death_05")},
 {0x014a0041, -1, CEntity::pEventHandler(&CCyborg::H0x014a0041_Death_06), DEBUGSTRING("CCyborg::H0x014a0041_Death_06")},
 {0x014a0042, -1, CEntity::pEventHandler(&CCyborg::H0x014a0042_Death_07), DEBUGSTRING("CCyborg::H0x014a0042_Death_07")},
 {0x014a0043, -1, CEntity::pEventHandler(&CCyborg::H0x014a0043_Death_08), DEBUGSTRING("CCyborg::H0x014a0043_Death_08")},
 {0x014a0044, -1, CEntity::pEventHandler(&CCyborg::H0x014a0044_Death_09), DEBUGSTRING("CCyborg::H0x014a0044_Death_09")},
 {1, -1, CEntity::pEventHandler(&CCyborg::Main),DEBUGSTRING("CCyborg::Main")},
};
#define CCyborg_handlersct ARRAYCOUNT(CCyborg_handlers)

CEntity *CCyborg_New(void) { return new CCyborg; };
void CCyborg_OnInitClass(void) {};
void CCyborg_OnEndClass(void) {};
void CCyborg_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCyborg_OnWorldEnd(CWorld *pwo) {};
void CCyborg_OnWorldInit(CWorld *pwo) {};
void CCyborg_OnWorldTick(CWorld *pwo) {};
void CCyborg_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCyborg, CEnemyBase, "Cyborg", "Thumbnails\\Cyborg.tbn", 330);
DECLARE_CTFILENAME(_fnmCCyborg_tbn, "Thumbnails\\Cyborg.tbn");
