// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEnemyMarker

CEntityProperty CEnemyMarker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x12e<<8)+1, 0xF4, "", 0, "m_fWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x12e<<8)+3, 0xF8, "Marker Range", 'M', "m_fMarkerRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x12e<<8)+11, 0xFC, "Patrol Area Inner", 'R', "m_fPatrolAreaInner", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x12e<<8)+12, 0x100, "Patrol Area Outer", 'E', "m_fPatrolAreaOuter", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x12e<<8)+13, 0x104, "Patrol Time", 'P', "m_fPatrolTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BoolEType_enum, (0x12e<<8)+14, 0x108, "Run to marker", 'O', "m_betRunToMarker", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BoolEType_enum, (0x12e<<8)+15, 0x10C, "Fly", 'F', "m_betFly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BoolEType_enum, (0x12e<<8)+16, 0x110, "Blind", 'B', "m_betBlind", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BoolEType_enum, (0x12e<<8)+17, 0x114, "Deaf", 'D', "m_betDeaf", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x12e<<8)+18, 0x118, "Start Tactics", 0, "m_bStartTactics", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x12e<<8)+19, 0x11C, "Allow give up get closer", 0, "m_bGetCloser", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x12e<<8)+20, 0x120, "Random target 1", 0, "m_pTarget01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x12e<<8)+21, 0x124, "Random target 2", 0, "m_pTarget02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x12e<<8)+22, 0x128, "Random target 3", 0, "m_pTarget03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x12e<<8)+23, 0x12C, "Random target 4", 0, "m_pTarget04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x12e<<8)+24, 0x130, "Random target 5", 0, "m_pTarget05", 0x7F0000FFUL, 0),
};
#define CEnemyMarker_propertiesct ARRAYCOUNT(CEnemyMarker_properties)

CEntityComponent CEnemyMarker_components[] = {
#define MODEL_MARKER ((0x0000012e<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\EnemyMarker.mdl"),
#define TEXTURE_MARKER ((0x0000012e<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\EnemyMarker.tex"),
};
#define CEnemyMarker_componentsct ARRAYCOUNT(CEnemyMarker_components)

CEventHandlerEntry CEnemyMarker_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEnemyMarker::Main),DEBUGSTRING("CEnemyMarker::Main")},
};
#define CEnemyMarker_handlersct ARRAYCOUNT(CEnemyMarker_handlers)

CEntity *CEnemyMarker_New(void) { return new CEnemyMarker; };
void CEnemyMarker_OnInitClass(void) {};
void CEnemyMarker_OnEndClass(void) {};
void CEnemyMarker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemyMarker_OnWorldEnd(CWorld *pwo) {};
void CEnemyMarker_OnWorldInit(CWorld *pwo) {};
void CEnemyMarker_OnWorldTick(CWorld *pwo) {};
void CEnemyMarker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemyMarker, CMarker, "Enemy Marker", "Thumbnails\\EnemyMarker.tbn", 302);
DECLARE_CTFILENAME(_fnmCEnemyMarker_tbn, "Thumbnails\\EnemyMarker.tbn");
