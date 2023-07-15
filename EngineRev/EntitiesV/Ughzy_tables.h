// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(UghzyType)
  EP_ENUMVALUE(UZT_SMALL, "Small"),
  EP_ENUMVALUE(UZT_NORMAL, "Normal"),
  EP_ENUMVALUE(UZT_BIG, "Big"),
EP_ENUMEND(UghzyType);

#define ENTITYCLASS CUghzy

CEntityProperty CUghzy_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &UghzyType_enum, (0x164<<8)+1, 0x5C0, "Type", 'T', "m_uztType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x164<<8)+2, 0x5C4, "", 0, "m_iFiredProjectiles", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x164<<8)+3, 0x5C8, "", 0, "m_iMeleeAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+4, 0x5CC, "", 0, "m_bRenderElectricity", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x164<<8)+5, 0x5D0, "", 0, "m_vElectricitySource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x164<<8)+6, 0x5DC, "", 0, "m_vElectricityTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x164<<8)+7, 0x5E8, "", 0, "m_tmTemp", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x164<<8)+8, 0x5EC, "", 0, "m_tmNextFXTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x164<<8)+9, 0x5F0, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x164<<8)+10, 0x5F4, "", 0, "m_iAttID", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+20, 0x5F8, "Uses melee attacks", 0, "m_bDoesMelee", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+21, 0x5FC, "Uses rocket launcher", 0, "m_bDoesRockets", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+22, 0x600, "Uses laser", 0, "m_bDoesLasers", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+23, 0x604, "Uses lava bomb", 0, "m_bDoesLavabomb", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x164<<8)+24, 0x608, "Uses ghostbuster", 0, "m_bDoesGhostbuster", 0x7F0000FFUL, 0),
};
#define CUghzy_propertiesct ARRAYCOUNT(CUghzy_properties)

CEntityComponent CUghzy_components[] = {
#define CUghzy_CLASS_0 0x16400 // (0x164<<8)+0
 CEntityComponent(ECT_CLASS, CUghzy_CLASS_0, "EFNM" "Classes\\EnemyBase.ecl"),
#define CUghzy_CLASS_1 0x16401 // (0x164<<8)+1
 CEntityComponent(ECT_CLASS, CUghzy_CLASS_1, "EFNM" "Classes\\Projectile.ecl"),
#define CUghzy_CLASS_2 0x16402 // (0x164<<8)+2
 CEntityComponent(ECT_CLASS, CUghzy_CLASS_2, "EFNM" "Classes\\Effector.ecl"),
#define CUghzy_MODEL_10 0x1640A // (0x164<<8)+10
 CEntityComponent(ECT_MODEL, CUghzy_MODEL_10, "EFNM" "Models\\Enemies\\Ughzy\\Devil.mdl"),
#define CUghzy_TEXTURE_11 0x1640B // (0x164<<8)+11
 CEntityComponent(ECT_TEXTURE, CUghzy_TEXTURE_11, "EFNM" "Models\\Enemies\\Ughzy\\Devil.tex"),
#define CUghzy_MODEL_12 0x1640C // (0x164<<8)+12
 CEntityComponent(ECT_MODEL, CUghzy_MODEL_12, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\Laser.mdl"),
#define CUghzy_TEXTURE_13 0x1640D // (0x164<<8)+13
 CEntityComponent(ECT_TEXTURE, CUghzy_TEXTURE_13, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\Laser.tex"),
#define CUghzy_MODEL_14 0x1640E // (0x164<<8)+14
 CEntityComponent(ECT_MODEL, CUghzy_MODEL_14, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\RocketLauncher.mdl"),
#define CUghzy_TEXTURE_15 0x1640F // (0x164<<8)+15
 CEntityComponent(ECT_TEXTURE, CUghzy_TEXTURE_15, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\RocketLauncher.tex"),
#define CUghzy_MODEL_16 0x16410 // (0x164<<8)+16
 CEntityComponent(ECT_MODEL, CUghzy_MODEL_16, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\ProjectileGun.mdl"),
#define CUghzy_TEXTURE_17 0x16411 // (0x164<<8)+17
 CEntityComponent(ECT_TEXTURE, CUghzy_TEXTURE_17, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\ProjectileGun.tex"),
#define CUghzy_MODEL_18 0x16412 // (0x164<<8)+18
 CEntityComponent(ECT_MODEL, CUghzy_MODEL_18, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\ElectricityGun.mdl"),
#define CUghzy_TEXTURE_19 0x16413 // (0x164<<8)+19
 CEntityComponent(ECT_TEXTURE, CUghzy_TEXTURE_19, "EFNM" "Models\\Enemies\\Ughzy\\Weapons\\ElectricityGun.tex"),
#define CUghzy_SOUND_50 0x16432 // (0x164<<8)+50
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_50, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Anger01.wav"),
#define CUghzy_SOUND_51 0x16433 // (0x164<<8)+51
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_51, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Anger02.wav"),
#define CUghzy_SOUND_52 0x16434 // (0x164<<8)+52
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_52, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\AttackClose.wav"),
#define CUghzy_SOUND_53 0x16435 // (0x164<<8)+53
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_53, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Celebrate01.wav"),
#define CUghzy_SOUND_55 0x16437 // (0x164<<8)+55
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_55, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Death.wav"),
#define CUghzy_SOUND_56 0x16438 // (0x164<<8)+56
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_56, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\GrabWeaponsLower.wav"),
#define CUghzy_SOUND_57 0x16439 // (0x164<<8)+57
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_57, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\GrabWeaponsUpper.wav"),
#define CUghzy_SOUND_58 0x1643A // (0x164<<8)+58
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_58, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Getup.wav"),
#define CUghzy_SOUND_59 0x1643B // (0x164<<8)+59
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_59, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Idle.wav"),
#define CUghzy_SOUND_60 0x1643C // (0x164<<8)+60
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_60, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Punch.wav"),
#define CUghzy_SOUND_61 0x1643D // (0x164<<8)+61
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_61, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Smash.wav"),
#define CUghzy_SOUND_62 0x1643E // (0x164<<8)+62
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_62, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\WalkL.wav"),
#define CUghzy_SOUND_63 0x1643F // (0x164<<8)+63
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_63, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\WalkR.wav"),
#define CUghzy_SOUND_64 0x16440 // (0x164<<8)+64
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_64, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Wound.wav"),
#define CUghzy_SOUND_65 0x16441 // (0x164<<8)+65
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_65, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\AttackBreathStart.wav"),
#define CUghzy_SOUND_66 0x16442 // (0x164<<8)+66
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_66, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\BreathProjectile.wav"),
#define CUghzy_SOUND_67 0x16443 // (0x164<<8)+67
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_67, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\AttackBreathEnd.wav"),
#define CUghzy_SOUND_68 0x16444 // (0x164<<8)+68
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_68, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Heal.wav"),
#define CUghzy_SOUND_69 0x16445 // (0x164<<8)+69
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_69, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\RocketLauncher.wav"),
#define CUghzy_SOUND_70 0x16446 // (0x164<<8)+70
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_70, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Laser.wav"),
#define CUghzy_SOUND_71 0x16447 // (0x164<<8)+71
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_71, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\LavaBomb.wav"),
#define CUghzy_SOUND_72 0x16448 // (0x164<<8)+72
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_72, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Ghostbuster.wav"),
#define CUghzy_SOUND_73 0x16449 // (0x164<<8)+73
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_73, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\AttackBreath.wav"),
#define CUghzy_SOUND_74 0x1644A // (0x164<<8)+74
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_74, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Enter.wav"),
#define CUghzy_SOUND_75 0x1644B // (0x164<<8)+75
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_75, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\DeathParticles.wav"),
#define CUghzy_SOUND_76 0x1644C // (0x164<<8)+76
 CEntityComponent(ECT_SOUND, CUghzy_SOUND_76, "EFNM" "Models\\Enemies\\Ughzy\\Sounds\\Disappear.wav"),
};
#define CUghzy_componentsct ARRAYCOUNT(CUghzy_components)

CEventHandlerEntry CUghzy_handlers[] = {
 {0x1640000, -1, CEntity::pEventHandler(&CUghzy::H0x1640000_Procedure_0), DEBUGSTRING("CUghzy::H0x1640000_Procedure_0")},
 {0x1640001, -1, CEntity::pEventHandler(&CUghzy::H0x1640001_Procedure_1), DEBUGSTRING("CUghzy::H0x1640001_Procedure_1")},
 {0x1640002, -1, CEntity::pEventHandler(&CUghzy::H0x1640002_Procedure_2), DEBUGSTRING("CUghzy::H0x1640002_Procedure_2")},
 {0x1640003, -1, CEntity::pEventHandler(&CUghzy::H0x1640003_Procedure_3), DEBUGSTRING("CUghzy::H0x1640003_Procedure_3")},
 {0x1640004, -1, CEntity::pEventHandler(&CUghzy::H0x1640004_Procedure_4), DEBUGSTRING("CUghzy::H0x1640004_Procedure_4")},
 {0x1640005, -1, CEntity::pEventHandler(&CUghzy::H0x1640005_Procedure_5), DEBUGSTRING("CUghzy::H0x1640005_Procedure_5")},
 {0x1640006, -1, CEntity::pEventHandler(&CUghzy::H0x1640006_Procedure_6), DEBUGSTRING("CUghzy::H0x1640006_Procedure_6")},
 {0x1640007, -1, CEntity::pEventHandler(&CUghzy::H0x1640007_Procedure_7), DEBUGSTRING("CUghzy::H0x1640007_Procedure_7")},
 {0x1640008, -1, CEntity::pEventHandler(&CUghzy::H0x1640008_Procedure_8), DEBUGSTRING("CUghzy::H0x1640008_Procedure_8")},
 {0x1640009, -1, CEntity::pEventHandler(&CUghzy::H0x1640009_Procedure_9), DEBUGSTRING("CUghzy::H0x1640009_Procedure_9")},
 {0x164000A, -1, CEntity::pEventHandler(&CUghzy::H0x164000A_Procedure_10), DEBUGSTRING("CUghzy::H0x164000A_Procedure_10")},
 {0x164000B, -1, CEntity::pEventHandler(&CUghzy::H0x164000B_Procedure_11), DEBUGSTRING("CUghzy::H0x164000B_Procedure_11")},
 {0x164000C, -1, CEntity::pEventHandler(&CUghzy::H0x164000C_Procedure_12), DEBUGSTRING("CUghzy::H0x164000C_Procedure_12")},
 {0x164000D, -1, CEntity::pEventHandler(&CUghzy::H0x164000D_Procedure_13), DEBUGSTRING("CUghzy::H0x164000D_Procedure_13")},
 {0x164000E, -1, CEntity::pEventHandler(&CUghzy::H0x164000E_Procedure_14), DEBUGSTRING("CUghzy::H0x164000E_Procedure_14")},
 {0x164000F, -1, CEntity::pEventHandler(&CUghzy::H0x164000F_Procedure_15), DEBUGSTRING("CUghzy::H0x164000F_Procedure_15")},
 {0x1640010, -1, CEntity::pEventHandler(&CUghzy::H0x1640010_Procedure_16), DEBUGSTRING("CUghzy::H0x1640010_Procedure_16")},
 {0x1640011, -1, CEntity::pEventHandler(&CUghzy::H0x1640011_Procedure_17), DEBUGSTRING("CUghzy::H0x1640011_Procedure_17")},
 {0x1640012, -1, CEntity::pEventHandler(&CUghzy::H0x1640012_Procedure_18), DEBUGSTRING("CUghzy::H0x1640012_Procedure_18")},
 {0x1640013, -1, CEntity::pEventHandler(&CUghzy::H0x1640013_Procedure_19), DEBUGSTRING("CUghzy::H0x1640013_Procedure_19")},
 {0x1640014, -1, CEntity::pEventHandler(&CUghzy::H0x1640014_Procedure_20), DEBUGSTRING("CUghzy::H0x1640014_Procedure_20")},
 {0x1640015, -1, CEntity::pEventHandler(&CUghzy::H0x1640015_Procedure_21), DEBUGSTRING("CUghzy::H0x1640015_Procedure_21")},
 {0x1640016, -1, CEntity::pEventHandler(&CUghzy::H0x1640016_Procedure_22), DEBUGSTRING("CUghzy::H0x1640016_Procedure_22")},
 {0x1640017, -1, CEntity::pEventHandler(&CUghzy::H0x1640017_Procedure_23), DEBUGSTRING("CUghzy::H0x1640017_Procedure_23")},
 {0x1640018, -1, CEntity::pEventHandler(&CUghzy::H0x1640018_Procedure_24), DEBUGSTRING("CUghzy::H0x1640018_Procedure_24")},
 {0x1640019, -1, CEntity::pEventHandler(&CUghzy::H0x1640019_Procedure_25), DEBUGSTRING("CUghzy::H0x1640019_Procedure_25")},
 {0x164001A, -1, CEntity::pEventHandler(&CUghzy::H0x164001A_Procedure_26), DEBUGSTRING("CUghzy::H0x164001A_Procedure_26")},
 {0x164001B, -1, CEntity::pEventHandler(&CUghzy::H0x164001B_Procedure_27), DEBUGSTRING("CUghzy::H0x164001B_Procedure_27")},
 {0x164001C, -1, CEntity::pEventHandler(&CUghzy::H0x164001C_Procedure_28), DEBUGSTRING("CUghzy::H0x164001C_Procedure_28")},
 {0x164001D, -1, CEntity::pEventHandler(&CUghzy::H0x164001D_Procedure_29), DEBUGSTRING("CUghzy::H0x164001D_Procedure_29")},
 {0x164001E, -1, CEntity::pEventHandler(&CUghzy::H0x164001E_Procedure_30), DEBUGSTRING("CUghzy::H0x164001E_Procedure_30")},
 {0x164001F, -1, CEntity::pEventHandler(&CUghzy::H0x164001F_Procedure_31), DEBUGSTRING("CUghzy::H0x164001F_Procedure_31")},
 {0x1640020, -1, CEntity::pEventHandler(&CUghzy::H0x1640020_Procedure_32), DEBUGSTRING("CUghzy::H0x1640020_Procedure_32")},
 {0x1640021, -1, CEntity::pEventHandler(&CUghzy::H0x1640021_Procedure_33), DEBUGSTRING("CUghzy::H0x1640021_Procedure_33")},
 {0x1640022, -1, CEntity::pEventHandler(&CUghzy::H0x1640022_Procedure_34), DEBUGSTRING("CUghzy::H0x1640022_Procedure_34")},
 {0x1640023, -1, CEntity::pEventHandler(&CUghzy::H0x1640023_Procedure_35), DEBUGSTRING("CUghzy::H0x1640023_Procedure_35")},
 {0x1640024, -1, CEntity::pEventHandler(&CUghzy::H0x1640024_Procedure_36), DEBUGSTRING("CUghzy::H0x1640024_Procedure_36")},
 {0x1640025, -1, CEntity::pEventHandler(&CUghzy::H0x1640025_Procedure_37), DEBUGSTRING("CUghzy::H0x1640025_Procedure_37")},
 {0x1640026, -1, CEntity::pEventHandler(&CUghzy::H0x1640026_Procedure_38), DEBUGSTRING("CUghzy::H0x1640026_Procedure_38")},
 {0x1640027, 0x1360043, CEntity::pEventHandler(&CUghzy::H0x1640027_Procedure_39), DEBUGSTRING("CUghzy::H0x1640027_Procedure_39")},
 {0x1640028, -1, CEntity::pEventHandler(&CUghzy::H0x1640028_Procedure_40), DEBUGSTRING("CUghzy::H0x1640028_Procedure_40")},
 {0x1640029, -1, CEntity::pEventHandler(&CUghzy::H0x1640029_Procedure_41), DEBUGSTRING("CUghzy::H0x1640029_Procedure_41")},
 {0x164002A, -1, CEntity::pEventHandler(&CUghzy::H0x164002A_Procedure_42), DEBUGSTRING("CUghzy::H0x164002A_Procedure_42")},
 {0x164002B, -1, CEntity::pEventHandler(&CUghzy::H0x164002B_Procedure_43), DEBUGSTRING("CUghzy::H0x164002B_Procedure_43")},
 {0x164002C, -1, CEntity::pEventHandler(&CUghzy::H0x164002C_Procedure_44), DEBUGSTRING("CUghzy::H0x164002C_Procedure_44")},
 {0x164002D, -1, CEntity::pEventHandler(&CUghzy::H0x164002D_Procedure_45), DEBUGSTRING("CUghzy::H0x164002D_Procedure_45")},
 {0x164002E, -1, CEntity::pEventHandler(&CUghzy::H0x164002E_Procedure_46), DEBUGSTRING("CUghzy::H0x164002E_Procedure_46")},
 {1, -1, CEntity::pEventHandler(&CUghzy::Main), DEBUGSTRING("CUghzy::Main")},
};
#define CUghzy_handlersct ARRAYCOUNT(CUghzy_handlers)

CEntity *CUghzy_New(void) { return new CUghzy; };
void CUghzy_OnInitClass(void) {};
void CUghzy_OnEndClass(void) {};
void CUghzy_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CUghzy_OnWorldEnd(CWorld *pwo) {};
void CUghzy_OnWorldInit(CWorld *pwo) {};
void CUghzy_OnWorldTick(CWorld *pwo) {};
void CUghzy_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CUghzy, CEnemyBase, "Ughzy", "Thumbnails\\Ughzy.tbn", 356);
DECLARE_CTFILENAME(_fnmCUghzy_tbn, "Thumbnails\\Ughzy.tbn");
