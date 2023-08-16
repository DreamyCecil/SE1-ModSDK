// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CBloodSpray

CEntityProperty CBloodSpray_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &SprayParticlesType_enum, (0x25b<<8)+1, 0x110, "", 0, "m_sptType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25b<<8)+2, 0x114, "", 0, "m_tmStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x25b<<8)+3, 0x118, "", 0, "m_vDirection", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25b<<8)+5, 0x124, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25b<<8)+6, 0x128, "", 0, "m_fDamagePower", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0x25b<<8)+8, 0x12C, "", 0, "m_boxSizedOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x25b<<8)+9, 0x144, "", 0, "m_vGDir", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25b<<8)+10, 0x150, "", 0, "m_fGA", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x25b<<8)+11, 0x154, "", 0, "m_fLaunchPower", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25b<<8)+12, 0x158, "", 0, "m_colCentralColor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0x25b<<8)+13, 0x15C, "", 0, "m_boxOriginalOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x25b<<8)+14, 0x174, "", 0, "m_colBurnColor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x25b<<8)+255, 0x178, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CBloodSpray_propertiesct ARRAYCOUNT(CBloodSpray_properties)

CEntityComponent CBloodSpray_components[] = {
#define MODEL_MARKER ((0x0000025b<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, "EFNM" "Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x0000025b<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, "EFNM" "Models\\Editor\\Vector.tex"),
};
#define CBloodSpray_componentsct ARRAYCOUNT(CBloodSpray_components)

CEventHandlerEntry CBloodSpray_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBloodSpray::Main),DEBUGSTRING("CBloodSpray::Main")},
 {0x025b0001, -1, CEntity::pEventHandler(&CBloodSpray::H0x025b0001_Main_01), DEBUGSTRING("CBloodSpray::H0x025b0001_Main_01")},
 {0x025b0002, -1, CEntity::pEventHandler(&CBloodSpray::H0x025b0002_Main_02), DEBUGSTRING("CBloodSpray::H0x025b0002_Main_02")},
};
#define CBloodSpray_handlersct ARRAYCOUNT(CBloodSpray_handlers)

CEntity *CBloodSpray_New(void) { return new CBloodSpray; };
void CBloodSpray_OnInitClass(void) {};
void CBloodSpray_OnEndClass(void) {};
void CBloodSpray_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBloodSpray_OnWorldEnd(CWorld *pwo) {};
void CBloodSpray_OnWorldInit(CWorld *pwo) {};
void CBloodSpray_OnWorldTick(CWorld *pwo) {};
void CBloodSpray_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBloodSpray, CRationalEntity, "Blood Spray", "", 603);
DECLARE_CTFILENAME(_fnmCBloodSpray_tbn, "");
