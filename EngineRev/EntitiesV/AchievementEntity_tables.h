// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAchievementEntity

CEntityProperty CAchievementEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x6e<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x6e<<8)+2, 0x114, "Achievement / stat", 'A', "m_strAchievement", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6e<<8)+3, 0x118, "Single player only", 0, "m_bSinglePlayerOnly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6e<<8)+4, 0x11C, "Is stat", 0, "m_bStat", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6e<<8)+5, 0x120, "Stat adds", 0, "m_bStatAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6e<<8)+6, 0x124, "Stat is float", 0, "m_bStatFloat", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x6e<<8)+7, 0x128, "Stat amount (INT)", 0, "m_iStatAmount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6e<<8)+8, 0x12C, "Stat amount (FLOAT)", 0, "m_fStatAmount", 0x7F0000FFUL, 0),
};
#define CAchievementEntity_propertiesct ARRAYCOUNT(CAchievementEntity_properties)

CEntityComponent CAchievementEntity_components[] = {
#define CAchievementEntity_MODEL_1 0x6E01 // (0x6e<<8)+1
 CEntityComponent(ECT_MODEL, CAchievementEntity_MODEL_1, "EFNM" "Models\\Editor\\NavigationMarker.mdl"),
#define CAchievementEntity_TEXTURE_2 0x6E02 // (0x6e<<8)+2
 CEntityComponent(ECT_TEXTURE, CAchievementEntity_TEXTURE_2, "EFNM" "Models\\Editor\\NavigationMarker.tex"),
};
#define CAchievementEntity_componentsct ARRAYCOUNT(CAchievementEntity_components)

CEventHandlerEntry CAchievementEntity_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CAchievementEntity::Main), DEBUGSTRING("CAchievementEntity::Main")},
 {0x6E0000, -1, CEntity::pEventHandler(&CAchievementEntity::H0x6E0000_Procedure_1), DEBUGSTRING("CAchievementEntity::H0x6E0000_Procedure_1")},
 {0x6E0001, -1, CEntity::pEventHandler(&CAchievementEntity::H0x6E0001_Procedure_2), DEBUGSTRING("CAchievementEntity::H0x6E0001_Procedure_2")},
 {0x6E0002, -1, CEntity::pEventHandler(&CAchievementEntity::H0x6E0002_Procedure_3), DEBUGSTRING("CAchievementEntity::H0x6E0002_Procedure_3")},
 {0x6E0003, -1, CEntity::pEventHandler(&CAchievementEntity::H0x6E0003_Procedure_4), DEBUGSTRING("CAchievementEntity::H0x6E0003_Procedure_4")},
};
#define CAchievementEntity_handlersct ARRAYCOUNT(CAchievementEntity_handlers)

CEntity *CAchievementEntity_New(void) { return new CAchievementEntity; };
void CAchievementEntity_OnInitClass(void) {};
void CAchievementEntity_OnEndClass(void) {};
void CAchievementEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAchievementEntity_OnWorldEnd(CWorld *pwo) {};
void CAchievementEntity_OnWorldInit(CWorld *pwo) {};
void CAchievementEntity_OnWorldTick(CWorld *pwo) {};
void CAchievementEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAchievementEntity, CRationalEntity, "Achievement", "Thumbnails\\Achievement.tbn", 110);
DECLARE_CTFILENAME(_fnmCAchievementEntity_tbn, "Thumbnails\\Achievement.tbn");
