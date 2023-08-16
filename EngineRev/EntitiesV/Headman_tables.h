// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(HeadmanType)
  EP_ENUMVALUE(HDT_FIRECRACKER, "Fire Cracker"),
  EP_ENUMVALUE(HDT_ROCKETMAN, "Rocketman"),
  EP_ENUMVALUE(HDT_BOMBERMAN, "Bomberman"),
  EP_ENUMVALUE(HDT_KAMIKAZE, "Kamikaze"),
  EP_ENUMVALUE(HDT_COMMANDO, "Commando"),
  EP_ENUMVALUE(HDT_VAPORWAVE, "Vaporwave"),
EP_ENUMEND(HeadmanType);

#define ENTITYCLASS CHeadman

CEntityProperty CHeadman_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &HeadmanType_enum, (0x12f<<8)+1, 0x5C0, "Type", 'Y', "m_hdtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x12f<<8)+5, 0x5C4, "", 0, "m_bExploded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x12f<<8)+6, 0x5C8, "", 0, "m_bAttackSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+7, 0x5CC, "", 0, "m_iLoopRand", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+8, 0x5D0, "", 0, "m_iLoopCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+9, 0x5D4, "", 0, "m_iLoopAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileType_enum, (0x12f<<8)+20, 0x5D8, "", 0, "m_ptLoopProjectile", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x12f<<8)+21, 0x5DC, "Custom firecracker wait", 0, "m_iCustomFireWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+22, 0x5E0, "", 0, "m_iCustomAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+23, 0x5E4, "", 0, "m_iCustomNumber", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x12f<<8)+24, 0x5E8, "Custom firecracker angle", 0, "m_iCustomFireCounter", 0x7F0000FFUL, 0),
};
#define CHeadman_propertiesct ARRAYCOUNT(CHeadman_properties)

CEntityComponent CHeadman_components[] = {
#define CLASS_BASE ((0x0000012f<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000012f<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_PROJECTILE ((0x0000012f<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define MODEL_HEADMAN ((0x0000012f<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_HEADMAN, "EFNM" "Models\\Enemies\\Headman\\Headman.mdl"),
#define MODEL_HEAD ((0x0000012f<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_HEAD, "EFNM" "Models\\Enemies\\Headman\\Head.mdl"),
#define MODEL_FIRECRACKERHEAD ((0x0000012f<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_FIRECRACKERHEAD, "EFNM" "Models\\Enemies\\Headman\\FirecrackerHead.mdl"),
#define MODEL_CHAINSAW ((0x0000012f<<8)+13)
 CEntityComponent(ECT_MODEL, MODEL_CHAINSAW, "EFNM" "Models\\Enemies\\Headman\\ChainSaw.mdl"),
#define MODEL_ROCKETLAUNCHER ((0x0000012f<<8)+15)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Headman\\RocketLauncher.mdl"),
#define MODEL_BOMB ((0x0000012f<<8)+17)
 CEntityComponent(ECT_MODEL, MODEL_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.mdl"),
#define MODEL_COMMANDOHEAD ((0x0000012f<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_COMMANDOHEAD, "EFNM" "Models\\Enemies\\Headman\\CommandoHead.mdl"),
#define TEXTURE_BOMBERMAN ((0x0000012f<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BOMBERMAN, "EFNM" "Models\\Enemies\\Headman\\Bomberman.tex"),
#define TEXTURE_FIRECRACKER ((0x0000012f<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FIRECRACKER, "EFNM" "Models\\Enemies\\Headman\\Firecracker.tex"),
#define TEXTURE_KAMIKAZE ((0x0000012f<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_KAMIKAZE, "EFNM" "Models\\Enemies\\Headman\\Kamikaze.tex"),
#define TEXTURE_ROCKETMAN ((0x0000012f<<8)+23)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKETMAN, "EFNM" "Models\\Enemies\\Headman\\Rocketman.tex"),
#define TEXTURE_HEAD ((0x0000012f<<8)+24)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HEAD, "EFNM" "Models\\Enemies\\Headman\\Head.tex"),
#define TEXTURE_FIRECRACKERHEAD ((0x0000012f<<8)+25)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FIRECRACKERHEAD, "EFNM" "Models\\Enemies\\Headman\\FirecrackerHead.tex"),
#define TEXTURE_CHAINSAW ((0x0000012f<<8)+26)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CHAINSAW, "EFNM" "Models\\Enemies\\Headman\\Chainsaw.tex"),
#define TEXTURE_ROCKETLAUNCHER ((0x0000012f<<8)+28)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Headman\\RocketLauncher.tex"),
#define TEXTURE_BOMB ((0x0000012f<<8)+29)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BOMB, "EFNM" "Models\\Enemies\\Headman\\Projectile\\Bomb.tex"),
#define TEXTURE_COMMANDO ((0x0000012f<<8)+30)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COMMANDO, "EFNM" "Models\\Enemies\\Headman\\Commando.tex"),
#define TEXTURE_COMMANDOHEAD ((0x0000012f<<8)+31)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COMMANDOHEAD, "EFNM" "Models\\Enemies\\Headman\\CommandoHead.tex"),
#define TEXTURE_VAPORWAVE ((0x0000012f<<8)+32)
 CEntityComponent(ECT_TEXTURE, TEXTURE_VAPORWAVE, "EFNM" "Models\\Enemies\\Headman\\Vaporwave.tex"),
#define SOUND_IDLE ((0x0000012f<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Headman\\Sounds\\Idle.wav"),
#define SOUND_IDLEKAMIKAZE ((0x0000012f<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_IDLEKAMIKAZE, "EFNM" "Models\\Enemies\\Headman\\Sounds\\IdleKamikaze.wav"),
#define SOUND_SIGHT ((0x0000012f<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Headman\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x0000012f<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Headman\\Sounds\\Wound.wav"),
#define SOUND_FIREROCKETMAN ((0x0000012f<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_FIREROCKETMAN, "EFNM" "Models\\Enemies\\Headman\\Sounds\\FireRocketman.wav"),
#define SOUND_FIREFIRECRACKER ((0x0000012f<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_FIREFIRECRACKER, "EFNM" "Models\\Enemies\\Headman\\Sounds\\FireFirecracker.wav"),
#define SOUND_FIREBOMBERMAN ((0x0000012f<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_FIREBOMBERMAN, "EFNM" "Models\\Enemies\\Headman\\Sounds\\FireBomberman.wav"),
#define SOUND_ATTACKKAMIKAZE ((0x0000012f<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_ATTACKKAMIKAZE, "EFNM" "Models\\Enemies\\Headman\\Sounds\\AttackKamikaze.wav"),
#define SOUND_DEATH ((0x0000012f<<8)+58)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Headman\\Sounds\\Death.wav"),
};
#define CHeadman_componentsct ARRAYCOUNT(CHeadman_components)

CEventHandlerEntry CHeadman_handlers[] = {
 {0x12F0000, 0x136002A, CEntity::pEventHandler(&CHeadman::H0x12F0000_Procedure_0), DEBUGSTRING("CHeadman::H0x12F0000_Procedure_0")},
 {0x12F0001, 0x1360029, CEntity::pEventHandler(&CHeadman::H0x12F0001_Procedure_1), DEBUGSTRING("CHeadman::H0x12F0001_Procedure_1")},
 {0x12F0002, 0x1360043, CEntity::pEventHandler(&CHeadman::H0x12F0002_Procedure_2), DEBUGSTRING("CHeadman::H0x12F0002_Procedure_2")},
 {0x12F0003, -1, CEntity::pEventHandler(&CHeadman::H0x12F0003_Procedure_3), DEBUGSTRING("CHeadman::H0x12F0003_Procedure_3")},
 {0x12F0004, -1, CEntity::pEventHandler(&CHeadman::H0x12F0004_Procedure_4), DEBUGSTRING("CHeadman::H0x12F0004_Procedure_4")},
 {0x12F0005, -1, CEntity::pEventHandler(&CHeadman::H0x12F0005_Procedure_5), DEBUGSTRING("CHeadman::H0x12F0005_Procedure_5")},
 {0x12F0006, -1, CEntity::pEventHandler(&CHeadman::H0x12F0006_Procedure_6), DEBUGSTRING("CHeadman::H0x12F0006_Procedure_6")},
 {0x12F0007, -1, CEntity::pEventHandler(&CHeadman::H0x12F0007_Procedure_7), DEBUGSTRING("CHeadman::H0x12F0007_Procedure_7")},
 {0x12F0008, -1, CEntity::pEventHandler(&CHeadman::H0x12F0008_Procedure_8), DEBUGSTRING("CHeadman::H0x12F0008_Procedure_8")},
 {0x12F0009, -1, CEntity::pEventHandler(&CHeadman::H0x12F0009_Procedure_9), DEBUGSTRING("CHeadman::H0x12F0009_Procedure_9")},
 {0x12F000A, -1, CEntity::pEventHandler(&CHeadman::H0x12F000A_Procedure_10), DEBUGSTRING("CHeadman::H0x12F000A_Procedure_10")},
 {0x12F000B, -1, CEntity::pEventHandler(&CHeadman::H0x12F000B_Procedure_11), DEBUGSTRING("CHeadman::H0x12F000B_Procedure_11")},
 {0x12F000C, -1, CEntity::pEventHandler(&CHeadman::H0x12F000C_Procedure_12), DEBUGSTRING("CHeadman::H0x12F000C_Procedure_12")},
 {0x12F000D, -1, CEntity::pEventHandler(&CHeadman::H0x12F000D_Procedure_13), DEBUGSTRING("CHeadman::H0x12F000D_Procedure_13")},
 {0x12F000E, -1, CEntity::pEventHandler(&CHeadman::H0x12F000E_Procedure_14), DEBUGSTRING("CHeadman::H0x12F000E_Procedure_14")},
 {0x12F000F, -1, CEntity::pEventHandler(&CHeadman::H0x12F000F_Procedure_15), DEBUGSTRING("CHeadman::H0x12F000F_Procedure_15")},
 {0x12F0010, -1, CEntity::pEventHandler(&CHeadman::H0x12F0010_Procedure_16), DEBUGSTRING("CHeadman::H0x12F0010_Procedure_16")},
 {0x12F0011, -1, CEntity::pEventHandler(&CHeadman::H0x12F0011_Procedure_17), DEBUGSTRING("CHeadman::H0x12F0011_Procedure_17")},
 {0x12F0012, -1, CEntity::pEventHandler(&CHeadman::H0x12F0012_Procedure_18), DEBUGSTRING("CHeadman::H0x12F0012_Procedure_18")},
 {0x12F0013, -1, CEntity::pEventHandler(&CHeadman::H0x12F0013_Procedure_19), DEBUGSTRING("CHeadman::H0x12F0013_Procedure_19")},
 {0x12F0014, -1, CEntity::pEventHandler(&CHeadman::H0x12F0014_Procedure_20), DEBUGSTRING("CHeadman::H0x12F0014_Procedure_20")},
 {0x12F0015, -1, CEntity::pEventHandler(&CHeadman::H0x12F0015_Procedure_21), DEBUGSTRING("CHeadman::H0x12F0015_Procedure_21")},
 {0x12F0016, -1, CEntity::pEventHandler(&CHeadman::H0x12F0016_Procedure_22), DEBUGSTRING("CHeadman::H0x12F0016_Procedure_22")},
 {0x12F0017, -1, CEntity::pEventHandler(&CHeadman::H0x12F0017_Procedure_23), DEBUGSTRING("CHeadman::H0x12F0017_Procedure_23")},
 {0x12F0018, -1, CEntity::pEventHandler(&CHeadman::H0x12F0018_Procedure_24), DEBUGSTRING("CHeadman::H0x12F0018_Procedure_24")},
 {0x12F0019, -1, CEntity::pEventHandler(&CHeadman::H0x12F0019_Procedure_25), DEBUGSTRING("CHeadman::H0x12F0019_Procedure_25")},
 {0x12F001A, -1, CEntity::pEventHandler(&CHeadman::H0x12F001A_Procedure_26), DEBUGSTRING("CHeadman::H0x12F001A_Procedure_26")},
 {0x12F001B, -1, CEntity::pEventHandler(&CHeadman::H0x12F001B_Procedure_27), DEBUGSTRING("CHeadman::H0x12F001B_Procedure_27")},
 {0x12F001C, -1, CEntity::pEventHandler(&CHeadman::H0x12F001C_Procedure_28), DEBUGSTRING("CHeadman::H0x12F001C_Procedure_28")},
 {0x12F001D, -1, CEntity::pEventHandler(&CHeadman::H0x12F001D_Procedure_29), DEBUGSTRING("CHeadman::H0x12F001D_Procedure_29")},
 {0x12F001E, -1, CEntity::pEventHandler(&CHeadman::H0x12F001E_Procedure_30), DEBUGSTRING("CHeadman::H0x12F001E_Procedure_30")},
 {0x12F001F, -1, CEntity::pEventHandler(&CHeadman::H0x12F001F_Procedure_31), DEBUGSTRING("CHeadman::H0x12F001F_Procedure_31")},
 {0x12F0020, -1, CEntity::pEventHandler(&CHeadman::H0x12F0020_Procedure_32), DEBUGSTRING("CHeadman::H0x12F0020_Procedure_32")},
 {0x12F0021, -1, CEntity::pEventHandler(&CHeadman::H0x12F0021_Procedure_33), DEBUGSTRING("CHeadman::H0x12F0021_Procedure_33")},
 {0x12F0022, -1, CEntity::pEventHandler(&CHeadman::H0x12F0022_Procedure_34), DEBUGSTRING("CHeadman::H0x12F0022_Procedure_34")},
 {0x12F0023, -1, CEntity::pEventHandler(&CHeadman::H0x12F0023_Procedure_35), DEBUGSTRING("CHeadman::H0x12F0023_Procedure_35")},
 {0x12F0024, -1, CEntity::pEventHandler(&CHeadman::H0x12F0024_Procedure_36), DEBUGSTRING("CHeadman::H0x12F0024_Procedure_36")},
 {0x12F0025, -1, CEntity::pEventHandler(&CHeadman::H0x12F0025_Procedure_37), DEBUGSTRING("CHeadman::H0x12F0025_Procedure_37")},
 {0x12F0026, -1, CEntity::pEventHandler(&CHeadman::H0x12F0026_Procedure_38), DEBUGSTRING("CHeadman::H0x12F0026_Procedure_38")},
 {0x12F0027, -1, CEntity::pEventHandler(&CHeadman::H0x12F0027_Procedure_39), DEBUGSTRING("CHeadman::H0x12F0027_Procedure_39")},
 {0x12F0028, -1, CEntity::pEventHandler(&CHeadman::H0x12F0028_Procedure_40), DEBUGSTRING("CHeadman::H0x12F0028_Procedure_40")},
 {0x12F0029, -1, CEntity::pEventHandler(&CHeadman::H0x12F0029_Procedure_41), DEBUGSTRING("CHeadman::H0x12F0029_Procedure_41")},
 {0x12F002A, -1, CEntity::pEventHandler(&CHeadman::H0x12F002A_Procedure_42), DEBUGSTRING("CHeadman::H0x12F002A_Procedure_42")},
 {0x12F002B, -1, CEntity::pEventHandler(&CHeadman::H0x12F002B_Procedure_43), DEBUGSTRING("CHeadman::H0x12F002B_Procedure_43")},
 {0x12F002C, -1, CEntity::pEventHandler(&CHeadman::H0x12F002C_Procedure_44), DEBUGSTRING("CHeadman::H0x12F002C_Procedure_44")},
 {0x12F002D, -1, CEntity::pEventHandler(&CHeadman::H0x12F002D_Procedure_45), DEBUGSTRING("CHeadman::H0x12F002D_Procedure_45")},
 {0x12F002E, -1, CEntity::pEventHandler(&CHeadman::H0x12F002E_Procedure_46), DEBUGSTRING("CHeadman::H0x12F002E_Procedure_46")},
 {0x12F002F, -1, CEntity::pEventHandler(&CHeadman::H0x12F002F_Procedure_47), DEBUGSTRING("CHeadman::H0x12F002F_Procedure_47")},
 {0x12F0030, -1, CEntity::pEventHandler(&CHeadman::H0x12F0030_Procedure_48), DEBUGSTRING("CHeadman::H0x12F0030_Procedure_48")},
 {0x12F0031, -1, CEntity::pEventHandler(&CHeadman::H0x12F0031_Procedure_49), DEBUGSTRING("CHeadman::H0x12F0031_Procedure_49")},
 {0x12F0032, -1, CEntity::pEventHandler(&CHeadman::H0x12F0032_Procedure_50), DEBUGSTRING("CHeadman::H0x12F0032_Procedure_50")},
 {0x12F0033, -1, CEntity::pEventHandler(&CHeadman::H0x12F0033_Procedure_51), DEBUGSTRING("CHeadman::H0x12F0033_Procedure_51")},
 {0x12F0034, -1, CEntity::pEventHandler(&CHeadman::H0x12F0034_Procedure_52), DEBUGSTRING("CHeadman::H0x12F0034_Procedure_52")},
 {0x12F0035, -1, CEntity::pEventHandler(&CHeadman::H0x12F0035_Procedure_53), DEBUGSTRING("CHeadman::H0x12F0035_Procedure_53")},
 {0x12F0036, -1, CEntity::pEventHandler(&CHeadman::H0x12F0036_Procedure_54), DEBUGSTRING("CHeadman::H0x12F0036_Procedure_54")},
 {0x12F0037, -1, CEntity::pEventHandler(&CHeadman::H0x12F0037_Procedure_55), DEBUGSTRING("CHeadman::H0x12F0037_Procedure_55")},
 {0x12F0038, -1, CEntity::pEventHandler(&CHeadman::H0x12F0038_Procedure_56), DEBUGSTRING("CHeadman::H0x12F0038_Procedure_56")},
 {0x12F0039, -1, CEntity::pEventHandler(&CHeadman::H0x12F0039_Procedure_57), DEBUGSTRING("CHeadman::H0x12F0039_Procedure_57")},
 {0x12F003A, -1, CEntity::pEventHandler(&CHeadman::H0x12F003A_Procedure_58), DEBUGSTRING("CHeadman::H0x12F003A_Procedure_58")},
 {0x12F003B, -1, CEntity::pEventHandler(&CHeadman::H0x12F003B_Procedure_59), DEBUGSTRING("CHeadman::H0x12F003B_Procedure_59")},
 {0x12F003C, -1, CEntity::pEventHandler(&CHeadman::H0x12F003C_Procedure_60), DEBUGSTRING("CHeadman::H0x12F003C_Procedure_60")},
 {0x12F003D, -1, CEntity::pEventHandler(&CHeadman::H0x12F003D_Procedure_61), DEBUGSTRING("CHeadman::H0x12F003D_Procedure_61")},
 {0x12F003E, -1, CEntity::pEventHandler(&CHeadman::H0x12F003E_Procedure_62), DEBUGSTRING("CHeadman::H0x12F003E_Procedure_62")},
 {0x12F003F, -1, CEntity::pEventHandler(&CHeadman::H0x12F003F_Procedure_63), DEBUGSTRING("CHeadman::H0x12F003F_Procedure_63")},
 {0x12F0040, -1, CEntity::pEventHandler(&CHeadman::H0x12F0040_Procedure_64), DEBUGSTRING("CHeadman::H0x12F0040_Procedure_64")},
 {0x12F0041, -1, CEntity::pEventHandler(&CHeadman::H0x12F0041_Procedure_65), DEBUGSTRING("CHeadman::H0x12F0041_Procedure_65")},
 {0x12F0042, -1, CEntity::pEventHandler(&CHeadman::H0x12F0042_Procedure_66), DEBUGSTRING("CHeadman::H0x12F0042_Procedure_66")},
 {0x12F0043, -1, CEntity::pEventHandler(&CHeadman::H0x12F0043_Procedure_67), DEBUGSTRING("CHeadman::H0x12F0043_Procedure_67")},
 {0x12F0044, -1, CEntity::pEventHandler(&CHeadman::H0x12F0044_Procedure_68), DEBUGSTRING("CHeadman::H0x12F0044_Procedure_68")},
 {0x12F0045, -1, CEntity::pEventHandler(&CHeadman::H0x12F0045_Procedure_69), DEBUGSTRING("CHeadman::H0x12F0045_Procedure_69")},
 {0x12F0046, -1, CEntity::pEventHandler(&CHeadman::H0x12F0046_Procedure_70), DEBUGSTRING("CHeadman::H0x12F0046_Procedure_70")},
 {0x12F0047, -1, CEntity::pEventHandler(&CHeadman::H0x12F0047_Procedure_71), DEBUGSTRING("CHeadman::H0x12F0047_Procedure_71")},
 {0x12F0048, -1, CEntity::pEventHandler(&CHeadman::H0x12F0048_Procedure_72), DEBUGSTRING("CHeadman::H0x12F0048_Procedure_72")},
 {0x12F0049, -1, CEntity::pEventHandler(&CHeadman::H0x12F0049_Procedure_73), DEBUGSTRING("CHeadman::H0x12F0049_Procedure_73")},
 {0x12F004A, -1, CEntity::pEventHandler(&CHeadman::H0x12F004A_Procedure_74), DEBUGSTRING("CHeadman::H0x12F004A_Procedure_74")},
 {0x12F004B, -1, CEntity::pEventHandler(&CHeadman::H0x12F004B_Procedure_75), DEBUGSTRING("CHeadman::H0x12F004B_Procedure_75")},
 {0x12F004C, -1, CEntity::pEventHandler(&CHeadman::H0x12F004C_Procedure_76), DEBUGSTRING("CHeadman::H0x12F004C_Procedure_76")},
 {0x12F004D, -1, CEntity::pEventHandler(&CHeadman::H0x12F004D_Procedure_77), DEBUGSTRING("CHeadman::H0x12F004D_Procedure_77")},
 {0x12F004E, -1, CEntity::pEventHandler(&CHeadman::H0x12F004E_Procedure_78), DEBUGSTRING("CHeadman::H0x12F004E_Procedure_78")},
 {0x12F004F, -1, CEntity::pEventHandler(&CHeadman::H0x12F004F_Procedure_79), DEBUGSTRING("CHeadman::H0x12F004F_Procedure_79")},
 {0x12F0050, -1, CEntity::pEventHandler(&CHeadman::H0x12F0050_Procedure_80), DEBUGSTRING("CHeadman::H0x12F0050_Procedure_80")},
 {0x12F0051, -1, CEntity::pEventHandler(&CHeadman::H0x12F0051_Procedure_81), DEBUGSTRING("CHeadman::H0x12F0051_Procedure_81")},
 {0x12F0052, -1, CEntity::pEventHandler(&CHeadman::H0x12F0052_Procedure_82), DEBUGSTRING("CHeadman::H0x12F0052_Procedure_82")},
 {0x12F0053, -1, CEntity::pEventHandler(&CHeadman::H0x12F0053_Procedure_83), DEBUGSTRING("CHeadman::H0x12F0053_Procedure_83")},
 {0x12F0054, -1, CEntity::pEventHandler(&CHeadman::H0x12F0054_Procedure_84), DEBUGSTRING("CHeadman::H0x12F0054_Procedure_84")},
 {0x12F0055, -1, CEntity::pEventHandler(&CHeadman::H0x12F0055_Procedure_85), DEBUGSTRING("CHeadman::H0x12F0055_Procedure_85")},
 {0x12F0056, -1, CEntity::pEventHandler(&CHeadman::H0x12F0056_Procedure_86), DEBUGSTRING("CHeadman::H0x12F0056_Procedure_86")},
 {0x12F0057, -1, CEntity::pEventHandler(&CHeadman::H0x12F0057_Procedure_87), DEBUGSTRING("CHeadman::H0x12F0057_Procedure_87")},
 {0x12F0058, -1, CEntity::pEventHandler(&CHeadman::H0x12F0058_Procedure_88), DEBUGSTRING("CHeadman::H0x12F0058_Procedure_88")},
 {0x12F0059, -1, CEntity::pEventHandler(&CHeadman::H0x12F0059_Procedure_89), DEBUGSTRING("CHeadman::H0x12F0059_Procedure_89")},
 {0x12F005A, -1, CEntity::pEventHandler(&CHeadman::H0x12F005A_Procedure_90), DEBUGSTRING("CHeadman::H0x12F005A_Procedure_90")},
 {0x12F005B, -1, CEntity::pEventHandler(&CHeadman::H0x12F005B_Procedure_91), DEBUGSTRING("CHeadman::H0x12F005B_Procedure_91")},
 {0x12F005C, -1, CEntity::pEventHandler(&CHeadman::H0x12F005C_Procedure_92), DEBUGSTRING("CHeadman::H0x12F005C_Procedure_92")},
 {0x12F005D, -1, CEntity::pEventHandler(&CHeadman::H0x12F005D_Procedure_93), DEBUGSTRING("CHeadman::H0x12F005D_Procedure_93")},
 {0x12F005E, -1, CEntity::pEventHandler(&CHeadman::H0x12F005E_Procedure_94), DEBUGSTRING("CHeadman::H0x12F005E_Procedure_94")},
 {0x12F005F, -1, CEntity::pEventHandler(&CHeadman::H0x12F005F_Procedure_95), DEBUGSTRING("CHeadman::H0x12F005F_Procedure_95")},
 {0x12F0060, -1, CEntity::pEventHandler(&CHeadman::H0x12F0060_Procedure_96), DEBUGSTRING("CHeadman::H0x12F0060_Procedure_96")},
 {0x12F0061, -1, CEntity::pEventHandler(&CHeadman::H0x12F0061_Procedure_97), DEBUGSTRING("CHeadman::H0x12F0061_Procedure_97")},
 {0x12F0062, -1, CEntity::pEventHandler(&CHeadman::H0x12F0062_Procedure_98), DEBUGSTRING("CHeadman::H0x12F0062_Procedure_98")},
 {0x12F0063, -1, CEntity::pEventHandler(&CHeadman::H0x12F0063_Procedure_99), DEBUGSTRING("CHeadman::H0x12F0063_Procedure_99")},
 {0x12F0064, -1, CEntity::pEventHandler(&CHeadman::H0x12F0064_Procedure_100), DEBUGSTRING("CHeadman::H0x12F0064_Procedure_100")},
 {0x12F0065, -1, CEntity::pEventHandler(&CHeadman::H0x12F0065_Procedure_101), DEBUGSTRING("CHeadman::H0x12F0065_Procedure_101")},
 {0x12F0066, -1, CEntity::pEventHandler(&CHeadman::H0x12F0066_Procedure_102), DEBUGSTRING("CHeadman::H0x12F0066_Procedure_102")},
 {0x12F0067, -1, CEntity::pEventHandler(&CHeadman::H0x12F0067_Procedure_103), DEBUGSTRING("CHeadman::H0x12F0067_Procedure_103")},
 {0x12F0068, -1, CEntity::pEventHandler(&CHeadman::H0x12F0068_Procedure_104), DEBUGSTRING("CHeadman::H0x12F0068_Procedure_104")},
 {0x12F0069, -1, CEntity::pEventHandler(&CHeadman::H0x12F0069_Procedure_105), DEBUGSTRING("CHeadman::H0x12F0069_Procedure_105")},
 {0x12F006A, -1, CEntity::pEventHandler(&CHeadman::H0x12F006A_Procedure_106), DEBUGSTRING("CHeadman::H0x12F006A_Procedure_106")},
 {0x12F006B, -1, CEntity::pEventHandler(&CHeadman::H0x12F006B_Procedure_107), DEBUGSTRING("CHeadman::H0x12F006B_Procedure_107")},
 {0x12F006C, 0x1360055, CEntity::pEventHandler(&CHeadman::H0x12F006C_Procedure_108), DEBUGSTRING("CHeadman::H0x12F006C_Procedure_108")},
 {0x12F006D, -1, CEntity::pEventHandler(&CHeadman::H0x12F006D_Procedure_109), DEBUGSTRING("CHeadman::H0x12F006D_Procedure_109")},
 {0x12F006E, -1, CEntity::pEventHandler(&CHeadman::H0x12F006E_Procedure_110), DEBUGSTRING("CHeadman::H0x12F006E_Procedure_110")},
 {1, -1, CEntity::pEventHandler(&CHeadman::Main), DEBUGSTRING("CHeadman::Main")},
};
#define CHeadman_handlersct ARRAYCOUNT(CHeadman_handlers)

CEntity *CHeadman_New(void) { return new CHeadman; };
void CHeadman_OnInitClass(void) {};
void CHeadman_OnEndClass(void) {};
void CHeadman_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CHeadman_OnWorldEnd(CWorld *pwo) {};
void CHeadman_OnWorldInit(CWorld *pwo) {};
void CHeadman_OnWorldTick(CWorld *pwo) {};
void CHeadman_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CHeadman, CEnemyBase, "Headman", "Thumbnails\\Headman.tbn", 303);
DECLARE_CTFILENAME(_fnmCHeadman_tbn, "Thumbnails\\Headman.tbn");
