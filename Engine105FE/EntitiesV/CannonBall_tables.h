// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(CannonBallType)
  EP_ENUMVALUE(CBT_IRON, ""),
  EP_ENUMVALUE(CBT_NUKE, ""),
EP_ENUMEND(CannonBallType);

#define ENTITYCLASS CCannonBall

CEntityProperty CCannonBall_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000001fa<<8)+1, offsetof(CCannonBall, m_penLauncher), "", 0, "m_penLauncher", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+2, offsetof(CCannonBall, m_fLaunchPower), "", 0, "m_fLaunchPower", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+10, offsetof(CCannonBall, m_fIgnoreTime), "", 0, "m_fIgnoreTime", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+11, offsetof(CCannonBall, m_fStartTime), "", 0, "m_fStartTime", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x000001fa<<8)+12, offsetof(CCannonBall, m_iNextChannel), "", 0, "m_iNextChannel", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000001fa<<8)+13, offsetof(CCannonBall, m_bSelfExploded), "", 0, "m_bSelfExploded", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000001fa<<8)+20, offsetof(CCannonBall, m_soBounce0), "", 0, "m_soBounce0", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000001fa<<8)+21, offsetof(CCannonBall, m_soBounce1), "", 0, "m_soBounce1", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000001fa<<8)+22, offsetof(CCannonBall, m_soBounce2), "", 0, "m_soBounce2", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000001fa<<8)+23, offsetof(CCannonBall, m_soBounce3), "", 0, "m_soBounce3", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x000001fa<<8)+24, offsetof(CCannonBall, m_soBounce4), "", 0, "m_soBounce4", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &CannonBallType_enum, (0x000001fa<<8)+30, offsetof(CCannonBall, m_cbtType), "", 0, "m_cbtType", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+40, offsetof(CCannonBall, m_tmInvisibility), "", 0, "m_tmInvisibility", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+41, offsetof(CCannonBall, m_tmExpandBox), "", 0, "m_tmExpandBox", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001fa<<8)+42, offsetof(CCannonBall, m_tmForceExplode), "", 0, "m_tmForceExplode", 0, 0),
};
#define CCannonBall_propertiesct ARRAYCOUNT(CCannonBall_properties)

CEntityComponent CCannonBall_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001fa<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_LIGHT ((0x000001fa<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define MODEL_BALL ((0x000001fa<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\CannonBall.mdl"),
#define TEXTURE_NUKE_BALL ((0x000001fa<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_NUKE_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\NukeBall.tex"),
#define TEXTURE_IRON_BALL ((0x000001fa<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_IRON_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\IronBall.tex"),
#define SOUND_BALL_BOUNCE ((0x000001fa<<8)+12)
 CEntityComponent(ECT_SOUND, SOUND_BALL_BOUNCE, "EFNM" "Models\\Weapons\\Cannon\\Sounds\\Bounce.wav"),
#define TEX_REFL_BWRIPLES01 ((0x000001fa<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_SPEC_MEDIUM ((0x000001fa<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
};
#define CCannonBall_componentsct ARRAYCOUNT(CCannonBall_components)

CEventHandlerEntry CCannonBall_handlers[] = {
 {0x01fa0002, -1, CEntity::pEventHandler(&CCannonBall::Bounce),DEBUGSTRING("CCannonBall::Bounce")},
 {0x01fa0003, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0003_Bounce_01), DEBUGSTRING("CCannonBall::H0x01fa0003_Bounce_01")},
 {0x01fa0004, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0004_Bounce_02), DEBUGSTRING("CCannonBall::H0x01fa0004_Bounce_02")},
 {1, -1, CEntity::pEventHandler(&CCannonBall::Main),DEBUGSTRING("CCannonBall::Main")},
 {0x01fa0005, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0005_Main_01), DEBUGSTRING("CCannonBall::H0x01fa0005_Main_01")},
 {0x01fa0006, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0006_Main_02), DEBUGSTRING("CCannonBall::H0x01fa0006_Main_02")},
 {0x01fa0007, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0007_Main_03), DEBUGSTRING("CCannonBall::H0x01fa0007_Main_03")},
 {0x01fa0008, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0008_Main_04), DEBUGSTRING("CCannonBall::H0x01fa0008_Main_04")},
 {0x01fa0009, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0009_Main_05), DEBUGSTRING("CCannonBall::H0x01fa0009_Main_05")},
 {0x01fa000a, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000a_Main_06), DEBUGSTRING("CCannonBall::H0x01fa000a_Main_06")},
 {0x01fa000b, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000b_Main_07), DEBUGSTRING("CCannonBall::H0x01fa000b_Main_07")},
 {0x01fa000c, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000c_Main_08), DEBUGSTRING("CCannonBall::H0x01fa000c_Main_08")},
 {0x01fa000d, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000d_Main_09), DEBUGSTRING("CCannonBall::H0x01fa000d_Main_09")},
 {0x01fa000e, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000e_Main_10), DEBUGSTRING("CCannonBall::H0x01fa000e_Main_10")},
 {0x01fa000f, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa000f_Main_11), DEBUGSTRING("CCannonBall::H0x01fa000f_Main_11")},
 {0x01fa0010, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0010_Main_12), DEBUGSTRING("CCannonBall::H0x01fa0010_Main_12")},
 {0x01fa0011, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0011_Main_13), DEBUGSTRING("CCannonBall::H0x01fa0011_Main_13")},
 {0x01fa0012, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0012_Main_14), DEBUGSTRING("CCannonBall::H0x01fa0012_Main_14")},
 {0x01fa0013, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0013_Main_15), DEBUGSTRING("CCannonBall::H0x01fa0013_Main_15")},
 {0x01fa0014, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0014_Main_16), DEBUGSTRING("CCannonBall::H0x01fa0014_Main_16")},
 {0x01fa0015, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0015_Main_17), DEBUGSTRING("CCannonBall::H0x01fa0015_Main_17")},
 {0x01fa0016, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0016_Main_18), DEBUGSTRING("CCannonBall::H0x01fa0016_Main_18")},
 {0x01fa0017, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0017_Main_19), DEBUGSTRING("CCannonBall::H0x01fa0017_Main_19")},
 {0x01fa0018, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0018_Main_20), DEBUGSTRING("CCannonBall::H0x01fa0018_Main_20")},
 {0x01fa0019, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0019_Main_21), DEBUGSTRING("CCannonBall::H0x01fa0019_Main_21")},
 {0x01fa001a, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001a_Main_22), DEBUGSTRING("CCannonBall::H0x01fa001a_Main_22")},
 {0x01fa001b, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001b_Main_23), DEBUGSTRING("CCannonBall::H0x01fa001b_Main_23")},
 {0x01fa001c, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001c_Main_24), DEBUGSTRING("CCannonBall::H0x01fa001c_Main_24")},
 {0x01fa001d, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001d_Main_25), DEBUGSTRING("CCannonBall::H0x01fa001d_Main_25")},
 {0x01fa001e, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001e_Main_26), DEBUGSTRING("CCannonBall::H0x01fa001e_Main_26")},
 {0x01fa001f, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa001f_Main_27), DEBUGSTRING("CCannonBall::H0x01fa001f_Main_27")},
 {0x01fa0020, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0020_Main_28), DEBUGSTRING("CCannonBall::H0x01fa0020_Main_28")},
 {0x01fa0021, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0021_Main_29), DEBUGSTRING("CCannonBall::H0x01fa0021_Main_29")},
 {0x01fa0022, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0022_Main_30), DEBUGSTRING("CCannonBall::H0x01fa0022_Main_30")},
 {0x01fa0023, -1, CEntity::pEventHandler(&CCannonBall::H0x01fa0023_Main_31), DEBUGSTRING("CCannonBall::H0x01fa0023_Main_31")},
};
#define CCannonBall_handlersct ARRAYCOUNT(CCannonBall_handlers)

CEntity *CCannonBall_New(void) { return new CCannonBall; };
void CCannonBall_OnInitClass(void) {};
void CCannonBall_OnEndClass(void) {};
void CCannonBall_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CCannonBall_OnWorldEnd(CWorld *pwo) {};
void CCannonBall_OnWorldInit(CWorld *pwo) {};
void CCannonBall_OnWorldTick(CWorld *pwo) {};
void CCannonBall_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCannonBall, CMovableModelEntity, "Cannon ball", "", 0x000001fa);
DECLARE_CTFILENAME(_fnmCCannonBall_tbn, "");
