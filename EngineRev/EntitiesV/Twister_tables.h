// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTwister

CEntityProperty CTwister_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1fb<<8)+1, 0x340, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+2, 0x344, "", 0, "m_fSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1fb<<8)+3, 0x348, "", 0, "m_vSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1fb<<8)+4, 0x354, "", 0, "m_sgnSpinDir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1fb<<8)+5, 0x358, "", 0, "m_bGrow", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+6, 0x35C, "", 0, "m_tmLastMove", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1fb<<8)+7, 0x360, "", 0, "m_aSpeedRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1fb<<8)+8, 0x36C, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1fb<<8)+9, 0x370, "", 0, "m_bMovingAllowed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1fb<<8)+10, 0x374, "", 0, "m_vDesiredPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1fb<<8)+11, 0x380, "", 0, "m_vDesiredAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+12, 0x38C, "", 0, "m_fStopTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+13, 0x390, "", 0, "m_fActionRadius", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+14, 0x394, "", 0, "m_fActionTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+15, 0x398, "", 0, "m_fDiffMultiply", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+16, 0x39C, "", 0, "m_fUpMultiply", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1fb<<8)+20, 0x3A0, "", 0, "m_bFadeOut", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+21, 0x3A4, "", 0, "m_fFadeStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+22, 0x3A8, "", 0, "m_fFadeTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1fb<<8)+23, 0x3AC, "", 0, "m_fStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x1fb<<8)+50, 0x3B0, "", 0, "m_soSpin", 0x0UL, 0),
};
#define CTwister_propertiesct ARRAYCOUNT(CTwister_properties)

CEntityComponent CTwister_components[] = {
#define CLASS_SPINNER ((0x000001fb<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_SPINNER, "EFNM" "Classes\\Spinner.ecl"),
#define MODEL_TWISTER ((0x000001fb<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_TWISTER, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Twister.mdl"),
#define TEXTURE_TWISTER ((0x000001fb<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TWISTER, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Twister.tex"),
#define SOUND_SPIN ((0x000001fb<<8)+200)
 CEntityComponent(ECT_SOUND, SOUND_SPIN, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Sounds\\TwisterSpin.wav"),
};
#define CTwister_componentsct ARRAYCOUNT(CTwister_components)

CEventHandlerEntry CTwister_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTwister::Main),DEBUGSTRING("CTwister::Main")},
 {0x01fb0001, -1, CEntity::pEventHandler(&CTwister::H0x01fb0001_Main_01), DEBUGSTRING("CTwister::H0x01fb0001_Main_01")},
 {0x01fb0002, -1, CEntity::pEventHandler(&CTwister::H0x01fb0002_Main_02), DEBUGSTRING("CTwister::H0x01fb0002_Main_02")},
 {0x01fb0003, -1, CEntity::pEventHandler(&CTwister::H0x01fb0003_Main_03), DEBUGSTRING("CTwister::H0x01fb0003_Main_03")},
 {0x01fb0004, -1, CEntity::pEventHandler(&CTwister::H0x01fb0004_Main_04), DEBUGSTRING("CTwister::H0x01fb0004_Main_04")},
 {0x01fb0005, -1, CEntity::pEventHandler(&CTwister::H0x01fb0005_Main_05), DEBUGSTRING("CTwister::H0x01fb0005_Main_05")},
 {0x01fb0006, -1, CEntity::pEventHandler(&CTwister::H0x01fb0006_Main_06), DEBUGSTRING("CTwister::H0x01fb0006_Main_06")},
 {0x01fb0007, -1, CEntity::pEventHandler(&CTwister::H0x01fb0007_Main_07), DEBUGSTRING("CTwister::H0x01fb0007_Main_07")},
 {0x01fb0008, -1, CEntity::pEventHandler(&CTwister::H0x01fb0008_Main_08), DEBUGSTRING("CTwister::H0x01fb0008_Main_08")},
 {0x01fb0009, -1, CEntity::pEventHandler(&CTwister::H0x01fb0009_Main_09), DEBUGSTRING("CTwister::H0x01fb0009_Main_09")},
 {0x01fb000a, -1, CEntity::pEventHandler(&CTwister::H0x01fb000a_Main_10), DEBUGSTRING("CTwister::H0x01fb000a_Main_10")},
};
#define CTwister_handlersct ARRAYCOUNT(CTwister_handlers)

CEntity *CTwister_New(void) { return new CTwister; };
void CTwister_OnInitClass(void) {};
void CTwister_OnEndClass(void) {};
void CTwister_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CTwister_OnWorldEnd(CWorld *pwo) {};
void CTwister_OnWorldInit(CWorld *pwo) {};
void CTwister_OnWorldTick(CWorld *pwo) {};
void CTwister_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTwister, CMovableModelEntity, "Twister", "", 507);
DECLARE_CTFILENAME(_fnmCTwister_tbn, "");
