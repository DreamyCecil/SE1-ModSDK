// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEruptor

CEntityProperty CEruptor_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+10, 0x358, "Er StretchAll", 0, "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+11, 0x35C, "Er StretchX", 0, "m_fStretchX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+12, 0x360, "Er StretchY", 0, "m_fStretchY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+13, 0x364, "Er StretchZ", 0, "m_fStretchZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd5<<8)+15, 0x368, "Er Stretch Random", 0, "m_bRandomStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+16, 0x36C, "Er Stretch Height (Y%)", 0, "m_fStretchHeight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+17, 0x370, "Er Stretch Width (X%)", 0, "m_fStretchWidth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+18, 0x374, "Er Stretch Depth (Z%)", 0, "m_fStretchDepth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+20, 0x378, "Er Angle", 'Q', "m_fAngle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+21, 0x37C, "Er Speed max", 'V', "m_fMaxSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+22, 0x380, "Er Speed min", 'B', "m_fMinSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+23, 0x384, "Er Spawn time", 'F', "m_fTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+24, 0x388, "Er Random wait", 'G', "m_fRandomWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileType_enum, (0xd5<<8)+25, 0x38C, "Er Type", 'T', "m_ptType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd5<<8)+26, 0x390, "Er Shoot In Arc", 'S', "m_bShootInArc", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd5<<8)+27, 0x394, "Er projectile stretch", 0, "m_fProjectileStretch", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CEruptor, CModelHolder2, "Eruptor", "Thumbnails\\Eruptor.tbn", 213);
DECLARE_CTFILENAME(_fnmCEruptor_tbn, "Thumbnails\\Eruptor.tbn");
