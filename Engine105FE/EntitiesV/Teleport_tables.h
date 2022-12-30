// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CTeleport

CEntityProperty CTeleport_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000db<<8)+1, offsetof(CTeleport, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000db<<8)+3, offsetof(CTeleport, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000db<<8)+2, offsetof(CTeleport, m_penTarget), "Target", 'T', C_BROWN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000db<<8)+4, offsetof(CTeleport, m_fWidth), "Width", 'W', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000db<<8)+5, offsetof(CTeleport, m_fHeight), "Height", 'H', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000db<<8)+6, offsetof(CTeleport, m_bActive), "Active", 'A', 0x7F0000FFUL, 0),
};
#define CTeleport_propertiesct ARRAYCOUNT(CTeleport_properties)

CEntityComponent CTeleport_components[] = {
#define MODEL_TELEPORT ((0x000000db<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x000000db<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\Teleport.tex"),
#define CLASS_BASIC_EFFECT ((0x000000db<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CTeleport_componentsct ARRAYCOUNT(CTeleport_components)

CEventHandlerEntry CTeleport_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTeleport::Main),DEBUGSTRING("CTeleport::Main")},
 {0x00db0000, -1, CEntity::pEventHandler(&CTeleport::H0x00db0000_Main_01), DEBUGSTRING("CTeleport::H0x00db0000_Main_01")},
 {0x00db0001, -1, CEntity::pEventHandler(&CTeleport::H0x00db0001_Main_02), DEBUGSTRING("CTeleport::H0x00db0001_Main_02")},
 {0x00db0002, -1, CEntity::pEventHandler(&CTeleport::H0x00db0002_Main_03), DEBUGSTRING("CTeleport::H0x00db0002_Main_03")},
 {0x00db0003, -1, CEntity::pEventHandler(&CTeleport::H0x00db0003_Main_04), DEBUGSTRING("CTeleport::H0x00db0003_Main_04")},
 {0x00db0004, -1, CEntity::pEventHandler(&CTeleport::H0x00db0004_Main_05), DEBUGSTRING("CTeleport::H0x00db0004_Main_05")},
 {0x00db0005, -1, CEntity::pEventHandler(&CTeleport::H0x00db0005_Main_06), DEBUGSTRING("CTeleport::H0x00db0005_Main_06")},
};
#define CTeleport_handlersct ARRAYCOUNT(CTeleport_handlers)

CEntity *CTeleport_New(void) { return new CTeleport; };
void CTeleport_OnInitClass(void) {};
void CTeleport_OnEndClass(void) {};
void CTeleport_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTeleport_OnWorldEnd(CWorld *pwo) {};
void CTeleport_OnWorldInit(CWorld *pwo) {};
void CTeleport_OnWorldTick(CWorld *pwo) {};
void CTeleport_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTeleport, CRationalEntity, "Teleport", "Thumbnails\\Teleport.tbn", 0x000000db);
DECLARE_CTFILENAME(_fnmCTeleport_tbn, "Thumbnails\\Teleport.tbn");
