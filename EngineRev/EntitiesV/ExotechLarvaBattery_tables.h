// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CExotechLarvaBattery

CEntityProperty CExotechLarvaBattery_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15f<<8)+1, 0x110, "", 0, "m_bActive", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15f<<8)+2, 0x114, "Health", 'H', "m_fMaxHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15f<<8)+3, 0x118, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15f<<8)+4, 0x11C, "", 0, "m_fBurnTreshold", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+5, 0x120, "", 0, "m_penSpray", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15f<<8)+6, 0x124, "", 0, "m_tmSpraySpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x15f<<8)+7, 0x128, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15f<<8)+10, 0x12C, "Custom Shading", 0, "m_bCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x15f<<8)+11, 0x130, "Light direction", 'D', "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x15f<<8)+12, 0x13C, "Light Color", 0, "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x15f<<8)+13, 0x140, "Ambient Light Color", 0, "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15f<<8)+20, 0x144, "", 0, "m_soSound", 0x0UL, 0),
};
#define CExotechLarvaBattery_propertiesct ARRAYCOUNT(CExotechLarvaBattery_properties)

CEntityComponent CExotechLarvaBattery_components[] = {
#define CLASS_BASIC_EFFECT ((0x0000015f<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015f<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define MODEL_BATTERY ((0x0000015f<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_BATTERY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\WallCharger.mdl"),
#define TEXTURE_BATTERY ((0x0000015f<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BATTERY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\WallCharger.tex"),
#define MODEL_BEAM ((0x0000015f<<8)+7)
 CEntityComponent(ECT_MODEL, MODEL_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.mdl"),
#define TEXTURE_BEAM ((0x0000015f<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.tex"),
#define MODEL_PLASMA ((0x0000015f<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_PLASMA, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\PlasmaBeam.mdl"),
#define TEXTURE_PLASMA ((0x0000015f<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PLASMA, "EFNM" "ModelsMP\\Effects\\Laser\\Laser_Red.tex"),
#define MODEL_ELECTRO ((0x0000015f<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_ELECTRO, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Electricity.mdl"),
#define TEXTURE_ELECTRO ((0x0000015f<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELECTRO, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Projectile\\Projectile.tex"),
#define SOUND_SHUTDOWN ((0x0000015f<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_SHUTDOWN, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Sounds\\WallChargerShutdown.wav"),
};
#define CExotechLarvaBattery_componentsct ARRAYCOUNT(CExotechLarvaBattery_components)

CEventHandlerEntry CExotechLarvaBattery_handlers[] = {
 {0x015f0000, -1, CEntity::pEventHandler(&CExotechLarvaBattery::Destroyed),DEBUGSTRING("CExotechLarvaBattery::Destroyed")},
 {0x015f0001, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0001_Destroyed_01), DEBUGSTRING("CExotechLarvaBattery::H0x015f0001_Destroyed_01")},
 {0x015f0002, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0002_Destroyed_02), DEBUGSTRING("CExotechLarvaBattery::H0x015f0002_Destroyed_02")},
 {0x015f0003, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0003_Destroyed_03), DEBUGSTRING("CExotechLarvaBattery::H0x015f0003_Destroyed_03")},
 {0x015f0004, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0004_Destroyed_04), DEBUGSTRING("CExotechLarvaBattery::H0x015f0004_Destroyed_04")},
 {1, -1, CEntity::pEventHandler(&CExotechLarvaBattery::Main),DEBUGSTRING("CExotechLarvaBattery::Main")},
 {0x015f0005, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0005_Main_01), DEBUGSTRING("CExotechLarvaBattery::H0x015f0005_Main_01")},
 {0x015f0006, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0006_Main_02), DEBUGSTRING("CExotechLarvaBattery::H0x015f0006_Main_02")},
 {0x015f0007, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0007_Main_03), DEBUGSTRING("CExotechLarvaBattery::H0x015f0007_Main_03")},
 {0x015f0008, -1, CEntity::pEventHandler(&CExotechLarvaBattery::H0x015f0008_Main_04), DEBUGSTRING("CExotechLarvaBattery::H0x015f0008_Main_04")},
};
#define CExotechLarvaBattery_handlersct ARRAYCOUNT(CExotechLarvaBattery_handlers)

CEntity *CExotechLarvaBattery_New(void) { return new CExotechLarvaBattery; };
void CExotechLarvaBattery_OnInitClass(void) {};
void CExotechLarvaBattery_OnEndClass(void) {};
void CExotechLarvaBattery_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CExotechLarvaBattery_OnWorldEnd(CWorld *pwo) {};
void CExotechLarvaBattery_OnWorldInit(CWorld *pwo) {};
void CExotechLarvaBattery_OnWorldTick(CWorld *pwo) {};
void CExotechLarvaBattery_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CExotechLarvaBattery, CRationalEntity, "ExotechLarvaBattery", "Thumbnails\\ExotechLarvaBattery.tbn", 351);
DECLARE_CTFILENAME(_fnmCExotechLarvaBattery_tbn, "Thumbnails\\ExotechLarvaBattery.tbn");
