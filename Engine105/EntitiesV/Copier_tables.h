// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CCopier

CEntityProperty CCopier_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000e1<<8)+1, offsetof(CCopier, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000e1<<8)+3, offsetof(CCopier, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000e1<<8)+2, offsetof(CCopier, m_penTarget), "Target", 'T', C_BROWN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000e1<<8)+4, offsetof(CCopier, m_bSpawnEffect), "Spawn Effect", 'X', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000e1<<8)+5, offsetof(CCopier, m_bTelefrag), "Telefrag", 'F', 0x7F0000FFUL, 0),
};
#define CCopier_propertiesct ARRAYCOUNT(CCopier_properties)

CEntityComponent CCopier_components[] = {
#define MODEL_TELEPORT ((0x000000e1<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Copier.mdl"),
#define TEXTURE_TELEPORT ((0x000000e1<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\Copier.tex"),
#define CLASS_BASIC_EFFECT ((0x000000e1<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CCopier_componentsct ARRAYCOUNT(CCopier_components)

CEventHandlerEntry CCopier_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CCopier::Main),DEBUGSTRING("CCopier::Main")},
 {0x00e10000, -1, CEntity::pEventHandler(&CCopier::H0x00e10000_Main_01), DEBUGSTRING("CCopier::H0x00e10000_Main_01")},
 {0x00e10001, -1, CEntity::pEventHandler(&CCopier::H0x00e10001_Main_02), DEBUGSTRING("CCopier::H0x00e10001_Main_02")},
 {0x00e10002, -1, CEntity::pEventHandler(&CCopier::H0x00e10002_Main_03), DEBUGSTRING("CCopier::H0x00e10002_Main_03")},
 {0x00e10003, -1, CEntity::pEventHandler(&CCopier::H0x00e10003_Main_04), DEBUGSTRING("CCopier::H0x00e10003_Main_04")},
 {0x00e10004, -1, CEntity::pEventHandler(&CCopier::H0x00e10004_Main_05), DEBUGSTRING("CCopier::H0x00e10004_Main_05")},
 {0x00e10005, -1, CEntity::pEventHandler(&CCopier::H0x00e10005_Main_06), DEBUGSTRING("CCopier::H0x00e10005_Main_06")},
};
#define CCopier_handlersct ARRAYCOUNT(CCopier_handlers)

CEntity *CCopier_New(void) { return new CCopier; };
void CCopier_OnInitClass(void) {};
void CCopier_OnEndClass(void) {};
void CCopier_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCopier_OnWorldEnd(CWorld *pwo) {};
void CCopier_OnWorldInit(CWorld *pwo) {};
void CCopier_OnWorldTick(CWorld *pwo) {};
void CCopier_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCopier, CRationalEntity, "Copier", "Thumbnails\\Copier.tbn", 0x000000e1);
DECLARE_CTFILENAME(_fnmCCopier_tbn, "Thumbnails\\Copier.tbn");
