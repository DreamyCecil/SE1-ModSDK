// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CModelHolder2Movable

CEntityProperty CModelHolder2Movable_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+1, 0x338, "Model", 'M', "m_fnModel", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+2, 0x340, "Texture", 'T', "m_fnTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+22, 0x348, "Reflection", 0, "m_fnReflection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+23, 0x350, "Specular", 0, "m_fnSpecular", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+24, 0x358, "Bump", 0, "m_fnBump", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+3, 0x360, "StretchAll", 'S', "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+4, 0x364, "StretchX", 'X', "m_fStretchX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+5, 0x368, "StretchY", 'Y', "m_fStretchY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+6, 0x36C, "StretchZ", 'Z', "m_fStretchZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf5<<8)+7, 0x370, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xf5<<8)+12, 0x374, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+8, 0x378, "Colliding", 'L', "m_bColliding", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xf5<<8)+9, 0x37C, "Model animation", 0, "m_iModelAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xf5<<8)+10, 0x380, "Texture animation", 0, "m_iTextureAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ShadowType_enum, (0xf5<<8)+11, 0x384, "Shadows", 'W', "m_stClusterShadows", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+13, 0x388, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+21, 0x38C, "Targetable", 0, "m_bTargetable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &CustomShadingType_enum, (0xf5<<8)+14, 0x390, "Custom shading", 'H', "m_cstCustomShading", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0xf5<<8)+15, 0x394, "Light direction", 'D', "m_aShadingDirection", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xf5<<8)+16, 0x3A0, "Light color", 'O', "m_colLight", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xf5<<8)+17, 0x3A4, "Ambient color", 'A', "m_colAmbient", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xf5<<8)+18, 0x3A8, "Light animation file", 0, "m_fnmLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xf5<<8)+19, 0x3B0, "Light animation", 0, "m_iLightAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0xf5<<8)+20, 0x3B8, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+25, 0x3D8, "Attachments", 0, "m_bAttachments", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+26, 0x3DC, "Active", 0, "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+31, 0x3E0, "Mip Add", 0, "m_fMipAdd", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+32, 0x3E4, "Mip Mul", 0, "m_fMipMul", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+33, 0x3E8, "", 0, "m_fMipFadeDist", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+34, 0x3EC, "", 0, "m_fMipFadeLen", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0xf5<<8)+35, 0x3F0, "Mip Fade Dist (Metric)", 0, "m_rMipFadeDistMetric", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+36, 0x3F4, "Mip Fade Len (Metric)", 0, "m_fMipFadeLenMetric", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xf5<<8)+50, 0x3F8, "Apply RND stretch", 0, "m_bRandomStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+52, 0x3FC, "Stretch RND X (%)", 0, "m_fStretchRndX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+51, 0x400, "Stretch RND Y (%)", 0, "m_fStretchRndY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+53, 0x404, "Stretch RND Z (%)", 0, "m_fStretchRndZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+54, 0x408, "Stretch RND All (%)", 0, "m_fStretchRndAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xf5<<8)+55, 0x40C, "", 0, "m_fStretchRandom", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf5<<8)+60, 0x418, "Destruction", 'Q', "m_penDestruction", 0x20UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0xf5<<8)+61, 0x41C, "", 0, "m_vDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+62, 0x428, "", 0, "m_tmLastDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf5<<8)+63, 0x42C, "Destruction Target", 0, "m_penDestroyTarget", 0xFFFFFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf5<<8)+64, 0x430, "", 0, "m_penLastDamager", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+65, 0x434, "", 0, "m_tmSpraySpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+66, 0x438, "", 0, "m_fSprayDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xf5<<8)+67, 0x43C, "", 0, "m_penSpray", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+68, 0x440, "", 0, "m_fMaxDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+70, 0x444, "Classification stretch", 0, "m_fClassificationStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xf5<<8)+80, 0x448, "", 0, "m_colBurning", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DamageType_enum, (0xf5<<8)+90, 0x44C, "", 0, "m_dmtLastDamageType", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+91, 0x450, "Chain saw cut damage", 'C', "m_fChainSawCutDamage", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xf5<<8)+93, 0x454, "First random animation", 'R', "m_iFirstRandomAnimation", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xf5<<8)+100, 0x458, "Max tessellation level", 0, "m_fMaxTessellationLevel", 0x7F0000FFUL, 0),
};
#define CModelHolder2Movable_propertiesct ARRAYCOUNT(CModelHolder2Movable_properties)

CEntityComponent CModelHolder2Movable_components[] = {
#define CModelHolder2Movable_CLASS_1 0xF501 // (0xf5<<8)+1
 CEntityComponent(ECT_CLASS, CModelHolder2Movable_CLASS_1, "EFNM" "Classes\\BloodSpray.ecl"),
};
#define CModelHolder2Movable_componentsct ARRAYCOUNT(CModelHolder2Movable_components)

CEventHandlerEntry CModelHolder2Movable_handlers[] = {
 {0xF50000, -1, CEntity::pEventHandler(&CModelHolder2Movable::H0xF50000_Procedure_0), DEBUGSTRING("CModelHolder2Movable::H0xF50000_Procedure_0")},
 {1, -1, CEntity::pEventHandler(&CModelHolder2Movable::Main), DEBUGSTRING("CModelHolder2Movable::Main")},
 {0xF50001, -1, CEntity::pEventHandler(&CModelHolder2Movable::H0xF50001_Procedure_2), DEBUGSTRING("CModelHolder2Movable::H0xF50001_Procedure_2")},
 {0xF50002, -1, CEntity::pEventHandler(&CModelHolder2Movable::H0xF50002_Procedure_3), DEBUGSTRING("CModelHolder2Movable::H0xF50002_Procedure_3")},
};
#define CModelHolder2Movable_handlersct ARRAYCOUNT(CModelHolder2Movable_handlers)

CEntity *CModelHolder2Movable_New(void) { return new CModelHolder2Movable; };
void CModelHolder2Movable_OnInitClass(void) {};
void CModelHolder2Movable_OnEndClass(void) {};
void CModelHolder2Movable_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CModelHolder2Movable_OnWorldEnd(CWorld *pwo) {};
void CModelHolder2Movable_OnWorldInit(CWorld *pwo) {};
void CModelHolder2Movable_OnWorldTick(CWorld *pwo) {};
void CModelHolder2Movable_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CModelHolder2Movable, CMovableEntity, "ModelHolder2Movable", "Thumbnails\\ModelHolder.tbn", 0xf5);
DECLARE_CTFILENAME(_fnmCModelHolder2Movable_tbn, "Thumbnails\\ModelHolder.tbn");
