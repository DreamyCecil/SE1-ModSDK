// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CSpinner

CEntityProperty CSpinner_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x15c<<8)+1, 0x110, "", 0, "m_penParent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15c<<8)+2, 0x114, "", 0, "m_aSpinRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15c<<8)+3, 0x120, "", 0, "m_vSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15c<<8)+4, 0x12C, "", 0, "m_tmExpire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15c<<8)+5, 0x130, "", 0, "m_vLastSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x15c<<8)+6, 0x13C, "", 0, "m_bImpulse", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15c<<8)+7, 0x140, "", 0, "m_tmWaitAfterImpulse", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x15c<<8)+10, 0x144, "", 0, "m_tmSpawn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x15c<<8)+11, 0x148, "", 0, "m_vSpinSpeed", 0x0UL, 0),
};
#define CSpinner_propertiesct ARRAYCOUNT(CSpinner_properties)

CEntityComponent CSpinner_components[] = {
  CEntityComponent()
};
#define CSpinner_componentsct 0


CEventHandlerEntry CSpinner_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSpinner::Main),DEBUGSTRING("CSpinner::Main")},
 {0x015c0001, -1, CEntity::pEventHandler(&CSpinner::H0x015c0001_Main_01), DEBUGSTRING("CSpinner::H0x015c0001_Main_01")},
 {0x015c0002, -1, CEntity::pEventHandler(&CSpinner::H0x015c0002_Main_02), DEBUGSTRING("CSpinner::H0x015c0002_Main_02")},
 {0x015c0003, -1, CEntity::pEventHandler(&CSpinner::H0x015c0003_Main_03), DEBUGSTRING("CSpinner::H0x015c0003_Main_03")},
 {0x015c0004, -1, CEntity::pEventHandler(&CSpinner::H0x015c0004_Main_04), DEBUGSTRING("CSpinner::H0x015c0004_Main_04")},
 {0x015c0005, -1, CEntity::pEventHandler(&CSpinner::H0x015c0005_Main_05), DEBUGSTRING("CSpinner::H0x015c0005_Main_05")},
 {0x015c0006, -1, CEntity::pEventHandler(&CSpinner::H0x015c0006_Main_06), DEBUGSTRING("CSpinner::H0x015c0006_Main_06")},
 {0x015c0007, -1, CEntity::pEventHandler(&CSpinner::H0x015c0007_Main_07), DEBUGSTRING("CSpinner::H0x015c0007_Main_07")},
};
#define CSpinner_handlersct ARRAYCOUNT(CSpinner_handlers)

CEntity *CSpinner_New(void) { return new CSpinner; };
void CSpinner_OnInitClass(void) {};
void CSpinner_OnEndClass(void) {};
void CSpinner_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSpinner_OnWorldEnd(CWorld *pwo) {};
void CSpinner_OnWorldInit(CWorld *pwo) {};
void CSpinner_OnWorldTick(CWorld *pwo) {};
void CSpinner_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSpinner, CRationalEntity, "Spinner", "", 348);
DECLARE_CTFILENAME(_fnmCSpinner_tbn, "");
