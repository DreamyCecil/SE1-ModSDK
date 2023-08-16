// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CCounter

CEntityProperty CCounter_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe8<<8)+1, 0x110, "Countdown speed", 'S', "m_fCountdownSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+2, 0x114, "Zero target", 'T', "m_penTarget", 0xFFFFFF80UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe8<<8)+3, 0x118, "", 0, "m_fNumber", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xe8<<8)+4, 0x11C, "", 0, "m_tmStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xe8<<8)+5, 0x120, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0xe8<<8)+6, 0x124, "", 0, "m_soSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xe8<<8)+7, 0x1A0, "Count start", 'A', "m_iCountFrom", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+10, 0x1A4, "Bit 0", 0, "m_pen0", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+11, 0x1A8, "Bit 1", 0, "m_pen1", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+12, 0x1AC, "Bit 2", 0, "m_pen2", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+13, 0x1B0, "Bit 3", 0, "m_pen3", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+14, 0x1B4, "Bit 4", 0, "m_pen4", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+15, 0x1B8, "Bit 5", 0, "m_pen5", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+16, 0x1BC, "Bit 6", 0, "m_pen6", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+17, 0x1C0, "Bit 7", 0, "m_pen7", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+18, 0x1C4, "Bit 8", 0, "m_pen8", 0xFF000030UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xe8<<8)+19, 0x1C8, "Bit 9", 0, "m_pen9", 0xFF000030UL, 0),
};
#define CCounter_propertiesct ARRAYCOUNT(CCounter_properties)

CEntityComponent CCounter_components[] = {
#define SOUND_TICK ((0x000000e8<<8)+0)
 CEntityComponent(ECT_SOUND, SOUND_TICK, "EFNM" "Sounds\\Menu\\Select.wav"),
#define MODEL_MARKER ((0x000000e8<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000000e8<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CCounter_componentsct ARRAYCOUNT(CCounter_components)

CEventHandlerEntry CCounter_handlers[] = {
 {0x00e80000, -1, CEntity::pEventHandler(&CCounter::CountDown),DEBUGSTRING("CCounter::CountDown")},
 {0x00e80001, -1, CEntity::pEventHandler(&CCounter::H0x00e80001_CountDown_01), DEBUGSTRING("CCounter::H0x00e80001_CountDown_01")},
 {0x00e80002, -1, CEntity::pEventHandler(&CCounter::H0x00e80002_CountDown_02), DEBUGSTRING("CCounter::H0x00e80002_CountDown_02")},
 {0x00e80003, -1, CEntity::pEventHandler(&CCounter::H0x00e80003_CountDown_03), DEBUGSTRING("CCounter::H0x00e80003_CountDown_03")},
 {0x00e80004, -1, CEntity::pEventHandler(&CCounter::H0x00e80004_CountDown_04), DEBUGSTRING("CCounter::H0x00e80004_CountDown_04")},
 {1, -1, CEntity::pEventHandler(&CCounter::Main),DEBUGSTRING("CCounter::Main")},
 {0x00e80005, -1, CEntity::pEventHandler(&CCounter::H0x00e80005_Main_01), DEBUGSTRING("CCounter::H0x00e80005_Main_01")},
 {0x00e80006, -1, CEntity::pEventHandler(&CCounter::H0x00e80006_Main_02), DEBUGSTRING("CCounter::H0x00e80006_Main_02")},
 {0x00e80007, -1, CEntity::pEventHandler(&CCounter::H0x00e80007_Main_03), DEBUGSTRING("CCounter::H0x00e80007_Main_03")},
 {0x00e80008, -1, CEntity::pEventHandler(&CCounter::H0x00e80008_Main_04), DEBUGSTRING("CCounter::H0x00e80008_Main_04")},
};
#define CCounter_handlersct ARRAYCOUNT(CCounter_handlers)

CEntity *CCounter_New(void) { return new CCounter; };
void CCounter_OnInitClass(void) {};
void CCounter_OnEndClass(void) {};
void CCounter_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CCounter_OnWorldEnd(CWorld *pwo) {};
void CCounter_OnWorldInit(CWorld *pwo) {};
void CCounter_OnWorldTick(CWorld *pwo) {};
void CCounter_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CCounter, CRationalEntity, "Counter", "Thumbnails\\Counter.tbn", 232);
DECLARE_CTFILENAME(_fnmCCounter_tbn, "Thumbnails\\Counter.tbn");
