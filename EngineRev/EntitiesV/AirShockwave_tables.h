// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CAirShockwave

CEntityProperty CAirShockwave_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15d<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+2, 0x344, "", 0, "m_fHeight", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+3, 0x348, "", 0, "m_fEndWidth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+4, 0x34C, "", 0, "m_tmBegin", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+5, 0x350, "", 0, "m_tmEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+6, 0x354, "", 0, "m_fDuration", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15d<<8)+7, 0x358, "", 0, "m_bGrowing", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+8, 0x35C, "", 0, "m_tmLastGrow", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+9, 0x360, "", 0, "m_fFadeStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+10, 0x364, "", 0, "m_fFadeStartPercent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+20, 0x368, "", 0, "m_fStretchY", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+21, 0x36C, "", 0, "m_fBeginStretchXZ", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15d<<8)+22, 0x370, "", 0, "m_fEndStretchXZ", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0x15d<<8)+25, 0x374, "", 0, "m_boxMaxSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15d<<8)+30, 0x38C, "", 0, "m_bFadeOut", 0x0UL, 0),
};
#define CAirShockwave_propertiesct ARRAYCOUNT(CAirShockwave_properties)

CEntityComponent CAirShockwave_components[] = {
#define CLASS_BASIC_EFFECT ((0x0000015d<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_INVISIBLE ((0x0000015d<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_INVISIBLE, "EFNM" "ModelsMP\\Enemies\\AirElemental\\ShockwaveBase.mdl"),
#define MODEL_SHOCKWAVE ((0x0000015d<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_SHOCKWAVE, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Shockwave.mdl"),
#define TEXTURE_SHOCKWAVE ((0x0000015d<<8)+12)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SHOCKWAVE, "EFNM" "ModelsMP\\Enemies\\AirElemental\\Twister.tex"),
};
#define CAirShockwave_componentsct ARRAYCOUNT(CAirShockwave_components)

CEventHandlerEntry CAirShockwave_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CAirShockwave::Main),DEBUGSTRING("CAirShockwave::Main")},
 {0x015d0001, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0001_Main_01), DEBUGSTRING("CAirShockwave::H0x015d0001_Main_01")},
 {0x015d0002, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0002_Main_02), DEBUGSTRING("CAirShockwave::H0x015d0002_Main_02")},
 {0x015d0003, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0003_Main_03), DEBUGSTRING("CAirShockwave::H0x015d0003_Main_03")},
 {0x015d0004, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0004_Main_04), DEBUGSTRING("CAirShockwave::H0x015d0004_Main_04")},
 {0x015d0005, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0005_Main_05), DEBUGSTRING("CAirShockwave::H0x015d0005_Main_05")},
 {0x015d0006, -1, CEntity::pEventHandler(&CAirShockwave::H0x015d0006_Main_06), DEBUGSTRING("CAirShockwave::H0x015d0006_Main_06")},
};
#define CAirShockwave_handlersct ARRAYCOUNT(CAirShockwave_handlers)

CEntity *CAirShockwave_New(void) { return new CAirShockwave; };
void CAirShockwave_OnInitClass(void) {};
void CAirShockwave_OnEndClass(void) {};
void CAirShockwave_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CAirShockwave_OnWorldEnd(CWorld *pwo) {};
void CAirShockwave_OnWorldInit(CWorld *pwo) {};
void CAirShockwave_OnWorldTick(CWorld *pwo) {};
void CAirShockwave_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CAirShockwave, CMovableModelEntity, "AirShockwave", "", 349);
DECLARE_CTFILENAME(_fnmCAirShockwave_tbn, "");