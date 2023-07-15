// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTerrainEntity

CEntityProperty CTerrainEntity_properties[] = {
 CEntityProperty(),
};
#define CTerrainEntity_propertiesct ARRAYCOUNT(CTerrainEntity_properties)

CEntityComponent CTerrainEntity_components[] = {
 CEntityComponent(),
};
#define CTerrainEntity_componentsct ARRAYCOUNT(CTerrainEntity_components)

CEventHandlerEntry CTerrainEntity_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTerrainEntity::Main), DEBUGSTRING("CTerrainEntity::Main")},
};
#define CTerrainEntity_handlersct ARRAYCOUNT(CTerrainEntity_handlers)

CEntity *CTerrainEntity_New(void) { return new CTerrainEntity; };
void CTerrainEntity_OnInitClass(void) {};
void CTerrainEntity_OnEndClass(void) {};
void CTerrainEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTerrainEntity_OnWorldEnd(CWorld *pwo) {};
void CTerrainEntity_OnWorldInit(CWorld *pwo) {};
void CTerrainEntity_OnWorldTick(CWorld *pwo) {};
void CTerrainEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTerrainEntity, CEntity, "Terrain", "Thumbnails\\Terrain.tbn", 108);
DECLARE_CTFILENAME(_fnmCTerrainEntity_tbn, "Thumbnails\\Terrain.tbn");
