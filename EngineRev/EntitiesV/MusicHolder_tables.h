// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(MusicType)
  EP_ENUMVALUE(MT_LIGHT, "light"),
  EP_ENUMVALUE(MT_MEDIUM, "medium"),
  EP_ENUMVALUE(MT_HEAVY, "heavy"),
  EP_ENUMVALUE(MT_EVENT, "event"),
  EP_ENUMVALUE(MT_CONTINUOUS, "continuous"),
EP_ENUMEND(MusicType);

#define ENTITYCLASS CMusicHolder

CEntityProperty CMusicHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xde<<8)+1, 0x110, "", 0, "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+2, 0x114, "Score Medium", 0, "m_fScoreMedium", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+3, 0x118, "Score Heavy", 0, "m_fScoreHeavy", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xde<<8)+10, 0x11C, "Music Light", 'M', "m_fnMusic0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xde<<8)+11, 0x124, "Music Medium", 0, "m_fnMusic1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xde<<8)+12, 0x12C, "Music Heavy", 0, "m_fnMusic2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xde<<8)+13, 0x134, "", 0, "m_fnMusic3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xde<<8)+14, 0x13C, "", 0, "m_fnMusic4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+20, 0x144, "Volume Light", 'V', "m_fVolume0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+21, 0x148, "Volume Medium", 0, "m_fVolume1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+22, 0x14C, "Volume Heavy", 0, "m_fVolume2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+23, 0x150, "", 0, "m_fVolume3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+24, 0x154, "", 0, "m_fVolume4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xde<<8)+100, 0x158, "", 0, "m_penBoss", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xde<<8)+102, 0x15C, "", 0, "m_penCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+104, 0x160, "", 0, "m_ctEnemiesInWorld", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xde<<8)+105, 0x164, "", 0, "m_penRespawnMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+106, 0x168, "", 0, "m_ctSecretsInWorld", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+101, 0x16C, "", 0, "m_tmFade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &MusicType_enum, (0xde<<8)+103, 0x170, "", 0, "m_mtCurrentMusic", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+110, 0x174, "", 0, "m_fCurrentVolume0a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+210, 0x178, "", 0, "m_fCurrentVolume0b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+111, 0x17C, "", 0, "m_fCurrentVolume1a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+211, 0x180, "", 0, "m_fCurrentVolume1b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+112, 0x184, "", 0, "m_fCurrentVolume2a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+212, 0x188, "", 0, "m_fCurrentVolume2b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+113, 0x18C, "", 0, "m_fCurrentVolume3a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+213, 0x190, "", 0, "m_fCurrentVolume3b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+114, 0x194, "", 0, "m_fCurrentVolume4a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xde<<8)+214, 0x198, "", 0, "m_fCurrentVolume4b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+120, 0x19C, "", 0, "m_soMusic0a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+220, 0x218, "", 0, "m_soMusic0b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+121, 0x294, "", 0, "m_soMusic1a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+221, 0x310, "", 0, "m_soMusic1b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+122, 0x38C, "", 0, "m_soMusic2a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+222, 0x408, "", 0, "m_soMusic2b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+123, 0x484, "", 0, "m_soMusic3a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+223, 0x500, "", 0, "m_soMusic3b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+124, 0x57C, "", 0, "m_soMusic4a", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xde<<8)+224, 0x5F8, "", 0, "m_soMusic4b", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+130, 0x674, "", 0, "m_iSubChannel0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+131, 0x678, "", 0, "m_iSubChannel1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+132, 0x67C, "", 0, "m_iSubChannel2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+133, 0x680, "", 0, "m_iSubChannel3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xde<<8)+134, 0x684, "", 0, "m_iSubChannel4", 0x0UL, 0),
};
#define CMusicHolder_propertiesct ARRAYCOUNT(CMusicHolder_properties)

CEntityComponent CMusicHolder_components[] = {
#define MODEL_MARKER ((0x000000de<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MusicHolder.mdl"),
#define TEXTURE_MARKER ((0x000000de<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MusicHolder.tex"),
};
#define CMusicHolder_componentsct ARRAYCOUNT(CMusicHolder_components)

CEventHandlerEntry CMusicHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMusicHolder::Main),DEBUGSTRING("CMusicHolder::Main")},
 {0x00de0001, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0001_Main_01), DEBUGSTRING("CMusicHolder::H0x00de0001_Main_01")},
 {0x00de0002, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0002_Main_02), DEBUGSTRING("CMusicHolder::H0x00de0002_Main_02")},
 {0x00de0003, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0003_Main_03), DEBUGSTRING("CMusicHolder::H0x00de0003_Main_03")},
 {0x00de0004, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0004_Main_04), DEBUGSTRING("CMusicHolder::H0x00de0004_Main_04")},
 {0x00de0005, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0005_Main_05), DEBUGSTRING("CMusicHolder::H0x00de0005_Main_05")},
 {0x00de0006, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0006_Main_06), DEBUGSTRING("CMusicHolder::H0x00de0006_Main_06")},
 {0x00de0007, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0007_Main_07), DEBUGSTRING("CMusicHolder::H0x00de0007_Main_07")},
 {0x00de0008, -1, CEntity::pEventHandler(&CMusicHolder::H0x00de0008_Main_08), DEBUGSTRING("CMusicHolder::H0x00de0008_Main_08")},
};
#define CMusicHolder_handlersct ARRAYCOUNT(CMusicHolder_handlers)

CEntity *CMusicHolder_New(void) { return new CMusicHolder; };
void CMusicHolder_OnInitClass(void) {};
void CMusicHolder_OnEndClass(void) {};
void CMusicHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMusicHolder_OnWorldEnd(CWorld *pwo) {};
void CMusicHolder_OnWorldInit(CWorld *pwo) {};
void CMusicHolder_OnWorldTick(CWorld *pwo) {};
void CMusicHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMusicHolder, CRationalEntity, "MusicHolder", "Thumbnails\\MusicHolder.tbn", 222);
DECLARE_CTFILENAME(_fnmCMusicHolder_tbn, "Thumbnails\\MusicHolder.tbn");
