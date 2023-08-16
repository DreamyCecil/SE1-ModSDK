// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(EnemyFlyType)
  EP_ENUMVALUE(EFT_GROUND_ONLY, "Ground only"),
  EP_ENUMVALUE(EFT_FLY_ONLY, "Fly only"),
  EP_ENUMVALUE(EFT_FLY_GROUND_GROUND, "Fly(ground) - ground attack"),
  EP_ENUMVALUE(EFT_FLY_GROUND_AIR, "Fly(ground) - air attack"),
  EP_ENUMVALUE(EFT_FLY_AIR_GROUND, "Fly(air) - ground attack"),
  EP_ENUMVALUE(EFT_FLY_AIR_AIR, "Fly(air) - air attack"),
EP_ENUMEND(EnemyFlyType);

#define ENTITYCLASS CEnemyFly

CEntityProperty CEnemyFly_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &EnemyFlyType_enum, (0x137<<8)+1, 0x5C0, "Type", 'T', "m_EeftType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x137<<8)+2, 0x5C4, "", 0, "m_bInAir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x137<<8)+3, 0x5C8, "", 0, "m_bAirAttack", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x137<<8)+4, 0x5CC, "", 0, "m_bStartInAir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+16, 0x5D0, "", 0, "m_fGroundToAirSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+17, 0x5D4, "", 0, "m_fAirToGroundSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+18, 0x5D8, "", 0, "m_fAirToGroundMin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+19, 0x5DC, "", 0, "m_fAirToGroundMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+27, 0x5E0, "", 0, "m_fFlyHeight", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+10, 0x5E4, "", 0, "m_fFlyWalkSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x137<<8)+11, 0x5E8, "", 0, "m_aFlyWalkRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+12, 0x5EC, "", 0, "m_fFlyAttackRunSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x137<<8)+13, 0x5F0, "", 0, "m_aFlyAttackRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+14, 0x5F4, "", 0, "m_fFlyCloseRunSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x137<<8)+15, 0x5F8, "", 0, "m_aFlyCloseRotateSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+20, 0x5FC, "", 0, "m_fFlyAttackDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+21, 0x600, "", 0, "m_fFlyCloseDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+22, 0x604, "", 0, "m_fFlyAttackFireTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+23, 0x608, "", 0, "m_fFlyCloseFireTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+24, 0x60C, "", 0, "m_fFlyStopDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+25, 0x610, "", 0, "m_fFlyIgnoreRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x137<<8)+26, 0x614, "", 0, "m_fFlyLockOnEnemyTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x137<<8)+100, 0x618, "", 0, "m_bFlyToMarker", 0x0UL, 0),
};
#define CEnemyFly_propertiesct ARRAYCOUNT(CEnemyFly_properties)

CEntityComponent CEnemyFly_components[] = {
#define CLASS_BASE ((0x00000137<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
};
#define CEnemyFly_componentsct ARRAYCOUNT(CEnemyFly_components)

CEventHandlerEntry CEnemyFly_handlers[] = {
 {0x01370000, STATE_CEnemyBase_ReturnToStartPosition, CEntity::pEventHandler(&CEnemyFly::ReturnToStartPosition),DEBUGSTRING("CEnemyFly::ReturnToStartPosition")},
 {0x01370001, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CEnemyFly::BeWounded),DEBUGSTRING("CEnemyFly::BeWounded")},
 {0x01370002, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370002_BeWounded_01), DEBUGSTRING("CEnemyFly::H0x01370002_BeWounded_01")},
 {0x01370003, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370003_BeWounded_02), DEBUGSTRING("CEnemyFly::H0x01370003_BeWounded_02")},
 {0x01370004, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370004_BeWounded_03), DEBUGSTRING("CEnemyFly::H0x01370004_BeWounded_03")},
 {0x01370005, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370005_BeWounded_04), DEBUGSTRING("CEnemyFly::H0x01370005_BeWounded_04")},
 {0x01370006, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370006_BeWounded_05), DEBUGSTRING("CEnemyFly::H0x01370006_BeWounded_05")},
 {0x01370007, -1, CEntity::pEventHandler(&CEnemyFly::AirToGround),DEBUGSTRING("CEnemyFly::AirToGround")},
 {0x01370008, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370008_AirToGround_01), DEBUGSTRING("CEnemyFly::H0x01370008_AirToGround_01")},
 {0x01370009, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370009_AirToGround_02), DEBUGSTRING("CEnemyFly::H0x01370009_AirToGround_02")},
 {0x0137000a, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137000a_AirToGround_03), DEBUGSTRING("CEnemyFly::H0x0137000a_AirToGround_03")},
 {0x0137000b, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137000b_AirToGround_04), DEBUGSTRING("CEnemyFly::H0x0137000b_AirToGround_04")},
 {0x0137000c, -1, CEntity::pEventHandler(&CEnemyFly::GroundToAir),DEBUGSTRING("CEnemyFly::GroundToAir")},
 {0x0137000d, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137000d_GroundToAir_01), DEBUGSTRING("CEnemyFly::H0x0137000d_GroundToAir_01")},
 {0x0137000e, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137000e_GroundToAir_02), DEBUGSTRING("CEnemyFly::H0x0137000e_GroundToAir_02")},
 {0x0137000f, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137000f_GroundToAir_03), DEBUGSTRING("CEnemyFly::H0x0137000f_GroundToAir_03")},
 {0x01370010, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370010_GroundToAir_04), DEBUGSTRING("CEnemyFly::H0x01370010_GroundToAir_04")},
 {0x01370011, STATE_CEnemyBase_AttackEnemy, CEntity::pEventHandler(&CEnemyFly::AttackEnemy),DEBUGSTRING("CEnemyFly::AttackEnemy")},
 {0x01370012, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370012_AttackEnemy_01), DEBUGSTRING("CEnemyFly::H0x01370012_AttackEnemy_01")},
 {0x01370013, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370013_AttackEnemy_02), DEBUGSTRING("CEnemyFly::H0x01370013_AttackEnemy_02")},
 {0x01370014, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370014_AttackEnemy_03), DEBUGSTRING("CEnemyFly::H0x01370014_AttackEnemy_03")},
 {0x01370015, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370015_AttackEnemy_04), DEBUGSTRING("CEnemyFly::H0x01370015_AttackEnemy_04")},
 {0x01370016, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370016_AttackEnemy_05), DEBUGSTRING("CEnemyFly::H0x01370016_AttackEnemy_05")},
 {0x01370017, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370017_AttackEnemy_06), DEBUGSTRING("CEnemyFly::H0x01370017_AttackEnemy_06")},
 {0x01370018, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370018_AttackEnemy_07), DEBUGSTRING("CEnemyFly::H0x01370018_AttackEnemy_07")},
 {0x01370019, -1, CEntity::pEventHandler(&CEnemyFly::H0x01370019_AttackEnemy_08), DEBUGSTRING("CEnemyFly::H0x01370019_AttackEnemy_08")},
 {0x0137001a, -1, CEntity::pEventHandler(&CEnemyFly::H0x0137001a_AttackEnemy_09), DEBUGSTRING("CEnemyFly::H0x0137001a_AttackEnemy_09")},
 {0x0137001b, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CEnemyFly::Hit),DEBUGSTRING("CEnemyFly::Hit")},
 {0x0137001c, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CEnemyFly::Fire),DEBUGSTRING("CEnemyFly::Fire")},
 {0x0137001d, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CEnemyFly::Death),DEBUGSTRING("CEnemyFly::Death")},
 {0x0137001e, STATE_CEnemyBase_MainLoop, CEntity::pEventHandler(&CEnemyFly::MainLoop),DEBUGSTRING("CEnemyFly::MainLoop")},
 {1, -1, CEntity::pEventHandler(&CEnemyFly::Main),DEBUGSTRING("CEnemyFly::Main")},
 {0x0137001f, -1, CEntity::pEventHandler(&CEnemyFly::GroundHit),DEBUGSTRING("CEnemyFly::GroundHit")},
 {0x01370020, -1, CEntity::pEventHandler(&CEnemyFly::GroundFire),DEBUGSTRING("CEnemyFly::GroundFire")},
 {0x01370021, -1, CEntity::pEventHandler(&CEnemyFly::FlyHit),DEBUGSTRING("CEnemyFly::FlyHit")},
 {0x01370022, -1, CEntity::pEventHandler(&CEnemyFly::FlyFire),DEBUGSTRING("CEnemyFly::FlyFire")},
};
#define CEnemyFly_handlersct ARRAYCOUNT(CEnemyFly_handlers)

CEntity *CEnemyFly_New(void) { return new CEnemyFly; };
void CEnemyFly_OnInitClass(void) {};
void CEnemyFly_OnEndClass(void) {};
void CEnemyFly_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemyFly_OnWorldEnd(CWorld *pwo) {};
void CEnemyFly_OnWorldInit(CWorld *pwo) {};
void CEnemyFly_OnWorldTick(CWorld *pwo) {};
void CEnemyFly_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemyFly, CEnemyBase, "Enemy Fly", "", 311);
DECLARE_CTFILENAME(_fnmCEnemyFly_tbn, "");
