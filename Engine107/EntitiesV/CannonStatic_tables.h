// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CCannonStatic

CEntityProperty CCannonStatic_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+1, offsetof(CCannonStatic, m_fHealth), "Cannon Health", 0, "m_fHealth", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_RANGE, NULL, (0x00000159<<8)+2, offsetof(CCannonStatic, m_fFiringRangeClose), "Cannon Firing Close Range", 0, "m_fFiringRangeClose", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_RANGE, NULL, (0x00000159<<8)+3, offsetof(CCannonStatic, m_fFiringRangeFar), "Cannon Firing Far Range", 0, "m_fFiringRangeFar", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+4, offsetof(CCannonStatic, m_fShootingPeriod), "Cannon Shooting Period", 0, "m_fShootingPeriod", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+5, offsetof(CCannonStatic, m_fSize), "", 0, "m_fSize", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+6, offsetof(CCannonStatic, m_fMaxPitch), "Cannon Max Pitch", 0, "m_fMaxPitch", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+7, offsetof(CCannonStatic, m_fViewAngle), "Cannon View Angle", 0, "m_fViewAngle", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000159<<8)+8, offsetof(CCannonStatic, m_bActive), "Cannon Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000159<<8)+20, offsetof(CCannonStatic, m_fRotSpeedMuzzle), "", 0, "m_fRotSpeedMuzzle", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+25, offsetof(CCannonStatic, m_fDistanceToPlayer), "", 0, "m_fDistanceToPlayer", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000159<<8)+26, offsetof(CCannonStatic, m_fDesiredMuzzlePitch), "", 0, "m_fDesiredMuzzlePitch", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_INDEX, NULL, (0x00000159<<8)+27, offsetof(CCannonStatic, m_iMuzzleDir), "", 0, "m_iMuzzleDir", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000159<<8)+28, offsetof(CCannonStatic, m_vFiringPos), "", 0, "m_vFiringPos", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000159<<8)+29, offsetof(CCannonStatic, m_vTarget), "", 0, "m_vTarget", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000159<<8)+40, offsetof(CCannonStatic, m_aBeginMuzzleRotation), "", 0, "m_aBeginMuzzleRotation", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT3D, NULL, (0x00000159<<8)+41, offsetof(CCannonStatic, m_aEndMuzzleRotation), "", 0, "m_aEndMuzzleRotation", 0, 0),
};
#define CCannonStatic_propertiesct ARRAYCOUNT(CCannonStatic_properties)

CEntityComponent CCannonStatic_components[] = {
#define CLASS_BASE ((0x00000159<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000159<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_PROJECTILE ((0x00000159<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_CANNONBALL ((0x00000159<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_CANNONBALL, "EFNM" "Classes\\CannonBall.ecl"),
#define MODEL_TURRET ((0x00000159<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_TURRET, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Turret.mdl"),
#define MODEL_CANNON ((0x00000159<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Cannon.mdl"),
#define TEXTURE_TURRET ((0x00000159<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TURRET, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Turret.tex"),
#define TEXTURE_CANNON ((0x00000159<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define MODEL_DEBRIS_MUZZLE ((0x00000159<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_MUZZLE, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Debris\\Cannon.mdl"),
#define MODEL_DEBRIS_WHEEL ((0x00000159<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_WHEEL, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Debris\\Wheel.mdl"),
#define MODEL_DEBRIS_WOOD ((0x00000159<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_WOOD, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Debris\\Wood.mdl"),
#define MODEL_BALL ((0x00000159<<8)+35)
 CEntityComponent(ECT_MODEL, MODEL_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\CannonBall.mdl"),
#define TEXTURE_BALL ((0x00000159<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\IronBall.tex"),
#define SOUND_FIRE ((0x00000159<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Sounds\\Fire.wav"),
};
#define CCannonStatic_componentsct ARRAYCOUNT(CCannonStatic_components)

CEventHandlerEntry CCannonStatic_handlers[] = {
 {0x01590000, -1, CEntity::pEventHandler(&CCannonStatic::MainLoop),DEBUGSTRING("CCannonStatic::MainLoop")},
 {0x01590001, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590001_MainLoop_01), DEBUGSTRING("CCannonStatic::H0x01590001_MainLoop_01")},
 {0x01590002, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590002_MainLoop_02), DEBUGSTRING("CCannonStatic::H0x01590002_MainLoop_02")},
 {0x01590003, -1, CEntity::pEventHandler(&CCannonStatic::Die),DEBUGSTRING("CCannonStatic::Die")},
 {0x01590004, -1, CEntity::pEventHandler(&CCannonStatic::RotateMuzzle),DEBUGSTRING("CCannonStatic::RotateMuzzle")},
 {0x01590005, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590005_RotateMuzzle_01), DEBUGSTRING("CCannonStatic::H0x01590005_RotateMuzzle_01")},
 {0x01590006, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590006_RotateMuzzle_02), DEBUGSTRING("CCannonStatic::H0x01590006_RotateMuzzle_02")},
 {0x01590007, -1, CEntity::pEventHandler(&CCannonStatic::FireCannon),DEBUGSTRING("CCannonStatic::FireCannon")},
 {0x01590008, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590008_FireCannon_01), DEBUGSTRING("CCannonStatic::H0x01590008_FireCannon_01")},
 {0x01590009, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590009_FireCannon_02), DEBUGSTRING("CCannonStatic::H0x01590009_FireCannon_02")},
 {0x0159000a, -1, CEntity::pEventHandler(&CCannonStatic::WatchPlayers),DEBUGSTRING("CCannonStatic::WatchPlayers")},
 {0x0159000b, -1, CEntity::pEventHandler(&CCannonStatic::H0x0159000b_WatchPlayers_01), DEBUGSTRING("CCannonStatic::H0x0159000b_WatchPlayers_01")},
 {0x0159000c, -1, CEntity::pEventHandler(&CCannonStatic::H0x0159000c_WatchPlayers_02), DEBUGSTRING("CCannonStatic::H0x0159000c_WatchPlayers_02")},
 {0x0159000d, -1, CEntity::pEventHandler(&CCannonStatic::H0x0159000d_WatchPlayers_03), DEBUGSTRING("CCannonStatic::H0x0159000d_WatchPlayers_03")},
 {0x0159000e, -1, CEntity::pEventHandler(&CCannonStatic::H0x0159000e_WatchPlayers_04), DEBUGSTRING("CCannonStatic::H0x0159000e_WatchPlayers_04")},
 {0x0159000f, -1, CEntity::pEventHandler(&CCannonStatic::H0x0159000f_WatchPlayers_05), DEBUGSTRING("CCannonStatic::H0x0159000f_WatchPlayers_05")},
 {0x01590010, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590010_WatchPlayers_06), DEBUGSTRING("CCannonStatic::H0x01590010_WatchPlayers_06")},
 {0x01590011, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590011_WatchPlayers_07), DEBUGSTRING("CCannonStatic::H0x01590011_WatchPlayers_07")},
 {0x01590012, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590012_WatchPlayers_08), DEBUGSTRING("CCannonStatic::H0x01590012_WatchPlayers_08")},
 {0x01590013, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590013_WatchPlayers_09), DEBUGSTRING("CCannonStatic::H0x01590013_WatchPlayers_09")},
 {0x01590014, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590014_WatchPlayers_10), DEBUGSTRING("CCannonStatic::H0x01590014_WatchPlayers_10")},
 {0x01590015, -1, CEntity::pEventHandler(&CCannonStatic::Inactive),DEBUGSTRING("CCannonStatic::Inactive")},
 {0x01590016, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590016_Inactive_01), DEBUGSTRING("CCannonStatic::H0x01590016_Inactive_01")},
 {0x01590017, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590017_Inactive_02), DEBUGSTRING("CCannonStatic::H0x01590017_Inactive_02")},
 {1, -1, CEntity::pEventHandler(&CCannonStatic::Main),DEBUGSTRING("CCannonStatic::Main")},
 {0x01590018, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590018_Main_01), DEBUGSTRING("CCannonStatic::H0x01590018_Main_01")},
 {0x01590019, -1, CEntity::pEventHandler(&CCannonStatic::H0x01590019_Main_02), DEBUGSTRING("CCannonStatic::H0x01590019_Main_02")},
};
#define CCannonStatic_handlersct ARRAYCOUNT(CCannonStatic_handlers)

CEntity *CCannonStatic_New(void) { return new CCannonStatic; };
void CCannonStatic_OnInitClass(void) {};
void CCannonStatic_OnEndClass(void) {};
void CCannonStatic_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCannonStatic_OnWorldEnd(CWorld *pwo) {};
void CCannonStatic_OnWorldInit(CWorld *pwo) {};
void CCannonStatic_OnWorldTick(CWorld *pwo) {};
void CCannonStatic_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCannonStatic, CEnemyBase, "CannonStatic", "Thumbnails\\CannonStatic.tbn", 0x00000159);
DECLARE_CTFILENAME(_fnmCCannonStatic_tbn, "Thumbnails\\CannonStatic.tbn");
