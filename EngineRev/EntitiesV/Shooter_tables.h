// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(FireType)
  EP_ENUMVALUE(SFT_WOODEN_DART, "Wooden dart"),
  EP_ENUMVALUE(SFT_FIRE, "Fire"),
  EP_ENUMVALUE(SFT_GAS, "-none-"),
  EP_ENUMVALUE(SFT_IRONBALL, "Ironball"),
  EP_ENUMVALUE(SFT_FIREBALL, "Fireball"),
EP_ENUMEND(FireType);

#define ENTITYCLASS CShooter

CEntityProperty CShooter_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+2, offsetof(CShooter, m_fShootingPeriod), "Shooting Period", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &FireType_enum, (0x00000159<<8)+5, offsetof(CShooter, m_sftType), "Type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+7, offsetof(CShooter, m_fHealth), "Health", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+8, offsetof(CShooter, m_fCannonBallSize), "Cannon/fire ball size", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+9, offsetof(CShooter, m_fCannonBallPower), "Cannon/fire ball power", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x00000159<<8)+10, offsetof(CShooter, m_iModelPreFireAnimation), "Model pre-fire animation", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x00000159<<8)+11, offsetof(CShooter, m_iTexturePreFireAnimation), "Texture pre-fire animation", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x00000159<<8)+12, offsetof(CShooter, m_iModelPostFireAnimation), "Model post-fire animation", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x00000159<<8)+13, offsetof(CShooter, m_iTexturePostFireAnimation), "Texture post-fire animation", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+14, offsetof(CShooter, m_fFlameBurstDuration), "Flame burst duration", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+15, offsetof(CShooter, m_fRndBeginWait), "Random begin wait time", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000159<<8)+20, offsetof(CShooter, m_penSoundLaunch), "Sound launch", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x00000159<<8)+21, offsetof(CShooter, m_soLaunch), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000159<<8)+30, offsetof(CShooter, m_penFlame), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000159<<8)+50, offsetof(CShooter, m_bFiring), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x00000159<<8)+51, offsetof(CShooter, m_bIndestructable), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+60, offsetof(CShooter, m_tmFlameStart), "", 0, 0, 0),
};
#define CShooter_propertiesct ARRAYCOUNT(CShooter_properties)

CEntityComponent CShooter_components[] = {
#define CLASS_PROJECTILE ((0x00000159<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BLOOD_SPRAY ((0x00000159<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_CANNONBALL ((0x00000159<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_CANNONBALL, "EFNM" "Classes\\CannonBall.ecl"),
};
#define CShooter_componentsct ARRAYCOUNT(CShooter_components)

CEventHandlerEntry CShooter_handlers[] = {
 {0x01590000, -1, CEntity::pEventHandler(&CShooter::FireOnce),DEBUGSTRING("CShooter::FireOnce")},
 {0x01590001, -1, CEntity::pEventHandler(&CShooter::H0x01590001_FireOnce_01), DEBUGSTRING("CShooter::H0x01590001_FireOnce_01")},
 {0x01590002, -1, CEntity::pEventHandler(&CShooter::H0x01590002_FireOnce_02), DEBUGSTRING("CShooter::H0x01590002_FireOnce_02")},
 {0x01590003, -1, CEntity::pEventHandler(&CShooter::H0x01590003_FireOnce_03), DEBUGSTRING("CShooter::H0x01590003_FireOnce_03")},
 {0x01590004, -1, CEntity::pEventHandler(&CShooter::H0x01590004_FireOnce_04), DEBUGSTRING("CShooter::H0x01590004_FireOnce_04")},
 {0x01590005, -1, CEntity::pEventHandler(&CShooter::FireContinuous),DEBUGSTRING("CShooter::FireContinuous")},
 {0x01590006, -1, CEntity::pEventHandler(&CShooter::H0x01590006_FireContinuous_01), DEBUGSTRING("CShooter::H0x01590006_FireContinuous_01")},
 {0x01590007, -1, CEntity::pEventHandler(&CShooter::H0x01590007_FireContinuous_02), DEBUGSTRING("CShooter::H0x01590007_FireContinuous_02")},
 {0x01590008, -1, CEntity::pEventHandler(&CShooter::H0x01590008_FireContinuous_03), DEBUGSTRING("CShooter::H0x01590008_FireContinuous_03")},
 {0x01590009, -1, CEntity::pEventHandler(&CShooter::H0x01590009_FireContinuous_04), DEBUGSTRING("CShooter::H0x01590009_FireContinuous_04")},
 {0x0159000a, -1, CEntity::pEventHandler(&CShooter::H0x0159000a_FireContinuous_05), DEBUGSTRING("CShooter::H0x0159000a_FireContinuous_05")},
 {0x0159000b, -1, CEntity::pEventHandler(&CShooter::H0x0159000b_FireContinuous_06), DEBUGSTRING("CShooter::H0x0159000b_FireContinuous_06")},
 {0x0159000c, -1, CEntity::pEventHandler(&CShooter::H0x0159000c_FireContinuous_07), DEBUGSTRING("CShooter::H0x0159000c_FireContinuous_07")},
 {0x0159000d, -1, CEntity::pEventHandler(&CShooter::H0x0159000d_FireContinuous_08), DEBUGSTRING("CShooter::H0x0159000d_FireContinuous_08")},
 {0x0159000e, -1, CEntity::pEventHandler(&CShooter::H0x0159000e_FireContinuous_09), DEBUGSTRING("CShooter::H0x0159000e_FireContinuous_09")},
 {0x0159000f, -1, CEntity::pEventHandler(&CShooter::FlameBurst),DEBUGSTRING("CShooter::FlameBurst")},
 {0x01590010, -1, CEntity::pEventHandler(&CShooter::H0x01590010_FlameBurst_01), DEBUGSTRING("CShooter::H0x01590010_FlameBurst_01")},
 {0x01590011, -1, CEntity::pEventHandler(&CShooter::H0x01590011_FlameBurst_02), DEBUGSTRING("CShooter::H0x01590011_FlameBurst_02")},
 {0x01590012, -1, CEntity::pEventHandler(&CShooter::H0x01590012_FlameBurst_03), DEBUGSTRING("CShooter::H0x01590012_FlameBurst_03")},
 {0x01590013, -1, CEntity::pEventHandler(&CShooter::H0x01590013_FlameBurst_04), DEBUGSTRING("CShooter::H0x01590013_FlameBurst_04")},
 {0x01590014, -1, CEntity::pEventHandler(&CShooter::MainLoop),DEBUGSTRING("CShooter::MainLoop")},
 {0x01590015, -1, CEntity::pEventHandler(&CShooter::H0x01590015_MainLoop_01), DEBUGSTRING("CShooter::H0x01590015_MainLoop_01")},
 {0x01590016, -1, CEntity::pEventHandler(&CShooter::H0x01590016_MainLoop_02), DEBUGSTRING("CShooter::H0x01590016_MainLoop_02")},
 {1, -1, CEntity::pEventHandler(&CShooter::Main),DEBUGSTRING("CShooter::Main")},
 {0x01590017, -1, CEntity::pEventHandler(&CShooter::H0x01590017_Main_01), DEBUGSTRING("CShooter::H0x01590017_Main_01")},
 {0x01590018, -1, CEntity::pEventHandler(&CShooter::H0x01590018_Main_02), DEBUGSTRING("CShooter::H0x01590018_Main_02")},
};
#define CShooter_handlersct ARRAYCOUNT(CShooter_handlers)

CEntity *CShooter_New(void) { return new CShooter; };
void CShooter_OnInitClass(void) {};
void CShooter_OnEndClass(void) {};
void CShooter_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CShooter_OnWorldEnd(CWorld *pwo) {};
void CShooter_OnWorldInit(CWorld *pwo) {};
void CShooter_OnWorldTick(CWorld *pwo) {};
void CShooter_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CShooter, CModelHolder2, "Shooter", "Thumbnails\\Shooter.tbn", 0x00000159);
DECLARE_CTFILENAME(_fnmCShooter_tbn, "Thumbnails\\Shooter.tbn");
