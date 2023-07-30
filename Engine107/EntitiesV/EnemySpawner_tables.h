// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

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
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000130<<8)+1, offsetof(CEnemySpawner, m_penTarget), "Template Target", 'T', "m_penTarget", C_BLUE  | 0x20, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000130<<8)+2, offsetof(CEnemySpawner, m_strDescription), "", 0, "m_strDescription", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000130<<8)+3, offsetof(CEnemySpawner, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_RANGE, NULL, (0x00000130<<8)+6, offsetof(CEnemySpawner, m_fInnerCircle), "Circle inner", 'V', "m_fInnerCircle", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_RANGE, NULL, (0x00000130<<8)+7, offsetof(CEnemySpawner, m_fOuterCircle), "Circle outer", 'B', "m_fOuterCircle", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000130<<8)+9, offsetof(CEnemySpawner, m_tmDelay), "Delay initial", 'W', "m_tmDelay", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000130<<8)+16, offsetof(CEnemySpawner, m_tmSingleWait), "Delay single", 'O', "m_tmSingleWait", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000130<<8)+5, offsetof(CEnemySpawner, m_tmGroupWait), "Delay group", 'G', "m_tmGroupWait", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x00000130<<8)+17, offsetof(CEnemySpawner, m_ctGroupSize), "Count group", 0, "m_ctGroupSize", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x00000130<<8)+8, offsetof(CEnemySpawner, m_ctTotal), "Count total", 'C', "m_ctTotal", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000130<<8)+13, offsetof(CEnemySpawner, m_penPatrol), "Patrol target", 'P', "m_penPatrol", C_lGREEN  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EnemySpawnerType_enum, (0x00000130<<8)+15, offsetof(CEnemySpawner, m_estType), "Type", 'Y', "m_estType", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000130<<8)+18, offsetof(CEnemySpawner, m_bTelefrag), "Telefrag", 'F', "m_bTelefrag", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000130<<8)+19, offsetof(CEnemySpawner, m_bSpawnEffect), "SpawnEffect", 'S', "m_bSpawnEffect", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000130<<8)+20, offsetof(CEnemySpawner, m_bDoubleInSerious), "Double in serious mode", 0, "m_bDoubleInSerious", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000130<<8)+21, offsetof(CEnemySpawner, m_penSeriousTarget), "Template for Serious", 0, "m_penSeriousTarget", C_RED  | 0x20, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000130<<8)+22, offsetof(CEnemySpawner, m_bFirstPass), "", 0, "m_bFirstPass", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000130<<8)+50, offsetof(CEnemySpawner, m_soSpawn), "", 0, "m_soSpawn", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x00000130<<8)+51, offsetof(CEnemySpawner, m_iInGroup), "", 0, "m_iInGroup", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x00000130<<8)+52, offsetof(CEnemySpawner, m_iEnemiesTriggered), "", 0, "m_iEnemiesTriggered", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000130<<8)+60, offsetof(CEnemySpawner, m_penTacticsHolder), "Tactics Holder", 0, "m_penTacticsHolder", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000130<<8)+61, offsetof(CEnemySpawner, m_bTacticsAutostart), "Tactics autostart", 0, "m_bTacticsAutostart", 0x7F0000FFUL, 0),
};
#define CEnemySpawner_propertiesct ARRAYCOUNT(CEnemySpawner_properties)

CEntityComponent CEnemySpawner_components[] = {
#define MODEL_ENEMYSPAWNER ((0x00000130<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_ENEMYSPAWNER, "EFNM" "Models\\Editor\\EnemySpawner.mdl"),
#define TEXTURE_ENEMYSPAWNER ((0x00000130<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ENEMYSPAWNER, "EFNM" "Models\\Editor\\EnemySpawner.tex"),
#define CLASS_BASIC_EFFECT ((0x00000130<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
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
ENTITY_CLASSDEFINITION(CEnemySpawner, CRationalEntity, "Enemy Spawner", "Thumbnails\\EnemySpawner.tbn", 0x00000130);
DECLARE_CTFILENAME(_fnmCEnemySpawner_tbn, "Thumbnails\\EnemySpawner.tbn");
