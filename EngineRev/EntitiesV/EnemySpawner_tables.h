// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(EnemySpawnerType)
  EP_ENUMVALUE(EST_SIMPLE, "Simple"),
  EP_ENUMVALUE(EST_RESPAWNER, "Respawner"),
  EP_ENUMVALUE(EST_DESTROYABLE, "Destroyable"),
  EP_ENUMVALUE(EST_TRIGGERED, "Triggered"),
  EP_ENUMVALUE(EST_TELEPORTER, "Teleporter"),
  EP_ENUMVALUE(EST_RESPAWNERBYONE, "OBSOLETE - Don't use!"),
  EP_ENUMVALUE(EST_MAINTAINGROUP, "MaintainGroup"),
  EP_ENUMVALUE(EST_RESPAWNGROUP, "RespawnerByGroup"),
EP_ENUMEND(EnemySpawnerType);

#define ENTITYCLASS CEnemySpawner

CEntityProperty CEnemySpawner_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x130<<8)+1, 0x110, "Template Target", 'T', "m_penTarget", 0xFF20UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x130<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x130<<8)+3, 0x118, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x130<<8)+6, 0x11C, "Circle inner", 'V', "m_fInnerCircle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x130<<8)+7, 0x120, "Circle outer", 'B', "m_fOuterCircle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+9, 0x124, "Delay initial", 'W', "m_tmDelay", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+16, 0x128, "Delay single", 'O', "m_tmSingleWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+5, 0x12C, "Delay group", 'G', "m_tmGroupWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x130<<8)+17, 0x130, "Count group", 0, "m_ctGroupSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x130<<8)+8, 0x134, "Count total", 'C', "m_ctTotal", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x130<<8)+13, 0x138, "Patrol target", 'P', "m_penPatrol", 0x7FFF7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EnemySpawnerType_enum, (0x130<<8)+15, 0x13C, "Type", 'Y', "m_estType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+18, 0x140, "Telefrag", 'F', "m_bTelefrag", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+19, 0x144, "SpawnEffect", 'S', "m_bSpawnEffect", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+20, 0x148, "Double in serious mode", 0, "m_bDoubleInSerious", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x130<<8)+21, 0x14C, "Template for Serious", 0, "m_penSeriousTarget", 0xFF000020UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+22, 0x150, "", 0, "m_bFirstPass", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x130<<8)+50, 0x154, "", 0, "m_soSpawn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x130<<8)+51, 0x1D0, "", 0, "m_iInGroup", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x130<<8)+52, 0x1D4, "", 0, "m_iEnemiesTriggered", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x130<<8)+60, 0x1D8, "Tactics Holder", 0, "m_penTacticsHolder", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+61, 0x1DC, "Tactics autostart", 0, "m_bTacticsAutostart", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+62, 0x1E0, "Delay single random add", 0, "m_tmSingleWaitRandomAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+63, 0x1E4, "Delay initial random add", 0, "m_tmDelayRandomAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x130<<8)+66, 0x1E8, "Delay group random add", 0, "m_tmGroupWaitRandomAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+64, 0x1EC, "Can be toggled", 0, "m_bCanBeToggled", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+65, 0x1F0, "", 0, "m_bActivated", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x130<<8)+70, 0x1F4, "Infinite", 0, "m_bInfinite", 0x7F0000FFUL, 0),
};
#define CEnemySpawner_propertiesct ARRAYCOUNT(CEnemySpawner_properties)

CEntityComponent CEnemySpawner_components[] = {
#define MODEL_ENEMYSPAWNER ((0x00000130<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_ENEMYSPAWNER, "EFNM" "Models\\Editor\\EnemySpawner.mdl"),
#define TEXTURE_ENEMYSPAWNER ((0x00000130<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ENEMYSPAWNER, "EFNM" "Models\\Editor\\EnemySpawner.tex"),
#define CLASS_BASIC_EFFECT ((0x00000130<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CEnemySpawner_CLASS_4 0x13004 // (0x130<<8)+4
 CEntityComponent(ECT_CLASS, CEnemySpawner_CLASS_4, "EFNM" "Classes\\Projectile.ecl"),
#define CEnemySpawner_MODEL_10 0x1300A // (0x130<<8)+10
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_10, "EFNM" "Models\\Weapons\\Cannon\\Body.mdl"),
#define CEnemySpawner_TEXTURE_11 0x1300B // (0x130<<8)+11
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_11, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define CEnemySpawner_TEXTURE_12 0x1300C // (0x130<<8)+12
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_12, "EFNM" "Models\\Enemies\\Walker\\Walker03.tex"),
#define CEnemySpawner_TEXTURE_13 0x1300D // (0x130<<8)+13
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_13, "EFNM" "Models\\Enemies\\Walker\\Walker04.tex"),
#define CEnemySpawner_TEXTURE_14 0x1300E // (0x130<<8)+14
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_14, "EFNM" "Models\\Enemies\\Walker\\Spawner.tex"),
#define CEnemySpawner_MODEL_15 0x1300F // (0x130<<8)+15
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_15, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.mdl"),
#define CEnemySpawner_TEXTURE_16 0x13010 // (0x130<<8)+16
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_16, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.tex"),
#define CEnemySpawner_SOUND_17 0x13011 // (0x130<<8)+17
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_17, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Idle.wav"),
#define CEnemySpawner_SOUND_18 0x13012 // (0x130<<8)+18
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_18, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Jump.wav"),
#define CEnemySpawner_SOUND_19 0x13013 // (0x130<<8)+19
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_19, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\JumpDeath.wav"),
#define CEnemySpawner_SOUND_20 0x13014 // (0x130<<8)+20
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_20, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Sight.wav"),
#define CEnemySpawner_SOUND_21 0x13015 // (0x130<<8)+21
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_21, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Idle.wav"),
#define CEnemySpawner_SOUND_22 0x13016 // (0x130<<8)+22
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_22, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Sight.wav"),
#define CEnemySpawner_SOUND_23 0x13017 // (0x130<<8)+23
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_23, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Fire.wav"),
#define CEnemySpawner_SOUND_24 0x13018 // (0x130<<8)+24
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_24, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Death.wav"),
#define CEnemySpawner_SOUND_25 0x13019 // (0x130<<8)+25
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_25, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Walk.wav"),
#define CEnemySpawner_MODEL_26 0x1301A // (0x130<<8)+26
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_26, "EFNM" "Models\\Enemies\\Headman\\RocketLauncher.mdl"),
#define CEnemySpawner_MODEL_27 0x1301B // (0x130<<8)+27
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_27, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.mdl"),
#define CEnemySpawner_MODEL_28 0x1301C // (0x130<<8)+28
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_28, "EFNM" "Models\\Enemies\\Headman\\CommandoHead.mdl"),
#define CEnemySpawner_TEXTURE_29 0x1301D // (0x130<<8)+29
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_29, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.tex"),
#define CEnemySpawner_TEXTURE_30 0x1301E // (0x130<<8)+30
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_30, "EFNM" "Models\\Enemies\\Headman\\Commando.tex"),
#define CEnemySpawner_TEXTURE_31 0x1301F // (0x130<<8)+31
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_31, "EFNM" "Models\\Enemies\\Headman\\CommandoHead.tex"),
#define CEnemySpawner_TEXTURE_32 0x13020 // (0x130<<8)+32
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_32, "EFNM" "Models\\Enemies\\Headman\\Vaporwave.tex"),
#define CEnemySpawner_SOUND_48 0x13030 // (0x130<<8)+48
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_48, "EFNM" "Models\\Enemies\\Headman\\Sounds\\AttackKamikaze.wav"),
#define CEnemySpawner_SOUND_49 0x13031 // (0x130<<8)+49
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_49, "EFNM" "Models\\Enemies\\Headman\\Sounds\\IdleKamikaze.wav"),
#define CEnemySpawner_SOUND_50 0x13032 // (0x130<<8)+50
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_50, "EFNM" "Models\\Enemies\\Headman\\Sounds\\FireBomberman.wav"),
#define CEnemySpawner_TEXTURE_51 0x13033 // (0x130<<8)+51
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_51, "EFNM" "Models\\Enemies\\Scorpman\\Monster.tex"),
#define CEnemySpawner_MODEL_52 0x13034 // (0x130<<8)+52
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_52, "EFNM" "Models\\Enemies\\Headman\\FirecrackerHead.mdl"),
#define CEnemySpawner_TEXTURE_53 0x13035 // (0x130<<8)+53
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_53, "EFNM" "Models\\Enemies\\Headman\\FirecrackerHead.tex"),
#define CEnemySpawner_MODEL_54 0x13036 // (0x130<<8)+54
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_54, "EFNM" "Models\\Enemies\\Headman\\ChainSaw.mdl"),
#define CEnemySpawner_TEXTURE_55 0x13037 // (0x130<<8)+55
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_55, "EFNM" "Models\\Enemies\\Headman\\Chainsaw.tex"),
#define CEnemySpawner_SOUND_56 0x13038 // (0x130<<8)+56
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_56, "EFNM" "Models\\Enemies\\Headman\\Sounds\\FireFirecracker.wav"),
#define CEnemySpawner_MODEL_60 0x1303C // (0x130<<8)+60
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_60, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalMan.mdl"),
#define CEnemySpawner_MODEL_61 0x1303D // (0x130<<8)+61
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_61, "EFNM" "Models\\Enemies\\ElementalMan\\BodyFlare.mdl"),
#define CEnemySpawner_MODEL_62 0x1303E // (0x130<<8)+62
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_62, "EFNM" "Models\\Enemies\\ElementalMan\\HandFlare.mdl"),
#define CEnemySpawner_SOUND_63 0x1303F // (0x130<<8)+63
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_63, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Idle.wav"),
#define CEnemySpawner_SOUND_64 0x13040 // (0x130<<8)+64
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_64, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Wound.wav"),
#define CEnemySpawner_SOUND_65 0x13041 // (0x130<<8)+65
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_65, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Fire.wav"),
#define CEnemySpawner_SOUND_66 0x13042 // (0x130<<8)+66
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_66, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Kick.wav"),
#define CEnemySpawner_SOUND_67 0x13043 // (0x130<<8)+67
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_67, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Death.wav"),
#define CEnemySpawner_SOUND_68 0x13044 // (0x130<<8)+68
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_68, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\LavaBurn.wav"),
#define CEnemySpawner_SOUND_69 0x13045 // (0x130<<8)+69
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_69, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Anger.wav"),
#define CEnemySpawner_SOUND_70 0x13046 // (0x130<<8)+70
 CEntityComponent(ECT_SOUND, CEnemySpawner_SOUND_70, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Grow.wav"),
#define CEnemySpawner_TEXTURE_71 0x13047 // (0x130<<8)+71
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_71, "EFNM" "Models\\Enemies\\ElementalMan\\AirMan.tex"),
#define CEnemySpawner_TEXTURE_73 0x13049 // (0x130<<8)+73
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_73, "EFNM" "Models\\Enemies\\ElementalMan\\AirDetail.tex"),
#define CEnemySpawner_TEXTURE_74 0x1304A // (0x130<<8)+74
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_74, "EFNM" "Models\\Enemies\\ElementalMan\\LavaMan.tex"),
#define CEnemySpawner_TEXTURE_75 0x1304B // (0x130<<8)+75
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_75, "EFNM" "Models\\Enemies\\ElementalMan\\LavaDetail.tex"),
#define CEnemySpawner_TEXTURE_76 0x1304C // (0x130<<8)+76
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_76, "EFNM" "Models\\Enemies\\ElementalMan\\LavaFlare.tex"),
#define CEnemySpawner_TEXTURE_77 0x1304D // (0x130<<8)+77
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_77, "EFNM" "Models\\Enemies\\ElementalMan\\EarthMan.tex"),
#define CEnemySpawner_TEXTURE_79 0x1304F // (0x130<<8)+79
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_79, "EFNM" "Models\\Enemies\\ElementalMan\\EarthDetail.tex"),
#define CEnemySpawner_TEXTURE_80 0x13050 // (0x130<<8)+80
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_80, "EFNM" "Models\\Enemies\\ElementalMan\\WaterMan.tex"),
#define CEnemySpawner_TEXTURE_81 0x13051 // (0x130<<8)+81
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_81, "EFNM" "Models\\Enemies\\ElementalMan\\WaterFlare.tex"),
#define CEnemySpawner_TEXTURE_82 0x13052 // (0x130<<8)+82
 CEntityComponent(ECT_TEXTURE, CEnemySpawner_TEXTURE_82, "EFNM" "Models\\Enemies\\ElementalMan\\WaterDetail.tex"),
#define CEnemySpawner_MODEL_83 0x13053 // (0x130<<8)+83
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_83, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalEarth.mdl"),
#define CEnemySpawner_MODEL_84 0x13054 // (0x130<<8)+84
 CEntityComponent(ECT_MODEL, CEnemySpawner_MODEL_84, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalAir.mdl"),
};
#define CEnemySpawner_componentsct ARRAYCOUNT(CEnemySpawner_components)

CEventHandlerEntry CEnemySpawner_handlers[] = {
 {0x01300000, -1, CEntity::pEventHandler(&CEnemySpawner::SpawnGroup),DEBUGSTRING("CEnemySpawner::SpawnGroup")},
 {0x01300001, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300001_SpawnGroup_01), DEBUGSTRING("CEnemySpawner::H0x01300001_SpawnGroup_01")},
 {0x01300002, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300002_SpawnGroup_02), DEBUGSTRING("CEnemySpawner::H0x01300002_SpawnGroup_02")},
 {0x01300003, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300003_SpawnGroup_03), DEBUGSTRING("CEnemySpawner::H0x01300003_SpawnGroup_03")},
 {0x01300004, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300004_SpawnGroup_04), DEBUGSTRING("CEnemySpawner::H0x01300004_SpawnGroup_04")},
 {0x01300005, -1, CEntity::pEventHandler(&CEnemySpawner::Simple),DEBUGSTRING("CEnemySpawner::Simple")},
 {0x01300006, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300006_Simple_01), DEBUGSTRING("CEnemySpawner::H0x01300006_Simple_01")},
 {0x01300007, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300007_Simple_02), DEBUGSTRING("CEnemySpawner::H0x01300007_Simple_02")},
 {0x01300008, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300008_Simple_03), DEBUGSTRING("CEnemySpawner::H0x01300008_Simple_03")},
 {0x01300009, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300009_Simple_04), DEBUGSTRING("CEnemySpawner::H0x01300009_Simple_04")},
 {0x0130000a, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000a_Simple_05), DEBUGSTRING("CEnemySpawner::H0x0130000a_Simple_05")},
 {0x0130000b, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000b_Simple_06), DEBUGSTRING("CEnemySpawner::H0x0130000b_Simple_06")},
 {0x0130000c, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000c_Simple_07), DEBUGSTRING("CEnemySpawner::H0x0130000c_Simple_07")},
 {0x0130000d, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000d_Simple_08), DEBUGSTRING("CEnemySpawner::H0x0130000d_Simple_08")},
 {0x0130000e, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000e_Simple_09), DEBUGSTRING("CEnemySpawner::H0x0130000e_Simple_09")},
 {0x0130000f, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130000f_Simple_10), DEBUGSTRING("CEnemySpawner::H0x0130000f_Simple_10")},
 {0x01300010, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300010_Simple_11), DEBUGSTRING("CEnemySpawner::H0x01300010_Simple_11")},
 {0x01300011, -1, CEntity::pEventHandler(&CEnemySpawner::Teleporter),DEBUGSTRING("CEnemySpawner::Teleporter")},
 {0x01300012, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300012_Teleporter_01), DEBUGSTRING("CEnemySpawner::H0x01300012_Teleporter_01")},
 {0x01300013, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300013_Teleporter_02), DEBUGSTRING("CEnemySpawner::H0x01300013_Teleporter_02")},
 {0x01300014, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300014_Teleporter_03), DEBUGSTRING("CEnemySpawner::H0x01300014_Teleporter_03")},
 {0x01300015, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300015_Teleporter_04), DEBUGSTRING("CEnemySpawner::H0x01300015_Teleporter_04")},
 {0x01300016, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300016_Teleporter_05), DEBUGSTRING("CEnemySpawner::H0x01300016_Teleporter_05")},
 {0x01300017, -1, CEntity::pEventHandler(&CEnemySpawner::Respawner),DEBUGSTRING("CEnemySpawner::Respawner")},
 {0x01300018, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300018_Respawner_01), DEBUGSTRING("CEnemySpawner::H0x01300018_Respawner_01")},
 {0x01300019, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300019_Respawner_02), DEBUGSTRING("CEnemySpawner::H0x01300019_Respawner_02")},
 {0x0130001a, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001a_Respawner_03), DEBUGSTRING("CEnemySpawner::H0x0130001a_Respawner_03")},
 {0x0130001b, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001b_Respawner_04), DEBUGSTRING("CEnemySpawner::H0x0130001b_Respawner_04")},
 {0x0130001c, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001c_Respawner_05), DEBUGSTRING("CEnemySpawner::H0x0130001c_Respawner_05")},
 {0x0130001d, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001d_Respawner_06), DEBUGSTRING("CEnemySpawner::H0x0130001d_Respawner_06")},
 {0x0130001e, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001e_Respawner_07), DEBUGSTRING("CEnemySpawner::H0x0130001e_Respawner_07")},
 {0x0130001f, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130001f_Respawner_08), DEBUGSTRING("CEnemySpawner::H0x0130001f_Respawner_08")},
 {0x01300020, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300020_Respawner_09), DEBUGSTRING("CEnemySpawner::H0x01300020_Respawner_09")},
 {0x01300021, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300021_Respawner_10), DEBUGSTRING("CEnemySpawner::H0x01300021_Respawner_10")},
 {0x01300022, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300022_Respawner_11), DEBUGSTRING("CEnemySpawner::H0x01300022_Respawner_11")},
 {0x01300023, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300023_Respawner_12), DEBUGSTRING("CEnemySpawner::H0x01300023_Respawner_12")},
 {0x01300024, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300024_Respawner_13), DEBUGSTRING("CEnemySpawner::H0x01300024_Respawner_13")},
 {0x01300025, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300025_Respawner_14), DEBUGSTRING("CEnemySpawner::H0x01300025_Respawner_14")},
 {0x01300026, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300026_Respawner_15), DEBUGSTRING("CEnemySpawner::H0x01300026_Respawner_15")},
 {0x01300027, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300027_Respawner_16), DEBUGSTRING("CEnemySpawner::H0x01300027_Respawner_16")},
 {0x01300028, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300028_Respawner_17), DEBUGSTRING("CEnemySpawner::H0x01300028_Respawner_17")},
 {0x01300029, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300029_Respawner_18), DEBUGSTRING("CEnemySpawner::H0x01300029_Respawner_18")},
 {0x0130002a, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002a_Respawner_19), DEBUGSTRING("CEnemySpawner::H0x0130002a_Respawner_19")},
 {0x0130002b, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002b_Respawner_20), DEBUGSTRING("CEnemySpawner::H0x0130002b_Respawner_20")},
 {0x0130002c, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002c_Respawner_21), DEBUGSTRING("CEnemySpawner::H0x0130002c_Respawner_21")},
 {0x0130002d, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002d_Respawner_22), DEBUGSTRING("CEnemySpawner::H0x0130002d_Respawner_22")},
 {0x0130002e, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002e_Respawner_23), DEBUGSTRING("CEnemySpawner::H0x0130002e_Respawner_23")},
 {0x0130002f, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130002f_Respawner_24), DEBUGSTRING("CEnemySpawner::H0x0130002f_Respawner_24")},
 {0x01300030, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300030_Respawner_25), DEBUGSTRING("CEnemySpawner::H0x01300030_Respawner_25")},
 {0x01300031, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300031_Respawner_26), DEBUGSTRING("CEnemySpawner::H0x01300031_Respawner_26")},
 {0x01300032, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300032_Respawner_27), DEBUGSTRING("CEnemySpawner::H0x01300032_Respawner_27")},
 {0x01300033, -1, CEntity::pEventHandler(&CEnemySpawner::DestroyableInactive),DEBUGSTRING("CEnemySpawner::DestroyableInactive")},
 {0x01300034, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300034_DestroyableInactive_01), DEBUGSTRING("CEnemySpawner::H0x01300034_DestroyableInactive_01")},
 {0x01300035, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300035_DestroyableInactive_02), DEBUGSTRING("CEnemySpawner::H0x01300035_DestroyableInactive_02")},
 {0x01300036, -1, CEntity::pEventHandler(&CEnemySpawner::DestroyableActiveSpawning),DEBUGSTRING("CEnemySpawner::DestroyableActiveSpawning")},
 {0x01300037, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300037_DestroyableActiveSpawning_01), DEBUGSTRING("CEnemySpawner::H0x01300037_DestroyableActiveSpawning_01")},
 {0x01300038, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300038_DestroyableActiveSpawning_02), DEBUGSTRING("CEnemySpawner::H0x01300038_DestroyableActiveSpawning_02")},
 {0x01300039, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300039_DestroyableActiveSpawning_03), DEBUGSTRING("CEnemySpawner::H0x01300039_DestroyableActiveSpawning_03")},
 {0x0130003a, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130003a_DestroyableActiveSpawning_04), DEBUGSTRING("CEnemySpawner::H0x0130003a_DestroyableActiveSpawning_04")},
 {0x0130003b, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130003b_DestroyableActiveSpawning_05), DEBUGSTRING("CEnemySpawner::H0x0130003b_DestroyableActiveSpawning_05")},
 {0x0130003c, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130003c_DestroyableActiveSpawning_06), DEBUGSTRING("CEnemySpawner::H0x0130003c_DestroyableActiveSpawning_06")},
 {0x0130003d, -1, CEntity::pEventHandler(&CEnemySpawner::DestroyableActive),DEBUGSTRING("CEnemySpawner::DestroyableActive")},
 {0x0130003e, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130003e_DestroyableActive_01), DEBUGSTRING("CEnemySpawner::H0x0130003e_DestroyableActive_01")},
 {0x0130003f, -1, CEntity::pEventHandler(&CEnemySpawner::H0x0130003f_DestroyableActive_02), DEBUGSTRING("CEnemySpawner::H0x0130003f_DestroyableActive_02")},
 {0x01300040, -1, CEntity::pEventHandler(&CEnemySpawner::Destroyable),DEBUGSTRING("CEnemySpawner::Destroyable")},
 {0x01300041, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300041_Destroyable_01), DEBUGSTRING("CEnemySpawner::H0x01300041_Destroyable_01")},
 {0x01300042, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300042_Destroyable_02), DEBUGSTRING("CEnemySpawner::H0x01300042_Destroyable_02")},
 {1, -1, CEntity::pEventHandler(&CEnemySpawner::Main),DEBUGSTRING("CEnemySpawner::Main")},
 {0x01300043, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300043_Main_01), DEBUGSTRING("CEnemySpawner::H0x01300043_Main_01")},
 {0x01300044, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300044_Main_02), DEBUGSTRING("CEnemySpawner::H0x01300044_Main_02")},
 {0x01300045, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300045_Main_03), DEBUGSTRING("CEnemySpawner::H0x01300045_Main_03")},
 {0x01300046, -1, CEntity::pEventHandler(&CEnemySpawner::H0x01300046_Main_04), DEBUGSTRING("CEnemySpawner::H0x01300046_Main_04")},
};
#define CEnemySpawner_handlersct ARRAYCOUNT(CEnemySpawner_handlers)

CEntity *CEnemySpawner_New(void) { return new CEnemySpawner; };
void CEnemySpawner_OnInitClass(void) {};
void CEnemySpawner_OnEndClass(void) {};
void CEnemySpawner_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemySpawner_OnWorldEnd(CWorld *pwo) {};
void CEnemySpawner_OnWorldInit(CWorld *pwo) {};
void CEnemySpawner_OnWorldTick(CWorld *pwo) {};
void CEnemySpawner_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemySpawner, CRationalEntity, "Enemy Spawner", "Thumbnails\\EnemySpawner.tbn", 304);
DECLARE_CTFILENAME(_fnmCEnemySpawner_tbn, "Thumbnails\\EnemySpawner.tbn");
