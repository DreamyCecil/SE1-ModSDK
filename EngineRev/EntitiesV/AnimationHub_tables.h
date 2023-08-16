// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAnimationHub

CEntityProperty CAnimationHub_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe4<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe4<<8)+2, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+3, 0x118, "Delay each", 'D', "m_tmDelayEach", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+10, 0x11C, "Target0", 'T', "m_penTarget0", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+11, 0x120, "Target1", 0, "m_penTarget1", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+12, 0x124, "Target2", 0, "m_penTarget2", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+13, 0x128, "Target3", 0, "m_penTarget3", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+14, 0x12C, "Target4", 0, "m_penTarget4", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+15, 0x130, "Target5", 0, "m_penTarget5", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+16, 0x134, "Target6", 0, "m_penTarget6", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+17, 0x138, "Target7", 0, "m_penTarget7", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+18, 0x13C, "Target8", 0, "m_penTarget8", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe4<<8)+19, 0x140, "Target9", 0, "m_penTarget9", 0xFF00FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+20, 0x144, "Delay0", 0, "m_tmDelay0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+21, 0x148, "Delay1", 0, "m_tmDelay1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+22, 0x14C, "Delay2", 0, "m_tmDelay2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+23, 0x150, "Delay3", 0, "m_tmDelay3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+24, 0x154, "Delay4", 0, "m_tmDelay4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+25, 0x158, "Delay5", 0, "m_tmDelay5", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+26, 0x15C, "Delay6", 0, "m_tmDelay6", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+27, 0x160, "Delay7", 0, "m_tmDelay7", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+28, 0x164, "Delay8", 0, "m_tmDelay8", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe4<<8)+29, 0x168, "Delay9", 0, "m_tmDelay9", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xe4<<8)+100, 0x16C, "", 0, "m_iModelAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe4<<8)+101, 0x170, "", 0, "m_bModelLoop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xe4<<8)+102, 0x174, "", 0, "m_iTextureAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe4<<8)+103, 0x178, "", 0, "m_bTextureLoop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xe4<<8)+104, 0x17C, "", 0, "m_iLightAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xe4<<8)+105, 0x180, "", 0, "m_bLightLoop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xe4<<8)+106, 0x184, "", 0, "m_colAmbient", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xe4<<8)+107, 0x188, "", 0, "m_colDiffuse", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xe4<<8)+110, 0x18C, "", 0, "m_iCounter", 0x0UL, 0),
};
#define CAnimationHub_propertiesct ARRAYCOUNT(CAnimationHub_properties)

CEntityComponent CAnimationHub_components[] = {
#define MODEL_HUB ((0x000000e4<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_HUB, "EFNM" "Models\\Editor\\AnimationHub.mdl"),
#define TEXTURE_HUB ((0x000000e4<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HUB, "EFNM" "Models\\Editor\\AnimationHub.tex"),
};
#define CAnimationHub_componentsct ARRAYCOUNT(CAnimationHub_components)

CEventHandlerEntry CAnimationHub_handlers[] = {
 {0x00e40000, -1, CEntity::pEventHandler(&CAnimationHub::RelayEvents),DEBUGSTRING("CAnimationHub::RelayEvents")},
 {0x00e40001, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40001_RelayEvents_01), DEBUGSTRING("CAnimationHub::H0x00e40001_RelayEvents_01")},
 {0x00e40002, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40002_RelayEvents_02), DEBUGSTRING("CAnimationHub::H0x00e40002_RelayEvents_02")},
 {0x00e40003, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40003_RelayEvents_03), DEBUGSTRING("CAnimationHub::H0x00e40003_RelayEvents_03")},
 {0x00e40004, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40004_RelayEvents_04), DEBUGSTRING("CAnimationHub::H0x00e40004_RelayEvents_04")},
 {0x00e40005, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40005_RelayEvents_05), DEBUGSTRING("CAnimationHub::H0x00e40005_RelayEvents_05")},
 {0x00e40006, -1, CEntity::pEventHandler(&CAnimationHub::WaitChange),DEBUGSTRING("CAnimationHub::WaitChange")},
 {0x00e40007, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40007_WaitChange_01), DEBUGSTRING("CAnimationHub::H0x00e40007_WaitChange_01")},
 {0x00e40008, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40008_WaitChange_02), DEBUGSTRING("CAnimationHub::H0x00e40008_WaitChange_02")},
 {0x00e40009, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e40009_WaitChange_03), DEBUGSTRING("CAnimationHub::H0x00e40009_WaitChange_03")},
 {0x00e4000a, -1, CEntity::pEventHandler(&CAnimationHub::H0x00e4000a_WaitChange_04), DEBUGSTRING("CAnimationHub::H0x00e4000a_WaitChange_04")},
 {1, -1, CEntity::pEventHandler(&CAnimationHub::Main),DEBUGSTRING("CAnimationHub::Main")},
};
#define CAnimationHub_handlersct ARRAYCOUNT(CAnimationHub_handlers)

CEntity *CAnimationHub_New(void) { return new CAnimationHub; };
void CAnimationHub_OnInitClass(void) {};
void CAnimationHub_OnEndClass(void) {};
void CAnimationHub_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAnimationHub_OnWorldEnd(CWorld *pwo) {};
void CAnimationHub_OnWorldInit(CWorld *pwo) {};
void CAnimationHub_OnWorldTick(CWorld *pwo) {};
void CAnimationHub_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAnimationHub, CRationalEntity, "AnimationHub", "Thumbnails\\AnimationHub.tbn", 228);
DECLARE_CTFILENAME(_fnmCAnimationHub_tbn, "Thumbnails\\AnimationHub.tbn");
