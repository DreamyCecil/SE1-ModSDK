// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CDevilProjectile

CEntityProperty CDevilProjectile_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1ff<<8)+1, 0x340, "", 0, "m_penLauncher", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x1ff<<8)+2, 0x344, "", 0, "m_penTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1ff<<8)+10, 0x348, "", 0, "m_fIgnoreTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x1ff<<8)+11, 0x34C, "", 0, "m_fStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x1ff<<8)+12, 0x350, "", 0, "m_vDesiredAngle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x1ff<<8)+13, 0x35C, "", 0, "m_bFly", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x1ff<<8)+20, 0x360, "", 0, "m_soEffect", 0x0UL, 0),
};
#define CDevilProjectile_propertiesct ARRAYCOUNT(CDevilProjectile_properties)

CEntityComponent CDevilProjectile_components[] = {
#define CLASS_BASIC_EFFECT ((0x000001ff<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_LIGHT ((0x000001ff<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_LIGHT, "EFNM" "Classes\\Light.ecl"),
#define MODEL_FLARE ((0x000001ff<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_FLARE, "EFNM" "Models\\Enemies\\Devil\\Flare.mdl"),
#define TEXTURE_FLARE ((0x000001ff<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE, "EFNM" "Models\\Enemies\\Devil\\12.tex"),
};
#define CDevilProjectile_componentsct ARRAYCOUNT(CDevilProjectile_components)

CEventHandlerEntry CDevilProjectile_handlers[] = {
 {0x01ff0001, -1, CEntity::pEventHandler(&CDevilProjectile::Fly),DEBUGSTRING("CDevilProjectile::Fly")},
 {0x01ff0002, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0002_Fly_01), DEBUGSTRING("CDevilProjectile::H0x01ff0002_Fly_01")},
 {0x01ff0003, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0003_Fly_02), DEBUGSTRING("CDevilProjectile::H0x01ff0003_Fly_02")},
 {0x01ff0004, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0004_Fly_03), DEBUGSTRING("CDevilProjectile::H0x01ff0004_Fly_03")},
 {0x01ff0005, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0005_Fly_04), DEBUGSTRING("CDevilProjectile::H0x01ff0005_Fly_04")},
 {1, -1, CEntity::pEventHandler(&CDevilProjectile::Main),DEBUGSTRING("CDevilProjectile::Main")},
 {0x01ff0006, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0006_Main_01), DEBUGSTRING("CDevilProjectile::H0x01ff0006_Main_01")},
 {0x01ff0007, -1, CEntity::pEventHandler(&CDevilProjectile::H0x01ff0007_Main_02), DEBUGSTRING("CDevilProjectile::H0x01ff0007_Main_02")},
};
#define CDevilProjectile_handlersct ARRAYCOUNT(CDevilProjectile_handlers)

CEntity *CDevilProjectile_New(void) { return new CDevilProjectile; };
void CDevilProjectile_OnInitClass(void) {};
void CDevilProjectile_OnEndClass(void) {};
void CDevilProjectile_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CDevilProjectile_OnWorldEnd(CWorld *pwo) {};
void CDevilProjectile_OnWorldInit(CWorld *pwo) {};
void CDevilProjectile_OnWorldTick(CWorld *pwo) {};
void CDevilProjectile_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CDevilProjectile, CMovableModelEntity, "Devil projectile", "", 511);
DECLARE_CTFILENAME(_fnmCDevilProjectile_tbn, "");
