// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSummoner

CEntityProperty CSummoner_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+1, 0x5C0, "", 0, "m_bInvulnerable", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+2, 0x5C4, "Sum. Begin Death Target", 0, "m_penBeginDeathTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+3, 0x5C8, "Sum. End Death Target", 0, "m_penEndDeathTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+4, 0x5CC, "Sum. Explode Target", 0, "m_penExplodeDeathTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+5, 0x5D0, "", 0, "m_bShouldTeleport", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+6, 0x5D4, "", 0, "m_fFirePeriod", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+7, 0x5D8, "Sum. Immaterial Duration", 0, "m_fImmaterialDuration", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+8, 0x5DC, "Sum. Corporeal Duration", 0, "m_fCorporealDuration", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+9, 0x5E0, "", 0, "m_tmMaterializationTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+10, 0x5E4, "Sum. Stretch", 0, "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+11, 0x5E8, "", 0, "m_iSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+12, 0x5EC, "Sum. Control Area", 0, "m_penControlArea", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+20, 0x5F0, "", 0, "m_iGroup01Count", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+21, 0x5F4, "Sum. Group01 Template01", 0, "m_penGroup01Template01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+22, 0x5F8, "Sum. Group01 Template02", 0, "m_penGroup01Template02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+23, 0x5FC, "Sum. Group01 Template03", 0, "m_penGroup01Template03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+24, 0x600, "Sum. Group01 Template04", 0, "m_penGroup01Template04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+25, 0x604, "Sum. Group01 Template05", 0, "m_penGroup01Template05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+26, 0x608, "Sum. Group01 Template06", 0, "m_penGroup01Template06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+30, 0x60C, "", 0, "m_iGroup02Count", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+31, 0x610, "Sum. Group02 Template01", 0, "m_penGroup02Template01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+32, 0x614, "Sum. Group02 Template02", 0, "m_penGroup02Template02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+33, 0x618, "Sum. Group02 Template03", 0, "m_penGroup02Template03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+34, 0x61C, "Sum. Group02 Template04", 0, "m_penGroup02Template04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+35, 0x620, "Sum. Group02 Template05", 0, "m_penGroup02Template05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+36, 0x624, "Sum. Group02 Template06", 0, "m_penGroup02Template06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+40, 0x628, "", 0, "m_iGroup03Count", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+41, 0x62C, "Sum. Group03 Template01", 0, "m_penGroup03Template01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+42, 0x630, "Sum. Group03 Template02", 0, "m_penGroup03Template02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+43, 0x634, "Sum. Group03 Template03", 0, "m_penGroup03Template03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+44, 0x638, "Sum. Group03 Template04", 0, "m_penGroup03Template04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+45, 0x63C, "Sum. Group03 Template05", 0, "m_penGroup03Template05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+46, 0x640, "Sum. Group03 Template06", 0, "m_penGroup03Template06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+60, 0x644, "Sum. Teleport marker", 0, "m_penTeleportMarker", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+61, 0x648, "", 0, "m_iTeleportMarkers", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+65, 0x64C, "Sum. Enemy spawn marker", 0, "m_penSpawnMarker", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+66, 0x650, "", 0, "m_iSpawnMarkers", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+67, 0x654, "", 0, "m_fTeleportWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+70, 0x658, "", 0, "m_fFuss", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+78, 0x65C, "", 0, "m_iEnemyCount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+71, 0x660, "", 0, "m_fMaxCurrentFuss", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+72, 0x664, "Sum. Max Begin Fuss", 0, "m_fMaxBeginFuss", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+73, 0x668, "Sum. Max End Fuss", 0, "m_fMaxEndFuss", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+75, 0x66C, "", 0, "m_iSpawnScheme", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+76, 0x670, "", 0, "m_bFireOK", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+79, 0x674, "", 0, "m_bFiredThisTurn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+77, 0x678, "", 0, "m_fDamageSinceLastSpawn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+88, 0x67C, "", 0, "m_bExploded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15b<<8)+90, 0x680, "", 0, "m_bDying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+92, 0x684, "", 0, "m_tmDeathBegin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+93, 0x688, "", 0, "m_fDeathDuration", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+94, 0x68C, "", 0, "m_penDeathInflictor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+111, 0x690, "", 0, "m_penKiller", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15b<<8)+95, 0x694, "", 0, "m_vDeathPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15b<<8)+96, 0x6A0, "Sum. Death marker", 0, "m_penDeathMarker", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+100, 0x6A4, "", 0, "m_iIndex", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x15b<<8)+102, 0x6A8, "", 0, "m_iTaunt", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+110, 0x6AC, "", 0, "m_tmParticlesDisappearStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15b<<8)+120, 0x6B0, "", 0, "m_tmLastAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+150, 0x6B4, "", 0, "m_soExplosion", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+151, 0x730, "", 0, "m_soSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+152, 0x7AC, "", 0, "m_soChant", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15b<<8)+153, 0x828, "", 0, "m_soTeleport", 0x0UL, 0),
};
#define CSummoner_propertiesct ARRAYCOUNT(CSummoner_properties)

CEntityComponent CSummoner_components[] = {
#define CLASS_BASE ((0x0000015b<<8)+0)
 CEntityComponent(ECT_CLASS, CLASS_BASE, "EFNM" "Classes\\EnemyBase.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015b<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_SPAWNER_PROJECTILE ((0x0000015b<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_SPAWNER_PROJECTILE, "EFNM" "Classes\\SpawnerProjectile.ecl"),
#define CLASS_BASIC_EFFECT ((0x0000015b<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_EFFECTOR ((0x0000015b<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_EFFECTOR, "EFNM" "Classes\\Effector.ecl"),
#define MODEL_SUMMONER ((0x0000015b<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_SUMMONER, "EFNM" "ModelsMP\\Enemies\\Summoner\\Summoner.mdl"),
#define TEXTURE_SUMMONER ((0x0000015b<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SUMMONER, "EFNM" "ModelsMP\\Enemies\\Summoner\\Summoner.tex"),
#define MODEL_STAFF ((0x0000015b<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_STAFF, "EFNM" "ModelsMP\\Enemies\\Summoner\\Staff.mdl"),
#define TEXTURE_STAFF ((0x0000015b<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STAFF, "EFNM" "ModelsMP\\Enemies\\Summoner\\Staff.tex"),
#define MODEL_DEBRIS01 ((0x0000015b<<8)+16)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS01, "EFNM" "ModelsMP\\Enemies\\Summoner\\Debris\\Cloth01.mdl"),
#define MODEL_DEBRIS02 ((0x0000015b<<8)+17)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS02, "EFNM" "ModelsMP\\Enemies\\Summoner\\Debris\\Cloth02.mdl"),
#define MODEL_DEBRIS03 ((0x0000015b<<8)+18)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS03, "EFNM" "ModelsMP\\Enemies\\Summoner\\Debris\\Cloth03.mdl"),
#define MODEL_DEBRIS_FLESH ((0x0000015b<<8)+19)
 CEntityComponent(ECT_MODEL, MODEL_DEBRIS_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\Flesh.mdl"),
#define TEXTURE_DEBRIS_FLESH ((0x0000015b<<8)+20)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DEBRIS_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshRed.tex"),
#define SOUND_LAUGH ((0x0000015b<<8)+101)
 CEntityComponent(ECT_SOUND, SOUND_LAUGH, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Laugh.wav"),
#define SOUND_EXPLODE ((0x0000015b<<8)+102)
 CEntityComponent(ECT_SOUND, SOUND_EXPLODE, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Explode.wav"),
#define SOUND_TREMORS ((0x0000015b<<8)+103)
 CEntityComponent(ECT_SOUND, SOUND_TREMORS, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Tremors.wav"),
#define SOUND_DEATH ((0x0000015b<<8)+104)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Death.wav"),
#define SOUND_LASTWORDS ((0x0000015b<<8)+105)
 CEntityComponent(ECT_SOUND, SOUND_LASTWORDS, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\LastWords.wav"),
#define SOUND_FIRE ((0x0000015b<<8)+106)
 CEntityComponent(ECT_SOUND, SOUND_FIRE, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Fire.wav"),
#define SOUND_CHIMES ((0x0000015b<<8)+108)
 CEntityComponent(ECT_SOUND, SOUND_CHIMES, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Chimes.wav"),
#define SOUND_MATERIALIZE ((0x0000015b<<8)+107)
 CEntityComponent(ECT_SOUND, SOUND_MATERIALIZE, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Materialize.wav"),
#define SOUND_TELEPORT ((0x0000015b<<8)+109)
 CEntityComponent(ECT_SOUND, SOUND_TELEPORT, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Teleport.wav"),
#define SOUND_TAUNT01 ((0x0000015b<<8)+150)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT01, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote03.wav"),
#define SOUND_TAUNT02 ((0x0000015b<<8)+151)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT02, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote05.wav"),
#define SOUND_TAUNT03 ((0x0000015b<<8)+152)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT03, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote07.wav"),
#define SOUND_TAUNT04 ((0x0000015b<<8)+153)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT04, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote08.wav"),
#define SOUND_TAUNT05 ((0x0000015b<<8)+154)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT05, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote10.wav"),
#define SOUND_TAUNT06 ((0x0000015b<<8)+155)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT06, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote11.wav"),
#define SOUND_TAUNT07 ((0x0000015b<<8)+156)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT07, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote14.wav"),
#define SOUND_TAUNT08 ((0x0000015b<<8)+157)
 CEntityComponent(ECT_SOUND, SOUND_TAUNT08, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote15.wav"),
#define SOUND_TAUNTLAST ((0x0000015b<<8)+158)
 CEntityComponent(ECT_SOUND, SOUND_TAUNTLAST, "EFNM" "ModelsMP\\Enemies\\Summoner\\Sounds\\Quote16.wav"),
};
#define CSummoner_componentsct ARRAYCOUNT(CSummoner_components)

CEventHandlerEntry CSummoner_handlers[] = {
 {0x015b0001, -1, CEntity::pEventHandler(&CSummoner::InitiateTeleport),DEBUGSTRING("CSummoner::InitiateTeleport")},
 {0x015b0002, -1, CEntity::pEventHandler(&CSummoner::H0x015b0002_InitiateTeleport_01), DEBUGSTRING("CSummoner::H0x015b0002_InitiateTeleport_01")},
 {0x015b0003, -1, CEntity::pEventHandler(&CSummoner::H0x015b0003_InitiateTeleport_02), DEBUGSTRING("CSummoner::H0x015b0003_InitiateTeleport_02")},
 {0x015b0004, STATE_CEnemyBase_Fire, CEntity::pEventHandler(&CSummoner::Fire),DEBUGSTRING("CSummoner::Fire")},
 {0x015b0005, -1, CEntity::pEventHandler(&CSummoner::H0x015b0005_Fire_01), DEBUGSTRING("CSummoner::H0x015b0005_Fire_01")},
 {0x015b0006, -1, CEntity::pEventHandler(&CSummoner::H0x015b0006_Fire_02), DEBUGSTRING("CSummoner::H0x015b0006_Fire_02")},
 {0x015b0007, -1, CEntity::pEventHandler(&CSummoner::H0x015b0007_Fire_03), DEBUGSTRING("CSummoner::H0x015b0007_Fire_03")},
 {0x015b0008, -1, CEntity::pEventHandler(&CSummoner::H0x015b0008_Fire_04), DEBUGSTRING("CSummoner::H0x015b0008_Fire_04")},
 {0x015b0009, -1, CEntity::pEventHandler(&CSummoner::H0x015b0009_Fire_05), DEBUGSTRING("CSummoner::H0x015b0009_Fire_05")},
 {0x015b000a, -1, CEntity::pEventHandler(&CSummoner::H0x015b000a_Fire_06), DEBUGSTRING("CSummoner::H0x015b000a_Fire_06")},
 {0x015b000b, -1, CEntity::pEventHandler(&CSummoner::H0x015b000b_Fire_07), DEBUGSTRING("CSummoner::H0x015b000b_Fire_07")},
 {0x015b000c, -1, CEntity::pEventHandler(&CSummoner::H0x015b000c_Fire_08), DEBUGSTRING("CSummoner::H0x015b000c_Fire_08")},
 {0x015b000d, -1, CEntity::pEventHandler(&CSummoner::H0x015b000d_Fire_09), DEBUGSTRING("CSummoner::H0x015b000d_Fire_09")},
 {0x015b000e, -1, CEntity::pEventHandler(&CSummoner::H0x015b000e_Fire_10), DEBUGSTRING("CSummoner::H0x015b000e_Fire_10")},
 {0x015b000f, -1, CEntity::pEventHandler(&CSummoner::H0x015b000f_Fire_11), DEBUGSTRING("CSummoner::H0x015b000f_Fire_11")},
 {0x015b0010, -1, CEntity::pEventHandler(&CSummoner::H0x015b0010_Fire_12), DEBUGSTRING("CSummoner::H0x015b0010_Fire_12")},
 {0x015b0011, -1, CEntity::pEventHandler(&CSummoner::H0x015b0011_Fire_13), DEBUGSTRING("CSummoner::H0x015b0011_Fire_13")},
 {0x015b0012, -1, CEntity::pEventHandler(&CSummoner::H0x015b0012_Fire_14), DEBUGSTRING("CSummoner::H0x015b0012_Fire_14")},
 {0x015b0013, STATE_CEnemyBase_Hit, CEntity::pEventHandler(&CSummoner::Hit),DEBUGSTRING("CSummoner::Hit")},
 {0x015b0014, STATE_CEnemyBase_Die, CEntity::pEventHandler(&CSummoner::Die),DEBUGSTRING("CSummoner::Die")},
 {0x015b0015, -1, CEntity::pEventHandler(&CSummoner::H0x015b0015_Die_01), DEBUGSTRING("CSummoner::H0x015b0015_Die_01")},
 {0x015b0016, -1, CEntity::pEventHandler(&CSummoner::H0x015b0016_Die_02), DEBUGSTRING("CSummoner::H0x015b0016_Die_02")},
 {0x015b0017, -1, CEntity::pEventHandler(&CSummoner::H0x015b0017_Die_03), DEBUGSTRING("CSummoner::H0x015b0017_Die_03")},
 {0x015b0018, -1, CEntity::pEventHandler(&CSummoner::H0x015b0018_Die_04), DEBUGSTRING("CSummoner::H0x015b0018_Die_04")},
 {0x015b0019, -1, CEntity::pEventHandler(&CSummoner::H0x015b0019_Die_05), DEBUGSTRING("CSummoner::H0x015b0019_Die_05")},
 {0x015b001a, -1, CEntity::pEventHandler(&CSummoner::H0x015b001a_Die_06), DEBUGSTRING("CSummoner::H0x015b001a_Die_06")},
 {0x015b001b, -1, CEntity::pEventHandler(&CSummoner::H0x015b001b_Die_07), DEBUGSTRING("CSummoner::H0x015b001b_Die_07")},
 {0x015b001c, -1, CEntity::pEventHandler(&CSummoner::H0x015b001c_Die_08), DEBUGSTRING("CSummoner::H0x015b001c_Die_08")},
 {0x015b001d, -1, CEntity::pEventHandler(&CSummoner::H0x015b001d_Die_09), DEBUGSTRING("CSummoner::H0x015b001d_Die_09")},
 {0x015b001e, -1, CEntity::pEventHandler(&CSummoner::H0x015b001e_Die_10), DEBUGSTRING("CSummoner::H0x015b001e_Die_10")},
 {0x015b001f, -1, CEntity::pEventHandler(&CSummoner::H0x015b001f_Die_11), DEBUGSTRING("CSummoner::H0x015b001f_Die_11")},
 {0x015b0020, -1, CEntity::pEventHandler(&CSummoner::H0x015b0020_Die_12), DEBUGSTRING("CSummoner::H0x015b0020_Die_12")},
 {0x015b0021, -1, CEntity::pEventHandler(&CSummoner::TeleportToDeathMarker),DEBUGSTRING("CSummoner::TeleportToDeathMarker")},
 {0x015b0022, -1, CEntity::pEventHandler(&CSummoner::H0x015b0022_TeleportToDeathMarker_01), DEBUGSTRING("CSummoner::H0x015b0022_TeleportToDeathMarker_01")},
 {0x015b0023, -1, CEntity::pEventHandler(&CSummoner::H0x015b0023_TeleportToDeathMarker_02), DEBUGSTRING("CSummoner::H0x015b0023_TeleportToDeathMarker_02")},
 {0x015b0024, -1, CEntity::pEventHandler(&CSummoner::H0x015b0024_TeleportToDeathMarker_03), DEBUGSTRING("CSummoner::H0x015b0024_TeleportToDeathMarker_03")},
 {0x015b0025, -1, CEntity::pEventHandler(&CSummoner::H0x015b0025_TeleportToDeathMarker_04), DEBUGSTRING("CSummoner::H0x015b0025_TeleportToDeathMarker_04")},
 {0x015b0026, -1, CEntity::pEventHandler(&CSummoner::H0x015b0026_TeleportToDeathMarker_05), DEBUGSTRING("CSummoner::H0x015b0026_TeleportToDeathMarker_05")},
 {0x015b0027, -1, CEntity::pEventHandler(&CSummoner::H0x015b0027_TeleportToDeathMarker_06), DEBUGSTRING("CSummoner::H0x015b0027_TeleportToDeathMarker_06")},
 {0x015b0028, -1, CEntity::pEventHandler(&CSummoner::H0x015b0028_TeleportToDeathMarker_07), DEBUGSTRING("CSummoner::H0x015b0028_TeleportToDeathMarker_07")},
 {0x015b0029, -1, CEntity::pEventHandler(&CSummoner::H0x015b0029_TeleportToDeathMarker_08), DEBUGSTRING("CSummoner::H0x015b0029_TeleportToDeathMarker_08")},
 {0x015b002a, -1, CEntity::pEventHandler(&CSummoner::BossAppear),DEBUGSTRING("CSummoner::BossAppear")},
 {0x015b002b, STATE_CEnemyBase_PreMainLoop, CEntity::pEventHandler(&CSummoner::PreMainLoop),DEBUGSTRING("CSummoner::PreMainLoop")},
 {0x015b002c, -1, CEntity::pEventHandler(&CSummoner::H0x015b002c_PreMainLoop_01), DEBUGSTRING("CSummoner::H0x015b002c_PreMainLoop_01")},
 {0x015b002d, -1, CEntity::pEventHandler(&CSummoner::H0x015b002d_PreMainLoop_02), DEBUGSTRING("CSummoner::H0x015b002d_PreMainLoop_02")},
 {0x015b002e, -1, CEntity::pEventHandler(&CSummoner::Immaterial),DEBUGSTRING("CSummoner::Immaterial")},
 {0x015b002f, -1, CEntity::pEventHandler(&CSummoner::H0x015b002f_Immaterial_01), DEBUGSTRING("CSummoner::H0x015b002f_Immaterial_01")},
 {0x015b0030, -1, CEntity::pEventHandler(&CSummoner::H0x015b0030_Immaterial_02), DEBUGSTRING("CSummoner::H0x015b0030_Immaterial_02")},
 {0x015b0031, -1, CEntity::pEventHandler(&CSummoner::H0x015b0031_Immaterial_03), DEBUGSTRING("CSummoner::H0x015b0031_Immaterial_03")},
 {0x015b0032, -1, CEntity::pEventHandler(&CSummoner::H0x015b0032_Immaterial_04), DEBUGSTRING("CSummoner::H0x015b0032_Immaterial_04")},
 {0x015b0033, -1, CEntity::pEventHandler(&CSummoner::SummonerLoop),DEBUGSTRING("CSummoner::SummonerLoop")},
 {0x015b0034, -1, CEntity::pEventHandler(&CSummoner::H0x015b0034_SummonerLoop_01), DEBUGSTRING("CSummoner::H0x015b0034_SummonerLoop_01")},
 {0x015b0035, -1, CEntity::pEventHandler(&CSummoner::H0x015b0035_SummonerLoop_02), DEBUGSTRING("CSummoner::H0x015b0035_SummonerLoop_02")},
 {1, -1, CEntity::pEventHandler(&CSummoner::Main),DEBUGSTRING("CSummoner::Main")},
 {0x015b0036, -1, CEntity::pEventHandler(&CSummoner::H0x015b0036_Main_01), DEBUGSTRING("CSummoner::H0x015b0036_Main_01")},
 {0x015b0037, -1, CEntity::pEventHandler(&CSummoner::H0x015b0037_Main_02), DEBUGSTRING("CSummoner::H0x015b0037_Main_02")},
 {0x015b0038, -1, CEntity::pEventHandler(&CSummoner::H0x015b0038_Main_03), DEBUGSTRING("CSummoner::H0x015b0038_Main_03")},
 {0x015b0039, -1, CEntity::pEventHandler(&CSummoner::H0x015b0039_Main_04), DEBUGSTRING("CSummoner::H0x015b0039_Main_04")},
 {0x015b003a, -1, CEntity::pEventHandler(&CSummoner::H0x015b003a_Main_05), DEBUGSTRING("CSummoner::H0x015b003a_Main_05")},
 {0x015b003b, -1, CEntity::pEventHandler(&CSummoner::H0x015b003b_Main_06), DEBUGSTRING("CSummoner::H0x015b003b_Main_06")},
};
#define CSummoner_handlersct ARRAYCOUNT(CSummoner_handlers)

CEntity *CSummoner_New(void) { return new CSummoner; };
void CSummoner_OnInitClass(void) {};
void CSummoner_OnEndClass(void) {};
void CSummoner_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSummoner_OnWorldEnd(CWorld *pwo) {};
void CSummoner_OnWorldInit(CWorld *pwo) {};
void CSummoner_OnWorldTick(CWorld *pwo) {};
void CSummoner_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSummoner, CEnemyBase, "Summoner", "Thumbnails\\Summoner.tbn", 347);
DECLARE_CTFILENAME(_fnmCSummoner_tbn, "Thumbnails\\Summoner.tbn");
