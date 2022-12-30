// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CEruptor

CEntityProperty CEruptor_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+10, offsetof(CEruptor, m_fStretchAll), "Er StretchAll", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+11, offsetof(CEruptor, m_fStretchX), "Er StretchX", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+12, offsetof(CEruptor, m_fStretchY), "Er StretchY", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+13, offsetof(CEruptor, m_fStretchZ), "Er StretchZ", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d5<<8)+15, offsetof(CEruptor, m_bRandomStretch), "Er Stretch Random", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+16, offsetof(CEruptor, m_fStretchHeight), "Er Stretch Height (Y%)", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+17, offsetof(CEruptor, m_fStretchWidth), "Er Stretch Width (X%)", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+18, offsetof(CEruptor, m_fStretchDepth), "Er Stretch Depth (Z%)", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+20, offsetof(CEruptor, m_fAngle), "Er Angle", 'Q', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+21, offsetof(CEruptor, m_fMaxSpeed), "Er Speed max", 'V', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+22, offsetof(CEruptor, m_fMinSpeed), "Er Speed min", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+23, offsetof(CEruptor, m_fTime), "Er Spawn time", 'F', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+24, offsetof(CEruptor, m_fRandomWait), "Er Random wait", 'G', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileType_enum, (0x000000d5<<8)+25, offsetof(CEruptor, m_ptType), "Er Type", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d5<<8)+26, offsetof(CEruptor, m_bShootInArc), "Er Shoot In Arc", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d5<<8)+27, offsetof(CEruptor, m_fProjectileStretch), "Er projectile stretch", 0, 0x7F0000FFUL, 0),
};
#define CEruptor_propertiesct ARRAYCOUNT(CEruptor_properties)

CEntityComponent CEruptor_components[] = {
#define CLASS_PROJECTILE ((0x000000d5<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
};
#define CEruptor_componentsct ARRAYCOUNT(CEruptor_components)

CEventHandlerEntry CEruptor_handlers[] = {
 {0x00d50000, -1, CEntity::pEventHandler(&CEruptor::Active),DEBUGSTRING("CEruptor::Active")},
 {0x00d50001, -1, CEntity::pEventHandler(&CEruptor::H0x00d50001_Active_01), DEBUGSTRING("CEruptor::H0x00d50001_Active_01")},
 {0x00d50002, -1, CEntity::pEventHandler(&CEruptor::H0x00d50002_Active_02), DEBUGSTRING("CEruptor::H0x00d50002_Active_02")},
 {0x00d50003, -1, CEntity::pEventHandler(&CEruptor::Inactive),DEBUGSTRING("CEruptor::Inactive")},
 {0x00d50004, -1, CEntity::pEventHandler(&CEruptor::H0x00d50004_Inactive_01), DEBUGSTRING("CEruptor::H0x00d50004_Inactive_01")},
 {0x00d50005, -1, CEntity::pEventHandler(&CEruptor::H0x00d50005_Inactive_02), DEBUGSTRING("CEruptor::H0x00d50005_Inactive_02")},
 {0x00d50006, -1, CEntity::pEventHandler(&CEruptor::AutoSpawns),DEBUGSTRING("CEruptor::AutoSpawns")},
 {0x00d50007, -1, CEntity::pEventHandler(&CEruptor::H0x00d50007_AutoSpawns_01), DEBUGSTRING("CEruptor::H0x00d50007_AutoSpawns_01")},
 {0x00d50008, -1, CEntity::pEventHandler(&CEruptor::H0x00d50008_AutoSpawns_02), DEBUGSTRING("CEruptor::H0x00d50008_AutoSpawns_02")},
 {0x00d50009, -1, CEntity::pEventHandler(&CEruptor::H0x00d50009_AutoSpawns_03), DEBUGSTRING("CEruptor::H0x00d50009_AutoSpawns_03")},
 {0x00d5000a, -1, CEntity::pEventHandler(&CEruptor::H0x00d5000a_AutoSpawns_04), DEBUGSTRING("CEruptor::H0x00d5000a_AutoSpawns_04")},
 {0x00d5000b, -1, CEntity::pEventHandler(&CEruptor::H0x00d5000b_AutoSpawns_05), DEBUGSTRING("CEruptor::H0x00d5000b_AutoSpawns_05")},
 {0x00d5000c, -1, CEntity::pEventHandler(&CEruptor::H0x00d5000c_AutoSpawns_06), DEBUGSTRING("CEruptor::H0x00d5000c_AutoSpawns_06")},
 {0x00d5000d, -1, CEntity::pEventHandler(&CEruptor::H0x00d5000d_AutoSpawns_07), DEBUGSTRING("CEruptor::H0x00d5000d_AutoSpawns_07")},
 {0x00d5000e, -1, CEntity::pEventHandler(&CEruptor::MainLoop),DEBUGSTRING("CEruptor::MainLoop")},
 {0x00d5000f, -1, CEntity::pEventHandler(&CEruptor::H0x00d5000f_MainLoop_01), DEBUGSTRING("CEruptor::H0x00d5000f_MainLoop_01")},
 {0x00d50010, -1, CEntity::pEventHandler(&CEruptor::H0x00d50010_MainLoop_02), DEBUGSTRING("CEruptor::H0x00d50010_MainLoop_02")},
 {1, -1, CEntity::pEventHandler(&CEruptor::Main),DEBUGSTRING("CEruptor::Main")},
};
#define CEruptor_handlersct ARRAYCOUNT(CEruptor_handlers)

CEntity *CEruptor_New(void) { return new CEruptor; };
void CEruptor_OnInitClass(void) {};
void CEruptor_OnEndClass(void) {};
void CEruptor_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEruptor_OnWorldEnd(CWorld *pwo) {};
void CEruptor_OnWorldInit(CWorld *pwo) {};
void CEruptor_OnWorldTick(CWorld *pwo) {};
void CEruptor_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEruptor, CModelHolder2, "Eruptor", "Thumbnails\\Eruptor.tbn", 0x000000d5);
DECLARE_CTFILENAME(_fnmCEruptor_tbn, "Thumbnails\\Eruptor.tbn");
