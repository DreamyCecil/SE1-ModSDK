// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WeaponEffectType)
  EP_ENUMVALUE(WET_SHOTGUNSHELL, ""),
  EP_ENUMVALUE(WET_MACHINEGUNSHELL, ""),
EP_ENUMEND(WeaponEffectType);

#define ENTITYCLASS CPlayerWeaponsEffects

CEntityProperty CPlayerWeaponsEffects_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x195<<8)+1, 0x338, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WeaponEffectType_enum, (0x195<<8)+2, 0x33C, "", 0, "m_EwetEffect", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x195<<8)+255, 0x340, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CPlayerWeaponsEffects_propertiesct ARRAYCOUNT(CPlayerWeaponsEffects_properties)

CEntityComponent CPlayerWeaponsEffects_components[] = {
#define MODEL_SG_SHELL ((0x00000195<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_SG_SHELL, "EFNM" "Models\\Weapons\\SingleShotgun\\Shell\\Shell.mdl"),
#define TEXTURE_SG_SHELL ((0x00000195<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SG_SHELL, "EFNM" "Models\\Weapons\\SingleShotgun\\Shell\\Shell.tex"),
#define MODEL_MG_SHELL ((0x00000195<<8)+3)
 CEntityComponent(ECT_MODEL, MODEL_MG_SHELL, "EFNM" "Models\\Weapons\\Minigun\\Shell\\Shell.mdl"),
#define TEXTURE_MG_SHELL ((0x00000195<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_SHELL, "EFNM" "Models\\Weapons\\Minigun\\Shell\\Shell.tex"),
};
#define CPlayerWeaponsEffects_componentsct ARRAYCOUNT(CPlayerWeaponsEffects_components)

CEventHandlerEntry CPlayerWeaponsEffects_handlers[] = {
 {0x01950001, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::ShotgunShell),DEBUGSTRING("CPlayerWeaponsEffects::ShotgunShell")},
 {0x01950002, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950002_ShotgunShell_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950002_ShotgunShell_01")},
 {0x01950003, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950003_ShotgunShell_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950003_ShotgunShell_02")},
 {0x01950004, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::MachinegunShell),DEBUGSTRING("CPlayerWeaponsEffects::MachinegunShell")},
 {0x01950005, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950005_MachinegunShell_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950005_MachinegunShell_01")},
 {0x01950006, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950006_MachinegunShell_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950006_MachinegunShell_02")},
 {1, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::Main),DEBUGSTRING("CPlayerWeaponsEffects::Main")},
 {0x01950007, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950007_Main_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950007_Main_01")},
 {0x01950008, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950008_Main_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950008_Main_02")},
 {0x01950009, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950009_Main_03), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950009_Main_03")},
 {0x0195000a, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000a_Main_04), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000a_Main_04")},
 {0x0195000b, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000b_Main_05), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000b_Main_05")},
 {0x0195000c, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000c_Main_06), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000c_Main_06")},
 {0x0195000d, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000d_Main_07), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000d_Main_07")},
 {0x0195000e, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000e_Main_08), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000e_Main_08")},
};
#define CPlayerWeaponsEffects_handlersct ARRAYCOUNT(CPlayerWeaponsEffects_handlers)

CEntity *CPlayerWeaponsEffects_New(void) { return new CPlayerWeaponsEffects; };
void CPlayerWeaponsEffects_OnInitClass(void) {};
void CPlayerWeaponsEffects_OnEndClass(void) {};
void CPlayerWeaponsEffects_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerWeaponsEffects_OnWorldEnd(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldInit(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldTick(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerWeaponsEffects, CMovableEntity, "Player Weapons Effects", "", 405);
DECLARE_CTFILENAME(_fnmCPlayerWeaponsEffects_tbn, "");
