// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSpawnerProjectile

CEntityProperty CSpawnerProjectile_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1fb<<8)+1, 0x340, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1fb<<8)+2, 0x344, "", 0, "m_penTemplate", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+4, 0x348, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+5, 0x34C, "", 0, "m_fTimeAdjust", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1fb<<8)+6, 0x350, "", 0, "m_bExploding", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+7, 0x354, "", 0, "m_fExplosionDuration", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+8, 0x358, "", 0, "m_tmExplosionBegin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+9, 0x35C, "", 0, "m_tmSpawn", 0x0UL, 0),
};
#define CSpawnerProjectile_propertiesct ARRAYCOUNT(CSpawnerProjectile_properties)

CEntityComponent CSpawnerProjectile_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001fb<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_INVISIBLE ((0x000001fb<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_INVISIBLE, "EFNM" "ModelsMP\\Enemies\\Summoner\\SpawnerProjectile\\Invisible.mdl"),
};
#define CSpawnerProjectile_componentsct ARRAYCOUNT(CSpawnerProjectile_components)

CEventHandlerEntry CSpawnerProjectile_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSpawnerProjectile::Main),DEBUGSTRING("CSpawnerProjectile::Main")},
 {0x01fb0001, -1, CEntity::pEventHandler(&CSpawnerProjectile::H0x01fb0001_Main_01), DEBUGSTRING("CSpawnerProjectile::H0x01fb0001_Main_01")},
 {0x01fb0002, -1, CEntity::pEventHandler(&CSpawnerProjectile::H0x01fb0002_Main_02), DEBUGSTRING("CSpawnerProjectile::H0x01fb0002_Main_02")},
 {0x01fb0003, -1, CEntity::pEventHandler(&CSpawnerProjectile::H0x01fb0003_Main_03), DEBUGSTRING("CSpawnerProjectile::H0x01fb0003_Main_03")},
 {0x01fb0004, -1, CEntity::pEventHandler(&CSpawnerProjectile::H0x01fb0004_Main_04), DEBUGSTRING("CSpawnerProjectile::H0x01fb0004_Main_04")},
};
#define CSpawnerProjectile_handlersct ARRAYCOUNT(CSpawnerProjectile_handlers)

CEntity *CSpawnerProjectile_New(void) { return new CSpawnerProjectile; };
void CSpawnerProjectile_OnInitClass(void) {};
void CSpawnerProjectile_OnEndClass(void) {};
void CSpawnerProjectile_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CSpawnerProjectile_OnWorldEnd(CWorld *pwo) {};
void CSpawnerProjectile_OnWorldInit(CWorld *pwo) {};
void CSpawnerProjectile_OnWorldTick(CWorld *pwo) {};
void CSpawnerProjectile_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSpawnerProjectile, CMovableModelEntity, "SpawnerProjectile", "", 507);
DECLARE_CTFILENAME(_fnmCSpawnerProjectile_tbn, "");
