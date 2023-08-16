// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMusicChanger

CEntityProperty CMusicChanger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe1<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe1<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xe1<<8)+3, 0x118, "Music", 'M', "m_fnMusic", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe1<<8)+4, 0x120, "Volume", 'V', "m_fVolume", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &MusicType_enum, (0xe1<<8)+5, 0x124, "Type", 'Y', "m_mtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe1<<8)+6, 0x128, "Force start", 'F', "m_bForceStart", 0x7F0000FFUL, 0),
};
#define CMusicChanger_propertiesct ARRAYCOUNT(CMusicChanger_properties)

CEntityComponent CMusicChanger_components[] = {
#define MODEL_MARKER ((0x000000e1<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\MusicChanger.mdl"),
#define TEXTURE_MARKER ((0x000000e1<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\MusicChanger.tex"),
};
#define CMusicChanger_componentsct ARRAYCOUNT(CMusicChanger_components)

CEventHandlerEntry CMusicChanger_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CMusicChanger::Main),DEBUGSTRING("CMusicChanger::Main")},
 {0x00e10000, -1, CEntity::pEventHandler(&CMusicChanger::H0x00e10000_Main_01), DEBUGSTRING("CMusicChanger::H0x00e10000_Main_01")},
 {0x00e10001, -1, CEntity::pEventHandler(&CMusicChanger::H0x00e10001_Main_02), DEBUGSTRING("CMusicChanger::H0x00e10001_Main_02")},
 {0x00e10002, -1, CEntity::pEventHandler(&CMusicChanger::H0x00e10002_Main_03), DEBUGSTRING("CMusicChanger::H0x00e10002_Main_03")},
 {0x00e10003, -1, CEntity::pEventHandler(&CMusicChanger::H0x00e10003_Main_04), DEBUGSTRING("CMusicChanger::H0x00e10003_Main_04")},
};
#define CMusicChanger_handlersct ARRAYCOUNT(CMusicChanger_handlers)

CEntity *CMusicChanger_New(void) { return new CMusicChanger; };
void CMusicChanger_OnInitClass(void) {};
void CMusicChanger_OnEndClass(void) {};
void CMusicChanger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMusicChanger_OnWorldEnd(CWorld *pwo) {};
void CMusicChanger_OnWorldInit(CWorld *pwo) {};
void CMusicChanger_OnWorldTick(CWorld *pwo) {};
void CMusicChanger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMusicChanger, CRationalEntity, "MusicChanger", "Thumbnails\\MusicChanger.tbn", 225);
DECLARE_CTFILENAME(_fnmCMusicChanger_tbn, "Thumbnails\\MusicChanger.tbn");
