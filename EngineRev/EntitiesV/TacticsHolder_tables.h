// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(TacticType)
  EP_ENUMVALUE(TCT_NONE, "None"),
  EP_ENUMVALUE(TCT_DAMP_ANGLE_STRIFE, "Damp angle strafe"),
  EP_ENUMVALUE(TCT_PARALLEL_RANDOM_DISTANCE, "Parallel random distance"),
  EP_ENUMVALUE(TCT_STATIC_RANDOM_V_DISTANCE, "Static random V distance"),
EP_ENUMEND(TacticType);

#define ENTITYCLASS CTacticsHolder

CEntityProperty CTacticsHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xeb<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xeb<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &TacticType_enum, (0xeb<<8)+10, 0x118, "Type", 'Y', "m_tctType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+11, 0x11C, "Parameter 1", 'D', "m_fParam1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+12, 0x120, "Parameter 2", 'F', "m_fParam2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+13, 0x124, "Parameter 3", 'G', "m_fParam3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+14, 0x128, "Parameter 4", 'H', "m_fParam4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+15, 0x12C, "Parameter 5", 'J', "m_fParam5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xeb<<8)+20, 0x130, "", 0, "m_tmLastActivation", 0x0UL, 0),
};
#define CTacticsHolder_propertiesct ARRAYCOUNT(CTacticsHolder_properties)

CEntityComponent CTacticsHolder_components[] = {
#define MODEL_MANAGER ((0x000000eb<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsHolder.mdl"),
#define TEXTURE_MANAGER ((0x000000eb<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MANAGER, "EFNM" "ModelsMP\\Editor\\TacticsHolder.tex"),
};
#define CTacticsHolder_componentsct ARRAYCOUNT(CTacticsHolder_components)

CEventHandlerEntry CTacticsHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTacticsHolder::Main),DEBUGSTRING("CTacticsHolder::Main")},
 {0x00eb0000, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0000_Main_01), DEBUGSTRING("CTacticsHolder::H0x00eb0000_Main_01")},
 {0x00eb0001, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0001_Main_02), DEBUGSTRING("CTacticsHolder::H0x00eb0001_Main_02")},
 {0x00eb0002, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0002_Main_03), DEBUGSTRING("CTacticsHolder::H0x00eb0002_Main_03")},
 {0x00eb0003, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0003_Main_04), DEBUGSTRING("CTacticsHolder::H0x00eb0003_Main_04")},
 {0x00eb0004, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0004_Main_05), DEBUGSTRING("CTacticsHolder::H0x00eb0004_Main_05")},
 {0x00eb0005, -1, CEntity::pEventHandler(&CTacticsHolder::H0x00eb0005_Main_06), DEBUGSTRING("CTacticsHolder::H0x00eb0005_Main_06")},
};
#define CTacticsHolder_handlersct ARRAYCOUNT(CTacticsHolder_handlers)

CEntity *CTacticsHolder_New(void) { return new CTacticsHolder; };
void CTacticsHolder_OnInitClass(void) {};
void CTacticsHolder_OnEndClass(void) {};
void CTacticsHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTacticsHolder_OnWorldEnd(CWorld *pwo) {};
void CTacticsHolder_OnWorldInit(CWorld *pwo) {};
void CTacticsHolder_OnWorldTick(CWorld *pwo) {};
void CTacticsHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTacticsHolder, CRationalEntity, "TacticsHolder", "Thumbnails\\TacticsHolder.tbn", 235);
DECLARE_CTFILENAME(_fnmCTacticsHolder_tbn, "Thumbnails\\TacticsHolder.tbn");
