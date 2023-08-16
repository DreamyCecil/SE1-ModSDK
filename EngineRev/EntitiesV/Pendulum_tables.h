// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CPendulum

CEntityProperty CPendulum_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x6a<<8)+1, 0x338, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6a<<8)+2, 0x33C, "Dynamic shadows", 0, "m_bDynamicShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+3, 0x340, "Maximum angle", 0, "m_fMaxAngle", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+5, 0x344, "", 0, "m_fSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+6, 0x348, "Damp factor", 0, "m_fDampFactor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+7, 0x34C, "Pendulum factor", 0, "m_fPendulumFactor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+8, 0x350, "Damage impulse factor", 0, "m_fImpulseFactor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+9, 0x354, "Impulse on trigger", 0, "m_fTriggerImpulse", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x6a<<8)+10, 0x358, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x6a<<8)+11, 0x35C, "Damage clamp", 0, "m_fMaxDamage", 0x7F0000FFUL, 0),
};
#define CPendulum_propertiesct ARRAYCOUNT(CPendulum_properties)

CEntityComponent CPendulum_components[] = {
  CEntityComponent()
};
#define CPendulum_componentsct 0


CEventHandlerEntry CPendulum_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPendulum::Main),DEBUGSTRING("CPendulum::Main")},
 {0x006a0000, -1, CEntity::pEventHandler(&CPendulum::H0x006a0000_Main_01), DEBUGSTRING("CPendulum::H0x006a0000_Main_01")},
 {0x006a0001, -1, CEntity::pEventHandler(&CPendulum::H0x006a0001_Main_02), DEBUGSTRING("CPendulum::H0x006a0001_Main_02")},
};
#define CPendulum_handlersct ARRAYCOUNT(CPendulum_handlers)

CEntity *CPendulum_New(void) { return new CPendulum; };
void CPendulum_OnInitClass(void) {};
void CPendulum_OnEndClass(void) {};
void CPendulum_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPendulum_OnWorldEnd(CWorld *pwo) {};
void CPendulum_OnWorldInit(CWorld *pwo) {};
void CPendulum_OnWorldTick(CWorld *pwo) {};
void CPendulum_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPendulum, CMovableBrushEntity, "Pendulum", "Thumbnails\\Pendulum.tbn", 106);
DECLARE_CTFILENAME(_fnmCPendulum_tbn, "Thumbnails\\Pendulum.tbn");
