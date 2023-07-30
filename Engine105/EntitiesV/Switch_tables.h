// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(SwitchType)
  EP_ENUMVALUE(SWT_ONCE, "Once"),
  EP_ENUMVALUE(SWT_ONOFF, "On/Off"),
EP_ENUMEND(SwitchType);

#define ENTITYCLASS CSwitch

CEntityProperty CSwitch_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000d1<<8)+4, offsetof(CSwitch, m_iModelONAnimation), "Model ON animation", 'D', "m_iModelONAnimation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000d1<<8)+5, offsetof(CSwitch, m_iTextureONAnimation), "Texture ON animation", 0, "m_iTextureONAnimation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000d1<<8)+6, offsetof(CSwitch, m_iModelOFFAnimation), "Model OFF animation", 'G', "m_iModelOFFAnimation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x000000d1<<8)+7, offsetof(CSwitch, m_iTextureOFFAnimation), "Texture OFF animation", 0, "m_iTextureOFFAnimation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d1<<8)+10, offsetof(CSwitch, m_penTarget), "ON-OFF Target", 'T', "m_penTarget", C_dBLUE  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000d1<<8)+11, offsetof(CSwitch, m_eetEvent), "ON  Event type", 'U', "m_eetEvent", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &EventEType_enum, (0x000000d1<<8)+12, offsetof(CSwitch, m_eetOffEvent), "OFF Event type", 'I', "m_eetOffEvent", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d1<<8)+13, offsetof(CSwitch, m_penOffTarget), "OFF Target", 0, "m_penOffTarget", C_dBLUE  | 0xFF, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENUM, &SwitchType_enum, (0x000000d1<<8)+18, offsetof(CSwitch, m_swtType), "Type", 'Y', "m_swtType", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x000000d1<<8)+19, offsetof(CSwitch, m_strMessage), "Message", 'M', "m_strMessage", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000d1<<8)+20, offsetof(CSwitch, m_bSwitchON), "", 0, "m_bSwitchON", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d1<<8)+21, offsetof(CSwitch, m_penCaused), "", 0, "m_penCaused", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000d1<<8)+22, offsetof(CSwitch, m_bUseable), "", 0, "m_bUseable", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000000d1<<8)+23, offsetof(CSwitch, m_bInvisible), "Invisible", 0, "m_bInvisible", 0x7F0000FFUL, 0),
};
#define CSwitch_propertiesct ARRAYCOUNT(CSwitch_properties)

CEntityComponent CSwitch_components[] = {
  CEntityComponent()
};
#define CSwitch_componentsct 0


CEventHandlerEntry CSwitch_handlers[] = {
 {0x00d10000, -1, CEntity::pEventHandler(&CSwitch::SwitchON),DEBUGSTRING("CSwitch::SwitchON")},
 {0x00d10001, -1, CEntity::pEventHandler(&CSwitch::H0x00d10001_SwitchON_01), DEBUGSTRING("CSwitch::H0x00d10001_SwitchON_01")},
 {0x00d10002, -1, CEntity::pEventHandler(&CSwitch::H0x00d10002_SwitchON_02), DEBUGSTRING("CSwitch::H0x00d10002_SwitchON_02")},
 {0x00d10003, -1, CEntity::pEventHandler(&CSwitch::SwitchOFF),DEBUGSTRING("CSwitch::SwitchOFF")},
 {0x00d10004, -1, CEntity::pEventHandler(&CSwitch::H0x00d10004_SwitchOFF_01), DEBUGSTRING("CSwitch::H0x00d10004_SwitchOFF_01")},
 {0x00d10005, -1, CEntity::pEventHandler(&CSwitch::H0x00d10005_SwitchOFF_02), DEBUGSTRING("CSwitch::H0x00d10005_SwitchOFF_02")},
 {0x00d10006, -1, CEntity::pEventHandler(&CSwitch::MainLoop_Once),DEBUGSTRING("CSwitch::MainLoop_Once")},
 {0x00d10007, -1, CEntity::pEventHandler(&CSwitch::H0x00d10007_MainLoop_Once_01), DEBUGSTRING("CSwitch::H0x00d10007_MainLoop_Once_01")},
 {0x00d10008, -1, CEntity::pEventHandler(&CSwitch::H0x00d10008_MainLoop_Once_02), DEBUGSTRING("CSwitch::H0x00d10008_MainLoop_Once_02")},
 {0x00d10009, -1, CEntity::pEventHandler(&CSwitch::MainLoop_OnOff),DEBUGSTRING("CSwitch::MainLoop_OnOff")},
 {0x00d1000a, -1, CEntity::pEventHandler(&CSwitch::H0x00d1000a_MainLoop_OnOff_01), DEBUGSTRING("CSwitch::H0x00d1000a_MainLoop_OnOff_01")},
 {0x00d1000b, -1, CEntity::pEventHandler(&CSwitch::H0x00d1000b_MainLoop_OnOff_02), DEBUGSTRING("CSwitch::H0x00d1000b_MainLoop_OnOff_02")},
 {1, -1, CEntity::pEventHandler(&CSwitch::Main),DEBUGSTRING("CSwitch::Main")},
};
#define CSwitch_handlersct ARRAYCOUNT(CSwitch_handlers)

CEntity *CSwitch_New(void) { return new CSwitch; };
void CSwitch_OnInitClass(void) {};
void CSwitch_OnEndClass(void) {};
void CSwitch_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSwitch_OnWorldEnd(CWorld *pwo) {};
void CSwitch_OnWorldInit(CWorld *pwo) {};
void CSwitch_OnWorldTick(CWorld *pwo) {};
void CSwitch_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSwitch, CModelHolder2, "Switch", "Thumbnails\\Switch.tbn", 0x000000d1);
DECLARE_CTFILENAME(_fnmCSwitch_tbn, "Thumbnails\\Switch.tbn");
