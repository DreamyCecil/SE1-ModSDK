// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CDestroyer

CEntityProperty CDestroyer_properties[] = {
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+2, 0x5C0, "", 0, "m_iCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x165<<8)+3, 0x5C4, "", 0, "m_penFireFX", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+10, 0x5C8, "", 0, "m_iAttackRandPrNumber", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+11, 0x5CC, "", 0, "m_iAttackLoopCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+12, 0x5D0, "", 0, "m_iAttackLoopAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+13, 0x5D4, "", 0, "m_iAttackSeries", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x165<<8)+14, 0x5D8, "", 0, "m_iAttackIsCircle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x165<<8)+15, 0x5DC, "", 0, "m_fWaitTime1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x165<<8)+16, 0x5E0, "", 0, "m_fWaitTime2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x165<<8)+17, 0x5E4, "", 0, "m_fAttackLoopAngleForPP", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x165<<8)+18, 0x5E8, "", 0, "m_bTextureTurnOn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ProjectileType_enum, (0x165<<8)+20, 0x5EC, "", 0, "m_ptAttackProjectile", 0x0UL, 0),
};
#define CDestroyer_propertiesct ARRAYCOUNT(CDestroyer_properties)

CEntityComponent CDestroyer_components[] = {
#define CDestroyer_CLASS_0 0x16500 // (0x165<<8)+0
 CEntityComponent(ECT_CLASS, CDestroyer_CLASS_0, "EFNM" "Classes\\EnemyBase.ecl"),
#define CDestroyer_CLASS_1 0x16501 // (0x165<<8)+1
 CEntityComponent(ECT_CLASS, CDestroyer_CLASS_1, "EFNM" "Classes\\Projectile.ecl"),
#define CDestroyer_CLASS_2 0x16502 // (0x165<<8)+2
 CEntityComponent(ECT_CLASS, CDestroyer_CLASS_2, "EFNM" "Classes\\BasicEffect.ecl"),
#define CDestroyer_MODEL_10 0x1650A // (0x165<<8)+10
 CEntityComponent(ECT_MODEL, CDestroyer_MODEL_10, "EFNM" "ModelsMP\\Enemies\\Demon\\Demon.mdl"),
#define CDestroyer_TEXTURE_11 0x1650B // (0x165<<8)+11
 CEntityComponent(ECT_TEXTURE, CDestroyer_TEXTURE_11, "EFNM" "Models\\Enemies\\Destroyer\\DestroyerBase.tex"),
#define CDestroyer_TEXTURE_12 0x1650C // (0x165<<8)+12
 CEntityComponent(ECT_TEXTURE, CDestroyer_TEXTURE_12, "EFNM" "Models\\Enemies\\Destroyer\\DestroyerWounded.tex"),
#define CDestroyer_SOUND_50 0x16532 // (0x165<<8)+50
 CEntityComponent(ECT_SOUND, CDestroyer_SOUND_50, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Idle.wav"),
#define CDestroyer_SOUND_51 0x16533 // (0x165<<8)+51
 CEntityComponent(ECT_SOUND, CDestroyer_SOUND_51, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Sight.wav"),
#define CDestroyer_SOUND_52 0x16534 // (0x165<<8)+52
 CEntityComponent(ECT_SOUND, CDestroyer_SOUND_52, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Wound.wav"),
#define CDestroyer_SOUND_55 0x16537 // (0x165<<8)+55
 CEntityComponent(ECT_SOUND, CDestroyer_SOUND_55, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Death.wav"),
#define CDestroyer_SOUND_57 0x16539 // (0x165<<8)+57
 CEntityComponent(ECT_SOUND, CDestroyer_SOUND_57, "EFNM" "ModelsMP\\Enemies\\Demon\\Sounds\\Cast.wav"),
};
#define CDestroyer_componentsct ARRAYCOUNT(CDestroyer_components)

CEventHandlerEntry CDestroyer_handlers[] = {
 {0x1650000, 0x1360043, CEntity::pEventHandler(&CDestroyer::H0x1650000_Procedure_0), DEBUGSTRING("CDestroyer::H0x1650000_Procedure_0")},
 {0x1650001, -1, CEntity::pEventHandler(&CDestroyer::H0x1650001_Procedure_1), DEBUGSTRING("CDestroyer::H0x1650001_Procedure_1")},
 {0x1650002, -1, CEntity::pEventHandler(&CDestroyer::H0x1650002_Procedure_2), DEBUGSTRING("CDestroyer::H0x1650002_Procedure_2")},
 {0x1650003, -1, CEntity::pEventHandler(&CDestroyer::H0x1650003_Procedure_3), DEBUGSTRING("CDestroyer::H0x1650003_Procedure_3")},
 {0x1650004, -1, CEntity::pEventHandler(&CDestroyer::H0x1650004_Procedure_4), DEBUGSTRING("CDestroyer::H0x1650004_Procedure_4")},
 {0x1650005, -1, CEntity::pEventHandler(&CDestroyer::H0x1650005_Procedure_5), DEBUGSTRING("CDestroyer::H0x1650005_Procedure_5")},
 {0x1650006, -1, CEntity::pEventHandler(&CDestroyer::H0x1650006_Procedure_6), DEBUGSTRING("CDestroyer::H0x1650006_Procedure_6")},
 {0x1650007, -1, CEntity::pEventHandler(&CDestroyer::H0x1650007_Procedure_7), DEBUGSTRING("CDestroyer::H0x1650007_Procedure_7")},
 {0x1650008, -1, CEntity::pEventHandler(&CDestroyer::H0x1650008_Procedure_8), DEBUGSTRING("CDestroyer::H0x1650008_Procedure_8")},
 {0x1650009, -1, CEntity::pEventHandler(&CDestroyer::H0x1650009_Procedure_9), DEBUGSTRING("CDestroyer::H0x1650009_Procedure_9")},
 {0x165000A, -1, CEntity::pEventHandler(&CDestroyer::H0x165000A_Procedure_10), DEBUGSTRING("CDestroyer::H0x165000A_Procedure_10")},
 {0x165000B, -1, CEntity::pEventHandler(&CDestroyer::H0x165000B_Procedure_11), DEBUGSTRING("CDestroyer::H0x165000B_Procedure_11")},
 {0x165000C, -1, CEntity::pEventHandler(&CDestroyer::H0x165000C_Procedure_12), DEBUGSTRING("CDestroyer::H0x165000C_Procedure_12")},
 {0x165000D, -1, CEntity::pEventHandler(&CDestroyer::H0x165000D_Procedure_13), DEBUGSTRING("CDestroyer::H0x165000D_Procedure_13")},
 {0x165000E, -1, CEntity::pEventHandler(&CDestroyer::H0x165000E_Procedure_14), DEBUGSTRING("CDestroyer::H0x165000E_Procedure_14")},
 {0x165000F, -1, CEntity::pEventHandler(&CDestroyer::H0x165000F_Procedure_15), DEBUGSTRING("CDestroyer::H0x165000F_Procedure_15")},
 {0x1650010, -1, CEntity::pEventHandler(&CDestroyer::H0x1650010_Procedure_16), DEBUGSTRING("CDestroyer::H0x1650010_Procedure_16")},
 {0x1650011, -1, CEntity::pEventHandler(&CDestroyer::H0x1650011_Procedure_17), DEBUGSTRING("CDestroyer::H0x1650011_Procedure_17")},
 {0x1650012, -1, CEntity::pEventHandler(&CDestroyer::H0x1650012_Procedure_18), DEBUGSTRING("CDestroyer::H0x1650012_Procedure_18")},
 {0x1650013, -1, CEntity::pEventHandler(&CDestroyer::H0x1650013_Procedure_19), DEBUGSTRING("CDestroyer::H0x1650013_Procedure_19")},
 {0x1650014, -1, CEntity::pEventHandler(&CDestroyer::H0x1650014_Procedure_20), DEBUGSTRING("CDestroyer::H0x1650014_Procedure_20")},
 {0x1650015, -1, CEntity::pEventHandler(&CDestroyer::H0x1650015_Procedure_21), DEBUGSTRING("CDestroyer::H0x1650015_Procedure_21")},
 {0x1650016, -1, CEntity::pEventHandler(&CDestroyer::H0x1650016_Procedure_22), DEBUGSTRING("CDestroyer::H0x1650016_Procedure_22")},
 {0x1650017, 0x1360042, CEntity::pEventHandler(&CDestroyer::H0x1650017_Procedure_23), DEBUGSTRING("CDestroyer::H0x1650017_Procedure_23")},
 {0x1650018, -1, CEntity::pEventHandler(&CDestroyer::H0x1650018_Procedure_24), DEBUGSTRING("CDestroyer::H0x1650018_Procedure_24")},
 {0x1650019, -1, CEntity::pEventHandler(&CDestroyer::H0x1650019_Procedure_25), DEBUGSTRING("CDestroyer::H0x1650019_Procedure_25")},
 {0x165001A, -1, CEntity::pEventHandler(&CDestroyer::H0x165001A_Procedure_26), DEBUGSTRING("CDestroyer::H0x165001A_Procedure_26")},
 {0x165001B, -1, CEntity::pEventHandler(&CDestroyer::H0x165001B_Procedure_27), DEBUGSTRING("CDestroyer::H0x165001B_Procedure_27")},
 {0x165001C, -1, CEntity::pEventHandler(&CDestroyer::H0x165001C_Procedure_28), DEBUGSTRING("CDestroyer::H0x165001C_Procedure_28")},
 {0x165001D, -1, CEntity::pEventHandler(&CDestroyer::H0x165001D_Procedure_29), DEBUGSTRING("CDestroyer::H0x165001D_Procedure_29")},
 {1, -1, CEntity::pEventHandler(&CDestroyer::Main), DEBUGSTRING("CDestroyer::Main")},
};
#define CDestroyer_handlersct ARRAYCOUNT(CDestroyer_handlers)

CEntity *CDestroyer_New(void) { return new CDestroyer; };
void CDestroyer_OnInitClass(void) {};
void CDestroyer_OnEndClass(void) {};
void CDestroyer_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDestroyer_OnWorldEnd(CWorld *pwo) {};
void CDestroyer_OnWorldInit(CWorld *pwo) {};
void CDestroyer_OnWorldTick(CWorld *pwo) {};
void CDestroyer_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDestroyer, CEnemyBase, "Destroyer", "Thumbnails\\Demon.tbn", 357);
DECLARE_CTFILENAME(_fnmCDestroyer_tbn, "Thumbnails\\Demon.tbn");
