// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(GruntType)
  EP_ENUMVALUE(GT_SOLDIER, "Grunt soldier"),
  EP_ENUMVALUE(GT_COMMANDER, "Grunt commander"),
EP_ENUMEND(GruntType);

#define ENTITYCLASS CGrunt

CEntityProperty CGrunt_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &GruntType_enum, (0x157<<8)+1, 0x5C0, "Type", 'Y', "m_gtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x157<<8)+10, 0x5C4, "", 0, "m_soFire1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x157<<8)+11, 0x640, "", 0, "m_soFire2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x157<<8)+20, 0x6BC, "Custom commander wait", 0, "m_iCustomFireWait", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x157<<8)+21, 0x6C0, "Custom commander angle", 0, "m_iCustomFireCounter", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x157<<8)+22, 0x6C4, "", 0, "m_iCustomAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x157<<8)+23, 0x6C8, "", 0, "m_iCustomNumber", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x157<<8)+24, 0x6CC, "Custom soldier attack number add", 0, "m_iCustomAttackNumber", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x157<<8)+25, 0x6D0, "", 0, "i_CustomAttackNumberLoop", 0x0UL, 0),
};
#define CGrunt_propertiesct ARRAYCOUNT(CGrunt_properties)

CEntityComponent CGrunt_components[] = {
#define CLASS_BASE ((0x00000157<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_PROJECTILE ((0x00000157<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define MODEL_GRUNT ((0x00000157<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_GRUNT, "EFNM" "ModelsMP\\Enemies\\Grunt\\Grunt.mdl"),
#define MODEL_GUN_COMMANDER ((0x00000157<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_GUN_COMMANDER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Gun_Commander.mdl"),
#define MODEL_GUN_SOLDIER ((0x00000157<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_GUN_SOLDIER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Gun.mdl"),
#define TEXTURE_SOLDIER ((0x00000157<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SOLDIER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Soldier.tex"),
#define TEXTURE_COMMANDER ((0x00000157<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COMMANDER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Commander.tex"),
#define TEXTURE_GUN_COMMANDER ((0x00000157<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GUN_COMMANDER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Gun_Commander.tex"),
#define TEXTURE_GUN_SOLDIER ((0x00000157<<8)+23)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GUN_SOLDIER, "EFNM" "ModelsMP\\Enemies\\Grunt\\Gun.tex"),
#define SOUND_IDLE ((0x00000157<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_IDLE, "EFNM" "ModelsMP\\Enemies\\Grunt\\Sounds\\Idle.wav"),
#define SOUND_SIGHT ((0x00000157<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_SIGHT, "EFNM" "ModelsMP\\Enemies\\Grunt\\Sounds\\Sight.wav"),
#define SOUND_WOUND ((0x00000157<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_WOUND, "EFNM" "ModelsMP\\Enemies\\Grunt\\Sounds\\Wound.wav"),
#define SOUND_FIRE ((0x00000157<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "ModelsMP\\Enemies\\Grunt\\Sounds\\Fire.wav"),
#define SOUND_DEATH ((0x00000157<<8)+58)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\Enemies\\Grunt\\Sounds\\Death.wav"),
};
#define CGrunt_componentsct ARRAYCOUNT(CGrunt_components)

CEventHandlerEntry CGrunt_handlers[] = {
 {0x1570000, 0x1360043, CEntity::pEventHandler(&CGrunt::H0x1570000_Procedure_0), DEBUGSTRING("CGrunt::H0x1570000_Procedure_0")},
 {0x1570001, -1, CEntity::pEventHandler(&CGrunt::H0x1570001_Procedure_1), DEBUGSTRING("CGrunt::H0x1570001_Procedure_1")},
 {0x1570002, -1, CEntity::pEventHandler(&CGrunt::H0x1570002_Procedure_2), DEBUGSTRING("CGrunt::H0x1570002_Procedure_2")},
 {0x1570003, -1, CEntity::pEventHandler(&CGrunt::H0x1570003_Procedure_3), DEBUGSTRING("CGrunt::H0x1570003_Procedure_3")},
 {0x1570004, -1, CEntity::pEventHandler(&CGrunt::H0x1570004_Procedure_4), DEBUGSTRING("CGrunt::H0x1570004_Procedure_4")},
 {0x1570005, -1, CEntity::pEventHandler(&CGrunt::H0x1570005_Procedure_5), DEBUGSTRING("CGrunt::H0x1570005_Procedure_5")},
 {0x1570006, -1, CEntity::pEventHandler(&CGrunt::H0x1570006_Procedure_6), DEBUGSTRING("CGrunt::H0x1570006_Procedure_6")},
 {0x1570007, -1, CEntity::pEventHandler(&CGrunt::H0x1570007_Procedure_7), DEBUGSTRING("CGrunt::H0x1570007_Procedure_7")},
 {0x1570008, -1, CEntity::pEventHandler(&CGrunt::H0x1570008_Procedure_8), DEBUGSTRING("CGrunt::H0x1570008_Procedure_8")},
 {0x1570009, -1, CEntity::pEventHandler(&CGrunt::H0x1570009_Procedure_9), DEBUGSTRING("CGrunt::H0x1570009_Procedure_9")},
 {0x157000A, -1, CEntity::pEventHandler(&CGrunt::H0x157000A_Procedure_10), DEBUGSTRING("CGrunt::H0x157000A_Procedure_10")},
 {0x157000B, -1, CEntity::pEventHandler(&CGrunt::H0x157000B_Procedure_11), DEBUGSTRING("CGrunt::H0x157000B_Procedure_11")},
 {0x157000C, -1, CEntity::pEventHandler(&CGrunt::H0x157000C_Procedure_12), DEBUGSTRING("CGrunt::H0x157000C_Procedure_12")},
 {0x157000D, -1, CEntity::pEventHandler(&CGrunt::H0x157000D_Procedure_13), DEBUGSTRING("CGrunt::H0x157000D_Procedure_13")},
 {0x157000E, -1, CEntity::pEventHandler(&CGrunt::H0x157000E_Procedure_14), DEBUGSTRING("CGrunt::H0x157000E_Procedure_14")},
 {0x157000F, -1, CEntity::pEventHandler(&CGrunt::H0x157000F_Procedure_15), DEBUGSTRING("CGrunt::H0x157000F_Procedure_15")},
 {0x1570010, -1, CEntity::pEventHandler(&CGrunt::H0x1570010_Procedure_16), DEBUGSTRING("CGrunt::H0x1570010_Procedure_16")},
 {0x1570011, -1, CEntity::pEventHandler(&CGrunt::H0x1570011_Procedure_17), DEBUGSTRING("CGrunt::H0x1570011_Procedure_17")},
 {0x1570012, -1, CEntity::pEventHandler(&CGrunt::H0x1570012_Procedure_18), DEBUGSTRING("CGrunt::H0x1570012_Procedure_18")},
 {0x1570013, -1, CEntity::pEventHandler(&CGrunt::H0x1570013_Procedure_19), DEBUGSTRING("CGrunt::H0x1570013_Procedure_19")},
 {0x1570014, -1, CEntity::pEventHandler(&CGrunt::H0x1570014_Procedure_20), DEBUGSTRING("CGrunt::H0x1570014_Procedure_20")},
 {0x1570015, -1, CEntity::pEventHandler(&CGrunt::H0x1570015_Procedure_21), DEBUGSTRING("CGrunt::H0x1570015_Procedure_21")},
 {0x1570016, -1, CEntity::pEventHandler(&CGrunt::H0x1570016_Procedure_22), DEBUGSTRING("CGrunt::H0x1570016_Procedure_22")},
 {0x1570017, -1, CEntity::pEventHandler(&CGrunt::H0x1570017_Procedure_23), DEBUGSTRING("CGrunt::H0x1570017_Procedure_23")},
 {0x1570018, -1, CEntity::pEventHandler(&CGrunt::H0x1570018_Procedure_24), DEBUGSTRING("CGrunt::H0x1570018_Procedure_24")},
 {0x1570019, -1, CEntity::pEventHandler(&CGrunt::H0x1570019_Procedure_25), DEBUGSTRING("CGrunt::H0x1570019_Procedure_25")},
 {0x157001A, -1, CEntity::pEventHandler(&CGrunt::H0x157001A_Procedure_26), DEBUGSTRING("CGrunt::H0x157001A_Procedure_26")},
 {0x157001B, -1, CEntity::pEventHandler(&CGrunt::H0x157001B_Procedure_27), DEBUGSTRING("CGrunt::H0x157001B_Procedure_27")},
 {0x157001C, -1, CEntity::pEventHandler(&CGrunt::H0x157001C_Procedure_28), DEBUGSTRING("CGrunt::H0x157001C_Procedure_28")},
 {0x157001D, -1, CEntity::pEventHandler(&CGrunt::H0x157001D_Procedure_29), DEBUGSTRING("CGrunt::H0x157001D_Procedure_29")},
 {0x157001E, -1, CEntity::pEventHandler(&CGrunt::H0x157001E_Procedure_30), DEBUGSTRING("CGrunt::H0x157001E_Procedure_30")},
 {0x157001F, -1, CEntity::pEventHandler(&CGrunt::H0x157001F_Procedure_31), DEBUGSTRING("CGrunt::H0x157001F_Procedure_31")},
 {0x1570020, -1, CEntity::pEventHandler(&CGrunt::H0x1570020_Procedure_32), DEBUGSTRING("CGrunt::H0x1570020_Procedure_32")},
 {0x1570021, -1, CEntity::pEventHandler(&CGrunt::H0x1570021_Procedure_33), DEBUGSTRING("CGrunt::H0x1570021_Procedure_33")},
 {0x1570022, -1, CEntity::pEventHandler(&CGrunt::H0x1570022_Procedure_34), DEBUGSTRING("CGrunt::H0x1570022_Procedure_34")},
 {0x1570023, -1, CEntity::pEventHandler(&CGrunt::H0x1570023_Procedure_35), DEBUGSTRING("CGrunt::H0x1570023_Procedure_35")},
 {0x1570024, -1, CEntity::pEventHandler(&CGrunt::H0x1570024_Procedure_36), DEBUGSTRING("CGrunt::H0x1570024_Procedure_36")},
 {0x1570025, -1, CEntity::pEventHandler(&CGrunt::H0x1570025_Procedure_37), DEBUGSTRING("CGrunt::H0x1570025_Procedure_37")},
 {0x1570026, -1, CEntity::pEventHandler(&CGrunt::H0x1570026_Procedure_38), DEBUGSTRING("CGrunt::H0x1570026_Procedure_38")},
 {0x1570027, -1, CEntity::pEventHandler(&CGrunt::H0x1570027_Procedure_39), DEBUGSTRING("CGrunt::H0x1570027_Procedure_39")},
 {0x1570028, -1, CEntity::pEventHandler(&CGrunt::H0x1570028_Procedure_40), DEBUGSTRING("CGrunt::H0x1570028_Procedure_40")},
 {0x1570029, -1, CEntity::pEventHandler(&CGrunt::H0x1570029_Procedure_41), DEBUGSTRING("CGrunt::H0x1570029_Procedure_41")},
 {1, -1, CEntity::pEventHandler(&CGrunt::Main), DEBUGSTRING("CGrunt::Main")},
};
#define CGrunt_handlersct ARRAYCOUNT(CGrunt_handlers)

CEntity *CGrunt_New(void) { return new CGrunt; };
void CGrunt_OnInitClass(void) {};
void CGrunt_OnEndClass(void) {};
void CGrunt_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CGrunt_OnWorldEnd(CWorld *pwo) {};
void CGrunt_OnWorldInit(CWorld *pwo) {};
void CGrunt_OnWorldTick(CWorld *pwo) {};
void CGrunt_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGrunt, CEnemyBase, "Grunt", "Thumbnails\\Grunt.tbn", 343);
DECLARE_CTFILENAME(_fnmCGrunt_tbn, "Thumbnails\\Grunt.tbn");
