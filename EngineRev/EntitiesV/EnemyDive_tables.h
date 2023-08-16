// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(EnemyDiveType)
  EP_ENUMVALUE(EDT_GROUND_ONLY, "Ground only"),
  EP_ENUMVALUE(EDT_DIVE_ONLY, "Dive only"),
  EP_ENUMVALUE(EDT_GROUND_DIVE, "Ground and dive"),
EP_ENUMEND(EnemyDiveType);

#define ENTITYCLASS CEnemyDive

CEntityProperty CEnemyDive_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &EnemyDiveType_enum, (0x139<<8)+1, 0x5C0, "Type", 'T', "m_EedtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x139<<8)+2, 0x5C4, "In liquid", 'Q', "m_bInLiquid", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+10, 0x5C8, "", 0, "m_fDiveWalkSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x139<<8)+11, 0x5CC, "", 0, "m_aDiveWalkRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+12, 0x5D0, "", 0, "m_fDiveAttackRunSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x139<<8)+13, 0x5D4, "", 0, "m_aDiveAttackRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+14, 0x5D8, "", 0, "m_fDiveCloseRunSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x139<<8)+15, 0x5DC, "", 0, "m_aDiveCloseRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+20, 0x5E0, "", 0, "m_fDiveAttackDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+21, 0x5E4, "", 0, "m_fDiveCloseDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+22, 0x5E8, "", 0, "m_fDiveAttackFireTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+23, 0x5EC, "", 0, "m_fDiveCloseFireTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+24, 0x5F0, "", 0, "m_fDiveStopDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+25, 0x5F4, "", 0, "m_fDiveIgnoreRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x139<<8)+26, 0x5F8, "", 0, "m_fDiveLockOnEnemyTime", 0x0UL, 0),
};
#define CEnemyDive_propertiesct ARRAYCOUNT(CEnemyDive_properties)

CEntityComponent CEnemyDive_components[] = {
#define CLASS_BASE ((0x00000139<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
};
#define CEnemyDive_componentsct ARRAYCOUNT(CEnemyDive_components)

CEventHandlerEntry CEnemyDive_handlers[] = {
 {0x01390000, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CEnemyDive::Hit),DEBUGSTRING("CEnemyDive::Hit")},
 {0x01390001, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CEnemyDive::Fire),DEBUGSTRING("CEnemyDive::Fire")},
 {0x01390002, STATE_CEnemyBase_MainLoop, CEntity::pEventHandler(&CEnemyDive::MainLoop),DEBUGSTRING("CEnemyDive::MainLoop")},
 {1, -1, CEntity::pEventHandler(&CEnemyDive::Main),DEBUGSTRING("CEnemyDive::Main")},
 {0x01390003, -1, CEntity::pEventHandler(&CEnemyDive::GroundHit),DEBUGSTRING("CEnemyDive::GroundHit")},
 {0x01390004, -1, CEntity::pEventHandler(&CEnemyDive::GroundFire),DEBUGSTRING("CEnemyDive::GroundFire")},
 {0x01390005, -1, CEntity::pEventHandler(&CEnemyDive::DiveHit),DEBUGSTRING("CEnemyDive::DiveHit")},
 {0x01390006, -1, CEntity::pEventHandler(&CEnemyDive::DiveFire),DEBUGSTRING("CEnemyDive::DiveFire")},
};
#define CEnemyDive_handlersct ARRAYCOUNT(CEnemyDive_handlers)

CEntity *CEnemyDive_New(void) { return new CEnemyDive; };
void CEnemyDive_OnInitClass(void) {};
void CEnemyDive_OnEndClass(void) {};
void CEnemyDive_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemyDive_OnWorldEnd(CWorld *pwo) {};
void CEnemyDive_OnWorldInit(CWorld *pwo) {};
void CEnemyDive_OnWorldTick(CWorld *pwo) {};
void CEnemyDive_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemyDive, CEnemyBase, "Enemy Dive", "", 313);
DECLARE_CTFILENAME(_fnmCEnemyDive_tbn, "");
