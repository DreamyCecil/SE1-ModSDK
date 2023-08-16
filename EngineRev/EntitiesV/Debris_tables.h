// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(DebrisParticlesType)
  EP_ENUMVALUE(DPT_NONE, ""),
  EP_ENUMVALUE(DPT_BLOODTRAIL, ""),
  EP_ENUMVALUE(DPR_SMOKETRAIL, ""),
  EP_ENUMVALUE(DPR_SPARKS, ""),
  EP_ENUMVALUE(DPR_FLYINGTRAIL, ""),
  EP_ENUMVALUE(DPT_AFTERBURNER, ""),
EP_ENUMEND(DebrisParticlesType);

#define ENTITYCLASS CDebris

CEntityProperty CDebris_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &DebrisParticlesType_enum, (0x25a<<8)+1, 0x340, "", 0, "m_dptParticles", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x25a<<8)+2, 0x344, "", 0, "m_iBodyType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25a<<8)+3, 0x348, "", 0, "m_bFade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25a<<8)+4, 0x34C, "", 0, "m_fFadeStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25a<<8)+5, 0x350, "", 0, "m_fFadeTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x25a<<8)+6, 0x354, "", 0, "m_fLastStainHitPoint", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0x25a<<8)+7, 0x360, "", 0, "m_betStain", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x25a<<8)+8, 0x364, "", 0, "m_ctLeftStains", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25a<<8)+9, 0x368, "", 0, "m_tmStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25a<<8)+10, 0x36C, "", 0, "m_fStretch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x25a<<8)+11, 0x370, "", 0, "m_aShadingDirection", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25a<<8)+12, 0x37C, "", 0, "m_bCustomShading", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25a<<8)+13, 0x380, "", 0, "m_colCustomAmbient", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25a<<8)+14, 0x384, "", 0, "m_colCustomDiffuse", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25a<<8)+15, 0x388, "", 0, "m_bImmaterialASAP", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25a<<8)+16, 0x38C, "", 0, "m_fDustStretch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x25a<<8)+17, 0x390, "", 0, "m_bTouchedGround", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25a<<8)+18, 0x394, "", 0, "m_penFallFXPapa", 0x0UL, 0),
};
#define CDebris_propertiesct ARRAYCOUNT(CDebris_properties)

CEntityComponent CDebris_components[] = {
#define CLASS_BASIC_EFFECT ((0x0000025a<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CDebris_componentsct ARRAYCOUNT(CDebris_components)

CEventHandlerEntry CDebris_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CDebris::Main), DEBUGSTRING("CDebris::Main")},
 {0x25A0001, -1, CEntity::pEventHandler(&CDebris::H0x25A0001_Procedure_1), DEBUGSTRING("CDebris::H0x25A0001_Procedure_1")},
 {0x25A0002, -1, CEntity::pEventHandler(&CDebris::H0x25A0002_Procedure_2), DEBUGSTRING("CDebris::H0x25A0002_Procedure_2")},
 {0x25A0003, -1, CEntity::pEventHandler(&CDebris::H0x25A0003_Procedure_3), DEBUGSTRING("CDebris::H0x25A0003_Procedure_3")},
 {0x25A0004, -1, CEntity::pEventHandler(&CDebris::H0x25A0004_Procedure_4), DEBUGSTRING("CDebris::H0x25A0004_Procedure_4")},
 {0x25A0005, -1, CEntity::pEventHandler(&CDebris::H0x25A0005_Procedure_5), DEBUGSTRING("CDebris::H0x25A0005_Procedure_5")},
 {0x25A0006, -1, CEntity::pEventHandler(&CDebris::H0x25A0006_Procedure_6), DEBUGSTRING("CDebris::H0x25A0006_Procedure_6")},
};
#define CDebris_handlersct ARRAYCOUNT(CDebris_handlers)

CEntity *CDebris_New(void) { return new CDebris; };
void CDebris_OnInitClass(void) {};
void CDebris_OnEndClass(void) {};
void CDebris_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDebris_OnWorldEnd(CWorld *pwo) {};
void CDebris_OnWorldInit(CWorld *pwo) {};
void CDebris_OnWorldTick(CWorld *pwo) {};
void CDebris_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDebris, CMovableModelEntity, "Debris", "", 602);
DECLARE_CTFILENAME(_fnmCDebris_tbn, "");
