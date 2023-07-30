// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#define ENTITYCLASS CPipebomb

CEntityProperty CPipebomb_properties[] = {
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000001f7<<8)+1, offsetof(CPipebomb, m_penLauncher), "", 0, "m_penLauncher", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001f7<<8)+2, offsetof(CPipebomb, m_fIgnoreTime), "", 0, "m_fIgnoreTime", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_FLOAT, NULL, (0x000001f7<<8)+3, offsetof(CPipebomb, m_fSpeed), "", 0, "m_fSpeed", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_BOOL, NULL, (0x000001f7<<8)+4, offsetof(CPipebomb, m_bCollected), "", 0, "m_bCollected", 0, 0),
 ENGINE_SPECIFIC_PROP_DEF(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000001f7<<8)+255, offsetof(CPipebomb, m_penPrediction), "", 0, "m_penPrediction", 0, 0),
};
#define CPipebomb_propertiesct ARRAYCOUNT(CPipebomb_properties)

CEntityComponent CPipebomb_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001f7<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_LIGHT ((0x000001f7<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define MODEL_PIPEBOMB ((0x000001f7<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_PIPEBOMB, "EFNM" "Models\\Weapons\\Pipebomb\\Grenade\\Grenade.mdl"),
#define TEXTURE_PIPEBOMB ((0x000001f7<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_PIPEBOMB, "EFNM" "Models\\Weapons\\Pipebomb\\Grenade\\Grenade.tex"),
#define SOUND_LAUNCH ((0x000001f7<<8)+12)
 CEntityComponent(ECT_SOUND, SOUND_LAUNCH, "EFNM" "Sounds\\Weapons\\RocketFired.wav"),
};
#define CPipebomb_componentsct ARRAYCOUNT(CPipebomb_components)

CEventHandlerEntry CPipebomb_handlers[] = {
 {0x01f70001, -1, CEntity::pEventHandler(&CPipebomb::ProjectileSlide),DEBUGSTRING("CPipebomb::ProjectileSlide")},
 {0x01f70002, -1, CEntity::pEventHandler(&CPipebomb::H0x01f70002_ProjectileSlide_01), DEBUGSTRING("CPipebomb::H0x01f70002_ProjectileSlide_01")},
 {0x01f70003, -1, CEntity::pEventHandler(&CPipebomb::H0x01f70003_ProjectileSlide_02), DEBUGSTRING("CPipebomb::H0x01f70003_ProjectileSlide_02")},
 {1, -1, CEntity::pEventHandler(&CPipebomb::Main),DEBUGSTRING("CPipebomb::Main")},
 {0x01f70004, -1, CEntity::pEventHandler(&CPipebomb::H0x01f70004_Main_01), DEBUGSTRING("CPipebomb::H0x01f70004_Main_01")},
 {0x01f70005, -1, CEntity::pEventHandler(&CPipebomb::H0x01f70005_Main_02), DEBUGSTRING("CPipebomb::H0x01f70005_Main_02")},
};
#define CPipebomb_handlersct ARRAYCOUNT(CPipebomb_handlers)

CEntity *CPipebomb_New(void) { return new CPipebomb; };
void CPipebomb_OnInitClass(void) {};
void CPipebomb_OnEndClass(void) {};
void CPipebomb_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CPipebomb_OnWorldEnd(CWorld *pwo) {};
void CPipebomb_OnWorldInit(CWorld *pwo) {};
void CPipebomb_OnWorldTick(CWorld *pwo) {};
void CPipebomb_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPipebomb, CMovableModelEntity, "Pipebomb", "", 0x000001f7);
DECLARE_CTFILENAME(_fnmCPipebomb_tbn, "");
