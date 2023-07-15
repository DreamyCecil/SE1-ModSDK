// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CEnergyMine

CEntityProperty CEnergyMine_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x386<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x386<<8)+2, 0x344, "", 0, "m_bArmed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x386<<8)+3, 0x348, "", 0, "m_fSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x386<<8)+4, 0x34C, "", 0, "m_penNextMine", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x386<<8)+5, 0x350, "", 0, "m_bExploded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x386<<8)+6, 0x354, "", 0, "m_fRange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x386<<8)+10, 0x358, "", 0, "m_soArming", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x386<<8)+11, 0x3D4, "", 0, "m_soDetonating", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x386<<8)+12, 0x450, "", 0, "m_bArming", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x386<<8)+255, 0x454, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CEnergyMine_propertiesct ARRAYCOUNT(CEnergyMine_properties)

CEntityComponent CEnergyMine_components[] = {
#define CEnergyMine_CLASS_1 0x38601 // (0x386<<8)+1
 CEntityComponent(ECT_CLASS, CEnergyMine_CLASS_1, "EFNM" "Classes\\BasicEffect.ecl"),
#define CEnergyMine_CLASS_2 0x38602 // (0x386<<8)+2
 CEntityComponent(ECT_CLASS, CEnergyMine_CLASS_2, "EFNM" "Classes\\Light.ecl"),
#define CEnergyMine_MODEL_10 0x3860A // (0x386<<8)+10
 CEntityComponent(ECT_MODEL, CEnergyMine_MODEL_10, "EFNM" "Models\\Weapons\\Mine\\Mine.mdl"),
#define CEnergyMine_TEXTURE_11 0x3860B // (0x386<<8)+11
 CEntityComponent(ECT_TEXTURE, CEnergyMine_TEXTURE_11, "EFNM" "Models\\Weapons\\Mine\\Mine.tex"),
#define CEnergyMine_SOUND_12 0x3860C // (0x386<<8)+12
 CEntityComponent(ECT_SOUND, CEnergyMine_SOUND_12, "EFNM" "Models\\Weapons\\MineLayer\\Sounds\\Mine_Arming.wav"),
#define CEnergyMine_SOUND_13 0x3860D // (0x386<<8)+13
 CEntityComponent(ECT_SOUND, CEnergyMine_SOUND_13, "EFNM" "Models\\Weapons\\MineLayer\\Sounds\\Mine_Detonating.wav"),
};
#define CEnergyMine_componentsct ARRAYCOUNT(CEnergyMine_components)

CEventHandlerEntry CEnergyMine_handlers[] = {
 {0x3860002, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860002_Procedure_0), DEBUGSTRING("CEnergyMine::H0x3860002_Procedure_0")},
 {0x3860003, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860003_Procedure_1), DEBUGSTRING("CEnergyMine::H0x3860003_Procedure_1")},
 {0x3860004, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860004_Procedure_2), DEBUGSTRING("CEnergyMine::H0x3860004_Procedure_2")},
 {0x3860005, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860005_Procedure_3), DEBUGSTRING("CEnergyMine::H0x3860005_Procedure_3")},
 {0x3860006, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860006_Procedure_4), DEBUGSTRING("CEnergyMine::H0x3860006_Procedure_4")},
 {0x3860007, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860007_Procedure_5), DEBUGSTRING("CEnergyMine::H0x3860007_Procedure_5")},
 {0x3860008, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860008_Procedure_6), DEBUGSTRING("CEnergyMine::H0x3860008_Procedure_6")},
 {0x3860009, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860009_Procedure_7), DEBUGSTRING("CEnergyMine::H0x3860009_Procedure_7")},
 {0x386000A, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000A_Procedure_8), DEBUGSTRING("CEnergyMine::H0x386000A_Procedure_8")},
 {0x386000B, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000B_Procedure_9), DEBUGSTRING("CEnergyMine::H0x386000B_Procedure_9")},
 {0x386000C, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000C_Procedure_10), DEBUGSTRING("CEnergyMine::H0x386000C_Procedure_10")},
 {0x386000D, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000D_Procedure_11), DEBUGSTRING("CEnergyMine::H0x386000D_Procedure_11")},
 {0x386000E, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000E_Procedure_12), DEBUGSTRING("CEnergyMine::H0x386000E_Procedure_12")},
 {1, -1, CEntity::pEventHandler(&CEnergyMine::Main), DEBUGSTRING("CEnergyMine::Main")},
 {0x386000F, -1, CEntity::pEventHandler(&CEnergyMine::H0x386000F_Procedure_14), DEBUGSTRING("CEnergyMine::H0x386000F_Procedure_14")},
 {0x3860010, -1, CEntity::pEventHandler(&CEnergyMine::H0x3860010_Procedure_15), DEBUGSTRING("CEnergyMine::H0x3860010_Procedure_15")},
};
#define CEnergyMine_handlersct ARRAYCOUNT(CEnergyMine_handlers)

CEntity *CEnergyMine_New(void) { return new CEnergyMine; };
void CEnergyMine_OnInitClass(void) {};
void CEnergyMine_OnEndClass(void) {};
void CEnergyMine_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnergyMine_OnWorldEnd(CWorld *pwo) {};
void CEnergyMine_OnWorldInit(CWorld *pwo) {};
void CEnergyMine_OnWorldTick(CWorld *pwo) {};
void CEnergyMine_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnergyMine, CMovableModelEntity, "EnergyMine", "", 902);
DECLARE_CTFILENAME(_fnmCEnergyMine_tbn, "");
