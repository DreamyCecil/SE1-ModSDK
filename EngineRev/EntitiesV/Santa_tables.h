// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSanta

CEntityProperty CSanta_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x163<<8)+1, 0x5C0, "", 0, "m_tmLastSpawnTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x163<<8)+2, 0x5C4, "Min spawn interval", 0, "m_tmMinSpawnInterval", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x163<<8)+3, 0x5C8, "Santa Health", 0, "m_fSantaHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x163<<8)+4, 0x5CC, "", 0, "m_soRunning", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x163<<8)+5, 0x648, "", 0, "m_bRunSoundPlaying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x163<<8)+10, 0x64C, "Item template 0", 0, "m_penTemplate0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x163<<8)+11, 0x650, "Item template 1", 0, "m_penTemplate1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x163<<8)+12, 0x654, "Item template 2", 0, "m_penTemplate2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x163<<8)+13, 0x658, "Item template 3", 0, "m_penTemplate3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x163<<8)+14, 0x65C, "Item template 4", 0, "m_penTemplate4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x163<<8)+15, 0x660, "", 0, "m_bDied", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x163<<8)+20, 0x664, "Custom Santa model", 0, "m_fnmCustomSantaModel", 0x7F0000FFUL, 0),
};
#define CSanta_propertiesct ARRAYCOUNT(CSanta_properties)

CEntityComponent CSanta_components[] = {
#define CLASS_BASE ((0x00000163<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define SOUND_RUN ((0x00000163<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_RUN, "EFNM" "ModelsMP\\CutSequences\\Santa\\Sounds\\Running.wav"),
#define SOUND_WOUND ((0x00000163<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "ModelsMP\\CutSequences\\Santa\\Sounds\\Wound.wav"),
#define SOUND_DEATH ((0x00000163<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\CutSequences\\Santa\\Sounds\\Death.wav"),
};
#define CSanta_componentsct ARRAYCOUNT(CSanta_components)

CEventHandlerEntry CSanta_handlers[] = {
 {0x01630000, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CSanta::Fire),DEBUGSTRING("CSanta::Fire")},
 {0x01630001, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CSanta::Hit),DEBUGSTRING("CSanta::Hit")},
 {1, -1, CEntity::pEventHandler(&CSanta::Main),DEBUGSTRING("CSanta::Main")},
};
#define CSanta_handlersct ARRAYCOUNT(CSanta_handlers)

CEntity *CSanta_New(void) { return new CSanta; };
void CSanta_OnInitClass(void) {};
void CSanta_OnEndClass(void) {};
void CSanta_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSanta_OnWorldEnd(CWorld *pwo) {};
void CSanta_OnWorldInit(CWorld *pwo) {};
void CSanta_OnWorldTick(CWorld *pwo) {};
void CSanta_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSanta, CEnemyBase, "Santa", "Thumbnails\\Santa.tbn", 355);
DECLARE_CTFILENAME(_fnmCSanta_tbn, "Thumbnails\\Santa.tbn");
