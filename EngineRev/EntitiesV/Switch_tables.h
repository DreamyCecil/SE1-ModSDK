// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(SwitchType)
  EP_ENUMVALUE(SWT_ONCE, "Once"),
  EP_ENUMVALUE(SWT_ONOFF, "On/Off"),
EP_ENUMEND(SwitchType);

#define ENTITYCLASS CSwitch

CEntityProperty CSwitch_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd1<<8)+4, 0x358, "Model ON animation", 'D', "m_iModelONAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd1<<8)+5, 0x35C, "Texture ON animation", 0, "m_iTextureONAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd1<<8)+6, 0x360, "Model OFF animation", 'G', "m_iModelOFFAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd1<<8)+7, 0x364, "Texture OFF animation", 0, "m_iTextureOFFAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd1<<8)+10, 0x368, "ON-OFF Target", 'T', "m_penTarget", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xd1<<8)+11, 0x36C, "ON  Event type", 'U', "m_eetEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xd1<<8)+12, 0x370, "OFF Event type", 'I', "m_eetOffEvent", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd1<<8)+13, 0x374, "OFF Target", 0, "m_penOffTarget", 0x7FFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SwitchType_enum, (0xd1<<8)+18, 0x378, "Type", 'Y', "m_swtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd1<<8)+19, 0x37C, "Message", 'M', "m_strMessage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd1<<8)+20, 0x380, "", 0, "m_bSwitchON", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd1<<8)+21, 0x384, "", 0, "m_penCaused", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd1<<8)+22, 0x388, "", 0, "m_bUseable", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd1<<8)+23, 0x38C, "Invisible", 0, "m_bInvisible", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CSwitch, CModelHolder2, "Switch", "Thumbnails\\Switch.tbn", 209);
DECLARE_CTFILENAME(_fnmCSwitch_tbn, "Thumbnails\\Switch.tbn");
