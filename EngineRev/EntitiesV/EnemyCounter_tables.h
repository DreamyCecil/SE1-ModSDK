// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEnemyCounter

CEntityProperty CEnemyCounter_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x153<<8)+1, 0x110, "", 0, "m_penMainMusicHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x153<<8)+2, 0x114, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x153<<8)+4, 0x118, "Count start", 'A', "m_iCountFrom", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x153<<8)+5, 0x11C, "", 0, "m_iCount", 0x0UL, 0),
};
#define CEnemyCounter_propertiesct ARRAYCOUNT(CEnemyCounter_properties)

CEntityComponent CEnemyCounter_components[] = {
#define SOUND_TICK ((0x00000153<<8)+0)
 CEntityComponent(ECT_SOUND, SOUND_TICK, "EFNM" "Sounds\\Menu\\Select.wav"),
#define MODEL_MARKER ((0x00000153<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x00000153<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CEnemyCounter_componentsct ARRAYCOUNT(CEnemyCounter_components)

CEventHandlerEntry CEnemyCounter_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEnemyCounter::Main),DEBUGSTRING("CEnemyCounter::Main")},
 {0x01530000, -1, CEntity::pEventHandler(&CEnemyCounter::H0x01530000_Main_01), DEBUGSTRING("CEnemyCounter::H0x01530000_Main_01")},
 {0x01530001, -1, CEntity::pEventHandler(&CEnemyCounter::H0x01530001_Main_02), DEBUGSTRING("CEnemyCounter::H0x01530001_Main_02")},
 {0x01530002, -1, CEntity::pEventHandler(&CEnemyCounter::H0x01530002_Main_03), DEBUGSTRING("CEnemyCounter::H0x01530002_Main_03")},
 {0x01530003, -1, CEntity::pEventHandler(&CEnemyCounter::H0x01530003_Main_04), DEBUGSTRING("CEnemyCounter::H0x01530003_Main_04")},
};
#define CEnemyCounter_handlersct ARRAYCOUNT(CEnemyCounter_handlers)

CEntity *CEnemyCounter_New(void) { return new CEnemyCounter; };
void CEnemyCounter_OnInitClass(void) {};
void CEnemyCounter_OnEndClass(void) {};
void CEnemyCounter_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemyCounter_OnWorldEnd(CWorld *pwo) {};
void CEnemyCounter_OnWorldInit(CWorld *pwo) {};
void CEnemyCounter_OnWorldTick(CWorld *pwo) {};
void CEnemyCounter_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemyCounter, CRationalEntity, "EnemyCounter", "Thumbnails\\EnemyCounter.tbn", 339);
DECLARE_CTFILENAME(_fnmCEnemyCounter_tbn, "Thumbnails\\EnemyCounter.tbn");
