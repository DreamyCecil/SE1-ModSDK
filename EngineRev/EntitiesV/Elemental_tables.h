// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(ElementalType)
  EP_ENUMVALUE(ELT_AIR, "Air"),
  EP_ENUMVALUE(ELT_LAVA, "Lava"),
  EP_ENUMVALUE(ELT_EARTH, "Earth"),
  EP_ENUMVALUE(ELT_WATER, "Water"),
  EP_ENUMVALUE(ELT_OMNI, "Omni"),
EP_ENUMEND(ElementalType);

EP_ENUMBEG(ElementalCharacter)
  EP_ENUMVALUE(ELC_SMALL, "Small"),
  EP_ENUMVALUE(ELC_BIG, "Big"),
  EP_ENUMVALUE(ELC_LARGE, "Large"),
EP_ENUMEND(ElementalCharacter);

EP_ENUMBEG(ElementalState)
  EP_ENUMVALUE(ELS_NORMAL, "Normal"),
  EP_ENUMVALUE(ELS_BOX, "Box"),
  EP_ENUMVALUE(ELS_PLANE, "Plane"),
EP_ENUMEND(ElementalState);

#define ENTITYCLASS CElemental

CEntityProperty CElemental_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalType_enum, (0x142<<8)+1, 0x5C0, "Type", 'Y', "m_EetType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalCharacter_enum, (0x142<<8)+2, 0x5C4, "Character", 'C', "m_EecChar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalState_enum, (0x142<<8)+3, 0x5C8, "State", 'S', "m_EesStartState", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x142<<8)+4, 0x5CC, "Damage spawn", 'N', "m_bSpawnWhenHarmed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x142<<8)+5, 0x5D0, "Blowup spawn", 'B', "m_bSpawnOnBlowUp", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ElementalState_enum, (0x142<<8)+6, 0x5D4, "", 0, "m_EesCurrentState", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x142<<8)+7, 0x5D8, "", 0, "m_bSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x142<<8)+8, 0x5DC, "Movable", 'V', "m_bMovable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x142<<8)+9, 0x5E0, "Look range", 'O', "m_fLookRange", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x142<<8)+10, 0x5E4, "Fire count", 0, "m_iFireCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x142<<8)+11, 0x5E8, "", 0, "m_fWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x142<<8)+12, 0x5EC, "", 0, "m_iCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x142<<8)+13, 0x5F0, "Density", 'D', "m_fDensity", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+20, 0x5F4, "Position 1", 0, "m_penPosition1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+21, 0x5F8, "Position 2", 0, "m_penPosition2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+22, 0x5FC, "Position 3", 0, "m_penPosition3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+23, 0x600, "Position 4", 0, "m_penPosition4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+24, 0x604, "Position 5", 0, "m_penPosition5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x142<<8)+25, 0x608, "Position 6", 0, "m_penPosition6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x142<<8)+30, 0x60C, "", 0, "m_soBackground", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x142<<8)+31, 0x688, "", 0, "m_ctSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x142<<8)+32, 0x68C, "", 0, "m_fSpawnDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x142<<8)+33, 0x690, "", 0, "m_bSpawnEnabled", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x142<<8)+34, 0x694, "", 0, "m_soFireL", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x142<<8)+35, 0x710, "", 0, "m_soFireR", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x142<<8)+36, 0x78C, "", 0, "m_bCountAsKill", 0x0UL, 0),
};
#define CElemental_propertiesct ARRAYCOUNT(CElemental_properties)

CEntityComponent CElemental_components[] = {
#define CLASS_BASE ((0x00000142<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CElemental_CLASS_1 0x14201 // (0x142<<8)+1
 CEntityComponent(ECT_CLASS, CElemental_CLASS_1, "EFNM" "Classes\\Projectile.ecl"),
#define CElemental_CLASS_2 0x14202 // (0x142<<8)+2
 CEntityComponent(ECT_CLASS, CElemental_CLASS_2, "EFNM" "Classes\\BloodSpray.ecl"),
#define CElemental_CLASS_3 0x14203 // (0x142<<8)+3
 CEntityComponent(ECT_CLASS, CElemental_CLASS_3, "EFNM" "Classes\\BasicEffect.ecl"),
#define CElemental_MODEL_7 0x14207 // (0x142<<8)+7
 CEntityComponent(ECT_MODEL, CElemental_MODEL_7, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalEarth.mdl"),
#define CElemental_MODEL_8 0x14208 // (0x142<<8)+8
 CEntityComponent(ECT_MODEL, CElemental_MODEL_8, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalAir.mdl"),
#define CElemental_MODEL_9 0x14209 // (0x142<<8)+9
 CEntityComponent(ECT_MODEL, CElemental_MODEL_9, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalMan.mdl"),
#define CElemental_MODEL_10 0x1420A // (0x142<<8)+10
 CEntityComponent(ECT_MODEL, CElemental_MODEL_10, "EFNM" "Models\\Enemies\\ElementalMan\\BodyFlare.mdl"),
#define CElemental_MODEL_11 0x1420B // (0x142<<8)+11
 CEntityComponent(ECT_MODEL, CElemental_MODEL_11, "EFNM" "Models\\Enemies\\ElementalMan\\HandFlare.mdl"),
#define CElemental_SOUND_12 0x1420C // (0x142<<8)+12
 CEntityComponent(ECT_SOUND, CElemental_SOUND_12, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Idle.wav"),
#define CElemental_SOUND_13 0x1420D // (0x142<<8)+13
 CEntityComponent(ECT_SOUND, CElemental_SOUND_13, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Wound.wav"),
#define CElemental_SOUND_14 0x1420E // (0x142<<8)+14
 CEntityComponent(ECT_SOUND, CElemental_SOUND_14, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Fire.wav"),
#define CElemental_SOUND_15 0x1420F // (0x142<<8)+15
 CEntityComponent(ECT_SOUND, CElemental_SOUND_15, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Kick.wav"),
#define CElemental_SOUND_16 0x14210 // (0x142<<8)+16
 CEntityComponent(ECT_SOUND, CElemental_SOUND_16, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Death.wav"),
#define CElemental_SOUND_17 0x14211 // (0x142<<8)+17
 CEntityComponent(ECT_SOUND, CElemental_SOUND_17, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\LavaBurn.wav"),
#define CElemental_SOUND_18 0x14212 // (0x142<<8)+18
 CEntityComponent(ECT_SOUND, CElemental_SOUND_18, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Anger.wav"),
#define CElemental_SOUND_19 0x14213 // (0x142<<8)+19
 CEntityComponent(ECT_SOUND, CElemental_SOUND_19, "EFNM" "Models\\Enemies\\ElementalMan\\Sounds\\Grow.wav"),
#define CElemental_TEXTURE_20 0x14214 // (0x142<<8)+20
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_20, "EFNM" "Models\\Enemies\\ElementalMan\\AirMan.tex"),
#define CElemental_TEXTURE_22 0x14216 // (0x142<<8)+22
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_22, "EFNM" "Models\\Enemies\\ElementalMan\\AirDetail.tex"),
#define CElemental_TEXTURE_23 0x14217 // (0x142<<8)+23
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_23, "EFNM" "Models\\Enemies\\ElementalMan\\AirFlare.tex"),
#define CElemental_TEXTURE_30 0x1421E // (0x142<<8)+30
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_30, "EFNM" "Models\\Enemies\\ElementalMan\\LavaMan.tex"),
#define CElemental_TEXTURE_31 0x1421F // (0x142<<8)+31
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_31, "EFNM" "Models\\Enemies\\ElementalMan\\LavaDetail.tex"),
#define CElemental_TEXTURE_32 0x14220 // (0x142<<8)+32
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_32, "EFNM" "Models\\Enemies\\ElementalMan\\LavaFlare.tex"),
#define CElemental_TEXTURE_40 0x14228 // (0x142<<8)+40
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_40, "EFNM" "Models\\Enemies\\ElementalMan\\EarthMan.tex"),
#define CElemental_TEXTURE_42 0x1422A // (0x142<<8)+42
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_42, "EFNM" "Models\\Enemies\\ElementalMan\\EarthDetail.tex"),
#define CElemental_TEXTURE_50 0x14232 // (0x142<<8)+50
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_50, "EFNM" "Models\\Enemies\\ElementalMan\\WaterMan.tex"),
#define CElemental_TEXTURE_51 0x14233 // (0x142<<8)+51
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_51, "EFNM" "Models\\Enemies\\ElementalMan\\WaterFlare.tex"),
#define CElemental_TEXTURE_52 0x14234 // (0x142<<8)+52
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_52, "EFNM" "Models\\Enemies\\ElementalMan\\WaterDetail.tex"),
#define CElemental_TEXTURE_60 0x1423C // (0x142<<8)+60
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_60, "EFNM" "Models\\Enemies\\ElementalMan\\OmniMan.tex"),
#define CElemental_TEXTURE_61 0x1423D // (0x142<<8)+61
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_61, "EFNM" "Models\\Enemies\\ElementalMan\\OmniDetail.tex"),
#define CElemental_MODEL_62 0x1423E // (0x142<<8)+62
 CEntityComponent(ECT_MODEL, CElemental_MODEL_62, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Pleche1.mdl"),
#define CElemental_MODEL_63 0x1423F // (0x142<<8)+63
 CEntityComponent(ECT_MODEL, CElemental_MODEL_63, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Pleche2.mdl"),
#define CElemental_MODEL_64 0x14240 // (0x142<<8)+64
 CEntityComponent(ECT_MODEL, CElemental_MODEL_64, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Ruka1.mdl"),
#define CElemental_MODEL_65 0x14241 // (0x142<<8)+65
 CEntityComponent(ECT_MODEL, CElemental_MODEL_65, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Ruka2.mdl"),
#define CElemental_MODEL_66 0x14242 // (0x142<<8)+66
 CEntityComponent(ECT_MODEL, CElemental_MODEL_66, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Spina.mdl"),
#define CElemental_MODEL_67 0x14243 // (0x142<<8)+67
 CEntityComponent(ECT_MODEL, CElemental_MODEL_67, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Telo.mdl"),
#define CElemental_TEXTURE_68 0x14244 // (0x142<<8)+68
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_68, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Nagrrudnik.tex"),
#define CElemental_TEXTURE_69 0x14245 // (0x142<<8)+69
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_69, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Pleche.tex"),
#define CElemental_TEXTURE_70 0x14246 // (0x142<<8)+70
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_70, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Ruka.tex"),
#define CElemental_TEXTURE_71 0x14247 // (0x142<<8)+71
 CEntityComponent(ECT_TEXTURE, CElemental_TEXTURE_71, "EFNM" "Models\\Enemies\\ElementalMan\\Attach\\Spina.tex"),
#define CElemental_MODEL_72 0x14248 // (0x142<<8)+72
 CEntityComponent(ECT_MODEL, CElemental_MODEL_72, "EFNM" "Models\\Enemies\\ElementalMan\\ElementalCK.mdl"),
};
#define CElemental_componentsct ARRAYCOUNT(CElemental_components)

CEventHandlerEntry CElemental_handlers[] = {
 {0x1420000, -1, CEntity::pEventHandler(&CElemental::H0x1420000_Procedure_0), DEBUGSTRING("CElemental::H0x1420000_Procedure_0")},
 {0x1420001, -1, CEntity::pEventHandler(&CElemental::H0x1420001_Procedure_1), DEBUGSTRING("CElemental::H0x1420001_Procedure_1")},
 {0x1420002, -1, CEntity::pEventHandler(&CElemental::H0x1420002_Procedure_2), DEBUGSTRING("CElemental::H0x1420002_Procedure_2")},
 {0x1420003, -1, CEntity::pEventHandler(&CElemental::H0x1420003_Procedure_3), DEBUGSTRING("CElemental::H0x1420003_Procedure_3")},
 {0x1420004, -1, CEntity::pEventHandler(&CElemental::H0x1420004_Procedure_4), DEBUGSTRING("CElemental::H0x1420004_Procedure_4")},
 {0x1420005, -1, CEntity::pEventHandler(&CElemental::H0x1420005_Procedure_5), DEBUGSTRING("CElemental::H0x1420005_Procedure_5")},
 {0x1420006, -1, CEntity::pEventHandler(&CElemental::H0x1420006_Procedure_6), DEBUGSTRING("CElemental::H0x1420006_Procedure_6")},
 {0x1420007, -1, CEntity::pEventHandler(&CElemental::H0x1420007_Procedure_7), DEBUGSTRING("CElemental::H0x1420007_Procedure_7")},
 {0x1420008, -1, CEntity::pEventHandler(&CElemental::H0x1420008_Procedure_8), DEBUGSTRING("CElemental::H0x1420008_Procedure_8")},
 {0x1420009, -1, CEntity::pEventHandler(&CElemental::H0x1420009_Procedure_9), DEBUGSTRING("CElemental::H0x1420009_Procedure_9")},
 {0x142000A, -1, CEntity::pEventHandler(&CElemental::H0x142000A_Procedure_10), DEBUGSTRING("CElemental::H0x142000A_Procedure_10")},
 {0x142000B, -1, CEntity::pEventHandler(&CElemental::H0x142000B_Procedure_11), DEBUGSTRING("CElemental::H0x142000B_Procedure_11")},
 {0x142000C, -1, CEntity::pEventHandler(&CElemental::H0x142000C_Procedure_12), DEBUGSTRING("CElemental::H0x142000C_Procedure_12")},
 {0x142000D, -1, CEntity::pEventHandler(&CElemental::H0x142000D_Procedure_13), DEBUGSTRING("CElemental::H0x142000D_Procedure_13")},
 {0x142000E, -1, CEntity::pEventHandler(&CElemental::H0x142000E_Procedure_14), DEBUGSTRING("CElemental::H0x142000E_Procedure_14")},
 {0x142000F, -1, CEntity::pEventHandler(&CElemental::H0x142000F_Procedure_15), DEBUGSTRING("CElemental::H0x142000F_Procedure_15")},
 {0x1420010, -1, CEntity::pEventHandler(&CElemental::H0x1420010_Procedure_16), DEBUGSTRING("CElemental::H0x1420010_Procedure_16")},
 {0x1420011, -1, CEntity::pEventHandler(&CElemental::H0x1420011_Procedure_17), DEBUGSTRING("CElemental::H0x1420011_Procedure_17")},
 {0x1420012, -1, CEntity::pEventHandler(&CElemental::H0x1420012_Procedure_18), DEBUGSTRING("CElemental::H0x1420012_Procedure_18")},
 {0x1420013, -1, CEntity::pEventHandler(&CElemental::H0x1420013_Procedure_19), DEBUGSTRING("CElemental::H0x1420013_Procedure_19")},
 {0x1420014, -1, CEntity::pEventHandler(&CElemental::H0x1420014_Procedure_20), DEBUGSTRING("CElemental::H0x1420014_Procedure_20")},
 {0x1420015, -1, CEntity::pEventHandler(&CElemental::H0x1420015_Procedure_21), DEBUGSTRING("CElemental::H0x1420015_Procedure_21")},
 {0x1420016, -1, CEntity::pEventHandler(&CElemental::H0x1420016_Procedure_22), DEBUGSTRING("CElemental::H0x1420016_Procedure_22")},
 {0x1420017, -1, CEntity::pEventHandler(&CElemental::H0x1420017_Procedure_23), DEBUGSTRING("CElemental::H0x1420017_Procedure_23")},
 {0x1420018, -1, CEntity::pEventHandler(&CElemental::H0x1420018_Procedure_24), DEBUGSTRING("CElemental::H0x1420018_Procedure_24")},
 {0x1420019, -1, CEntity::pEventHandler(&CElemental::H0x1420019_Procedure_25), DEBUGSTRING("CElemental::H0x1420019_Procedure_25")},
 {0x142001A, -1, CEntity::pEventHandler(&CElemental::H0x142001A_Procedure_26), DEBUGSTRING("CElemental::H0x142001A_Procedure_26")},
 {0x142001B, -1, CEntity::pEventHandler(&CElemental::H0x142001B_Procedure_27), DEBUGSTRING("CElemental::H0x142001B_Procedure_27")},
 {0x142001C, -1, CEntity::pEventHandler(&CElemental::H0x142001C_Procedure_28), DEBUGSTRING("CElemental::H0x142001C_Procedure_28")},
 {0x142001D, -1, CEntity::pEventHandler(&CElemental::H0x142001D_Procedure_29), DEBUGSTRING("CElemental::H0x142001D_Procedure_29")},
 {0x142001E, -1, CEntity::pEventHandler(&CElemental::H0x142001E_Procedure_30), DEBUGSTRING("CElemental::H0x142001E_Procedure_30")},
 {0x142001F, -1, CEntity::pEventHandler(&CElemental::H0x142001F_Procedure_31), DEBUGSTRING("CElemental::H0x142001F_Procedure_31")},
 {0x1420020, -1, CEntity::pEventHandler(&CElemental::H0x1420020_Procedure_32), DEBUGSTRING("CElemental::H0x1420020_Procedure_32")},
 {0x1420021, -1, CEntity::pEventHandler(&CElemental::H0x1420021_Procedure_33), DEBUGSTRING("CElemental::H0x1420021_Procedure_33")},
 {0x1420022, -1, CEntity::pEventHandler(&CElemental::H0x1420022_Procedure_34), DEBUGSTRING("CElemental::H0x1420022_Procedure_34")},
 {0x1420023, -1, CEntity::pEventHandler(&CElemental::H0x1420023_Procedure_35), DEBUGSTRING("CElemental::H0x1420023_Procedure_35")},
 {0x1420024, -1, CEntity::pEventHandler(&CElemental::H0x1420024_Procedure_36), DEBUGSTRING("CElemental::H0x1420024_Procedure_36")},
 {0x1420025, -1, CEntity::pEventHandler(&CElemental::H0x1420025_Procedure_37), DEBUGSTRING("CElemental::H0x1420025_Procedure_37")},
 {0x1420026, -1, CEntity::pEventHandler(&CElemental::H0x1420026_Procedure_38), DEBUGSTRING("CElemental::H0x1420026_Procedure_38")},
 {0x1420027, -1, CEntity::pEventHandler(&CElemental::H0x1420027_Procedure_39), DEBUGSTRING("CElemental::H0x1420027_Procedure_39")},
 {0x1420028, -1, CEntity::pEventHandler(&CElemental::H0x1420028_Procedure_40), DEBUGSTRING("CElemental::H0x1420028_Procedure_40")},
 {0x1420029, -1, CEntity::pEventHandler(&CElemental::H0x1420029_Procedure_41), DEBUGSTRING("CElemental::H0x1420029_Procedure_41")},
 {0x142002A, 0x136004F, CEntity::pEventHandler(&CElemental::H0x142002A_Procedure_42), DEBUGSTRING("CElemental::H0x142002A_Procedure_42")},
 {0x142002B, -1, CEntity::pEventHandler(&CElemental::H0x142002B_Procedure_43), DEBUGSTRING("CElemental::H0x142002B_Procedure_43")},
 {0x142002C, -1, CEntity::pEventHandler(&CElemental::H0x142002C_Procedure_44), DEBUGSTRING("CElemental::H0x142002C_Procedure_44")},
 {0x142002D, -1, CEntity::pEventHandler(&CElemental::H0x142002D_Procedure_45), DEBUGSTRING("CElemental::H0x142002D_Procedure_45")},
 {0x142002E, -1, CEntity::pEventHandler(&CElemental::H0x142002E_Procedure_46), DEBUGSTRING("CElemental::H0x142002E_Procedure_46")},
 {0x142002F, -1, CEntity::pEventHandler(&CElemental::H0x142002F_Procedure_47), DEBUGSTRING("CElemental::H0x142002F_Procedure_47")},
 {0x1420030, -1, CEntity::pEventHandler(&CElemental::H0x1420030_Procedure_48), DEBUGSTRING("CElemental::H0x1420030_Procedure_48")},
 {0x1420031, 0x136002A, CEntity::pEventHandler(&CElemental::H0x1420031_Procedure_49), DEBUGSTRING("CElemental::H0x1420031_Procedure_49")},
 {0x1420032, -1, CEntity::pEventHandler(&CElemental::H0x1420032_Procedure_50), DEBUGSTRING("CElemental::H0x1420032_Procedure_50")},
 {0x1420033, -1, CEntity::pEventHandler(&CElemental::H0x1420033_Procedure_51), DEBUGSTRING("CElemental::H0x1420033_Procedure_51")},
 {0x1420034, -1, CEntity::pEventHandler(&CElemental::H0x1420034_Procedure_52), DEBUGSTRING("CElemental::H0x1420034_Procedure_52")},
 {0x1420035, -1, CEntity::pEventHandler(&CElemental::H0x1420035_Procedure_53), DEBUGSTRING("CElemental::H0x1420035_Procedure_53")},
 {0x1420036, -1, CEntity::pEventHandler(&CElemental::H0x1420036_Procedure_54), DEBUGSTRING("CElemental::H0x1420036_Procedure_54")},
 {0x1420037, -1, CEntity::pEventHandler(&CElemental::H0x1420037_Procedure_55), DEBUGSTRING("CElemental::H0x1420037_Procedure_55")},
 {0x1420038, -1, CEntity::pEventHandler(&CElemental::H0x1420038_Procedure_56), DEBUGSTRING("CElemental::H0x1420038_Procedure_56")},
 {0x1420039, 0x1360043, CEntity::pEventHandler(&CElemental::H0x1420039_Procedure_57), DEBUGSTRING("CElemental::H0x1420039_Procedure_57")},
 {0x142003A, 0x1360042, CEntity::pEventHandler(&CElemental::H0x142003A_Procedure_58), DEBUGSTRING("CElemental::H0x142003A_Procedure_58")},
 {0x142003B, 0x1360055, CEntity::pEventHandler(&CElemental::H0x142003B_Procedure_59), DEBUGSTRING("CElemental::H0x142003B_Procedure_59")},
 {0x142003C, -1, CEntity::pEventHandler(&CElemental::H0x142003C_Procedure_60), DEBUGSTRING("CElemental::H0x142003C_Procedure_60")},
 {0x142003D, -1, CEntity::pEventHandler(&CElemental::H0x142003D_Procedure_61), DEBUGSTRING("CElemental::H0x142003D_Procedure_61")},
 {0x142003E, -1, CEntity::pEventHandler(&CElemental::H0x142003E_Procedure_62), DEBUGSTRING("CElemental::H0x142003E_Procedure_62")},
 {0x142003F, -1, CEntity::pEventHandler(&CElemental::H0x142003F_Procedure_63), DEBUGSTRING("CElemental::H0x142003F_Procedure_63")},
 {0x1420040, -1, CEntity::pEventHandler(&CElemental::H0x1420040_Procedure_64), DEBUGSTRING("CElemental::H0x1420040_Procedure_64")},
 {0x1420041, -1, CEntity::pEventHandler(&CElemental::H0x1420041_Procedure_65), DEBUGSTRING("CElemental::H0x1420041_Procedure_65")},
 {0x1420042, -1, CEntity::pEventHandler(&CElemental::H0x1420042_Procedure_66), DEBUGSTRING("CElemental::H0x1420042_Procedure_66")},
 {0x1420043, -1, CEntity::pEventHandler(&CElemental::H0x1420043_Procedure_67), DEBUGSTRING("CElemental::H0x1420043_Procedure_67")},
 {0x1420044, -1, CEntity::pEventHandler(&CElemental::H0x1420044_Procedure_68), DEBUGSTRING("CElemental::H0x1420044_Procedure_68")},
 {0x1420045, -1, CEntity::pEventHandler(&CElemental::H0x1420045_Procedure_69), DEBUGSTRING("CElemental::H0x1420045_Procedure_69")},
 {0x1420046, -1, CEntity::pEventHandler(&CElemental::H0x1420046_Procedure_70), DEBUGSTRING("CElemental::H0x1420046_Procedure_70")},
 {0x1420047, -1, CEntity::pEventHandler(&CElemental::H0x1420047_Procedure_71), DEBUGSTRING("CElemental::H0x1420047_Procedure_71")},
 {0x1420048, -1, CEntity::pEventHandler(&CElemental::H0x1420048_Procedure_72), DEBUGSTRING("CElemental::H0x1420048_Procedure_72")},
 {0x1420049, -1, CEntity::pEventHandler(&CElemental::H0x1420049_Procedure_73), DEBUGSTRING("CElemental::H0x1420049_Procedure_73")},
 {0x142004A, -1, CEntity::pEventHandler(&CElemental::H0x142004A_Procedure_74), DEBUGSTRING("CElemental::H0x142004A_Procedure_74")},
 {0x142004B, 0x136006E, CEntity::pEventHandler(&CElemental::H0x142004B_Procedure_75), DEBUGSTRING("CElemental::H0x142004B_Procedure_75")},
 {0x142004C, -1, CEntity::pEventHandler(&CElemental::H0x142004C_Procedure_76), DEBUGSTRING("CElemental::H0x142004C_Procedure_76")},
 {0x142004D, -1, CEntity::pEventHandler(&CElemental::H0x142004D_Procedure_77), DEBUGSTRING("CElemental::H0x142004D_Procedure_77")},
 {0x142004E, -1, CEntity::pEventHandler(&CElemental::H0x142004E_Procedure_78), DEBUGSTRING("CElemental::H0x142004E_Procedure_78")},
 {0x142004F, -1, CEntity::pEventHandler(&CElemental::H0x142004F_Procedure_79), DEBUGSTRING("CElemental::H0x142004F_Procedure_79")},
 {0x1420050, -1, CEntity::pEventHandler(&CElemental::H0x1420050_Procedure_80), DEBUGSTRING("CElemental::H0x1420050_Procedure_80")},
 {0x1420051, -1, CEntity::pEventHandler(&CElemental::H0x1420051_Procedure_81), DEBUGSTRING("CElemental::H0x1420051_Procedure_81")},
 {1, -1, CEntity::pEventHandler(&CElemental::Main), DEBUGSTRING("CElemental::Main")},
};
#define CElemental_handlersct ARRAYCOUNT(CElemental_handlers)

CEntity *CElemental_New(void) { return new CElemental; };
void CElemental_OnInitClass(void) {};
void CElemental_OnEndClass(void) {};
void CElemental_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CElemental_OnWorldEnd(CWorld *pwo) {};
void CElemental_OnWorldInit(CWorld *pwo) {};
void CElemental_OnWorldTick(CWorld *pwo) {};
void CElemental_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CElemental, CEnemyBase, "Elemental", "Thumbnails\\Elemental.tbn", 322);
DECLARE_CTFILENAME(_fnmCElemental_tbn, "Thumbnails\\Elemental.tbn");
