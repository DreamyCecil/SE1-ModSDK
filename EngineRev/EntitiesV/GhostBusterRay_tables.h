// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CGhostBusterRay

CEntityProperty CGhostBusterRay_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f9<<8)+1, 0x340, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1f9<<8)+2, 0x344, "", 0, "m_bRender", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f9<<8)+3, 0x348, "", 0, "m_vSrcOld", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f9<<8)+4, 0x354, "", 0, "m_vDstOld", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f9<<8)+5, 0x360, "", 0, "m_vSrc", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f9<<8)+6, 0x36C, "", 0, "m_vDst", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f9<<8)+10, 0x378, "", 0, "m_iLastBulletPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0x1f9<<8)+11, 0x388, "", 0, "m_aoLightAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f9<<8)+12, 0x3A8, "", 0, "m_ctPasses", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f9<<8)+255, 0x3AC, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CGhostBusterRay_propertiesct ARRAYCOUNT(CGhostBusterRay_properties)

CEntityComponent CGhostBusterRay_components[] = {
#define CLASS_LIGHT ((0x000001f9<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define CLASS_BULLET ((0x000001f9<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BULLET, "EFNM" "Classes\\Bullet.ecl"),
#define MODEL_RAY ((0x000001f9<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_RAY, "EFNM" "Models\\Weapons\\GhostBuster\\Projectile\\Ray.mdl"),
#define TEXTURE_RAY ((0x000001f9<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RAY, "EFNM" "Models\\Weapons\\GhostBuster\\Projectile\\Ray.tex"),
};
#define CGhostBusterRay_componentsct ARRAYCOUNT(CGhostBusterRay_components)

CEventHandlerEntry CGhostBusterRay_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CGhostBusterRay::Main),DEBUGSTRING("CGhostBusterRay::Main")},
};
#define CGhostBusterRay_handlersct ARRAYCOUNT(CGhostBusterRay_handlers)

CEntity *CGhostBusterRay_New(void) { return new CGhostBusterRay; };
void CGhostBusterRay_OnInitClass(void) {};
void CGhostBusterRay_OnEndClass(void) {};
void CGhostBusterRay_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CGhostBusterRay_OnWorldEnd(CWorld *pwo) {};
void CGhostBusterRay_OnWorldInit(CWorld *pwo) {};
void CGhostBusterRay_OnWorldTick(CWorld *pwo) {};
void CGhostBusterRay_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CGhostBusterRay, CMovableModelEntity, "GhostBusterRay", "", 505);
DECLARE_CTFILENAME(_fnmCGhostBusterRay_tbn, "");
