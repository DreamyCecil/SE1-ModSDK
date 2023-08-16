// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WalkerChar)
  EP_ENUMVALUE(WLC_SOLDIER, "Soldier"),
  EP_ENUMVALUE(WLC_SERGEANT, "Sergeant"),
  EP_ENUMVALUE(WLC_ARTILLERY, "Artillery"),
  EP_ENUMVALUE(WLC_SPAWNER, "Spawner"),
EP_ENUMEND(WalkerChar);

#define ENTITYCLASS CWalker

CEntityProperty CWalker_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &WalkerChar_enum, (0x144<<8)+1, 0x5C0, "Character", 'C', "m_EwcChar", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x144<<8)+2, 0x5C4, "", 0, "m_iLoopCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x144<<8)+3, 0x5C8, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x144<<8)+4, 0x5CC, "", 0, "m_bWalkSoundPlaying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x144<<8)+5, 0x5D0, "", 0, "m_fThreatDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x144<<8)+20, 0x5D4, "Custom fire counter", 0, "m_iCustomFireCounter", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x144<<8)+21, 0x5D8, "Max gizmos count", 0, "m_ctMaxGizmos", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x144<<8)+22, 0x5DC, "", 0, "m_ctLiveGizmos", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x144<<8)+10, 0x5E0, "", 0, "m_soFeet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x144<<8)+11, 0x65C, "", 0, "m_soFire1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x144<<8)+12, 0x6D8, "", 0, "m_soFire2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x144<<8)+13, 0x754, "", 0, "m_soFire3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x144<<8)+14, 0x7D0, "", 0, "m_soFire4", 0x0UL, 0),
};
#define CWalker_propertiesct ARRAYCOUNT(CWalker_properties)

CEntityComponent CWalker_components[] = {
#define CLASS_BASE ((0x00000144<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_PROJECTILE ((0x00000144<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000144<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_CANNON_BALL ((0x00000144<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_CANNON_BALL, "EFNM" "Classes\\CannonBall.ecl"),
#define CLASS_GIZMO ((0x00000144<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_GIZMO, "EFNM" "Classes\\Gizmo.ecl"),
#define MODEL_WALKER ((0x00000144<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_WALKER, "EFNM" "Models\\Enemies\\Walker\\Walker.mdl"),
#define TEXTURE_WALKER_SOLDIER ((0x00000144<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WALKER_SOLDIER, "EFNM" "Models\\Enemies\\Walker\\Walker02.tex"),
#define TEXTURE_WALKER_SERGEANT ((0x00000144<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WALKER_SERGEANT, "EFNM" "Models\\Enemies\\Walker\\Walker01.tex"),
#define TEXTURE_WALKER_MONSTER ((0x00000144<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WALKER_MONSTER, "EFNM" "Models\\Enemies\\Walker\\Walker03.tex"),
#define MODEL_LASER ((0x00000144<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Enemies\\Walker\\Laser.mdl"),
#define TEXTURE_LASER ((0x00000144<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LASER, "EFNM" "Models\\Enemies\\Walker\\Laser.tex"),
#define MODEL_ROCKETLAUNCHER ((0x00000144<<8)+16)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Walker\\RocketLauncher.mdl"),
#define TEXTURE_ROCKETLAUNCHER ((0x00000144<<8)+17)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ROCKETLAUNCHER, "EFNM" "Models\\Enemies\\Walker\\RocketLauncher.tex"),
#define MODEL_CANNON ((0x00000144<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.mdl"),
#define TEXTURE_CANNON ((0x00000144<<8)+19)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define TEXTURE_SPAWNER ((0x00000144<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPAWNER, "EFNM" "Models\\Enemies\\Walker\\Walker04.tex"),
#define MODEL_GIZMO ((0x00000144<<8)+21)
 CEntityComponent(ECT_MODEL, MODEL_GIZMO, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.mdl"),
#define TEXTURE_GIZMO ((0x00000144<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GIZMO, "EFNM" "Models\\Enemies\\Gizmo\\Gizmo.tex"),
#define MODEL_SPAWNER_GUN ((0x00000144<<8)+23)
 CEntityComponent(ECT_MODEL, MODEL_SPAWNER_GUN, "EFNM" "Models\\Enemies\\Walker\\SpawnerGun.mdl"),
#define TEXTURE_SPAWNER_GUN ((0x00000144<<8)+24)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SPAWNER_GUN, "EFNM" "Models\\Enemies\\Walker\\SpawnerGun.tex"),
#define SOUND_SOLDIER_IDLE ((0x00000144<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_IDLE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Idle.wav"),
#define SOUND_SOLDIER_SIGHT ((0x00000144<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_SIGHT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Sight.wav"),
#define SOUND_SOLDIER_FIRE_LASER ((0x00000144<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_FIRE_LASER, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Fire.wav"),
#define SOUND_SOLDIER_DEATH ((0x00000144<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_DEATH, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Death.wav"),
#define SOUND_SOLDIER_WALK ((0x00000144<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_WALK, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Walk.wav"),
#define SOUND_SOLDIER_TELEPORT ((0x00000144<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_SOLDIER_TELEPORT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Soldier\\Teleport.wav"),
#define SOUND_SERGEANT_IDLE ((0x00000144<<8)+60)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_IDLE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Idle.wav"),
#define SOUND_SERGEANT_SIGHT ((0x00000144<<8)+61)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_SIGHT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Sight.wav"),
#define SOUND_SERGEANT_FIRE_ROCKET ((0x00000144<<8)+63)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_FIRE_ROCKET, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Fire.wav"),
#define SOUND_SERGEANT_DEATH ((0x00000144<<8)+64)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_DEATH, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Death.wav"),
#define SOUND_SERGEANT_WALK ((0x00000144<<8)+65)
 CEntityComponent(ECT_SOUND, SOUND_SERGEANT_WALK, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Sergeant\\Walk.wav"),
#define SOUND_MONSTER_IDLE ((0x00000144<<8)+70)
 CEntityComponent(ECT_SOUND, SOUND_MONSTER_IDLE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Idle.wav"),
#define SOUND_MONSTER_SIGHT ((0x00000144<<8)+71)
 CEntityComponent(ECT_SOUND, SOUND_MONSTER_SIGHT, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Sight.wav"),
#define SOUND_MONSTER_FIRE ((0x00000144<<8)+72)
 CEntityComponent(ECT_SOUND, SOUND_MONSTER_FIRE, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Fire.wav"),
#define SOUND_MONSTER_DEATH ((0x00000144<<8)+73)
 CEntityComponent(ECT_SOUND, SOUND_MONSTER_DEATH, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Death.wav"),
#define SOUND_MONSTER_WALK ((0x00000144<<8)+74)
 CEntityComponent(ECT_SOUND, SOUND_MONSTER_WALK, "EFNM" "Models\\Enemies\\Walker\\Sounds\\Monster\\Walk.wav"),
#define SOUND_GIZMO_IDLE ((0x00000144<<8)+75)
 CEntityComponent(ECT_SOUND, SOUND_GIZMO_IDLE, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Idle.wav"),
#define SOUND_GIZMO_JUMP ((0x00000144<<8)+76)
 CEntityComponent(ECT_SOUND, SOUND_GIZMO_JUMP, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Jump.wav"),
#define SOUND_GIZMO_JUMPDEATH ((0x00000144<<8)+77)
 CEntityComponent(ECT_SOUND, SOUND_GIZMO_JUMPDEATH, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\JumpDeath.wav"),
#define SOUND_GIZMO_SIGHT ((0x00000144<<8)+78)
 CEntityComponent(ECT_SOUND, SOUND_GIZMO_SIGHT, "EFNM" "Models\\Enemies\\Gizmo\\Sounds\\Sight.wav"),
};
#define CWalker_componentsct ARRAYCOUNT(CWalker_components)

CEventHandlerEntry CWalker_handlers[] = {
 {0x1440000, 0x1360043, CEntity::pEventHandler(&CWalker::H0x1440000_Procedure_0), DEBUGSTRING("CWalker::H0x1440000_Procedure_0")},
 {0x1440001, -1, CEntity::pEventHandler(&CWalker::H0x1440001_Procedure_1), DEBUGSTRING("CWalker::H0x1440001_Procedure_1")},
 {0x1440002, -1, CEntity::pEventHandler(&CWalker::H0x1440002_Procedure_2), DEBUGSTRING("CWalker::H0x1440002_Procedure_2")},
 {0x1440003, -1, CEntity::pEventHandler(&CWalker::H0x1440003_Procedure_3), DEBUGSTRING("CWalker::H0x1440003_Procedure_3")},
 {0x1440004, -1, CEntity::pEventHandler(&CWalker::H0x1440004_Procedure_4), DEBUGSTRING("CWalker::H0x1440004_Procedure_4")},
 {0x1440005, -1, CEntity::pEventHandler(&CWalker::H0x1440005_Procedure_5), DEBUGSTRING("CWalker::H0x1440005_Procedure_5")},
 {0x1440006, -1, CEntity::pEventHandler(&CWalker::H0x1440006_Procedure_6), DEBUGSTRING("CWalker::H0x1440006_Procedure_6")},
 {0x1440007, -1, CEntity::pEventHandler(&CWalker::H0x1440007_Procedure_7), DEBUGSTRING("CWalker::H0x1440007_Procedure_7")},
 {0x1440008, -1, CEntity::pEventHandler(&CWalker::H0x1440008_Procedure_8), DEBUGSTRING("CWalker::H0x1440008_Procedure_8")},
 {0x1440009, -1, CEntity::pEventHandler(&CWalker::H0x1440009_Procedure_9), DEBUGSTRING("CWalker::H0x1440009_Procedure_9")},
 {0x144000A, -1, CEntity::pEventHandler(&CWalker::H0x144000A_Procedure_10), DEBUGSTRING("CWalker::H0x144000A_Procedure_10")},
 {0x144000B, -1, CEntity::pEventHandler(&CWalker::H0x144000B_Procedure_11), DEBUGSTRING("CWalker::H0x144000B_Procedure_11")},
 {0x144000C, -1, CEntity::pEventHandler(&CWalker::H0x144000C_Procedure_12), DEBUGSTRING("CWalker::H0x144000C_Procedure_12")},
 {0x144000D, -1, CEntity::pEventHandler(&CWalker::H0x144000D_Procedure_13), DEBUGSTRING("CWalker::H0x144000D_Procedure_13")},
 {0x144000E, -1, CEntity::pEventHandler(&CWalker::H0x144000E_Procedure_14), DEBUGSTRING("CWalker::H0x144000E_Procedure_14")},
 {0x144000F, -1, CEntity::pEventHandler(&CWalker::H0x144000F_Procedure_15), DEBUGSTRING("CWalker::H0x144000F_Procedure_15")},
 {0x1440010, -1, CEntity::pEventHandler(&CWalker::H0x1440010_Procedure_16), DEBUGSTRING("CWalker::H0x1440010_Procedure_16")},
 {0x1440011, -1, CEntity::pEventHandler(&CWalker::H0x1440011_Procedure_17), DEBUGSTRING("CWalker::H0x1440011_Procedure_17")},
 {0x1440012, -1, CEntity::pEventHandler(&CWalker::H0x1440012_Procedure_18), DEBUGSTRING("CWalker::H0x1440012_Procedure_18")},
 {0x1440013, -1, CEntity::pEventHandler(&CWalker::H0x1440013_Procedure_19), DEBUGSTRING("CWalker::H0x1440013_Procedure_19")},
 {0x1440014, -1, CEntity::pEventHandler(&CWalker::H0x1440014_Procedure_20), DEBUGSTRING("CWalker::H0x1440014_Procedure_20")},
 {0x1440015, -1, CEntity::pEventHandler(&CWalker::H0x1440015_Procedure_21), DEBUGSTRING("CWalker::H0x1440015_Procedure_21")},
 {0x1440016, -1, CEntity::pEventHandler(&CWalker::H0x1440016_Procedure_22), DEBUGSTRING("CWalker::H0x1440016_Procedure_22")},
 {0x1440017, -1, CEntity::pEventHandler(&CWalker::H0x1440017_Procedure_23), DEBUGSTRING("CWalker::H0x1440017_Procedure_23")},
 {0x1440018, -1, CEntity::pEventHandler(&CWalker::H0x1440018_Procedure_24), DEBUGSTRING("CWalker::H0x1440018_Procedure_24")},
 {0x1440019, -1, CEntity::pEventHandler(&CWalker::H0x1440019_Procedure_25), DEBUGSTRING("CWalker::H0x1440019_Procedure_25")},
 {0x144001A, -1, CEntity::pEventHandler(&CWalker::H0x144001A_Procedure_26), DEBUGSTRING("CWalker::H0x144001A_Procedure_26")},
 {0x144001B, -1, CEntity::pEventHandler(&CWalker::H0x144001B_Procedure_27), DEBUGSTRING("CWalker::H0x144001B_Procedure_27")},
 {0x144001C, -1, CEntity::pEventHandler(&CWalker::H0x144001C_Procedure_28), DEBUGSTRING("CWalker::H0x144001C_Procedure_28")},
 {0x144001D, -1, CEntity::pEventHandler(&CWalker::H0x144001D_Procedure_29), DEBUGSTRING("CWalker::H0x144001D_Procedure_29")},
 {0x144001E, -1, CEntity::pEventHandler(&CWalker::H0x144001E_Procedure_30), DEBUGSTRING("CWalker::H0x144001E_Procedure_30")},
 {0x144001F, -1, CEntity::pEventHandler(&CWalker::H0x144001F_Procedure_31), DEBUGSTRING("CWalker::H0x144001F_Procedure_31")},
 {0x1440020, -1, CEntity::pEventHandler(&CWalker::H0x1440020_Procedure_32), DEBUGSTRING("CWalker::H0x1440020_Procedure_32")},
 {0x1440021, -1, CEntity::pEventHandler(&CWalker::H0x1440021_Procedure_33), DEBUGSTRING("CWalker::H0x1440021_Procedure_33")},
 {0x1440022, -1, CEntity::pEventHandler(&CWalker::H0x1440022_Procedure_34), DEBUGSTRING("CWalker::H0x1440022_Procedure_34")},
 {0x1440023, -1, CEntity::pEventHandler(&CWalker::H0x1440023_Procedure_35), DEBUGSTRING("CWalker::H0x1440023_Procedure_35")},
 {0x1440024, 0x1360055, CEntity::pEventHandler(&CWalker::H0x1440024_Procedure_36), DEBUGSTRING("CWalker::H0x1440024_Procedure_36")},
 {0x1440025, -1, CEntity::pEventHandler(&CWalker::H0x1440025_Procedure_37), DEBUGSTRING("CWalker::H0x1440025_Procedure_37")},
 {0x1440026, -1, CEntity::pEventHandler(&CWalker::H0x1440026_Procedure_38), DEBUGSTRING("CWalker::H0x1440026_Procedure_38")},
 {0x1440027, -1, CEntity::pEventHandler(&CWalker::H0x1440027_Procedure_39), DEBUGSTRING("CWalker::H0x1440027_Procedure_39")},
 {0x1440028, -1, CEntity::pEventHandler(&CWalker::H0x1440028_Procedure_40), DEBUGSTRING("CWalker::H0x1440028_Procedure_40")},
 {0x1440029, -1, CEntity::pEventHandler(&CWalker::H0x1440029_Procedure_41), DEBUGSTRING("CWalker::H0x1440029_Procedure_41")},
 {0x144002A, -1, CEntity::pEventHandler(&CWalker::H0x144002A_Procedure_42), DEBUGSTRING("CWalker::H0x144002A_Procedure_42")},
 {1, -1, CEntity::pEventHandler(&CWalker::Main), DEBUGSTRING("CWalker::Main")},
};
#define CWalker_handlersct ARRAYCOUNT(CWalker_handlers)

CEntity *CWalker_New(void) { return new CWalker; };
void CWalker_OnInitClass(void) {};
void CWalker_OnEndClass(void) {};
void CWalker_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWalker_OnWorldEnd(CWorld *pwo) {};
void CWalker_OnWorldInit(CWorld *pwo) {};
void CWalker_OnWorldTick(CWorld *pwo) {};
void CWalker_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWalker, CEnemyBase, "Walker", "Thumbnails\\Walker.tbn", 324);
DECLARE_CTFILENAME(_fnmCWalker_tbn, "Thumbnails\\Walker.tbn");
