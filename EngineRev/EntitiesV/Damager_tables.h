// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CDamager

CEntityProperty CDamager_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe5<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe5<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DamageType_enum, (0xe5<<8)+3, 0x118, "Type", 'Y', "m_dmtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe5<<8)+4, 0x11C, "Amount", 'A', "m_fAmount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe5<<8)+5, 0x120, "Entity to Damage", 'E', "m_penToDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe5<<8)+6, 0x124, "DamageFromTriggerer", 'S', "m_bDamageFromTriggerer", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe5<<8)+10, 0x128, "", 0, "m_penLastDamaged", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe5<<8)+11, 0x12C, "", 0, "m_tmLastDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe5<<8)+20, 0x130, "Damage in range", 0, "m_bRangeDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xe5<<8)+21, 0x134, "Damage range hotspot", 0, "m_fRangeHotspot", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xe5<<8)+22, 0x138, "Damage range falloff", 0, "m_fRangeFalloff", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe5<<8)+30, 0x13C, "Heal", 0, "m_bHeal", 0x7F0000FFUL, 0),
};
#define CDamager_propertiesct ARRAYCOUNT(CDamager_properties)

CEntityComponent CDamager_components[] = {
#define MODEL_TELEPORT ((0x000000e5<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Copier.mdl"),
#define TEXTURE_TELEPORT ((0x000000e5<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\Copier.tex"),
};
#define CDamager_componentsct ARRAYCOUNT(CDamager_components)

CEventHandlerEntry CDamager_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CDamager::Main),DEBUGSTRING("CDamager::Main")},
 {0x00e50000, -1, CEntity::pEventHandler(&CDamager::H0x00e50000_Main_01), DEBUGSTRING("CDamager::H0x00e50000_Main_01")},
 {0x00e50001, -1, CEntity::pEventHandler(&CDamager::H0x00e50001_Main_02), DEBUGSTRING("CDamager::H0x00e50001_Main_02")},
 {0x00e50002, -1, CEntity::pEventHandler(&CDamager::H0x00e50002_Main_03), DEBUGSTRING("CDamager::H0x00e50002_Main_03")},
 {0x00e50003, -1, CEntity::pEventHandler(&CDamager::H0x00e50003_Main_04), DEBUGSTRING("CDamager::H0x00e50003_Main_04")},
};
#define CDamager_handlersct ARRAYCOUNT(CDamager_handlers)

CEntity *CDamager_New(void) { return new CDamager; };
void CDamager_OnInitClass(void) {};
void CDamager_OnEndClass(void) {};
void CDamager_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDamager_OnWorldEnd(CWorld *pwo) {};
void CDamager_OnWorldInit(CWorld *pwo) {};
void CDamager_OnWorldTick(CWorld *pwo) {};
void CDamager_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDamager, CRationalEntity, "Damager", "Thumbnails\\Damager.tbn", 229);
DECLARE_CTFILENAME(_fnmCDamager_tbn, "Thumbnails\\Damager.tbn");
