// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CTouchField

CEntityProperty CTouchField_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xce<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xce<<8)+2, 0x114, "Enter Target", 'T', "m_penEnter", 0x8C2717FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xce<<8)+3, 0x118, "Enter Event", 'E', "m_eetEnter", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xce<<8)+7, 0x11C, "Exit Target", 0, "m_penExit", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EventEType_enum, (0xce<<8)+8, 0x120, "Exit Event", 0, "m_eetExit", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xce<<8)+4, 0x124, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xce<<8)+5, 0x128, "Players only", 'P', "m_bPlayersOnly", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xce<<8)+6, 0x12C, "Exit check time", 'X', "m_tmExitCheck", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xce<<8)+9, 0x130, "Block non-players", 'B', "m_bBlockNonPlayers", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xce<<8)+100, 0x134, "", 0, "m_penLastIn", 0x0UL, 0),
};
#define CTouchField_propertiesct ARRAYCOUNT(CTouchField_properties)

CEntityComponent CTouchField_components[] = {
#define TEXTURE_FIELD ((0x000000ce<<8)+1)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FIELD, "EFNM" "Models\\Editor\\CollisionBox.tex"),
};
#define CTouchField_componentsct ARRAYCOUNT(CTouchField_components)

CEventHandlerEntry CTouchField_handlers[] = {
 {0x00ce0000, -1, CEntity::pEventHandler(&CTouchField::WaitingEntry),DEBUGSTRING("CTouchField::WaitingEntry")},
 {0x00ce0001, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0001_WaitingEntry_01), DEBUGSTRING("CTouchField::H0x00ce0001_WaitingEntry_01")},
 {0x00ce0002, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0002_WaitingEntry_02), DEBUGSTRING("CTouchField::H0x00ce0002_WaitingEntry_02")},
 {0x00ce0003, -1, CEntity::pEventHandler(&CTouchField::WaitingExit),DEBUGSTRING("CTouchField::WaitingExit")},
 {0x00ce0004, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0004_WaitingExit_01), DEBUGSTRING("CTouchField::H0x00ce0004_WaitingExit_01")},
 {0x00ce0005, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0005_WaitingExit_02), DEBUGSTRING("CTouchField::H0x00ce0005_WaitingExit_02")},
 {0x00ce0006, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0006_WaitingExit_03), DEBUGSTRING("CTouchField::H0x00ce0006_WaitingExit_03")},
 {0x00ce0007, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0007_WaitingExit_04), DEBUGSTRING("CTouchField::H0x00ce0007_WaitingExit_04")},
 {0x00ce0008, -1, CEntity::pEventHandler(&CTouchField::Frozen),DEBUGSTRING("CTouchField::Frozen")},
 {0x00ce0009, -1, CEntity::pEventHandler(&CTouchField::H0x00ce0009_Frozen_01), DEBUGSTRING("CTouchField::H0x00ce0009_Frozen_01")},
 {0x00ce000a, -1, CEntity::pEventHandler(&CTouchField::H0x00ce000a_Frozen_02), DEBUGSTRING("CTouchField::H0x00ce000a_Frozen_02")},
 {1, -1, CEntity::pEventHandler(&CTouchField::Main),DEBUGSTRING("CTouchField::Main")},
};
#define CTouchField_handlersct ARRAYCOUNT(CTouchField_handlers)

CEntity *CTouchField_New(void) { return new CTouchField; };
void CTouchField_OnInitClass(void) {};
void CTouchField_OnEndClass(void) {};
void CTouchField_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTouchField_OnWorldEnd(CWorld *pwo) {};
void CTouchField_OnWorldInit(CWorld *pwo) {};
void CTouchField_OnWorldTick(CWorld *pwo) {};
void CTouchField_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTouchField, CRationalEntity, "Touch Field", "Thumbnails\\TouchField.tbn", 206);
DECLARE_CTFILENAME(_fnmCTouchField_tbn, "Thumbnails\\TouchField.tbn");
