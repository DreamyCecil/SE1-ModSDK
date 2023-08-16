// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAirElemental

CEntityProperty CAirElemental_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+2, 0x5C0, "", 0, "m_bFloat", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+3, 0x5C4, "", 0, "m_fAttPosY", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+10, 0x5C8, "", 0, "m_bInitialAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+20, 0x5CC, "AirBoss 90% Trigger", 0, "m_penTrigger01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+21, 0x5D0, "AirBoss 80% Trigger", 0, "m_penTrigger02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+22, 0x5D4, "AirBoss 70% Trigger", 0, "m_penTrigger03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+23, 0x5D8, "AirBoss 60% Trigger", 0, "m_penTrigger04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+24, 0x5DC, "AirBoss 50% Trigger", 0, "m_penTrigger05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+25, 0x5E0, "AirBoss 40% Trigger", 0, "m_penTrigger06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+26, 0x5E4, "AirBoss 30% Trigger", 0, "m_penTrigger07", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+27, 0x5E8, "AirBoss 20% Trigger", 0, "m_penTrigger08", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+28, 0x5EC, "AirBoss 10% Trigger", 0, "m_penTrigger09", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+29, 0x5F0, "AirBoss 05% Trigger", 0, "m_penTrigger10", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+30, 0x5F4, "", 0, "m_fAttSizeCurrent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+31, 0x5F8, "", 0, "m_fAttSizeBegin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+32, 0x5FC, "", 0, "m_fAttSizeEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+33, 0x600, "", 0, "m_fAttSizeRequested", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+34, 0x604, "", 0, "m_bAttGrow", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+35, 0x608, "", 0, "m_iSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+36, 0x60C, "", 0, "m_fLastSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+37, 0x610, "", 0, "m_fTargetSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+47, 0x614, "AirBoss Grow Speed", 0, "m_fGrowSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+43, 0x618, "", 0, "m_tmWindNextFire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+44, 0x61C, "AirBoss Wind Fire Min. Time", 0, "m_fWindFireTimeMin", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+45, 0x620, "AirBoss Wind Fire Max. Time", 0, "m_fWindFireTimeMax", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+46, 0x624, "", 0, "m_iWind", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+50, 0x628, "", 0, "m_bDying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+51, 0x62C, "", 0, "m_tmDeath", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+52, 0x630, "", 0, "m_fDeathDuration", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15b<<8)+60, 0x634, "", 0, "m_fWindBlastFirePosBegin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15b<<8)+61, 0x640, "", 0, "m_fWindBlastFirePosEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+70, 0x64C, "", 0, "m_tmLastAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+90, 0x650, "", 0, "m_penDeathInflictor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+91, 0x654, "", 0, "m_bRenderParticles", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+100, 0x658, "", 0, "m_soFire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+101, 0x6D4, "", 0, "m_soVoice", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x15b<<8)+110, 0x750, "Color of particles", 0, "m_colParticles", 0x7F0000FFUL, 0),
};
#define CAirElemental_propertiesct ARRAYCOUNT(CAirElemental_properties)

CEntityComponent CAirElemental_components[] = {
#define CLASS_BASE ((0x0000015b<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_TWISTER ((0x0000015b<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_TWISTER, "EFNM" "Classes\\Twister.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015b<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_PROJECTILE ((0x0000015b<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define MODEL_INVISIBLE ((0x0000015b<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_INVISIBLE, "EFNM" "ModelsMP\\Enemies\\AirElemental\\AirElemental.mdl"),
#define MODEL_ELEMENTAL ((0x0000015b<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_ELEMENTAL, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Elemental.mdl"),
#define TEXTURE_ELEMENTAL ((0x0000015b<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELEMENTAL, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Elemental.tex"),
#define TEXTURE_DETAIL_ELEM ((0x0000015b<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DETAIL_ELEM, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Detail.tex"),
#define SOUND_FIREWINDBLAST ((0x0000015b<<8)+200)
 CEntityComponent(ECT_SOUND, SOUND_FIREWINDBLAST, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\BlastFire.wav"),
#define SOUND_FIRETWISTER ((0x0000015b<<8)+201)
 CEntityComponent(ECT_SOUND, SOUND_FIRETWISTER, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\Fire.wav"),
#define SOUND_ROAR ((0x0000015b<<8)+202)
 CEntityComponent(ECT_SOUND, SOUND_ROAR, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\Anger.wav"),
#define SOUND_DEATH ((0x0000015b<<8)+203)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\Death.wav"),
#define SOUND_EXPLOSION ((0x0000015b<<8)+204)
 CEntityComponent(ECT_SOUND, SOUND_EXPLOSION, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\Explosion.wav"),
};
#define CAirElemental_componentsct ARRAYCOUNT(CAirElemental_components)

CEventHandlerEntry CAirElemental_handlers[] = {
 {0x015b0001, STATE_CEnemyBase_Die, CEntity::pEventHandler(&CAirElemental::Die),DEBUGSTRING("CAirElemental::Die")},
 {0x015b0002, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0002_Die_01), DEBUGSTRING("CAirElemental::H0x015b0002_Die_01")},
 {0x015b0003, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0003_Die_02), DEBUGSTRING("CAirElemental::H0x015b0003_Die_02")},
 {0x015b0004, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0004_Die_03), DEBUGSTRING("CAirElemental::H0x015b0004_Die_03")},
 {0x015b0005, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0005_Die_04), DEBUGSTRING("CAirElemental::H0x015b0005_Die_04")},
 {0x015b0006, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CAirElemental::Fire),DEBUGSTRING("CAirElemental::Fire")},
 {0x015b0007, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0007_Fire_01), DEBUGSTRING("CAirElemental::H0x015b0007_Fire_01")},
 {0x015b0008, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0008_Fire_02), DEBUGSTRING("CAirElemental::H0x015b0008_Fire_02")},
 {0x015b0009, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0009_Fire_03), DEBUGSTRING("CAirElemental::H0x015b0009_Fire_03")},
 {0x015b000a, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000a_Fire_04), DEBUGSTRING("CAirElemental::H0x015b000a_Fire_04")},
 {0x015b000b, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000b_Fire_05), DEBUGSTRING("CAirElemental::H0x015b000b_Fire_05")},
 {0x015b000c, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000c_Fire_06), DEBUGSTRING("CAirElemental::H0x015b000c_Fire_06")},
 {0x015b000d, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000d_Fire_07), DEBUGSTRING("CAirElemental::H0x015b000d_Fire_07")},
 {0x015b000e, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000e_Fire_08), DEBUGSTRING("CAirElemental::H0x015b000e_Fire_08")},
 {0x015b000f, -1, CEntity::pEventHandler(&CAirElemental::H0x015b000f_Fire_09), DEBUGSTRING("CAirElemental::H0x015b000f_Fire_09")},
 {0x015b0010, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0010_Fire_10), DEBUGSTRING("CAirElemental::H0x015b0010_Fire_10")},
 {0x015b0011, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0011_Fire_11), DEBUGSTRING("CAirElemental::H0x015b0011_Fire_11")},
 {0x015b0012, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0012_Fire_12), DEBUGSTRING("CAirElemental::H0x015b0012_Fire_12")},
 {0x015b0013, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0013_Fire_13), DEBUGSTRING("CAirElemental::H0x015b0013_Fire_13")},
 {0x015b0014, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0014_Fire_14), DEBUGSTRING("CAirElemental::H0x015b0014_Fire_14")},
 {0x015b0015, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0015_Fire_15), DEBUGSTRING("CAirElemental::H0x015b0015_Fire_15")},
 {0x015b0016, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0016_Fire_16), DEBUGSTRING("CAirElemental::H0x015b0016_Fire_16")},
 {0x015b0017, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0017_Fire_17), DEBUGSTRING("CAirElemental::H0x015b0017_Fire_17")},
 {0x015b0018, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CAirElemental::Hit),DEBUGSTRING("CAirElemental::Hit")},
 {0x015b0019, STATE_CEnemyBase_Death, CEntity::pEventHandler(&CAirElemental::Death),DEBUGSTRING("CAirElemental::Death")},
 {0x015b001a, -1, CEntity::pEventHandler(&CAirElemental::H0x015b001a_Death_01), DEBUGSTRING("CAirElemental::H0x015b001a_Death_01")},
 {0x015b001b, -1, CEntity::pEventHandler(&CAirElemental::H0x015b001b_Death_02), DEBUGSTRING("CAirElemental::H0x015b001b_Death_02")},
 {0x015b001c, -1, CEntity::pEventHandler(&CAirElemental::H0x015b001c_Death_03), DEBUGSTRING("CAirElemental::H0x015b001c_Death_03")},
 {0x015b001d, -1, CEntity::pEventHandler(&CAirElemental::H0x015b001d_Death_04), DEBUGSTRING("CAirElemental::H0x015b001d_Death_04")},
 {0x015b001e, -1, CEntity::pEventHandler(&CAirElemental::Grow),DEBUGSTRING("CAirElemental::Grow")},
 {0x015b001f, -1, CEntity::pEventHandler(&CAirElemental::H0x015b001f_Grow_01), DEBUGSTRING("CAirElemental::H0x015b001f_Grow_01")},
 {0x015b0020, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0020_Grow_02), DEBUGSTRING("CAirElemental::H0x015b0020_Grow_02")},
 {0x015b0021, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0021_Grow_03), DEBUGSTRING("CAirElemental::H0x015b0021_Grow_03")},
 {0x015b0022, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0022_Grow_04), DEBUGSTRING("CAirElemental::H0x015b0022_Grow_04")},
 {0x015b0023, -1, CEntity::pEventHandler(&CAirElemental::ElementalLoop),DEBUGSTRING("CAirElemental::ElementalLoop")},
 {0x015b0024, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0024_ElementalLoop_01), DEBUGSTRING("CAirElemental::H0x015b0024_ElementalLoop_01")},
 {0x015b0025, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0025_ElementalLoop_02), DEBUGSTRING("CAirElemental::H0x015b0025_ElementalLoop_02")},
 {1, -1, CEntity::pEventHandler(&CAirElemental::Main),DEBUGSTRING("CAirElemental::Main")},
 {0x015b0026, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0026_Main_01), DEBUGSTRING("CAirElemental::H0x015b0026_Main_01")},
 {0x015b0027, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0027_Main_02), DEBUGSTRING("CAirElemental::H0x015b0027_Main_02")},
 {0x015b0028, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0028_Main_03), DEBUGSTRING("CAirElemental::H0x015b0028_Main_03")},
 {0x015b0029, -1, CEntity::pEventHandler(&CAirElemental::H0x015b0029_Main_04), DEBUGSTRING("CAirElemental::H0x015b0029_Main_04")},
 {0x015b002a, -1, CEntity::pEventHandler(&CAirElemental::H0x015b002a_Main_05), DEBUGSTRING("CAirElemental::H0x015b002a_Main_05")},
 {0x015b002b, -1, CEntity::pEventHandler(&CAirElemental::H0x015b002b_Main_06), DEBUGSTRING("CAirElemental::H0x015b002b_Main_06")},
};
#define CAirElemental_handlersct ARRAYCOUNT(CAirElemental_handlers)

CEntity *CAirElemental_New(void) { return new CAirElemental; };
void CAirElemental_OnInitClass(void) {};
void CAirElemental_OnEndClass(void) {};
void CAirElemental_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAirElemental_OnWorldEnd(CWorld *pwo) {};
void CAirElemental_OnWorldInit(CWorld *pwo) {};
void CAirElemental_OnWorldTick(CWorld *pwo) {};
void CAirElemental_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAirElemental, CEnemyBase, "AirElemental", "Thumbnails\\AirElemental.tbn", 347);
DECLARE_CTFILENAME(_fnmCAirElemental_tbn, "Thumbnails\\AirElemental.tbn");
