// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CMeteorShower

CEntityProperty CMeteorShower_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x267<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x267<<8)+10, 0x114, "Shoot Angle", 'S', "m_aAngle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x267<<8)+11, 0x120, "Density (1-100)", 'D', "m_iPerTickLaunchChance", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x267<<8)+15, 0x124, "Min. Stretch", 0, "m_fMinStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x267<<8)+16, 0x128, "Max. Stretch", 0, "m_fMaxStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x267<<8)+19, 0x12C, "Safe Area", 0, "m_rSafeArea", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x267<<8)+20, 0x130, "Area", 0, "m_rArea", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x267<<8)+30, 0x134, "Speed", 'P', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x267<<8)+40, 0x138, "Launch distance", 'L', "m_fLaunchDistance", 0x7F0000FFUL, 0),
};
#define CMeteorShower_propertiesct ARRAYCOUNT(CMeteorShower_properties)

CEntityComponent CMeteorShower_components[] = {
#define MODEL_MARKER ((0x00000267<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "ModelsMP\\Editor\\EffectMarker.mdl"),
#define TEXTURE_MARKER ((0x00000267<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "ModelsMP\\Editor\\EffectMarker.tex"),
#define CLASS_PROJECTILE ((0x00000267<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
};
#define CMeteorShower_componentsct ARRAYCOUNT(CMeteorShower_components)

CEventHandlerEntry CMeteorShower_handlers[] = {
 {0x02670000, -1, CEntity::pEventHandler(&CMeteorShower::Active),DEBUGSTRING("CMeteorShower::Active")},
 {0x02670001, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670001_Active_01), DEBUGSTRING("CMeteorShower::H0x02670001_Active_01")},
 {0x02670002, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670002_Active_02), DEBUGSTRING("CMeteorShower::H0x02670002_Active_02")},
 {0x02670003, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670003_Active_03), DEBUGSTRING("CMeteorShower::H0x02670003_Active_03")},
 {0x02670004, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670004_Active_04), DEBUGSTRING("CMeteorShower::H0x02670004_Active_04")},
 {0x02670005, -1, CEntity::pEventHandler(&CMeteorShower::Inactive),DEBUGSTRING("CMeteorShower::Inactive")},
 {0x02670006, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670006_Inactive_01), DEBUGSTRING("CMeteorShower::H0x02670006_Inactive_01")},
 {0x02670007, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670007_Inactive_02), DEBUGSTRING("CMeteorShower::H0x02670007_Inactive_02")},
 {1, -1, CEntity::pEventHandler(&CMeteorShower::Main),DEBUGSTRING("CMeteorShower::Main")},
 {0x02670008, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670008_Main_01), DEBUGSTRING("CMeteorShower::H0x02670008_Main_01")},
 {0x02670009, -1, CEntity::pEventHandler(&CMeteorShower::H0x02670009_Main_02), DEBUGSTRING("CMeteorShower::H0x02670009_Main_02")},
};
#define CMeteorShower_handlersct ARRAYCOUNT(CMeteorShower_handlers)

CEntity *CMeteorShower_New(void) { return new CMeteorShower; };
void CMeteorShower_OnInitClass(void) {};
void CMeteorShower_OnEndClass(void) {};
void CMeteorShower_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CMeteorShower_OnWorldEnd(CWorld *pwo) {};
void CMeteorShower_OnWorldInit(CWorld *pwo) {};
void CMeteorShower_OnWorldTick(CWorld *pwo) {};
void CMeteorShower_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CMeteorShower, CRationalEntity, "MeteorShower", "Thumbnails\\MeteorShower.tbn", 615);
DECLARE_CTFILENAME(_fnmCMeteorShower_tbn, "Thumbnails\\MeteorShower.tbn");
