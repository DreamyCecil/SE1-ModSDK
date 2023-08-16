// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CLightning

CEntityProperty CLightning_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25f<<8)+1, 0x340, "Target", 'T', "m_penTarget", 0xFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25f<<8)+2, 0x344, "", 0, "m_penwsc", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x25f<<8)+3, 0x348, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25f<<8)+4, 0x34C, "", 0, "m_tmLightningStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x25f<<8)+5, 0x350, "", 0, "m_soThunder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25f<<8)+6, 0x3CC, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25f<<8)+7, 0x3D0, "Light", 'L', "m_penLight", 0xFFFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x25f<<8)+8, 0x3D4, "Light Animation", 'A', "m_iLightAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x25f<<8)+9, 0x3D8, "", 0, "m_iSoundPlaying", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25f<<8)+10, 0x3DC, "Lightning power", 'P', "m_fLightningPower", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25f<<8)+11, 0x3E0, "Sound delay", 'D', "m_fSoundDelay", 0x7F0000FFUL, 0),
};
#define CLightning_propertiesct ARRAYCOUNT(CLightning_properties)

CEntityComponent CLightning_components[] = {
#define MODEL_TELEPORT ((0x0000025f<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x0000025f<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\BoundingBox.tex"),
#define SOUND_THUNDER1 ((0x0000025f<<8)+3)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER1, "EFNM" "Sounds\\Environment\\Thunders\\Thunder1.wav"),
#define SOUND_THUNDER2 ((0x0000025f<<8)+4)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER2, "EFNM" "Sounds\\Environment\\Thunders\\Thunder2.wav"),
#define SOUND_THUNDER3 ((0x0000025f<<8)+5)
 CEntityComponent(ECT_SOUND, SOUND_THUNDER3, "EFNM" "Sounds\\Environment\\Thunders\\Thunder3.wav"),
};
#define CLightning_componentsct ARRAYCOUNT(CLightning_components)

CEventHandlerEntry CLightning_handlers[] = {
 {0x025f0000, -1, CEntity::pEventHandler(&CLightning::LightningStike),DEBUGSTRING("CLightning::LightningStike")},
 {0x025f0001, -1, CEntity::pEventHandler(&CLightning::H0x025f0001_LightningStike_01), DEBUGSTRING("CLightning::H0x025f0001_LightningStike_01")},
 {0x025f0002, -1, CEntity::pEventHandler(&CLightning::H0x025f0002_LightningStike_02), DEBUGSTRING("CLightning::H0x025f0002_LightningStike_02")},
 {0x025f0003, -1, CEntity::pEventHandler(&CLightning::H0x025f0003_LightningStike_03), DEBUGSTRING("CLightning::H0x025f0003_LightningStike_03")},
 {0x025f0004, -1, CEntity::pEventHandler(&CLightning::H0x025f0004_LightningStike_04), DEBUGSTRING("CLightning::H0x025f0004_LightningStike_04")},
 {0x025f0005, -1, CEntity::pEventHandler(&CLightning::H0x025f0005_LightningStike_05), DEBUGSTRING("CLightning::H0x025f0005_LightningStike_05")},
 {0x025f0006, -1, CEntity::pEventHandler(&CLightning::H0x025f0006_LightningStike_06), DEBUGSTRING("CLightning::H0x025f0006_LightningStike_06")},
 {0x025f0007, -1, CEntity::pEventHandler(&CLightning::H0x025f0007_LightningStike_07), DEBUGSTRING("CLightning::H0x025f0007_LightningStike_07")},
 {0x025f0008, -1, CEntity::pEventHandler(&CLightning::H0x025f0008_LightningStike_08), DEBUGSTRING("CLightning::H0x025f0008_LightningStike_08")},
 {1, -1, CEntity::pEventHandler(&CLightning::Main),DEBUGSTRING("CLightning::Main")},
 {0x025f0009, -1, CEntity::pEventHandler(&CLightning::H0x025f0009_Main_01), DEBUGSTRING("CLightning::H0x025f0009_Main_01")},
 {0x025f000a, -1, CEntity::pEventHandler(&CLightning::H0x025f000a_Main_02), DEBUGSTRING("CLightning::H0x025f000a_Main_02")},
 {0x025f000b, -1, CEntity::pEventHandler(&CLightning::H0x025f000b_Main_03), DEBUGSTRING("CLightning::H0x025f000b_Main_03")},
 {0x025f000c, -1, CEntity::pEventHandler(&CLightning::H0x025f000c_Main_04), DEBUGSTRING("CLightning::H0x025f000c_Main_04")},
 {0x025f000d, -1, CEntity::pEventHandler(&CLightning::H0x025f000d_Main_05), DEBUGSTRING("CLightning::H0x025f000d_Main_05")},
 {0x025f000e, -1, CEntity::pEventHandler(&CLightning::H0x025f000e_Main_06), DEBUGSTRING("CLightning::H0x025f000e_Main_06")},
};
#define CLightning_handlersct ARRAYCOUNT(CLightning_handlers)

CEntity *CLightning_New(void) { return new CLightning; };
void CLightning_OnInitClass(void) {};
void CLightning_OnEndClass(void) {};
void CLightning_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CLightning_OnWorldEnd(CWorld *pwo) {};
void CLightning_OnWorldInit(CWorld *pwo) {};
void CLightning_OnWorldTick(CWorld *pwo) {};
void CLightning_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CLightning, CMovableModelEntity, "Lightning", "Thumbnails\\Lightning.tbn", 607);
DECLARE_CTFILENAME(_fnmCLightning_tbn, "Thumbnails\\Lightning.tbn");
