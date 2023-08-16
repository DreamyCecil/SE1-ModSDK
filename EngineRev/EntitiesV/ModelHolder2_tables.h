// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(CustomShadingType)
  EP_ENUMVALUE(CST_NONE, "None"),
  EP_ENUMVALUE(CST_FULL_CUSTOMIZED, "Full customized"),
  EP_ENUMVALUE(CST_CONSTANT_SHADING, "Constant shading"),
EP_ENUMEND(CustomShadingType);

EP_ENUMBEG(ShadowType)
  EP_ENUMVALUE(ST_NONE, "None"),
  EP_ENUMVALUE(ST_CLUSTER, "Cluster shadows"),
  EP_ENUMVALUE(ST_POLYGONAL, "Polygonal"),
EP_ENUMEND(ShadowType);

#define ENTITYCLASS CModelHolder2

CEntityProperty CModelHolder2_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+1, 0x110, "Model", 'M', "m_fnModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+2, 0x118, "Texture", 'T', "m_fnTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+22, 0x120, "Reflection", 0, "m_fnReflection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+23, 0x128, "Specular", 0, "m_fnSpecular", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+24, 0x130, "Bump", 0, "m_fnBump", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+3, 0x138, "StretchAll", 'S', "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+4, 0x13C, "StretchX", 'X', "m_fStretchX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+5, 0x140, "StretchY", 'Y', "m_fStretchY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+6, 0x144, "StretchZ", 'Z', "m_fStretchZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd2<<8)+7, 0x148, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd2<<8)+12, 0x14C, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+8, 0x150, "Colliding", 'L', "m_bColliding", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd2<<8)+9, 0x154, "Model animation", 0, "m_iModelAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd2<<8)+10, 0x158, "Texture animation", 0, "m_iTextureAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ShadowType_enum, (0xd2<<8)+11, 0x15C, "Shadows", 'W', "m_stClusterShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+13, 0x160, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+21, 0x164, "Targetable", 0, "m_bTargetable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &CustomShadingType_enum, (0xd2<<8)+14, 0x168, "Custom shading", 'H', "m_cstCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xd2<<8)+15, 0x16C, "Light direction", 'D', "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd2<<8)+16, 0x178, "Light color", 'O', "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd2<<8)+17, 0x17C, "Ambient color", 'A', "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+18, 0x180, "Light animation file", 0, "m_fnmLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd2<<8)+19, 0x188, "Light animation", 0, "m_iLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0xd2<<8)+20, 0x190, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+25, 0x1B0, "Attachments", 0, "m_bAttachments", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+26, 0x1B4, "Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+31, 0x1B8, "Mip Add", 0, "m_fMipAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+32, 0x1BC, "Mip Mul", 0, "m_fMipMul", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+33, 0x1C0, "", 0, "m_fMipFadeDist", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+34, 0x1C4, "", 0, "m_fMipFadeLen", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xd2<<8)+35, 0x1C8, "Mip Fade Dist (Metric)", 0, "m_rMipFadeDistMetric", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+36, 0x1CC, "Mip Fade Len (Metric)", 0, "m_fMipFadeLenMetric", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd2<<8)+50, 0x1D0, "Apply RND stretch", 0, "m_bRandomStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+52, 0x1D4, "Stretch RND X (%)", 0, "m_fStretchRndX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+51, 0x1D8, "Stretch RND Y (%)", 0, "m_fStretchRndY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+53, 0x1DC, "Stretch RND Z (%)", 0, "m_fStretchRndZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+54, 0x1E0, "Stretch RND All (%)", 0, "m_fStretchRndAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xd2<<8)+55, 0x1E4, "", 0, "m_fStretchRandom", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd2<<8)+60, 0x1F0, "Destruction", 'Q', "m_penDestruction", 0x20UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xd2<<8)+61, 0x1F4, "", 0, "m_vDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+62, 0x200, "", 0, "m_tmLastDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd2<<8)+63, 0x204, "Destruction Target", 0, "m_penDestroyTarget", 0xFFFFFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd2<<8)+64, 0x208, "", 0, "m_penLastDamager", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+65, 0x20C, "", 0, "m_tmSpraySpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+66, 0x210, "", 0, "m_fSprayDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd2<<8)+67, 0x214, "", 0, "m_penSpray", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+68, 0x218, "", 0, "m_fMaxDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+70, 0x21C, "Classification stretch", 0, "m_fClassificationStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd2<<8)+80, 0x220, "", 0, "m_colBurning", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DamageType_enum, (0xd2<<8)+90, 0x224, "", 0, "m_dmtLastDamageType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+91, 0x228, "Chain saw cut damage", 'C', "m_fChainSawCutDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd2<<8)+93, 0x22C, "First random animation", 'R', "m_iFirstRandomAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+100, 0x230, "Max tessellation level", 0, "m_fMaxTessellationLevel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+101, 0x234, "Shader: Vertex", 0, "m_fnVertexShader", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+102, 0x23C, "Shader: Fragment", 0, "m_fnFragmentShader", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+103, 0x244, "Shader: Texture sampler 0", 0, "m_fnShaderTextureSampler0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+104, 0x24C, "Shader: Texture sampler 1", 0, "m_fnShaderTextureSampler1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+105, 0x254, "Shader: Texture sampler 2", 0, "m_fnShaderTextureSampler2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+106, 0x25C, "Shader: Texture sampler 3", 0, "m_fnShaderTextureSampler3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xd2<<8)+107, 0x264, "Shader: Texture sampler 4", 0, "m_fnShaderTextureSampler4", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+108, 0x26C, "Shader: Uniform param 0", 0, "m_fnShaderParam0", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+109, 0x270, "Shader: Uniform param 1", 0, "m_fnShaderParam1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+110, 0x274, "Shader: Uniform param 2", 0, "m_fnShaderParam2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+111, 0x278, "Shader: Uniform param 3", 0, "m_fnShaderParam3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd2<<8)+112, 0x27C, "Shader: Uniform param 4", 0, "m_fnShaderParam4", 0x7F0000FFUL, 0),
};
#define CModelHolder2_propertiesct ARRAYCOUNT(CModelHolder2_properties)

CEntityComponent CModelHolder2_components[] = {
#define CLASS_BLOOD_SPRAY ((0x000000d2<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
};
#define CModelHolder2_componentsct ARRAYCOUNT(CModelHolder2_components)

CEventHandlerEntry CModelHolder2_handlers[] = {
 {0x00d20000, -1, CEntity::pEventHandler(&CModelHolder2::Die),DEBUGSTRING("CModelHolder2::Die")},
 {1, -1, CEntity::pEventHandler(&CModelHolder2::Main),DEBUGSTRING("CModelHolder2::Main")},
 {0x00d20001, -1, CEntity::pEventHandler(&CModelHolder2::H0x00d20001_Main_01), DEBUGSTRING("CModelHolder2::H0x00d20001_Main_01")},
 {0x00d20002, -1, CEntity::pEventHandler(&CModelHolder2::H0x00d20002_Main_02), DEBUGSTRING("CModelHolder2::H0x00d20002_Main_02")},
};
#define CModelHolder2_handlersct ARRAYCOUNT(CModelHolder2_handlers)

CEntity *CModelHolder2_New(void) { return new CModelHolder2; };
void CModelHolder2_OnInitClass(void) {};
void CModelHolder2_OnEndClass(void) {};
void CModelHolder2_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CModelHolder2_OnWorldEnd(CWorld *pwo) {};
void CModelHolder2_OnWorldInit(CWorld *pwo) {};
void CModelHolder2_OnWorldTick(CWorld *pwo) {};
void CModelHolder2_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CModelHolder2, CRationalEntity, "ModelHolder2", "Thumbnails\\ModelHolder.tbn", 210);
DECLARE_CTFILENAME(_fnmCModelHolder2_tbn, "Thumbnails\\ModelHolder.tbn");
