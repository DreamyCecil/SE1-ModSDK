// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CPendulum

CEntityProperty CPendulum_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_STRING, NULL, (0x0000006a<<8)+1, offsetof(CPendulum, m_strName), "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000006a<<8)+2, offsetof(CPendulum, m_bDynamicShadows), "Dynamic shadows", 0, "m_bDynamicShadows", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+3, offsetof(CPendulum, m_fMaxAngle), "Maximum angle", 0, "m_fMaxAngle", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+5, offsetof(CPendulum, m_fSpeed), "", 0, "m_fSpeed", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+6, offsetof(CPendulum, m_fDampFactor), "Damp factor", 0, "m_fDampFactor", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+7, offsetof(CPendulum, m_fPendulumFactor), "Pendulum factor", 0, "m_fPendulumFactor", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+8, offsetof(CPendulum, m_fImpulseFactor), "Damage impulse factor", 0, "m_fImpulseFactor", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x0000006a<<8)+9, offsetof(CPendulum, m_fTriggerImpulse), "Impulse on trigger", 0, "m_fTriggerImpulse", 0x7F0000FFUL, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x0000006a<<8)+10, offsetof(CPendulum, m_bActive), "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CPendulum, CMovableBrushEntity, "Pendulum", "Thumbnails\\Pendulum.tbn", 0x0000006a);
DECLARE_CTFILENAME(_fnmCPendulum_tbn, "Thumbnails\\Pendulum.tbn");
