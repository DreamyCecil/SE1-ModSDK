// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CWorldSettingsController

CEntityProperty CWorldSettingsController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+1, 0xE8, "", 0, "m_tmStormStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x25d<<8)+2, 0xEC, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+3, 0xF0, "", 0, "m_tmLightningStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+4, 0xF4, "", 0, "m_fLightningPower", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+5, 0xF8, "", 0, "m_tmStormEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+6, 0xFC, "", 0, "m_tmPyramidPlatesStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+7, 0x100, "", 0, "m_tmActivatedPlate1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+8, 0x104, "", 0, "m_tmDeactivatedPlate1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+9, 0x108, "", 0, "m_tmActivatedPlate2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+10, 0x10C, "", 0, "m_tmDeactivatedPlate2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+11, 0x110, "", 0, "m_tmActivatedPlate3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+12, 0x114, "", 0, "m_tmDeactivatedPlate3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+13, 0x118, "", 0, "m_tmActivatedPlate4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+14, 0x11C, "", 0, "m_tmDeactivatedPlate4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+15, 0x120, "", 0, "m_tmPyramidMorphRoomActivated", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+20, 0x124, "", 0, "m_tmShakeStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x25d<<8)+21, 0x128, "", 0, "m_vShakePos", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+22, 0x134, "", 0, "m_fShakeFalloff", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+23, 0x138, "", 0, "m_fShakeFade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+24, 0x13C, "", 0, "m_fShakeIntensityY", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+25, 0x140, "", 0, "m_tmShakeFrequencyY", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+26, 0x144, "", 0, "m_fShakeIntensityB", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+27, 0x148, "", 0, "m_tmShakeFrequencyB", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+31, 0x14C, "", 0, "m_fShakeIntensityZ", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+32, 0x150, "", 0, "m_tmShakeFrequencyZ", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25d<<8)+33, 0x154, "", 0, "m_bShakeFadeIn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25d<<8)+28, 0x158, "Environment Particles Holder", 'T', "m_penEnvPartHolder", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25d<<8)+29, 0x15C, "No QuickSave on level start", 0, "m_bNoSaveGame", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+41, 0x160, "", 0, "m_tmGlaringStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+42, 0x164, "", 0, "m_tmGlaringEnded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+43, 0x168, "", 0, "m_fGlaringFadeInRatio", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+44, 0x16C, "", 0, "m_fGlaringFadeOutRatio", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25d<<8)+45, 0x170, "", 0, "m_colGlade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25d<<8)+50, 0x174, "", 0, "m_colBlendStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25d<<8)+51, 0x178, "", 0, "m_colBlendStop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25d<<8)+52, 0x17C, "", 0, "m_colShadeStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25d<<8)+53, 0x180, "", 0, "m_colShadeStop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25d<<8)+55, 0x184, "Apply shading to models", 0, "m_bApplyShadingToModels", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+62, 0x188, "", 0, "m_tmStormAppearTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+63, 0x18C, "", 0, "m_tmStormDisappearTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25d<<8)+70, 0x190, "", 0, "m_penScrollHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25d<<8)+71, 0x194, "", 0, "m_penTextFXHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25d<<8)+72, 0x198, "", 0, "m_penCreditsHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25d<<8)+73, 0x19C, "", 0, "m_penHudPicFXHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+74, 0x1A0, "", 0, "m_tmActivatedToggledLights1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+75, 0x1A4, "", 0, "m_tmDeactivatedToggledLights1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+76, 0x1A8, "", 0, "m_tmActivatedToggledLights2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+77, 0x1AC, "", 0, "m_tmDeactivatedToggledLights2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+78, 0x1B0, "", 0, "m_tmActivatedToggledLights3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+79, 0x1B4, "", 0, "m_tmDeactivatedToggledLights3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+80, 0x1B8, "", 0, "m_tmActivatedToggledLights4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+81, 0x1BC, "", 0, "m_tmDeactivatedToggledLights4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+82, 0x1C0, "", 0, "m_tmActivatedInstToggledLights1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+83, 0x1C4, "", 0, "m_tmDeactivatedInstToggledLights1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+84, 0x1C8, "", 0, "m_tmActivatedInstToggledLights2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+85, 0x1CC, "", 0, "m_tmDeactivatedInstToggledLights2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+86, 0x1D0, "", 0, "m_tmActivatedInstToggledLights3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+87, 0x1D4, "", 0, "m_tmDeactivatedInstToggledLights3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+88, 0x1D8, "", 0, "m_tmActivatedInstToggledLights4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+89, 0x1DC, "", 0, "m_tmDeactivatedInstToggledLights4", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25d<<8)+90, 0x1E0, "Transition speed for controlled blending", 0, "m_tmBlendSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25d<<8)+100, 0x1E4, "", 0, "m_bFlyoverLogo", 0x0UL, 0),
};
#define CWorldSettingsController_propertiesct ARRAYCOUNT(CWorldSettingsController_properties)

CEntityComponent CWorldSettingsController_components[] = {
#define MODEL_WORLD_SETTINGS_CONTROLLER ((0x0000025d<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WORLD_SETTINGS_CONTROLLER, "EFNM" "Models\\Editor\\WorldSettingsController.mdl"),
#define TEXTURE_WORLD_SETTINGS_CONTROLLER ((0x0000025d<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WORLD_SETTINGS_CONTROLLER, "EFNM" "Models\\Editor\\WorldSettingsController.tex"),
};
#define CWorldSettingsController_componentsct ARRAYCOUNT(CWorldSettingsController_components)

CEventHandlerEntry CWorldSettingsController_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldSettingsController::Main),DEBUGSTRING("CWorldSettingsController::Main")},
};
#define CWorldSettingsController_handlersct ARRAYCOUNT(CWorldSettingsController_handlers)

CEntity *CWorldSettingsController_New(void) { return new CWorldSettingsController; };
void CWorldSettingsController_OnInitClass(void) {};
void CWorldSettingsController_OnEndClass(void) {};
void CWorldSettingsController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldSettingsController_OnWorldEnd(CWorld *pwo) {};
void CWorldSettingsController_OnWorldInit(CWorld *pwo) {};
void CWorldSettingsController_OnWorldTick(CWorld *pwo) {};
void CWorldSettingsController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWorldSettingsController, CEntity, "WorldSettingsController", "Thumbnails\\WorldSettingsController.tbn", 605);
DECLARE_CTFILENAME(_fnmCWorldSettingsController_tbn, "Thumbnails\\WorldSettingsController.tbn");
