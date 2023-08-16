// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CItem

CEntityProperty CItem_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x320<<8)+1, 0x340, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x320<<8)+2, 0x344, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x320<<8)+5, 0x348, "", 0, "m_fValue", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x320<<8)+6, 0x34C, "", 0, "m_fRespawnTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x320<<8)+26, 0x350, "Respawn Time", 0, "m_fCustomRespawnTime", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x320<<8)+7, 0x354, "Respawn", 'R', "m_bRespawn", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x320<<8)+8, 0x358, "Target", 'T', "m_penTarget", 0x3F3F3FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x320<<8)+9, 0x35C, "PickupOnce", 'P', "m_bPickupOnce", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x320<<8)+10, 0x360, "", 0, "m_soPick", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x320<<8)+12, 0x3DC, "", 0, "m_fPickSoundLen", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x320<<8)+14, 0x3E0, "", 0, "m_bDropped", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_U64, NULL, (0x320<<8)+15, 0x3E8, "", 0, "m_ulPickedMask", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x320<<8)+16, 0x3F0, "Floating", 'F', "m_bFloating", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x320<<8)+20, 0x3F4, "Custom model", 0, "m_fnmCustomModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x320<<8)+21, 0x3FC, "Custom texture", 0, "m_fnmCustomTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x320<<8)+22, 0x404, "Custom scale", 0, "m_fCustomScale", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x320<<8)+23, 0x408, "Custom pickup sound", 0, "m_fnmCustomPickupSound", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x320<<8)+30, 0x410, "Only in coop", 0, "m_bOnlyCoop", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x320<<8)+255, 0x414, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CItem_propertiesct ARRAYCOUNT(CItem_properties)

CEntityComponent CItem_components[] = {
#define MODEL_ITEM ((0x00000320<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_ITEM, "EFNM" "Models\\Items\\ItemHolder\\ItemHolder.mdl"),
};
#define CItem_componentsct ARRAYCOUNT(CItem_components)

CEventHandlerEntry CItem_handlers[] = {
 {0x03200000, -1, CEntity::pEventHandler(&CItem::ItemCollected),DEBUGSTRING("CItem::ItemCollected")},
 {0x03200001, -1, CEntity::pEventHandler(&CItem::ItemLoop),DEBUGSTRING("CItem::ItemLoop")},
 {0x03200002, -1, CEntity::pEventHandler(&CItem::H0x03200002_ItemLoop_01), DEBUGSTRING("CItem::H0x03200002_ItemLoop_01")},
 {0x03200003, -1, CEntity::pEventHandler(&CItem::H0x03200003_ItemLoop_02), DEBUGSTRING("CItem::H0x03200003_ItemLoop_02")},
 {0x03200004, -1, CEntity::pEventHandler(&CItem::H0x03200004_ItemLoop_03), DEBUGSTRING("CItem::H0x03200004_ItemLoop_03")},
 {0x03200005, -1, CEntity::pEventHandler(&CItem::H0x03200005_ItemLoop_04), DEBUGSTRING("CItem::H0x03200005_ItemLoop_04")},
 {0x03200006, -1, CEntity::pEventHandler(&CItem::H0x03200006_ItemLoop_05), DEBUGSTRING("CItem::H0x03200006_ItemLoop_05")},
 {0x03200007, -1, CEntity::pEventHandler(&CItem::H0x03200007_ItemLoop_06), DEBUGSTRING("CItem::H0x03200007_ItemLoop_06")},
 {0x03200008, -1, CEntity::pEventHandler(&CItem::ItemReceived),DEBUGSTRING("CItem::ItemReceived")},
 {0x03200009, -1, CEntity::pEventHandler(&CItem::H0x03200009_ItemReceived_01), DEBUGSTRING("CItem::H0x03200009_ItemReceived_01")},
 {0x0320000a, -1, CEntity::pEventHandler(&CItem::H0x0320000a_ItemReceived_02), DEBUGSTRING("CItem::H0x0320000a_ItemReceived_02")},
 {0x0320000b, -1, CEntity::pEventHandler(&CItem::H0x0320000b_ItemReceived_03), DEBUGSTRING("CItem::H0x0320000b_ItemReceived_03")},
 {0x0320000c, -1, CEntity::pEventHandler(&CItem::H0x0320000c_ItemReceived_04), DEBUGSTRING("CItem::H0x0320000c_ItemReceived_04")},
};
#define CItem_handlersct ARRAYCOUNT(CItem_handlers)

CEntity *CItem_New(void) { return new CItem; };
void CItem_OnInitClass(void) {};
void CItem_OnEndClass(void) {};
void CItem_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CItem_OnWorldEnd(CWorld *pwo) {};
void CItem_OnWorldInit(CWorld *pwo) {};
void CItem_OnWorldTick(CWorld *pwo) {};
void CItem_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CItem, CMovableModelEntity, "Item", "", 800);
DECLARE_CTFILENAME(_fnmCItem_tbn, "");
