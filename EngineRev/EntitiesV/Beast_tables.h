// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(BeastType)
  EP_ENUMVALUE(BT_NORMAL, "Small"),
  EP_ENUMVALUE(BT_BIG, "Big"),
  EP_ENUMVALUE(BT_HUGE, "Huge"),
EP_ENUMEND(BeastType);

#define ENTITYCLASS CBeast

CEntityProperty CBeast_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &CBeast_Enum0_enum, (0x150<<8)+1, 0x5C0, "Character", 'C', "m_bcType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x150<<8)+2, 0x5C4, "", 0, "m_iCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x150<<8)+3, 0x5C8, "Boss", 'B', "m_bBeBoss", 0x7F0000FFUL, 0),
};
#define CBeast_propertiesct ARRAYCOUNT(CBeast_properties)

CEntityComponent CBeast_components[] = {
#define CLASS_BASE ((0x00000150<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_PROJECTILE ((0x00000150<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000150<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_BEAST ((0x00000150<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_BEAST, "EFNM" "Models\\Enemies\\Beast\\Beast.mdl"),
#define TEXTURE_BEAST_NORMAL ((0x00000150<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAST_NORMAL, "EFNM" "Models\\Enemies\\Beast\\Beast.tex"),
#define TEXTURE_BEAST_BIG ((0x00000150<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAST_BIG, "EFNM" "Models\\Enemies\\Beast\\BeastBig.tex"),
#define TEXTURE_BEAST_HUGE ((0x00000150<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAST_HUGE, "EFNM" "ModelsMP\\Enemies\\Beast\\BeastBiggest.tex"),
#define SOUND_IDLE ((0x00000150<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000150<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000150<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000150<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Fire.wav"),
#define SOUND_KICK ((0x00000150<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_KICK, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Kick.wav"),
#define SOUND_DEATH ((0x00000150<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Death.wav"),
#define SOUND_DEATHBIG ((0x00000150<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DEATHBIG, "EFNM" "Models\\Enemies\\Beast\\Sounds\\DeathBig.wav"),
#define SOUND_ANGER ((0x00000150<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_ANGER, "EFNM" "Models\\Enemies\\Beast\\Sounds\\Anger.wav"),
};
#define CBeast_componentsct ARRAYCOUNT(CBeast_components)

CEventHandlerEntry CBeast_handlers[] = {
 {0x01500000, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CBeast::Death),DEBUGSTRING("CBeast::Death")},
 {0x01500001, -1, CEntity::pEventHandler(&CBeast::H0x01500001_Death_01), DEBUGSTRING("CBeast::H0x01500001_Death_01")},
 {0x01500002, -1, CEntity::pEventHandler(&CBeast::H0x01500002_Death_02), DEBUGSTRING("CBeast::H0x01500002_Death_02")},
 {0x01500003, -1, CEntity::pEventHandler(&CBeast::H0x01500003_Death_03), DEBUGSTRING("CBeast::H0x01500003_Death_03")},
 {0x01500004, -1, CEntity::pEventHandler(&CBeast::H0x01500004_Death_04), DEBUGSTRING("CBeast::H0x01500004_Death_04")},
 {0x01500005, -1, CEntity::pEventHandler(&CBeast::H0x01500005_Death_05), DEBUGSTRING("CBeast::H0x01500005_Death_05")},
 {0x01500006, -1, CEntity::pEventHandler(&CBeast::H0x01500006_Death_06), DEBUGSTRING("CBeast::H0x01500006_Death_06")},
 {0x01500007, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CBeast::Fire),DEBUGSTRING("CBeast::Fire")},
 {0x01500008, -1, CEntity::pEventHandler(&CBeast::H0x01500008_Fire_01), DEBUGSTRING("CBeast::H0x01500008_Fire_01")},
 {0x01500009, -1, CEntity::pEventHandler(&CBeast::H0x01500009_Fire_02), DEBUGSTRING("CBeast::H0x01500009_Fire_02")},
 {0x0150000a, -1, CEntity::pEventHandler(&CBeast::H0x0150000a_Fire_03), DEBUGSTRING("CBeast::H0x0150000a_Fire_03")},
 {0x0150000b, -1, CEntity::pEventHandler(&CBeast::H0x0150000b_Fire_04), DEBUGSTRING("CBeast::H0x0150000b_Fire_04")},
 {0x0150000c, -1, CEntity::pEventHandler(&CBeast::H0x0150000c_Fire_05), DEBUGSTRING("CBeast::H0x0150000c_Fire_05")},
 {0x0150000d, -1, CEntity::pEventHandler(&CBeast::H0x0150000d_Fire_06), DEBUGSTRING("CBeast::H0x0150000d_Fire_06")},
 {0x0150000e, -1, CEntity::pEventHandler(&CBeast::H0x0150000e_Fire_07), DEBUGSTRING("CBeast::H0x0150000e_Fire_07")},
 {0x0150000f, -1, CEntity::pEventHandler(&CBeast::H0x0150000f_Fire_08), DEBUGSTRING("CBeast::H0x0150000f_Fire_08")},
 {0x01500010, -1, CEntity::pEventHandler(&CBeast::H0x01500010_Fire_09), DEBUGSTRING("CBeast::H0x01500010_Fire_09")},
 {0x01500011, -1, CEntity::pEventHandler(&CBeast::H0x01500011_Fire_10), DEBUGSTRING("CBeast::H0x01500011_Fire_10")},
 {0x01500012, -1, CEntity::pEventHandler(&CBeast::H0x01500012_Fire_11), DEBUGSTRING("CBeast::H0x01500012_Fire_11")},
 {0x01500013, -1, CEntity::pEventHandler(&CBeast::H0x01500013_Fire_12), DEBUGSTRING("CBeast::H0x01500013_Fire_12")},
 {0x01500014, -1, CEntity::pEventHandler(&CBeast::H0x01500014_Fire_13), DEBUGSTRING("CBeast::H0x01500014_Fire_13")},
 {0x01500015, -1, CEntity::pEventHandler(&CBeast::H0x01500015_Fire_14), DEBUGSTRING("CBeast::H0x01500015_Fire_14")},
 {0x01500016, -1, CEntity::pEventHandler(&CBeast::H0x01500016_Fire_15), DEBUGSTRING("CBeast::H0x01500016_Fire_15")},
 {0x01500017, -1, CEntity::pEventHandler(&CBeast::H0x01500017_Fire_16), DEBUGSTRING("CBeast::H0x01500017_Fire_16")},
 {0x01500018, -1, CEntity::pEventHandler(&CBeast::H0x01500018_Fire_17), DEBUGSTRING("CBeast::H0x01500018_Fire_17")},
 {0x01500019, -1, CEntity::pEventHandler(&CBeast::H0x01500019_Fire_18), DEBUGSTRING("CBeast::H0x01500019_Fire_18")},
 {0x0150001a, -1, CEntity::pEventHandler(&CBeast::H0x0150001a_Fire_19), DEBUGSTRING("CBeast::H0x0150001a_Fire_19")},
 {0x0150001b, -1, CEntity::pEventHandler(&CBeast::H0x0150001b_Fire_20), DEBUGSTRING("CBeast::H0x0150001b_Fire_20")},
 {0x0150001c, -1, CEntity::pEventHandler(&CBeast::H0x0150001c_Fire_21), DEBUGSTRING("CBeast::H0x0150001c_Fire_21")},
 {0x0150001d, -1, CEntity::pEventHandler(&CBeast::H0x0150001d_Fire_22), DEBUGSTRING("CBeast::H0x0150001d_Fire_22")},
 {0x0150001e, -1, CEntity::pEventHandler(&CBeast::H0x0150001e_Fire_23), DEBUGSTRING("CBeast::H0x0150001e_Fire_23")},
 {0x0150001f, -1, CEntity::pEventHandler(&CBeast::H0x0150001f_Fire_24), DEBUGSTRING("CBeast::H0x0150001f_Fire_24")},
 {0x01500020, -1, CEntity::pEventHandler(&CBeast::H0x01500020_Fire_25), DEBUGSTRING("CBeast::H0x01500020_Fire_25")},
 {0x01500021, -1, CEntity::pEventHandler(&CBeast::H0x01500021_Fire_26), DEBUGSTRING("CBeast::H0x01500021_Fire_26")},
 {0x01500022, -1, CEntity::pEventHandler(&CBeast::H0x01500022_Fire_27), DEBUGSTRING("CBeast::H0x01500022_Fire_27")},
 {0x01500023, -1, CEntity::pEventHandler(&CBeast::H0x01500023_Fire_28), DEBUGSTRING("CBeast::H0x01500023_Fire_28")},
 {0x01500024, -1, CEntity::pEventHandler(&CBeast::H0x01500024_Fire_29), DEBUGSTRING("CBeast::H0x01500024_Fire_29")},
 {0x01500025, -1, CEntity::pEventHandler(&CBeast::H0x01500025_Fire_30), DEBUGSTRING("CBeast::H0x01500025_Fire_30")},
 {0x01500026, -1, CEntity::pEventHandler(&CBeast::H0x01500026_Fire_31), DEBUGSTRING("CBeast::H0x01500026_Fire_31")},
 {0x01500027, -1, CEntity::pEventHandler(&CBeast::H0x01500027_Fire_32), DEBUGSTRING("CBeast::H0x01500027_Fire_32")},
 {0x01500028, -1, CEntity::pEventHandler(&CBeast::H0x01500028_Fire_33), DEBUGSTRING("CBeast::H0x01500028_Fire_33")},
 {0x01500029, -1, CEntity::pEventHandler(&CBeast::H0x01500029_Fire_34), DEBUGSTRING("CBeast::H0x01500029_Fire_34")},
 {0x0150002a, -1, CEntity::pEventHandler(&CBeast::H0x0150002a_Fire_35), DEBUGSTRING("CBeast::H0x0150002a_Fire_35")},
 {0x0150002b, -1, CEntity::pEventHandler(&CBeast::H0x0150002b_Fire_36), DEBUGSTRING("CBeast::H0x0150002b_Fire_36")},
 {0x0150002c, -1, CEntity::pEventHandler(&CBeast::H0x0150002c_Fire_37), DEBUGSTRING("CBeast::H0x0150002c_Fire_37")},
 {0x0150002d, -1, CEntity::pEventHandler(&CBeast::H0x0150002d_Fire_38), DEBUGSTRING("CBeast::H0x0150002d_Fire_38")},
 {0x0150002e, -1, CEntity::pEventHandler(&CBeast::H0x0150002e_Fire_39), DEBUGSTRING("CBeast::H0x0150002e_Fire_39")},
 {0x0150002f, -1, CEntity::pEventHandler(&CBeast::H0x0150002f_Fire_40), DEBUGSTRING("CBeast::H0x0150002f_Fire_40")},
 {0x01500030, -1, CEntity::pEventHandler(&CBeast::H0x01500030_Fire_41), DEBUGSTRING("CBeast::H0x01500030_Fire_41")},
 {0x01500031, -1, CEntity::pEventHandler(&CBeast::H0x01500031_Fire_42), DEBUGSTRING("CBeast::H0x01500031_Fire_42")},
 {0x01500032, -1, CEntity::pEventHandler(&CBeast::H0x01500032_Fire_43), DEBUGSTRING("CBeast::H0x01500032_Fire_43")},
 {0x01500033, -1, CEntity::pEventHandler(&CBeast::H0x01500033_Fire_44), DEBUGSTRING("CBeast::H0x01500033_Fire_44")},
 {0x01500034, -1, CEntity::pEventHandler(&CBeast::H0x01500034_Fire_45), DEBUGSTRING("CBeast::H0x01500034_Fire_45")},
 {0x01500035, -1, CEntity::pEventHandler(&CBeast::H0x01500035_Fire_46), DEBUGSTRING("CBeast::H0x01500035_Fire_46")},
 {0x01500036, -1, CEntity::pEventHandler(&CBeast::H0x01500036_Fire_47), DEBUGSTRING("CBeast::H0x01500036_Fire_47")},
 {0x01500037, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CBeast::Hit),DEBUGSTRING("CBeast::Hit")},
 {0x01500038, -1, CEntity::pEventHandler(&CBeast::H0x01500038_Hit_01), DEBUGSTRING("CBeast::H0x01500038_Hit_01")},
 {0x01500039, -1, CEntity::pEventHandler(&CBeast::H0x01500039_Hit_02), DEBUGSTRING("CBeast::H0x01500039_Hit_02")},
 {0x0150003a, -1, CEntity::pEventHandler(&CBeast::H0x0150003a_Hit_03), DEBUGSTRING("CBeast::H0x0150003a_Hit_03")},
 {0x0150003b, -1, CEntity::pEventHandler(&CBeast::H0x0150003b_Hit_04), DEBUGSTRING("CBeast::H0x0150003b_Hit_04")},
 {0x0150003c, STATE_CEnemyBase_PreMainLoop, CEntity::pEventHandler(&CBeast::PreMainLoop), DEBUGSTRING("CBeast::PreMainLoop")},
 {1, -1, CEntity::pEventHandler(&CBeast::Main),DEBUGSTRING("CBeast::Main")},
};
#define CBeast_handlersct ARRAYCOUNT(CBeast_handlers)

CEntity *CBeast_New(void) { return new CBeast; };
void CBeast_OnInitClass(void) {};
void CBeast_OnEndClass(void) {};
void CBeast_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBeast_OnWorldEnd(CWorld *pwo) {};
void CBeast_OnWorldInit(CWorld *pwo) {};
void CBeast_OnWorldTick(CWorld *pwo) {};
void CBeast_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBeast, CEnemyBase, "Beast", "Thumbnails\\Beast.tbn", 336);
DECLARE_CTFILENAME(_fnmCBeast_tbn, "Thumbnails\\Beast.tbn");
