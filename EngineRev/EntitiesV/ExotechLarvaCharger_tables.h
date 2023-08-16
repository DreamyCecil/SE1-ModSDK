// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CExotechLarvaCharger

CEntityProperty CExotechLarvaCharger_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15f<<8)+1, 0x110, "", 0, "m_bActive", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15f<<8)+2, 0x114, "", 0, "m_bBeamActive", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15f<<8)+3, 0x118, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x15f<<8)+7, 0x11C, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x15f<<8)+8, 0x120, "Sound Range", 0, "m_rSound", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+10, 0x124, "Wall Battery 01", 0, "m_penBattery01", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+11, 0x128, "Wall Battery 02", 0, "m_penBattery02", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+12, 0x12C, "Wall Battery 03", 0, "m_penBattery03", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+13, 0x130, "Wall Battery 04", 0, "m_penBattery04", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+14, 0x134, "Wall Battery 05", 0, "m_penBattery05", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15f<<8)+15, 0x138, "Wall Battery 06", 0, "m_penBattery06", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15f<<8)+20, 0x13C, "Custom Shading", 0, "m_bCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x15f<<8)+21, 0x140, "Light direction", 'D', "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x15f<<8)+22, 0x14C, "Light Color", 0, "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x15f<<8)+23, 0x150, "Ambient Light Color", 0, "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x15f<<8)+50, 0x154, "", 0, "m_soSound", 0x0UL, 0),
};
#define CExotechLarvaCharger_propertiesct ARRAYCOUNT(CExotechLarvaCharger_properties)

CEntityComponent CExotechLarvaCharger_components[] = {
#define CLASS_BASIC_EFFECT ((0x0000015f<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_BLOOD_SPRAY ((0x0000015f<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define MODEL_CHARGER ((0x0000015f<<8)+5)
 CEntityComponent(ECT_MODEL, MODEL_CHARGER, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\FloorCharger.mdl"),
#define TEXTURE_CHARGER ((0x0000015f<<8)+6)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CHARGER, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\FloorCharger.tex"),
#define MODEL_BEAM ((0x0000015f<<8)+7)
 CEntityComponent(ECT_MODEL, MODEL_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.mdl"),
#define TEXTURE_BEAM ((0x0000015f<<8)+8)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Beam.tex"),
#define MODEL_ELECTRICITY ((0x0000015f<<8)+9)
 CEntityComponent(ECT_MODEL, MODEL_ELECTRICITY, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\ElectricityBeams.mdl"),
#define TEXTURE_ELECTRICITY ((0x0000015f<<8)+10)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ELECTRICITY, "EFNM" "ModelsMP\\Effects\\Laser\\Laser_Red.tex"),
#define SOUND_HUM ((0x0000015f<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_HUM, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Sounds\\FloorChargerHum.wav"),
#define SOUND_SHUTDOWN ((0x0000015f<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_SHUTDOWN, "EFNM" "ModelsMP\\Enemies\\ExotechLarva\\Charger\\Sounds\\FloorChargerShutdown.wav"),
};
#define CExotechLarvaCharger_componentsct ARRAYCOUNT(CExotechLarvaCharger_components)

CEventHandlerEntry CExotechLarvaCharger_handlers[] = {
 {0x015f0001, -1, CEntity::pEventHandler(&CExotechLarvaCharger::ActivateBeam),DEBUGSTRING("CExotechLarvaCharger::ActivateBeam")},
 {0x015f0002, -1, CEntity::pEventHandler(&CExotechLarvaCharger::DeactivateBeam),DEBUGSTRING("CExotechLarvaCharger::DeactivateBeam")},
 {1, -1, CEntity::pEventHandler(&CExotechLarvaCharger::Main),DEBUGSTRING("CExotechLarvaCharger::Main")},
 {0x015f0003, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0003_Main_01), DEBUGSTRING("CExotechLarvaCharger::H0x015f0003_Main_01")},
 {0x015f0004, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0004_Main_02), DEBUGSTRING("CExotechLarvaCharger::H0x015f0004_Main_02")},
 {0x015f0005, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0005_Main_03), DEBUGSTRING("CExotechLarvaCharger::H0x015f0005_Main_03")},
 {0x015f0006, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0006_Main_04), DEBUGSTRING("CExotechLarvaCharger::H0x015f0006_Main_04")},
 {0x015f0007, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0007_Main_05), DEBUGSTRING("CExotechLarvaCharger::H0x015f0007_Main_05")},
 {0x015f0008, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0008_Main_06), DEBUGSTRING("CExotechLarvaCharger::H0x015f0008_Main_06")},
 {0x015f0009, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f0009_Main_07), DEBUGSTRING("CExotechLarvaCharger::H0x015f0009_Main_07")},
 {0x015f000a, -1, CEntity::pEventHandler(&CExotechLarvaCharger::H0x015f000a_Main_08), DEBUGSTRING("CExotechLarvaCharger::H0x015f000a_Main_08")},
};
#define CExotechLarvaCharger_handlersct ARRAYCOUNT(CExotechLarvaCharger_handlers)

CEntity *CExotechLarvaCharger_New(void) { return new CExotechLarvaCharger; };
void CExotechLarvaCharger_OnInitClass(void) {};
void CExotechLarvaCharger_OnEndClass(void) {};
void CExotechLarvaCharger_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CExotechLarvaCharger_OnWorldEnd(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldInit(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldTick(CWorld *pwo) {};
void CExotechLarvaCharger_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CExotechLarvaCharger, CRationalEntity, "ExotechLarvaCharger", "Thumbnails\\ExotechLarvaCharger.tbn", 351);
DECLARE_CTFILENAME(_fnmCExotechLarvaCharger_tbn, "Thumbnails\\ExotechLarvaCharger.tbn");
