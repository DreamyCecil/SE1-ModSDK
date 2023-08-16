// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CBullet

CEntityProperty CBullet_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1f6<<8)+1, 0xE8, "", 0, "m_penOwner", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f6<<8)+2, 0xEC, "", 0, "m_fDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f6<<8)+3, 0xF0, "", 0, "m_vTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f6<<8)+4, 0xFC, "", 0, "m_vTargetCopy", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1f6<<8)+6, 0x108, "", 0, "m_vHitPoint", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f6<<8)+8, 0x114, "", 0, "m_iBullet", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DamageType_enum, (0x1f6<<8)+9, 0x118, "", 0, "m_EdtDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1f6<<8)+10, 0x11C, "", 0, "m_fBulletSize", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x1f6<<8)+11, 0x120, "", 0, "m_iBatchID", 0x0UL, 0),
};
#define CBullet_propertiesct ARRAYCOUNT(CBullet_properties)

CEntityComponent CBullet_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001f6<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CBullet_componentsct ARRAYCOUNT(CBullet_components)

CEventHandlerEntry CBullet_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBullet::Main),DEBUGSTRING("CBullet::Main")},
};
#define CBullet_handlersct ARRAYCOUNT(CBullet_handlers)

CEntity *CBullet_New(void) { return new CBullet; };
void CBullet_OnInitClass(void) {};
void CBullet_OnEndClass(void) {};
void CBullet_OnPrecache(CDLLEntityClass *pdec, INDEX iUser);
void CBullet_OnWorldEnd(CWorld *pwo) {};
void CBullet_OnWorldInit(CWorld *pwo) {};
void CBullet_OnWorldTick(CWorld *pwo) {};
void CBullet_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBullet, CEntity, "Bullet", "", 502);
DECLARE_CTFILENAME(_fnmCBullet_tbn, "");
