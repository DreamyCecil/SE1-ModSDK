// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(EnvironmentParticlesHolderType)
  EP_ENUMVALUE(EPTH_NONE, "None"),
  EP_ENUMVALUE(EPTH_GROWTH, "Growth"),
  EP_ENUMVALUE(EPTH_RAIN, "Rain"),
  EP_ENUMVALUE(EPTH_SNOW, "Snow"),
EP_ENUMEND(EnvironmentParticlesHolderType);

#define ENTITYCLASS CEnvironmentParticlesHolder

CEntityProperty CEnvironmentParticlesHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xed<<8)+1, 0x110, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xed<<8)+6, 0x114, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xed<<8)+2, 0x118, "Height map", 'R', "m_fnHeightMap", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0xed<<8)+3, 0x120, "Height map box", 'B', "m_boxHeightMap", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EnvironmentParticlesHolderType_enum, (0xed<<8)+4, 0x138, "Type", 'Y', "m_eptType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xed<<8)+5, 0x13C, "Next env. particles holder", 'T', "m_penNextHolder", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+10, 0x140, "", 0, "m_tmRainStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+11, 0x144, "", 0, "m_tmRainEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+12, 0x148, "", 0, "m_tmSnowStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+13, 0x14C, "", 0, "m_tmSnowEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0xed<<8)+20, 0x150, "", 0, "m_moHeightMapHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0xed<<8)+22, 0x250, "", 0, "m_moParticleTextureHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0xed<<8)+40, 0x350, "Particle Texture", 0, "m_fnTexture", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+50, 0x358, "Growth frequency", 0, "m_fGrowthRenderingStep", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+51, 0x35C, "Growth radius", 0, "m_fGrowthRenderingRadius", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+52, 0x360, "Growth fade radius", 0, "m_fGrowthRenderingRadiusFade", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xed<<8)+53, 0x364, "Growth high res map", 0, "m_bGrowthHighresMap", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xed<<8)+54, 0x368, "Growth map tiles X", 0, "m_iGrowthMapX", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xed<<8)+55, 0x36C, "Growth map tiles Y", 0, "m_iGrowthMapY", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+56, 0x370, "Growth min. size", 0, "m_fGrowthMinSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+57, 0x374, "Growth max. size", 0, "m_fGrowthMaxSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+58, 0x378, "Growth sink factor", 0, "m_fParticlesSinkFactor", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+70, 0x37C, "Rain start duration", 0, "m_fRainAppearLen", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xed<<8)+71, 0x380, "Snow start duration", 0, "m_fSnowAppearLen", 0x7F0000FFUL, 0),
};
#define CEnvironmentParticlesHolder_propertiesct ARRAYCOUNT(CEnvironmentParticlesHolder_properties)

CEntityComponent CEnvironmentParticlesHolder_components[] = {
#define MODEL_ENVIRONMENT_PARTICLES_HOLDER ((0x000000ed<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_ENVIRONMENT_PARTICLES_HOLDER, "EFNM" "ModelsMP\\Editor\\EnvironmentParticlesHolder.mdl"),
#define TEXTURE_ENVIRONMENT_PARTICLES_HOLDER ((0x000000ed<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_ENVIRONMENT_PARTICLES_HOLDER, "EFNM" "ModelsMP\\Editor\\EnvironmentParticlesHolder.tex"),
};
#define CEnvironmentParticlesHolder_componentsct ARRAYCOUNT(CEnvironmentParticlesHolder_components)

CEventHandlerEntry CEnvironmentParticlesHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CEnvironmentParticlesHolder::Main),DEBUGSTRING("CEnvironmentParticlesHolder::Main")},
 {0x00ed0000, -1, CEntity::pEventHandler(&CEnvironmentParticlesHolder::H0x00ed0000_Main_01), DEBUGSTRING("CEnvironmentParticlesHolder::H0x00ed0000_Main_01")},
 {0x00ed0001, -1, CEntity::pEventHandler(&CEnvironmentParticlesHolder::H0x00ed0001_Main_02), DEBUGSTRING("CEnvironmentParticlesHolder::H0x00ed0001_Main_02")},
};
#define CEnvironmentParticlesHolder_handlersct ARRAYCOUNT(CEnvironmentParticlesHolder_handlers)

CEntity *CEnvironmentParticlesHolder_New(void) { return new CEnvironmentParticlesHolder; };
void CEnvironmentParticlesHolder_OnInitClass(void) {};
void CEnvironmentParticlesHolder_OnEndClass(void) {};
void CEnvironmentParticlesHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CEnvironmentParticlesHolder_OnWorldEnd(CWorld *pwo) {};
void CEnvironmentParticlesHolder_OnWorldInit(CWorld *pwo) {};
void CEnvironmentParticlesHolder_OnWorldTick(CWorld *pwo) {};
void CEnvironmentParticlesHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CEnvironmentParticlesHolder, CRationalEntity, "EnvironmentParticlesHolder", "Thumbnails\\EnvironmentParticlesHolder.tbn", 237);
DECLARE_CTFILENAME(_fnmCEnvironmentParticlesHolder_tbn, "Thumbnails\\EnvironmentParticlesHolder.tbn");
