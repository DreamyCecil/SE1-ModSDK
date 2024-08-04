// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(LarvaTarget)
  EP_ENUMVALUE(LT_NONE, ""),
  EP_ENUMVALUE(LT_ENEMY, ""),
  EP_ENUMVALUE(LT_RECHARGER, ""),
EP_ENUMEND(LarvaTarget);

#define ENTITYCLASS CExotechLarva

CEntityProperty CExotechLarva_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+10, offsetof(CExotechLarva, m_penMarkerNew), "Larva 1st Grid Marker", 0, "m_penMarkerNew", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+11, offsetof(CExotechLarva, m_penMarkerOld), "", 0, "m_penMarkerOld", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+15, offsetof(CExotechLarva, m_fStopRadius), "Larva MinDist From Player", 0, "m_fStopRadius", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+16, offsetof(CExotechLarva, m_fStretch), "", 0, "m_fStretch", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+17, offsetof(CExotechLarva, m_fLarvaHealth), "", 0, "m_fLarvaHealth", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+19, offsetof(CExotechLarva, m_fRechargePerSecond), "Larva Recharge health/sec", 0, "m_fRechargePerSecond", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &LarvaTarget_enum, (0x0000015a<<8)+18, offsetof(CExotechLarva, m_ltTarget), "", 0, "m_ltTarget", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+30, offsetof(CExotechLarva, m_penFirstRechargeTarget), "Larva First Recharge target", 0, "m_penFirstRechargeTarget", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+31, offsetof(CExotechLarva, m_bRechargedAtLeastOnce), "", 0, "m_bRechargedAtLeastOnce", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+20, offsetof(CExotechLarva, m_vFirePosLeftPlasmaRel), "", 0, "m_vFirePosLeftPlasmaRel", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+21, offsetof(CExotechLarva, m_vFirePosRightPlasmaRel), "", 0, "m_vFirePosRightPlasmaRel", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+23, offsetof(CExotechLarva, m_vFirePosTailRel), "", 0, "m_vFirePosTailRel", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+24, offsetof(CExotechLarva, m_vFirePosLeftLaserAbs), "", 0, "m_vFirePosLeftLaserAbs", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+25, offsetof(CExotechLarva, m_vFirePosRightLaserAbs), "", 0, "m_vFirePosRightLaserAbs", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+40, offsetof(CExotechLarva, m_bLeftArmActive), "", 0, "m_bLeftArmActive", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+41, offsetof(CExotechLarva, m_bRightArmActive), "", 0, "m_bRightArmActive", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x0000015a<<8)+42, offsetof(CExotechLarva, m_iExplodingArm), "", 0, "m_iExplodingArm", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+45, offsetof(CExotechLarva, m_fMaxRechargedHealth), "", 0, "m_fMaxRechargedHealth", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+46, offsetof(CExotechLarva, m_bExploding), "", 0, "m_bExploding", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+47, offsetof(CExotechLarva, m_bActive), "", 0, "m_bActive", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+48, offsetof(CExotechLarva, m_bRechargePose), "", 0, "m_bRechargePose", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+49, offsetof(CExotechLarva, m_bLaserActive), "", 0, "m_bLaserActive", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+51, offsetof(CExotechLarva, m_bInitialMove), "", 0, "m_bInitialMove", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+54, offsetof(CExotechLarva, m_penRecharger), "Larva Recharger", 0, "m_penRecharger", C_GREEN  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+60, offsetof(CExotechLarva, m_tmLastTargateChange), "", 0, "m_tmLastTargateChange", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_PLACEMENT3D, NULL, (0x0000015a<<8)+70, offsetof(CExotechLarva, m_plExpArmPos), "", 0, "m_plExpArmPos", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+71, offsetof(CExotechLarva, m_aExpArmRot), "", 0, "m_aExpArmRot", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_PLACEMENT3D, NULL, (0x0000015a<<8)+72, offsetof(CExotechLarva, m_plExpGunPos), "", 0, "m_plExpGunPos", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+73, offsetof(CExotechLarva, m_aExpGunRot), "", 0, "m_aExpGunRot", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+74, offsetof(CExotechLarva, m_vExpDamage), "", 0, "m_vExpDamage", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x0000015a<<8)+75, offsetof(CExotechLarva, m_iExplosions), "", 0, "m_iExplosions", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x0000015a<<8)+80, offsetof(CExotechLarva, m_iRnd), "", 0, "m_iRnd", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+81, offsetof(CExotechLarva, m_bRecharging), "", 0, "m_bRecharging", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+90, offsetof(CExotechLarva, m_penDeathInflictor), "", 0, "m_penDeathInflictor", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+100, offsetof(CExotechLarva, m_tmDontFireLaserBefore), "", 0, "m_tmDontFireLaserBefore", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000015a<<8)+101, offsetof(CExotechLarva, m_fMinimumLaserWait), "Larva min. laser interval", 0, "m_fMinimumLaserWait", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+102, offsetof(CExotechLarva, m_bRenderLeftLaser), "", 0, "m_bRenderLeftLaser", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+103, offsetof(CExotechLarva, m_bRenderRightLaser), "", 0, "m_bRenderRightLaser", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+104, offsetof(CExotechLarva, m_vLeftLaserTarget), "", 0, "m_vLeftLaserTarget", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015a<<8)+105, offsetof(CExotechLarva, m_vRightLaserTarget), "", 0, "m_vRightLaserTarget", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000015a<<8)+110, offsetof(CExotechLarva, m_bInvulnerable), "", 0, "m_bInvulnerable", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+150, offsetof(CExotechLarva, m_penLeftArmDestroyTarget), "Larva ArmBlow#1 Target", 0, "m_penLeftArmDestroyTarget", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+151, offsetof(CExotechLarva, m_penRightArmDestroyTarget), "Larva ArmBlow#2 Target", 0, "m_penRightArmDestroyTarget", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015a<<8)+152, offsetof(CExotechLarva, m_penDeathTarget), "Larva Death Target", 0, "m_penDeathTarget", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+200, offsetof(CExotechLarva, m_soFire1), "", 0, "m_soFire1", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+201, offsetof(CExotechLarva, m_soFire2), "", 0, "m_soFire2", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+202, offsetof(CExotechLarva, m_soFire3), "", 0, "m_soFire3", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+203, offsetof(CExotechLarva, m_soVoice), "", 0, "m_soVoice", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+204, offsetof(CExotechLarva, m_soChirp), "", 0, "m_soChirp", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x0000015a<<8)+205, offsetof(CExotechLarva, m_soLaser), "", 0, "m_soLaser", 0, 0),
};
#define CExotechLarva_propertiesct ARRAYCOUNT(CExotechLarva_properties)

CEntityComponent CExotechLarva_components[] = {
#define CLASS_BASE ((0x0000015a<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000015a<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_PROJECTILE ((0x0000015a<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015a<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_LARVAOFFSPRING ((0x0000015a<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_LARVAOFFSPRING, "EFNM" "Classes\\LarvaOffspring.ecl"),
#define MODEL_EXOTECHLARVA ((0x0000015a<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_EXOTECHLARVA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\ExotechLarva.mdl"),
#define TEXTURE_EXOTECHLARVA ((0x0000015a<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_EXOTECHLARVA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\ExotechLarva.tex"),
#define MODEL_BODY ((0x0000015a<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_BODY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Body.mdl"),
#define TEXTURE_BODY ((0x0000015a<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BODY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Body.tex"),
#define MODEL_BEAM ((0x0000015a<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Beam.mdl"),
#define TEXTURE_BEAM ((0x0000015a<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAM, "EFNM" "ModelsMP\\Effects\\Laser\\Laser.tex"),
#define MODEL_ENERGYBEAMS ((0x0000015a<<8)+16)
 CEntityComponent(ECT_MODEL, MODEL_ENERGYBEAMS, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\EnergyBeams.mdl"),
#define TEXTURE_ENERGYBEAMS ((0x0000015a<<8)+17)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ENERGYBEAMS, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\EnergyBeams.tex"),
#define MODEL_FLARE ((0x0000015a<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\EffectFlare.mdl"),
#define TEXTURE_FLARE ((0x0000015a<<8)+19)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\EffectFlare.tex"),
#define MODEL_WING ((0x0000015a<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_WING, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Arm.mdl"),
#define TEXTURE_WING ((0x0000015a<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WING, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Arm.tex"),
#define MODEL_PLASMAGUN ((0x0000015a<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_PLASMAGUN, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Weapons\\PlasmaGun.mdl"),
#define TEXTURE_PLASMAGUN ((0x0000015a<<8)+33)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PLASMAGUN, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Weapons\\PlasmaGun.tex"),
#define MODEL_BLADES ((0x0000015a<<8)+34)
 CEntityComponent(ECT_MODEL, MODEL_BLADES, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\BackArms.mdl"),
#define MODEL_DEBRIS_BODY ((0x0000015a<<8)+36)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_BODY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Debris\\BodyDebris.mdl"),
#define MODEL_DEBRIS_TAIL01 ((0x0000015a<<8)+37)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_TAIL01, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Debris\\TailDebris01.mdl"),
#define MODEL_DEBRIS_TAIL02 ((0x0000015a<<8)+38)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_TAIL02, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Debris\\TailDebris02.mdl"),
#define MODEL_DEBRIS_FLESH ((0x0000015a<<8)+39)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\Flesh.mdl"),
#define TEXTURE_DEBRIS_FLESH ((0x0000015a<<8)+40)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DEBRIS_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshRed.tex"),
#define MODEL_PLASMA ((0x0000015a<<8)+41)
 CEntityComponent(ECT_MODEL, MODEL_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\Projectile.mdl"),
#define TEXTURE_PLASMA ((0x0000015a<<8)+42)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\Projectile.tex"),
#define SOUND_FIRE_PLASMA ((0x0000015a<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_FIRE_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\FirePlasma.wav"),
#define SOUND_FIRE_TAIL ((0x0000015a<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_FIRE_TAIL, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\FireTail.wav"),
#define SOUND_LASER_CHARGE ((0x0000015a<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_LASER_CHARGE, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\LaserCharge.wav"),
#define SOUND_DEATH ((0x0000015a<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\Death.wav"),
#define SOUND_ARMDESTROY ((0x0000015a<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_ARMDESTROY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\ArmDestroy.wav"),
#define SOUND_CHIRP ((0x0000015a<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_CHIRP, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\Chirp.wav"),
#define SOUND_DEPLOYLASER ((0x0000015a<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DEPLOYLASER, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Sounds\\DeployLaser.wav"),
};
#define CExotechLarva_componentsct ARRAYCOUNT(CExotechLarva_components)

CEventHandlerEntry CExotechLarva_handlers[] = {
 {0x015a0002, STATE_CEnemyBase_BeWounded, CEntity::pEventHandler(&CExotechLarva::BeWounded),DEBUGSTRING("CExotechLarva::BeWounded")},
 {0x015a0003, -1, CEntity::pEventHandler(&CExotechLarva::ArmExplosion),DEBUGSTRING("CExotechLarva::ArmExplosion")},
 {0x015a0004, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0004_ArmExplosion_01), DEBUGSTRING("CExotechLarva::H0x015a0004_ArmExplosion_01")},
 {0x015a0005, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0005_ArmExplosion_02), DEBUGSTRING("CExotechLarva::H0x015a0005_ArmExplosion_02")},
 {0x015a0006, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0006_ArmExplosion_03), DEBUGSTRING("CExotechLarva::H0x015a0006_ArmExplosion_03")},
 {0x015a0007, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0007_ArmExplosion_04), DEBUGSTRING("CExotechLarva::H0x015a0007_ArmExplosion_04")},
 {0x015a0008, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0008_ArmExplosion_05), DEBUGSTRING("CExotechLarva::H0x015a0008_ArmExplosion_05")},
 {0x015a0009, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0009_ArmExplosion_06), DEBUGSTRING("CExotechLarva::H0x015a0009_ArmExplosion_06")},
 {0x015a000a, STATE_CEnemyBase_Die, CEntity::pEventHandler(&CExotechLarva::Die),DEBUGSTRING("CExotechLarva::Die")},
 {0x015a000b, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a000b_Die_01), DEBUGSTRING("CExotechLarva::H0x015a000b_Die_01")},
 {0x015a000c, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a000c_Die_02), DEBUGSTRING("CExotechLarva::H0x015a000c_Die_02")},
 {0x015a000d, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a000d_Die_03), DEBUGSTRING("CExotechLarva::H0x015a000d_Die_03")},
 {0x015a000e, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a000e_Die_04), DEBUGSTRING("CExotechLarva::H0x015a000e_Die_04")},
 {0x015a000f, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CExotechLarva::Fire),DEBUGSTRING("CExotechLarva::Fire")},
 {0x015a0010, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0010_Fire_01), DEBUGSTRING("CExotechLarva::H0x015a0010_Fire_01")},
 {0x015a0011, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0011_Fire_02), DEBUGSTRING("CExotechLarva::H0x015a0011_Fire_02")},
 {0x015a0012, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0012_Fire_03), DEBUGSTRING("CExotechLarva::H0x015a0012_Fire_03")},
 {0x015a0013, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0013_Fire_04), DEBUGSTRING("CExotechLarva::H0x015a0013_Fire_04")},
 {0x015a0014, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0014_Fire_05), DEBUGSTRING("CExotechLarva::H0x015a0014_Fire_05")},
 {0x015a0015, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0015_Fire_06), DEBUGSTRING("CExotechLarva::H0x015a0015_Fire_06")},
 {0x015a0016, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0016_Fire_07), DEBUGSTRING("CExotechLarva::H0x015a0016_Fire_07")},
 {0x015a0017, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0017_Fire_08), DEBUGSTRING("CExotechLarva::H0x015a0017_Fire_08")},
 {0x015a0018, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0018_Fire_09), DEBUGSTRING("CExotechLarva::H0x015a0018_Fire_09")},
 {0x015a0019, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0019_Fire_10), DEBUGSTRING("CExotechLarva::H0x015a0019_Fire_10")},
 {0x015a001a, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a001a_Fire_11), DEBUGSTRING("CExotechLarva::H0x015a001a_Fire_11")},
 {0x015a001b, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a001b_Fire_12), DEBUGSTRING("CExotechLarva::H0x015a001b_Fire_12")},
 {0x015a001c, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a001c_Fire_13), DEBUGSTRING("CExotechLarva::H0x015a001c_Fire_13")},
 {0x015a001d, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a001d_Fire_14), DEBUGSTRING("CExotechLarva::H0x015a001d_Fire_14")},
 {0x015a001e, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CExotechLarva::Hit),DEBUGSTRING("CExotechLarva::Hit")},
 {0x015a001f, STATE_CEnemyBase_BeIdle, CEntity::pEventHandler(&CExotechLarva::BeIdle),DEBUGSTRING("CExotechLarva::BeIdle")},
 {0x015a0020, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0020_BeIdle_01), DEBUGSTRING("CExotechLarva::H0x015a0020_BeIdle_01")},
 {0x015a0021, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0021_BeIdle_02), DEBUGSTRING("CExotechLarva::H0x015a0021_BeIdle_02")},
 {0x015a0022, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0022_BeIdle_03), DEBUGSTRING("CExotechLarva::H0x015a0022_BeIdle_03")},
 {0x015a0023, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0023_BeIdle_04), DEBUGSTRING("CExotechLarva::H0x015a0023_BeIdle_04")},
 {0x015a0024, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0024_BeIdle_05), DEBUGSTRING("CExotechLarva::H0x015a0024_BeIdle_05")},
 {0x015a0025, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0025_BeIdle_06), DEBUGSTRING("CExotechLarva::H0x015a0025_BeIdle_06")},
 {0x015a0026, -1, CEntity::pEventHandler(&CExotechLarva::LarvaLoop),DEBUGSTRING("CExotechLarva::LarvaLoop")},
 {0x015a0027, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0027_LarvaLoop_01), DEBUGSTRING("CExotechLarva::H0x015a0027_LarvaLoop_01")},
 {0x015a0028, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0028_LarvaLoop_02), DEBUGSTRING("CExotechLarva::H0x015a0028_LarvaLoop_02")},
 {1, -1, CEntity::pEventHandler(&CExotechLarva::Main),DEBUGSTRING("CExotechLarva::Main")},
 {0x015a0029, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0029_Main_01), DEBUGSTRING("CExotechLarva::H0x015a0029_Main_01")},
 {0x015a002a, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002a_Main_02), DEBUGSTRING("CExotechLarva::H0x015a002a_Main_02")},
 {0x015a002b, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002b_Main_03), DEBUGSTRING("CExotechLarva::H0x015a002b_Main_03")},
 {0x015a002c, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002c_Main_04), DEBUGSTRING("CExotechLarva::H0x015a002c_Main_04")},
 {0x015a002d, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002d_Main_05), DEBUGSTRING("CExotechLarva::H0x015a002d_Main_05")},
 {0x015a002e, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002e_Main_06), DEBUGSTRING("CExotechLarva::H0x015a002e_Main_06")},
 {0x015a002f, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a002f_Main_07), DEBUGSTRING("CExotechLarva::H0x015a002f_Main_07")},
 {0x015a0030, -1, CEntity::pEventHandler(&CExotechLarva::H0x015a0030_Main_08), DEBUGSTRING("CExotechLarva::H0x015a0030_Main_08")},
};
#define CExotechLarva_handlersct ARRAYCOUNT(CExotechLarva_handlers)

CEntity *CExotechLarva_New(void) { return new CExotechLarva; };
void CExotechLarva_OnInitClass(void) {};
void CExotechLarva_OnEndClass(void) {};
void CExotechLarva_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CExotechLarva_OnWorldEnd(CWorld *pwo) {};
void CExotechLarva_OnWorldInit(CWorld *pwo) {};
void CExotechLarva_OnWorldTick(CWorld *pwo) {};
void CExotechLarva_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CExotechLarva, CEnemyBase, "ExotechLarva", "Thumbnails\\ExotechLarva.tbn", 0x0000015a);
DECLARE_CTFILENAME(_fnmCExotechLarva_tbn, "Thumbnails\\ExotechLarva.tbn");
