// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(TargetType)
  EP_ENUMVALUE(TT_NONE, ""),
  EP_ENUMVALUE(TT_SOFT, ""),
  EP_ENUMVALUE(TT_HARD, ""),
EP_ENUMEND(TargetType);

EP_ENUMBEG(DestinationType)
  EP_ENUMVALUE(DT_PLAYERCURRENT, ""),
  EP_ENUMVALUE(DT_PLAYERSPOTTED, ""),
  EP_ENUMVALUE(DT_PATHTEMPORARY, ""),
  EP_ENUMVALUE(DT_PATHPERSISTENT, ""),
EP_ENUMEND(DestinationType);

#define ENTITYCLASS CEnemyBase

CEntityProperty CEnemyBase_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+1, offsetof(CEnemyBase, m_penWatcher), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+2, offsetof(CEnemyBase, m_vStartPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+3, offsetof(CEnemyBase, m_penEnemy), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &TargetType_enum, (0x00000136<<8)+4, offsetof(CEnemyBase, m_ttTarget), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000136<<8)+5, offsetof(CEnemyBase, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000136<<8)+6, offsetof(CEnemyBase, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000136<<8)+7, offsetof(CEnemyBase, m_soSound), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+8, offsetof(CEnemyBase, m_vStartDirection), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+9, offsetof(CEnemyBase, m_bOnStartPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+29, offsetof(CEnemyBase, m_fFallHeight), "Fall height", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+31, offsetof(CEnemyBase, m_fStepHeight), "Step height", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x00000136<<8)+17, offsetof(CEnemyBase, m_fSenseRange), "Sense Range", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+28, offsetof(CEnemyBase, m_fViewAngle), "View angle", 'V', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+10, offsetof(CEnemyBase, m_fWalkSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x00000136<<8)+11, offsetof(CEnemyBase, m_aWalkRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+12, offsetof(CEnemyBase, m_fAttackRunSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x00000136<<8)+13, offsetof(CEnemyBase, m_aAttackRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+14, offsetof(CEnemyBase, m_fCloseRunSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x00000136<<8)+15, offsetof(CEnemyBase, m_aCloseRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+20, offsetof(CEnemyBase, m_fAttackDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+21, offsetof(CEnemyBase, m_fCloseDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+22, offsetof(CEnemyBase, m_fAttackFireTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+23, offsetof(CEnemyBase, m_fCloseFireTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+24, offsetof(CEnemyBase, m_fStopDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+25, offsetof(CEnemyBase, m_fIgnoreRange), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+26, offsetof(CEnemyBase, m_fLockOnEnemyTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+40, offsetof(CEnemyBase, m_fBlowUpAmount), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000136<<8)+41, offsetof(CEnemyBase, m_fBodyParts), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+42, offsetof(CEnemyBase, m_fDamageWounded), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+43, offsetof(CEnemyBase, m_vDamage), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+44, offsetof(CEnemyBase, m_tmLastDamage), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+46, offsetof(CEnemyBase, m_bRobotBlowup), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+47, offsetof(CEnemyBase, m_fBlowUpSize), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+133, offsetof(CEnemyBase, m_fMoveTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+52, offsetof(CEnemyBase, m_vDesiredPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DestinationType_enum, (0x00000136<<8)+53, offsetof(CEnemyBase, m_dtDestination), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+59, offsetof(CEnemyBase, m_penPathMarker), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+18, offsetof(CEnemyBase, m_vPlayerSpotted), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+54, offsetof(CEnemyBase, m_fMoveFrequency), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+55, offsetof(CEnemyBase, m_fMoveSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x00000136<<8)+56, offsetof(CEnemyBase, m_aRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+57, offsetof(CEnemyBase, m_fLockStartTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+58, offsetof(CEnemyBase, m_fRangeLast), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+130, offsetof(CEnemyBase, m_bFadeOut), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+131, offsetof(CEnemyBase, m_fFadeStartTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+132, offsetof(CEnemyBase, m_fFadeTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+60, offsetof(CEnemyBase, m_fShootTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+61, offsetof(CEnemyBase, m_fDamageConfused), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x00000136<<8)+62, offsetof(CEnemyBase, m_iChargeHitAnimation), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+63, offsetof(CEnemyBase, m_fChargeHitDamage), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+64, offsetof(CEnemyBase, m_fChargeHitAngle), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+65, offsetof(CEnemyBase, m_fChargeHitSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+83, offsetof(CEnemyBase, m_penSpawnerTarget), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+84, offsetof(CEnemyBase, m_penDeathTarget), "Death target", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x00000136<<8)+85, offsetof(CEnemyBase, m_eetDeathType), "Death event type", 'F', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+86, offsetof(CEnemyBase, m_bTemplate), "Template", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x00000136<<8)+88, offsetof(CEnemyBase, m_fAttackRadius), "Radius of attack", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x00000136<<8)+89, offsetof(CEnemyBase, m_colColor), "Color", 'L', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+90, offsetof(CEnemyBase, m_bDeaf), "Deaf", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+91, offsetof(CEnemyBase, m_bBlind), "Blind", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+92, offsetof(CEnemyBase, m_tmGiveUp), "Give up time", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+93, offsetof(CEnemyBase, m_tmReflexMin), "Reflex Min", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+94, offsetof(CEnemyBase, m_tmReflexMax), "Reflex Max", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+95, offsetof(CEnemyBase, m_fActivityRange), "Activity Range", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+106, offsetof(CEnemyBase, m_bApplyRandomStretch), "Apply random stretch", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+107, offsetof(CEnemyBase, m_fRandomStretchFactor), "Random stretch factor", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+108, offsetof(CEnemyBase, m_fStretchMultiplier), "Stretch multiplier", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+109, offsetof(CEnemyBase, m_fRandomStretchMultiplier), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+120, offsetof(CEnemyBase, m_penMarker), "Marker", 'M', C_RED  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+140, offsetof(CEnemyBase, m_penMainMusicHolder), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+141, offsetof(CEnemyBase, m_tmLastFussTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+142, offsetof(CEnemyBase, m_iScore), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+143, offsetof(CEnemyBase, m_fMaxHealth), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+144, offsetof(CEnemyBase, m_bBoss), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+145, offsetof(CEnemyBase, m_fSpiritStartTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+146, offsetof(CEnemyBase, m_tmSpraySpawned), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+147, offsetof(CEnemyBase, m_fSprayDamage), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+148, offsetof(CEnemyBase, m_penSpray), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+149, offsetof(CEnemyBase, m_fMaxDamageAmmount), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+150, offsetof(CEnemyBase, m_vLastStain), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SprayParticlesType_enum, (0x00000136<<8)+151, offsetof(CEnemyBase, m_sptType), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+160, offsetof(CEnemyBase, m_penTacticsHolder), "Tactics Holder", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+161, offsetof(CEnemyBase, m_bTacticActive), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+162, offsetof(CEnemyBase, m_tmTacticsActivation), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000136<<8)+163, offsetof(CEnemyBase, m_vTacticsStartPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+165, offsetof(CEnemyBase, m_fTacticVar1), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+166, offsetof(CEnemyBase, m_fTacticVar2), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+167, offsetof(CEnemyBase, m_fTacticVar3), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+168, offsetof(CEnemyBase, m_fTacticVar4), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000136<<8)+169, offsetof(CEnemyBase, m_fTacticVar5), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+170, offsetof(CEnemyBase, m_bTacticsStartOnSense), "Tactics start on sense", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x00000136<<8)+180, offsetof(CEnemyBase, m_colBurning), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000136<<8)+181, offsetof(CEnemyBase, m_bResizeAttachments), "Stretch attachments", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000136<<8)+255, offsetof(CEnemyBase, m_penPrediction), "", 0, 0, 0),
};
#define CEnemyBase_propertiesct ARRAYCOUNT(CEnemyBase_properties)

CEntityComponent CEnemyBase_components[] = {
#define CLASS_WATCHER ((0x00000136<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_WATCHER, "EFNM" "Classes\\Watcher.ecl"),
#define CLASS_PROJECTILE ((0x00000136<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_DEBRIS ((0x00000136<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_DEBRIS, "EFNM" "Classes\\Debris.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000136<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_BLOOD_SPRAY ((0x00000136<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define MODEL_FLESH ((0x00000136<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\Flesh.mdl"),
#define MODEL_FLESH_APPLE ((0x00000136<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_APPLE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Apple.mdl"),
#define MODEL_FLESH_BANANA ((0x00000136<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.mdl"),
#define MODEL_FLESH_BURGER ((0x00000136<<8)+13)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_BURGER, "EFNM" "Models\\Effects\\Debris\\Fruits\\CheeseBurger.mdl"),
#define MODEL_FLESH_LOLLY ((0x00000136<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_LOLLY, "EFNM" "Models\\Effects\\Debris\\Fruits\\LollyPop.mdl"),
#define MODEL_FLESH_ORANGE ((0x00000136<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_ORANGE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Orange.mdl"),
#define TEXTURE_FLESH_RED ((0x00000136<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_RED, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshRed.tex"),
#define TEXTURE_FLESH_GREEN ((0x00000136<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_GREEN, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshGreen.tex"),
#define TEXTURE_FLESH_APPLE ((0x00000136<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_APPLE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Apple.tex"),
#define TEXTURE_FLESH_BANANA ((0x00000136<<8)+23)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.tex"),
#define TEXTURE_FLESH_BURGER ((0x00000136<<8)+24)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_BURGER, "EFNM" "Models\\Effects\\Debris\\Fruits\\CheeseBurger.tex"),
#define TEXTURE_FLESH_LOLLY ((0x00000136<<8)+25)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_LOLLY, "EFNM" "Models\\Effects\\Debris\\Fruits\\LollyPop.tex"),
#define TEXTURE_FLESH_ORANGE ((0x00000136<<8)+26)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_ORANGE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Orange.tex"),
#define MODEL_MACHINE ((0x00000136<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_MACHINE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.mdl"),
#define TEXTURE_MACHINE ((0x00000136<<8)+32)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MACHINE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.tex"),
};
#define CEnemyBase_componentsct ARRAYCOUNT(CEnemyBase_components)

CEventHandlerEntry CEnemyBase_handlers[] = {
 {0x01360003, -1, CEntity::pEventHandler(&CEnemyBase::MoveToDestination),DEBUGSTRING("CEnemyBase::MoveToDestination")},
 {0x01360004, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360004_MoveToDestination_01), DEBUGSTRING("CEnemyBase::H0x01360004_MoveToDestination_01")},
 {0x01360005, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360005_MoveToDestination_02), DEBUGSTRING("CEnemyBase::H0x01360005_MoveToDestination_02")},
 {0x01360006, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360006_MoveToDestination_03), DEBUGSTRING("CEnemyBase::H0x01360006_MoveToDestination_03")},
 {0x01360007, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360007_MoveToDestination_04), DEBUGSTRING("CEnemyBase::H0x01360007_MoveToDestination_04")},
 {0x01360008, -1, CEntity::pEventHandler(&CEnemyBase::MoveToRandomPatrolPosition),DEBUGSTRING("CEnemyBase::MoveToRandomPatrolPosition")},
 {0x01360009, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360009_MoveToRandomPatrolPosition_01), DEBUGSTRING("CEnemyBase::H0x01360009_MoveToRandomPatrolPosition_01")},
 {0x0136000a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136000a_MoveToRandomPatrolPosition_02), DEBUGSTRING("CEnemyBase::H0x0136000a_MoveToRandomPatrolPosition_02")},
 {0x0136000b, -1, CEntity::pEventHandler(&CEnemyBase::DoPatrolling),DEBUGSTRING("CEnemyBase::DoPatrolling")},
 {0x0136000c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136000c_DoPatrolling_01), DEBUGSTRING("CEnemyBase::H0x0136000c_DoPatrolling_01")},
 {0x0136000d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136000d_DoPatrolling_02), DEBUGSTRING("CEnemyBase::H0x0136000d_DoPatrolling_02")},
 {0x0136000e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136000e_DoPatrolling_03), DEBUGSTRING("CEnemyBase::H0x0136000e_DoPatrolling_03")},
 {0x0136000f, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136000f_DoPatrolling_04), DEBUGSTRING("CEnemyBase::H0x0136000f_DoPatrolling_04")},
 {0x01360010, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360010_DoPatrolling_05), DEBUGSTRING("CEnemyBase::H0x01360010_DoPatrolling_05")},
 {0x01360011, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360011_DoPatrolling_06), DEBUGSTRING("CEnemyBase::H0x01360011_DoPatrolling_06")},
 {0x01360012, -1, CEntity::pEventHandler(&CEnemyBase::BeIdle),DEBUGSTRING("CEnemyBase::BeIdle")},
 {0x01360013, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360013_BeIdle_01), DEBUGSTRING("CEnemyBase::H0x01360013_BeIdle_01")},
 {0x01360014, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360014_BeIdle_02), DEBUGSTRING("CEnemyBase::H0x01360014_BeIdle_02")},
 {0x01360015, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360015_BeIdle_03), DEBUGSTRING("CEnemyBase::H0x01360015_BeIdle_03")},
 {0x01360016, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360016_BeIdle_04), DEBUGSTRING("CEnemyBase::H0x01360016_BeIdle_04")},
 {0x01360017, -1, CEntity::pEventHandler(&CEnemyBase::ReturnToStartPosition),DEBUGSTRING("CEnemyBase::ReturnToStartPosition")},
 {0x01360018, -1, CEntity::pEventHandler(&CEnemyBase::MoveThroughMarkers),DEBUGSTRING("CEnemyBase::MoveThroughMarkers")},
 {0x01360019, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360019_MoveThroughMarkers_01), DEBUGSTRING("CEnemyBase::H0x01360019_MoveThroughMarkers_01")},
 {0x0136001a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001a_MoveThroughMarkers_02), DEBUGSTRING("CEnemyBase::H0x0136001a_MoveThroughMarkers_02")},
 {0x0136001b, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001b_MoveThroughMarkers_03), DEBUGSTRING("CEnemyBase::H0x0136001b_MoveThroughMarkers_03")},
 {0x0136001c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001c_MoveThroughMarkers_04), DEBUGSTRING("CEnemyBase::H0x0136001c_MoveThroughMarkers_04")},
 {0x0136001d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001d_MoveThroughMarkers_05), DEBUGSTRING("CEnemyBase::H0x0136001d_MoveThroughMarkers_05")},
 {0x0136001e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001e_MoveThroughMarkers_06), DEBUGSTRING("CEnemyBase::H0x0136001e_MoveThroughMarkers_06")},
 {0x0136001f, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136001f_MoveThroughMarkers_07), DEBUGSTRING("CEnemyBase::H0x0136001f_MoveThroughMarkers_07")},
 {0x01360020, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360020_MoveThroughMarkers_08), DEBUGSTRING("CEnemyBase::H0x01360020_MoveThroughMarkers_08")},
 {0x01360021, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360021_MoveThroughMarkers_09), DEBUGSTRING("CEnemyBase::H0x01360021_MoveThroughMarkers_09")},
 {0x01360022, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360022_MoveThroughMarkers_10), DEBUGSTRING("CEnemyBase::H0x01360022_MoveThroughMarkers_10")},
 {0x01360023, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360023_MoveThroughMarkers_11), DEBUGSTRING("CEnemyBase::H0x01360023_MoveThroughMarkers_11")},
 {0x01360024, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360024_MoveThroughMarkers_12), DEBUGSTRING("CEnemyBase::H0x01360024_MoveThroughMarkers_12")},
 {0x01360025, -1, CEntity::pEventHandler(&CEnemyBase::NewEnemySpotted),DEBUGSTRING("CEnemyBase::NewEnemySpotted")},
 {0x01360026, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360026_NewEnemySpotted_01), DEBUGSTRING("CEnemyBase::H0x01360026_NewEnemySpotted_01")},
 {0x01360027, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360027_NewEnemySpotted_02), DEBUGSTRING("CEnemyBase::H0x01360027_NewEnemySpotted_02")},
 {0x01360028, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360028_NewEnemySpotted_03), DEBUGSTRING("CEnemyBase::H0x01360028_NewEnemySpotted_03")},
 {0x01360029, -1, CEntity::pEventHandler(&CEnemyBase::StopAttack),DEBUGSTRING("CEnemyBase::StopAttack")},
 {0x0136002a, -1, CEntity::pEventHandler(&CEnemyBase::InitializeAttack),DEBUGSTRING("CEnemyBase::InitializeAttack")},
 {0x0136002b, -1, CEntity::pEventHandler(&CEnemyBase::AttackEnemy),DEBUGSTRING("CEnemyBase::AttackEnemy")},
 {0x0136002c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136002c_AttackEnemy_01), DEBUGSTRING("CEnemyBase::H0x0136002c_AttackEnemy_01")},
 {0x0136002d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136002d_AttackEnemy_02), DEBUGSTRING("CEnemyBase::H0x0136002d_AttackEnemy_02")},
 {0x0136002e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136002e_AttackEnemy_03), DEBUGSTRING("CEnemyBase::H0x0136002e_AttackEnemy_03")},
 {0x0136002f, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136002f_AttackEnemy_04), DEBUGSTRING("CEnemyBase::H0x0136002f_AttackEnemy_04")},
 {0x01360030, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360030_AttackEnemy_05), DEBUGSTRING("CEnemyBase::H0x01360030_AttackEnemy_05")},
 {0x01360031, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360031_AttackEnemy_06), DEBUGSTRING("CEnemyBase::H0x01360031_AttackEnemy_06")},
 {0x01360032, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360032_AttackEnemy_07), DEBUGSTRING("CEnemyBase::H0x01360032_AttackEnemy_07")},
 {0x01360033, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360033_AttackEnemy_08), DEBUGSTRING("CEnemyBase::H0x01360033_AttackEnemy_08")},
 {0x01360034, -1, CEntity::pEventHandler(&CEnemyBase::PerformAttack),DEBUGSTRING("CEnemyBase::PerformAttack")},
 {0x01360035, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360035_PerformAttack_01), DEBUGSTRING("CEnemyBase::H0x01360035_PerformAttack_01")},
 {0x01360036, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360036_PerformAttack_02), DEBUGSTRING("CEnemyBase::H0x01360036_PerformAttack_02")},
 {0x01360037, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360037_PerformAttack_03), DEBUGSTRING("CEnemyBase::H0x01360037_PerformAttack_03")},
 {0x01360038, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360038_PerformAttack_04), DEBUGSTRING("CEnemyBase::H0x01360038_PerformAttack_04")},
 {0x01360039, -1, CEntity::pEventHandler(&CEnemyBase::FireOrHit),DEBUGSTRING("CEnemyBase::FireOrHit")},
 {0x0136003a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003a_FireOrHit_01), DEBUGSTRING("CEnemyBase::H0x0136003a_FireOrHit_01")},
 {0x0136003b, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003b_FireOrHit_02), DEBUGSTRING("CEnemyBase::H0x0136003b_FireOrHit_02")},
 {0x0136003c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003c_FireOrHit_03), DEBUGSTRING("CEnemyBase::H0x0136003c_FireOrHit_03")},
 {0x0136003d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003d_FireOrHit_04), DEBUGSTRING("CEnemyBase::H0x0136003d_FireOrHit_04")},
 {0x0136003e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003e_FireOrHit_05), DEBUGSTRING("CEnemyBase::H0x0136003e_FireOrHit_05")},
 {0x0136003f, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136003f_FireOrHit_06), DEBUGSTRING("CEnemyBase::H0x0136003f_FireOrHit_06")},
 {0x01360040, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360040_FireOrHit_07), DEBUGSTRING("CEnemyBase::H0x01360040_FireOrHit_07")},
 {0x01360041, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360041_FireOrHit_08), DEBUGSTRING("CEnemyBase::H0x01360041_FireOrHit_08")},
 {0x01360042, -1, CEntity::pEventHandler(&CEnemyBase::Hit),DEBUGSTRING("CEnemyBase::Hit")},
 {0x01360043, -1, CEntity::pEventHandler(&CEnemyBase::Fire),DEBUGSTRING("CEnemyBase::Fire")},
 {0x01360044, -1, CEntity::pEventHandler(&CEnemyBase::LockOnEnemy),DEBUGSTRING("CEnemyBase::LockOnEnemy")},
 {0x01360045, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360045_LockOnEnemy_01), DEBUGSTRING("CEnemyBase::H0x01360045_LockOnEnemy_01")},
 {0x01360046, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360046_LockOnEnemy_02), DEBUGSTRING("CEnemyBase::H0x01360046_LockOnEnemy_02")},
 {0x01360047, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360047_LockOnEnemy_03), DEBUGSTRING("CEnemyBase::H0x01360047_LockOnEnemy_03")},
 {0x01360048, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360048_LockOnEnemy_04), DEBUGSTRING("CEnemyBase::H0x01360048_LockOnEnemy_04")},
 {0x01360049, -1, CEntity::pEventHandler(&CEnemyBase::ChargeHitEnemy),DEBUGSTRING("CEnemyBase::ChargeHitEnemy")},
 {0x0136004a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136004a_ChargeHitEnemy_01), DEBUGSTRING("CEnemyBase::H0x0136004a_ChargeHitEnemy_01")},
 {0x0136004b, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136004b_ChargeHitEnemy_02), DEBUGSTRING("CEnemyBase::H0x0136004b_ChargeHitEnemy_02")},
 {0x0136004c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136004c_ChargeHitEnemy_03), DEBUGSTRING("CEnemyBase::H0x0136004c_ChargeHitEnemy_03")},
 {0x0136004d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136004d_ChargeHitEnemy_04), DEBUGSTRING("CEnemyBase::H0x0136004d_ChargeHitEnemy_04")},
 {0x0136004e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136004e_ChargeHitEnemy_05), DEBUGSTRING("CEnemyBase::H0x0136004e_ChargeHitEnemy_05")},
 {0x0136004f, -1, CEntity::pEventHandler(&CEnemyBase::BeWounded),DEBUGSTRING("CEnemyBase::BeWounded")},
 {0x01360050, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360050_BeWounded_01), DEBUGSTRING("CEnemyBase::H0x01360050_BeWounded_01")},
 {0x01360051, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360051_BeWounded_02), DEBUGSTRING("CEnemyBase::H0x01360051_BeWounded_02")},
 {0x01360052, -1, CEntity::pEventHandler(&CEnemyBase::Die),DEBUGSTRING("CEnemyBase::Die")},
 {0x01360053, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360053_Die_01), DEBUGSTRING("CEnemyBase::H0x01360053_Die_01")},
 {0x01360054, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360054_Die_02), DEBUGSTRING("CEnemyBase::H0x01360054_Die_02")},
 {0x01360055, -1, CEntity::pEventHandler(&CEnemyBase::Death),DEBUGSTRING("CEnemyBase::Death")},
 {0x01360056, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360056_Death_01), DEBUGSTRING("CEnemyBase::H0x01360056_Death_01")},
 {0x01360057, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360057_Death_02), DEBUGSTRING("CEnemyBase::H0x01360057_Death_02")},
 {0x01360058, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360058_Death_03), DEBUGSTRING("CEnemyBase::H0x01360058_Death_03")},
 {0x01360059, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360059_Death_04), DEBUGSTRING("CEnemyBase::H0x01360059_Death_04")},
 {0x0136005a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136005a_Death_05), DEBUGSTRING("CEnemyBase::H0x0136005a_Death_05")},
 {0x0136005b, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136005b_Death_06), DEBUGSTRING("CEnemyBase::H0x0136005b_Death_06")},
 {0x0136005c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136005c_Death_07), DEBUGSTRING("CEnemyBase::H0x0136005c_Death_07")},
 {0x0136005d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136005d_Death_08), DEBUGSTRING("CEnemyBase::H0x0136005d_Death_08")},
 {0x0136005e, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136005e_Death_09), DEBUGSTRING("CEnemyBase::H0x0136005e_Death_09")},
 {0x0136005f, -1, CEntity::pEventHandler(&CEnemyBase::DeathSequence),DEBUGSTRING("CEnemyBase::DeathSequence")},
 {0x01360060, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360060_DeathSequence_01), DEBUGSTRING("CEnemyBase::H0x01360060_DeathSequence_01")},
 {0x01360061, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360061_DeathSequence_02), DEBUGSTRING("CEnemyBase::H0x01360061_DeathSequence_02")},
 {0x01360062, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360062_DeathSequence_03), DEBUGSTRING("CEnemyBase::H0x01360062_DeathSequence_03")},
 {0x01360063, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360063_DeathSequence_04), DEBUGSTRING("CEnemyBase::H0x01360063_DeathSequence_04")},
 {0x01360064, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360064_DeathSequence_05), DEBUGSTRING("CEnemyBase::H0x01360064_DeathSequence_05")},
 {0x01360065, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360065_DeathSequence_06), DEBUGSTRING("CEnemyBase::H0x01360065_DeathSequence_06")},
 {0x01360066, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360066_DeathSequence_07), DEBUGSTRING("CEnemyBase::H0x01360066_DeathSequence_07")},
 {0x01360067, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360067_DeathSequence_08), DEBUGSTRING("CEnemyBase::H0x01360067_DeathSequence_08")},
 {0x01360068, -1, CEntity::pEventHandler(&CEnemyBase::Active),DEBUGSTRING("CEnemyBase::Active")},
 {0x01360069, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360069_Active_01), DEBUGSTRING("CEnemyBase::H0x01360069_Active_01")},
 {0x0136006a, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136006a_Active_02), DEBUGSTRING("CEnemyBase::H0x0136006a_Active_02")},
 {0x0136006b, -1, CEntity::pEventHandler(&CEnemyBase::Inactive),DEBUGSTRING("CEnemyBase::Inactive")},
 {0x0136006c, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136006c_Inactive_01), DEBUGSTRING("CEnemyBase::H0x0136006c_Inactive_01")},
 {0x0136006d, -1, CEntity::pEventHandler(&CEnemyBase::H0x0136006d_Inactive_02), DEBUGSTRING("CEnemyBase::H0x0136006d_Inactive_02")},
 {0x0136006e, -1, CEntity::pEventHandler(&CEnemyBase::PreMainLoop),DEBUGSTRING("CEnemyBase::PreMainLoop")},
 {0x0136006f, -1, CEntity::pEventHandler(&CEnemyBase::MainLoop),DEBUGSTRING("CEnemyBase::MainLoop")},
 {0x01360070, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360070_MainLoop_01), DEBUGSTRING("CEnemyBase::H0x01360070_MainLoop_01")},
 {0x01360071, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360071_MainLoop_02), DEBUGSTRING("CEnemyBase::H0x01360071_MainLoop_02")},
 {0x01360072, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360072_MainLoop_03), DEBUGSTRING("CEnemyBase::H0x01360072_MainLoop_03")},
 {0x01360073, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360073_MainLoop_04), DEBUGSTRING("CEnemyBase::H0x01360073_MainLoop_04")},
 {0x01360074, -1, CEntity::pEventHandler(&CEnemyBase::StandardBehavior),DEBUGSTRING("CEnemyBase::StandardBehavior")},
 {0x01360075, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360075_StandardBehavior_01), DEBUGSTRING("CEnemyBase::H0x01360075_StandardBehavior_01")},
 {0x01360076, -1, CEntity::pEventHandler(&CEnemyBase::H0x01360076_StandardBehavior_02), DEBUGSTRING("CEnemyBase::H0x01360076_StandardBehavior_02")},
 {1, -1, CEntity::pEventHandler(&CEnemyBase::Main),DEBUGSTRING("CEnemyBase::Main")},
};
#define CEnemyBase_handlersct ARRAYCOUNT(CEnemyBase_handlers)

CEntity *CEnemyBase_New(void) { return new CEnemyBase; };
void CEnemyBase_OnInitClass(void) {};
void CEnemyBase_OnEndClass(void) {};
void CEnemyBase_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnemyBase_OnWorldEnd(CWorld *pwo) {};
void CEnemyBase_OnWorldInit(CWorld *pwo) {};
void CEnemyBase_OnWorldTick(CWorld *pwo) {};
void CEnemyBase_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnemyBase, CMovableModelEntity, "Enemy Base", "", 0x00000136);
DECLARE_CTFILENAME(_fnmCEnemyBase_tbn, "");