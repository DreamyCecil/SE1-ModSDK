// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CShip

CEntityProperty CShip_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000067<<8)+1, offsetof(CShip, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x00000067<<8)+2, offsetof(CShip, m_strDescription), "", 0, "m_strDescription", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000067<<8)+3, offsetof(CShip, m_penTarget), "Target", 'T', "m_penTarget", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+4, offsetof(CShip, m_fSpeed), "Speed [m/s]", 'S', "m_fSpeed", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+5, offsetof(CShip, m_fRotation), "Rotation [deg/s]", 'R', "m_fRotation", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+6, offsetof(CShip, m_fRockingV), "Rocking V", 'V', "m_fRockingV", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+7, offsetof(CShip, m_fRockingA), "Rocking A", 'A', "m_fRockingA", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+8, offsetof(CShip, m_fAcceleration), "Acceleration", 'C', "m_fAcceleration", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x00000067<<8)+10, offsetof(CShip, m_bMoving), "", 0, "m_bMoving", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+11, offsetof(CShip, m_fRockSign), "", 0, "m_fRockSign", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+12, offsetof(CShip, m_fLastTargetDistance), "", 0, "m_fLastTargetDistance", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000067<<8)+20, offsetof(CShip, m_penSail), "Sail", 'L', "m_penSail", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x00000067<<8)+21, offsetof(CShip, m_iSailUpAnim), "Sail roll-up anim", 0, "m_iSailUpAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x00000067<<8)+22, offsetof(CShip, m_iSailDownAnim), "Sail roll-down anim", 0, "m_iSailDownAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x00000067<<8)+23, offsetof(CShip, m_iSailSailAnim), "Sail sailing anim", 0, "m_iSailSailAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ANIMATION, NULL, (0x00000067<<8)+24, offsetof(CShip, m_iSailWaveingAnim), "Sail wawing anim", 0, "m_iSailWaveingAnim", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+30, offsetof(CShip, m_fOriginalRockingV), "", 0, "m_fOriginalRockingV", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+31, offsetof(CShip, m_fOriginalRockingA), "", 0, "m_fOriginalRockingA", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+32, offsetof(CShip, m_fNextRockingV), "", 0, "m_fNextRockingV", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+33, offsetof(CShip, m_fNextRockingA), "", 0, "m_fNextRockingA", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+34, offsetof(CShip, m_tmRockingChange), "", 0, "m_tmRockingChange", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x00000067<<8)+35, offsetof(CShip, m_tmRockingChangeStart), "", 0, "m_tmRockingChangeStart", 0, 0),
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
ENTITY_CLASSDEFINITION(CShip, CMovableBrushEntity, "Ship", "Thumbnails\\Ship.tbn", 0x00000067);
DECLARE_CTFILENAME(_fnmCShip_tbn, "Thumbnails\\Ship.tbn");
