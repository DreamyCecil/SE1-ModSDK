// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CShip

CEntityProperty CShip_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x67<<8)+1, 0x338, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x67<<8)+2, 0x33C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x67<<8)+3, 0x340, "Target", 'T', "m_penTarget", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+4, 0x344, "Speed [m/s]", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+5, 0x348, "Rotation [deg/s]", 'R', "m_fRotation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+6, 0x34C, "Rocking V", 'V', "m_fRockingV", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+7, 0x350, "Rocking A", 'A', "m_fRockingA", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+8, 0x354, "Acceleration", 'C', "m_fAcceleration", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x67<<8)+10, 0x358, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+11, 0x35C, "", 0, "m_fRockSign", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+12, 0x360, "", 0, "m_fLastTargetDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x67<<8)+20, 0x364, "Sail", 'L', "m_penSail", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x67<<8)+21, 0x368, "Sail roll-up anim", 0, "m_iSailUpAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x67<<8)+22, 0x36C, "Sail roll-down anim", 0, "m_iSailDownAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x67<<8)+23, 0x370, "Sail sailing anim", 0, "m_iSailSailAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x67<<8)+24, 0x374, "Sail wawing anim", 0, "m_iSailWaveingAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+30, 0x378, "", 0, "m_fOriginalRockingV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+31, 0x37C, "", 0, "m_fOriginalRockingA", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+32, 0x380, "", 0, "m_fNextRockingV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+33, 0x384, "", 0, "m_fNextRockingA", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+34, 0x388, "", 0, "m_tmRockingChange", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x67<<8)+35, 0x38C, "", 0, "m_tmRockingChangeStart", 0x0UL, 0),
};
#define CShip_propertiesct ARRAYCOUNT(CShip_properties)

CEntityComponent CShip_components[] = {
  CEntityComponent()
};
#define CShip_componentsct 0


CEventHandlerEntry CShip_handlers[] = {
 {0x00670001, -1, CEntity::pEventHandler(&CShip::Sail),DEBUGSTRING("CShip::Sail")},
 {0x00670002, -1, CEntity::pEventHandler(&CShip::H0x00670002_Sail_01), DEBUGSTRING("CShip::H0x00670002_Sail_01")},
 {0x00670003, -1, CEntity::pEventHandler(&CShip::H0x00670003_Sail_02), DEBUGSTRING("CShip::H0x00670003_Sail_02")},
 {0x00670004, -1, CEntity::pEventHandler(&CShip::H0x00670004_Sail_03), DEBUGSTRING("CShip::H0x00670004_Sail_03")},
 {0x00670005, -1, CEntity::pEventHandler(&CShip::H0x00670005_Sail_04), DEBUGSTRING("CShip::H0x00670005_Sail_04")},
 {0x00670006, -1, CEntity::pEventHandler(&CShip::H0x00670006_Sail_05), DEBUGSTRING("CShip::H0x00670006_Sail_05")},
 {0x00670007, -1, CEntity::pEventHandler(&CShip::H0x00670007_Sail_06), DEBUGSTRING("CShip::H0x00670007_Sail_06")},
 {0x00670008, -1, CEntity::pEventHandler(&CShip::Harbor),DEBUGSTRING("CShip::Harbor")},
 {0x00670009, -1, CEntity::pEventHandler(&CShip::H0x00670009_Harbor_01), DEBUGSTRING("CShip::H0x00670009_Harbor_01")},
 {0x0067000a, -1, CEntity::pEventHandler(&CShip::H0x0067000a_Harbor_02), DEBUGSTRING("CShip::H0x0067000a_Harbor_02")},
 {1, -1, CEntity::pEventHandler(&CShip::Main),DEBUGSTRING("CShip::Main")},
 {0x0067000b, -1, CEntity::pEventHandler(&CShip::H0x0067000b_Main_01), DEBUGSTRING("CShip::H0x0067000b_Main_01")},
 {0x0067000c, -1, CEntity::pEventHandler(&CShip::H0x0067000c_Main_02), DEBUGSTRING("CShip::H0x0067000c_Main_02")},
 {0x0067000d, -1, CEntity::pEventHandler(&CShip::H0x0067000d_Main_03), DEBUGSTRING("CShip::H0x0067000d_Main_03")},
 {0x0067000e, -1, CEntity::pEventHandler(&CShip::H0x0067000e_Main_04), DEBUGSTRING("CShip::H0x0067000e_Main_04")},
};
#define CShip_handlersct ARRAYCOUNT(CShip_handlers)

CEntity *CShip_New(void) { return new CShip; };
void CShip_OnInitClass(void) {};
void CShip_OnEndClass(void) {};
void CShip_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CShip_OnWorldEnd(CWorld *pwo) {};
void CShip_OnWorldInit(CWorld *pwo) {};
void CShip_OnWorldTick(CWorld *pwo) {};
void CShip_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CShip, CMovableBrushEntity, "Ship", "Thumbnails\\Ship.tbn", 103);
DECLARE_CTFILENAME(_fnmCShip_tbn, "Thumbnails\\Ship.tbn");
