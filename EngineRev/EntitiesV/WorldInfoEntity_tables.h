// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWorldInfoEntity

CEntityProperty CWorldInfoEntity_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6f<<8)+1, 0xE8, "Bronze medal seconds", 0, "m_fSVMedalBronze", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6f<<8)+2, 0xEC, "Silver medal seconds", 0, "m_fSVMedalSilver", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6f<<8)+3, 0xF0, "Gold medal seconds", 0, "m_fSVMedalGold", 0x7F0000FFUL, 0),
};
#define CWorldInfoEntity_propertiesct ARRAYCOUNT(CWorldInfoEntity_properties)

CEntityComponent CWorldInfoEntity_components[] = {
#define CWorldInfoEntity_MODEL_1 0x6F01 // (0x6f<<8)+1
 CEntityComponent(ECT_MODEL, CWorldInfoEntity_MODEL_1, "EFNM" "Models\\Editor\\Trigger.mdl"),
#define CWorldInfoEntity_TEXTURE_2 0x6F02 // (0x6f<<8)+2
 CEntityComponent(ECT_TEXTURE, CWorldInfoEntity_TEXTURE_2, "EFNM" "Models\\Editor\\Camera.tex"),
};
#define CWorldInfoEntity_componentsct ARRAYCOUNT(CWorldInfoEntity_components)

CEventHandlerEntry CWorldInfoEntity_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldInfoEntity::Main), DEBUGSTRING("CWorldInfoEntity::Main")},
};
#define CWorldInfoEntity_handlersct ARRAYCOUNT(CWorldInfoEntity_handlers)

CEntity *CWorldInfoEntity_New(void) { return new CWorldInfoEntity; };
void CWorldInfoEntity_OnInitClass(void) {};
void CWorldInfoEntity_OnEndClass(void) {};
void CWorldInfoEntity_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldInfoEntity_OnWorldEnd(CWorld *pwo) {};
void CWorldInfoEntity_OnWorldInit(CWorld *pwo) {};
void CWorldInfoEntity_OnWorldTick(CWorld *pwo) {};
void CWorldInfoEntity_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWorldInfoEntity, CEntity, "WorldInfo", "Thumbnails\\WorldInfo.tbn", 111);
DECLARE_CTFILENAME(_fnmCWorldInfoEntity_tbn, "Thumbnails\\WorldInfo.tbn");
