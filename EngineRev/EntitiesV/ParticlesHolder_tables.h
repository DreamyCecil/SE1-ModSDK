// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(ParticlesHolderType)
  EP_ENUMVALUE(PHT_SPIRAL, "Spiral"),
  EP_ENUMVALUE(PHT_EMANATE, "Emanate"),
  EP_ENUMVALUE(PHT_STARDUST, "Stardust"),
  EP_ENUMVALUE(PHT_ATOMIC, "Atomic"),
  EP_ENUMVALUE(PHT_RISING, "Rising"),
  EP_ENUMVALUE(PHT_FOUNTAIN, "Fountain"),
  EP_ENUMVALUE(PHT_SMOKE, "Smoke"),
  EP_ENUMVALUE(PHT_BLOOD, "Blood"),
  EP_ENUMVALUE(PHT_EMANATEPLANE, "EmanatePlane"),
  EP_ENUMVALUE(PHT_SANDFLOW, "SandFlow"),
  EP_ENUMVALUE(PHT_WATERFLOW, "WaterFlow"),
  EP_ENUMVALUE(PHT_LAVAFLOW, "Lava Flow"),
  EP_ENUMVALUE(PHT_LAVAERUPTING, "Lava Erupting"),
  EP_ENUMVALUE(PHT_WATERFALLFOAM, "Waterfall foam"),
  EP_ENUMVALUE(PHT_CHIMNEYSMOKE, "Chimney smoke"),
  EP_ENUMVALUE(PHT_WATERFALL, "Waterfall"),
  EP_ENUMVALUE(PHT_TWISTER, "Twister"),
  EP_ENUMVALUE(PHT_ROCKETMOTOR, "Rocket motor"),
  EP_ENUMVALUE(PHT_COLLECT_ENERGY, "Collect energy"),
EP_ENUMEND(ParticlesHolderType);

#define ENTITYCLASS CParticlesHolder

CEntityProperty CParticlesHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &ParticlesHolderType_enum, (0xdf<<8)+1, 0x340, "Type", 'Y', "m_phtType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ParticleTexture_enum, (0xdf<<8)+2, 0x344, "Texture", 'T', "m_ptTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xdf<<8)+3, 0x348, "Count", 'C', "m_ctCount", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+4, 0x34C, "StretchAll", 'S', "m_fStretchAll", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+5, 0x350, "StretchX", 'X', "m_fStretchX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+6, 0x354, "StretchY", 'Y', "m_fStretchY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+7, 0x358, "StretchZ", 'Z', "m_fStretchZ", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdf<<8)+8, 0x35C, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xdf<<8)+12, 0x360, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdf<<8)+13, 0x364, "Background", 'B', "m_bBackground", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdf<<8)+21, 0x368, "Targetable", 0, "m_bTargetable", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+30, 0x36C, "Size", 0, "m_fSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+31, 0x370, "Param1", 'P', "m_fParam1", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+32, 0x374, "Param2", 0, "m_fParam2", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+33, 0x378, "Param3", 0, "m_fParam3", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xdf<<8)+34, 0x37C, "Active", 'A', "m_bActive", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+35, 0x380, "", 0, "m_fActivateTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+36, 0x384, "", 0, "m_fDeactivateTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xdf<<8)+37, 0x388, "Disappear mip factor", 0, "m_fMipFactorDisappear", 0x7F0000FFUL, 0),
};
#define CParticlesHolder_propertiesct ARRAYCOUNT(CParticlesHolder_properties)

CEntityComponent CParticlesHolder_components[] = {
#define MODEL_TELEPORT ((0x000000df<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, "EFNM" "Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x000000df<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, "EFNM" "Models\\Editor\\BoundingBox.tex"),
};
#define CParticlesHolder_componentsct ARRAYCOUNT(CParticlesHolder_components)

CEventHandlerEntry CParticlesHolder_handlers[] = {
 {0x00df0000, -1, CEntity::pEventHandler(&CParticlesHolder::Active),DEBUGSTRING("CParticlesHolder::Active")},
 {0x00df0001, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0001_Active_01), DEBUGSTRING("CParticlesHolder::H0x00df0001_Active_01")},
 {0x00df0002, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0002_Active_02), DEBUGSTRING("CParticlesHolder::H0x00df0002_Active_02")},
 {0x00df0003, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0003_Active_03), DEBUGSTRING("CParticlesHolder::H0x00df0003_Active_03")},
 {0x00df0004, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0004_Active_04), DEBUGSTRING("CParticlesHolder::H0x00df0004_Active_04")},
 {0x00df0005, -1, CEntity::pEventHandler(&CParticlesHolder::Inactive),DEBUGSTRING("CParticlesHolder::Inactive")},
 {0x00df0006, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0006_Inactive_01), DEBUGSTRING("CParticlesHolder::H0x00df0006_Inactive_01")},
 {0x00df0007, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0007_Inactive_02), DEBUGSTRING("CParticlesHolder::H0x00df0007_Inactive_02")},
 {1, -1, CEntity::pEventHandler(&CParticlesHolder::Main),DEBUGSTRING("CParticlesHolder::Main")},
};
#define CParticlesHolder_handlersct ARRAYCOUNT(CParticlesHolder_handlers)

CEntity *CParticlesHolder_New(void) { return new CParticlesHolder; };
void CParticlesHolder_OnInitClass(void) {};
void CParticlesHolder_OnEndClass(void) {};
void CParticlesHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CParticlesHolder_OnWorldEnd(CWorld *pwo) {};
void CParticlesHolder_OnWorldInit(CWorld *pwo) {};
void CParticlesHolder_OnWorldTick(CWorld *pwo) {};
void CParticlesHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CParticlesHolder, CMovableModelEntity, "ParticlesHolder", "Thumbnails\\ParticlesHolder.tbn", 223);
DECLARE_CTFILENAME(_fnmCParticlesHolder_tbn, "Thumbnails\\ParticlesHolder.tbn");
