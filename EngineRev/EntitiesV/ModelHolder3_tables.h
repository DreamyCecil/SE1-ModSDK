// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(SkaCustomShadingType)
  EP_ENUMVALUE(SCST_NONE, "Automatic shading"),
  EP_ENUMVALUE(SCST_CONSTANT_SHADING, "Constant shading"),
  EP_ENUMVALUE(SCST_FULL_CUSTOMIZED, "Customized shading"),
EP_ENUMEND(SkaCustomShadingType);

EP_ENUMBEG(SkaShadowType)
  EP_ENUMVALUE(SST_NONE, "None"),
  EP_ENUMVALUE(SST_CLUSTER, "Cluster shadows"),
  EP_ENUMVALUE(SST_POLYGONAL, "Polygonal"),
EP_ENUMEND(SkaShadowType);

#define ENTITYCLASS CModelHolder3

CEntityProperty CModelHolder3_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf2<<8)+1, 0x110, "Model file (.smc)", 'M', "m_fnModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf2<<8)+3, 0x118, "StretchAll", 'S', "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xf2<<8)+4, 0x11C, "StretchXYZ", 'X', "m_vStretchXYZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf2<<8)+7, 0x128, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf2<<8)+12, 0x12C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf2<<8)+8, 0x130, "Collision", 'L', "m_bColliding", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SkaShadowType_enum, (0xf2<<8)+11, 0x134, "Shadows", 'W', "m_stClusterShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf2<<8)+13, 0x138, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf2<<8)+21, 0x13C, "Targetable", 0, "m_bTargetable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SkaCustomShadingType_enum, (0xf2<<8)+14, 0x140, "Shading mode", 'H', "m_cstCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xf2<<8)+15, 0x144, "Shade. Light direction", 'D', "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xf2<<8)+16, 0x150, "Shade. Light color", 'O', "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xf2<<8)+17, 0x154, "Shade. Ambient color", 'A', "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf2<<8)+26, 0x158, "Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf2<<8)+70, 0x15C, "Classification stretch", 0, "m_fClassificationStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf2<<8)+100, 0x160, "Max tessellation level", 0, "m_fMaxTessellationLevel", 0x7F0000FFUL, 0),
};
#define CModelHolder3_propertiesct ARRAYCOUNT(CModelHolder3_properties)

CEntityComponent CModelHolder3_components[] = {
  CEntityComponent()
};
#define CModelHolder3_componentsct 0


CEventHandlerEntry CModelHolder3_handlers[] = {
 {0x00f20000, -1, CEntity::pEventHandler(&CModelHolder3::Die),DEBUGSTRING("CModelHolder3::Die")},
 {1, -1, CEntity::pEventHandler(&CModelHolder3::Main),DEBUGSTRING("CModelHolder3::Main")},
 {0x00f20001, -1, CEntity::pEventHandler(&CModelHolder3::H0x00f20001_Main_01), DEBUGSTRING("CModelHolder3::H0x00f20001_Main_01")},
 {0x00f20002, -1, CEntity::pEventHandler(&CModelHolder3::H0x00f20002_Main_02), DEBUGSTRING("CModelHolder3::H0x00f20002_Main_02")},
};
#define CModelHolder3_handlersct ARRAYCOUNT(CModelHolder3_handlers)

CEntity *CModelHolder3_New(void) { return new CModelHolder3; };
void CModelHolder3_OnInitClass(void) {};
void CModelHolder3_OnEndClass(void) {};
void CModelHolder3_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CModelHolder3_OnWorldEnd(CWorld *pwo) {};
void CModelHolder3_OnWorldInit(CWorld *pwo) {};
void CModelHolder3_OnWorldTick(CWorld *pwo) {};
void CModelHolder3_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CModelHolder3, CRationalEntity, "ModelHolder3", "Thumbnails\\ModelHolder3.tbn", 242);
DECLARE_CTFILENAME(_fnmCModelHolder3_tbn, "Thumbnails\\ModelHolder3.tbn");
