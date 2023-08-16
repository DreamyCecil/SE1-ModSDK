// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCannonRotating

CEntityProperty CCannonRotating_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+1, 0x5C0, "Cannon Health", 0, "m_fHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x159<<8)+2, 0x5C4, "Cannon Firing Close Range", 0, "m_fFiringRangeClose", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x159<<8)+3, 0x5C8, "Cannon Firing Far Range", 0, "m_fFiringRangeFar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+4, 0x5CC, "Cannon Wait After Fire", 0, "m_fWaitAfterFire", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+5, 0x5D0, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+6, 0x5D4, "Cannon Max Pitch", 0, "m_fMaxPitch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+7, 0x5D8, "Cannon View Angle", 0, "m_fViewAngle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+8, 0x5DC, "Cannon Scanning Angle", 0, "m_fScanAngle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+9, 0x5E0, "Cannon Rotation Speed", 0, "m_fRotationSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x159<<8)+10, 0x5E4, "Cannon Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+20, 0x5E8, "", 0, "m_fRotSpeedMuzzle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+21, 0x5F4, "", 0, "m_fRotSpeedRotator", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+25, 0x600, "", 0, "m_fDistanceToPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+26, 0x604, "", 0, "m_fDesiredMuzzlePitch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+27, 0x608, "", 0, "m_iMuzzleDir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+28, 0x60C, "", 0, "m_vFiringPos", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+29, 0x618, "", 0, "m_vTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x159<<8)+30, 0x624, "", 0, "m_tmLastFireTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+40, 0x628, "", 0, "m_aBeginMuzzleRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+41, 0x634, "", 0, "m_aEndMuzzleRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+42, 0x640, "", 0, "m_aBeginRotatorRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x159<<8)+43, 0x64C, "", 0, "m_aEndRotatorRotation", 0x0UL, 0),
};
#define CCannonRotating_propertiesct ARRAYCOUNT(CCannonRotating_properties)

CEntityComponent CCannonRotating_components[] = {
#define CLASS_BASE ((0x00000159<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000159<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_PROJECTILE ((0x00000159<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_CANNONBALL ((0x00000159<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_CANNONBALL, "EFNM" "Classes\\CannonBall.ecl"),
#define MODEL_TURRET ((0x00000159<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_TURRET, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Turret.mdl"),
#define MODEL_ROTATOR ((0x00000159<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_ROTATOR, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\RotatingMechanism.mdl"),
#define MODEL_CANNON ((0x00000159<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "ModelsMP\\Enemies\\CannonStatic\\Cannon.mdl"),
#define TEXTURE_TURRET ((0x00000159<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TURRET, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Turret.tex"),
#define TEXTURE_ROTATOR ((0x00000159<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROTATOR, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\RotatingMechanism.tex"),
#define TEXTURE_CANNON ((0x00000159<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define MODEL_DEBRIS_MUZZLE ((0x00000159<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_MUZZLE, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Debris\\Cannon.mdl"),
#define MODEL_DEBRIS_ROTATOR ((0x00000159<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_ROTATOR, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Debris\\RotatingMechanism.mdl"),
#define MODEL_DEBRIS_BASE ((0x00000159<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_BASE, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Debris\\Turret.mdl"),
#define MODEL_BALL ((0x00000159<<8)+35)
 CEntityComponent(ECT_MODEL, MODEL_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\CannonBall.mdl"),
#define TEXTURE_BALL ((0x00000159<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BALL, "EFNM" "Models\\Weapons\\Cannon\\Projectile\\IronBall.tex"),
#define SOUND_FIRE ((0x00000159<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "ModelsMP\\Enemies\\CannonRotating\\Sounds\\Fire.wav"),
};
#define CCannonRotating_componentsct ARRAYCOUNT(CCannonRotating_components)

CEventHandlerEntry CCannonRotating_handlers[] = {
 {0x01590000, -1, CEntity::pEventHandler(&CCannonRotating::MainLoop),DEBUGSTRING("CCannonRotating::MainLoop")},
 {0x01590001, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590001_MainLoop_01), DEBUGSTRING("CCannonRotating::H0x01590001_MainLoop_01")},
 {0x01590002, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590002_MainLoop_02), DEBUGSTRING("CCannonRotating::H0x01590002_MainLoop_02")},
 {0x01590003, -1, CEntity::pEventHandler(&CCannonRotating::Scan),DEBUGSTRING("CCannonRotating::Scan")},
 {0x01590004, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590004_Scan_01), DEBUGSTRING("CCannonRotating::H0x01590004_Scan_01")},
 {0x01590005, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590005_Scan_02), DEBUGSTRING("CCannonRotating::H0x01590005_Scan_02")},
 {0x01590006, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590006_Scan_03), DEBUGSTRING("CCannonRotating::H0x01590006_Scan_03")},
 {0x01590007, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590007_Scan_04), DEBUGSTRING("CCannonRotating::H0x01590007_Scan_04")},
 {0x01590008, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590008_Scan_05), DEBUGSTRING("CCannonRotating::H0x01590008_Scan_05")},
 {0x01590009, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590009_Scan_06), DEBUGSTRING("CCannonRotating::H0x01590009_Scan_06")},
 {0x0159000a, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000a_Scan_07), DEBUGSTRING("CCannonRotating::H0x0159000a_Scan_07")},
 {0x0159000b, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000b_Scan_08), DEBUGSTRING("CCannonRotating::H0x0159000b_Scan_08")},
 {0x0159000c, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000c_Scan_09), DEBUGSTRING("CCannonRotating::H0x0159000c_Scan_09")},
 {0x0159000d, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000d_Scan_10), DEBUGSTRING("CCannonRotating::H0x0159000d_Scan_10")},
 {0x0159000e, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000e_Scan_11), DEBUGSTRING("CCannonRotating::H0x0159000e_Scan_11")},
 {0x0159000f, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159000f_Scan_12), DEBUGSTRING("CCannonRotating::H0x0159000f_Scan_12")},
 {0x01590010, -1, CEntity::pEventHandler(&CCannonRotating::Die),DEBUGSTRING("CCannonRotating::Die")},
 {0x01590011, -1, CEntity::pEventHandler(&CCannonRotating::RotateMuzzle),DEBUGSTRING("CCannonRotating::RotateMuzzle")},
 {0x01590012, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590012_RotateMuzzle_01), DEBUGSTRING("CCannonRotating::H0x01590012_RotateMuzzle_01")},
 {0x01590013, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590013_RotateMuzzle_02), DEBUGSTRING("CCannonRotating::H0x01590013_RotateMuzzle_02")},
 {0x01590014, -1, CEntity::pEventHandler(&CCannonRotating::FireCannon),DEBUGSTRING("CCannonRotating::FireCannon")},
 {0x01590015, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590015_FireCannon_01), DEBUGSTRING("CCannonRotating::H0x01590015_FireCannon_01")},
 {0x01590016, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590016_FireCannon_02), DEBUGSTRING("CCannonRotating::H0x01590016_FireCannon_02")},
 {0x01590017, -1, CEntity::pEventHandler(&CCannonRotating::Inactive),DEBUGSTRING("CCannonRotating::Inactive")},
 {0x01590018, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590018_Inactive_01), DEBUGSTRING("CCannonRotating::H0x01590018_Inactive_01")},
 {0x01590019, -1, CEntity::pEventHandler(&CCannonRotating::H0x01590019_Inactive_02), DEBUGSTRING("CCannonRotating::H0x01590019_Inactive_02")},
 {1, -1, CEntity::pEventHandler(&CCannonRotating::Main),DEBUGSTRING("CCannonRotating::Main")},
 {0x0159001a, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159001a_Main_01), DEBUGSTRING("CCannonRotating::H0x0159001a_Main_01")},
 {0x0159001b, -1, CEntity::pEventHandler(&CCannonRotating::H0x0159001b_Main_02), DEBUGSTRING("CCannonRotating::H0x0159001b_Main_02")},
};
#define CCannonRotating_handlersct ARRAYCOUNT(CCannonRotating_handlers)

CEntity *CCannonRotating_New(void) { return new CCannonRotating; };
void CCannonRotating_OnInitClass(void) {};
void CCannonRotating_OnEndClass(void) {};
void CCannonRotating_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCannonRotating_OnWorldEnd(CWorld *pwo) {};
void CCannonRotating_OnWorldInit(CWorld *pwo) {};
void CCannonRotating_OnWorldTick(CWorld *pwo) {};
void CCannonRotating_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCannonRotating, CEnemyBase, "CannonRotating", "Thumbnails\\CannonRotating.tbn", 345);
DECLARE_CTFILENAME(_fnmCCannonRotating_tbn, "Thumbnails\\CannonRotating.tbn");
