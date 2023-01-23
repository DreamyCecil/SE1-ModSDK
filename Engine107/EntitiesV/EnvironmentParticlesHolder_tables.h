// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(EnvironmentParticlesHolderType)
  EP_ENUMVALUE(EPTH_NONE, "None"),
  EP_ENUMVALUE(EPTH_GROWTH, "Growth"),
  EP_ENUMVALUE(EPTH_RAIN, "Rain"),
  EP_ENUMVALUE(EPTH_SNOW, "Snow"),
EP_ENUMEND(EnvironmentParticlesHolderType);

#define ENTITYCLASS CEnvironmentParticlesHolder

CEntityProperty CEnvironmentParticlesHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000ed<<8)+1, offsetof(CEnvironmentParticlesHolder, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000ed<<8)+6, offsetof(CEnvironmentParticlesHolder, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000000ed<<8)+2, offsetof(CEnvironmentParticlesHolder, m_fnHeightMap), "Height map", 'R', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATAABBOX3D, NULL, (0x000000ed<<8)+3, offsetof(CEnvironmentParticlesHolder, m_boxHeightMap), "Height map box", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EnvironmentParticlesHolderType_enum, (0x000000ed<<8)+4, offsetof(CEnvironmentParticlesHolder, m_eptType), "Type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000ed<<8)+5, offsetof(CEnvironmentParticlesHolder, m_penNextHolder), "Next env. particles holder", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+10, offsetof(CEnvironmentParticlesHolder, m_tmRainStart), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+11, offsetof(CEnvironmentParticlesHolder, m_tmRainEnd), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+12, offsetof(CEnvironmentParticlesHolder, m_tmSnowStart), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+13, offsetof(CEnvironmentParticlesHolder, m_tmSnowEnd), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0x000000ed<<8)+20, offsetof(CEnvironmentParticlesHolder, m_moHeightMapHolder), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0x000000ed<<8)+22, offsetof(CEnvironmentParticlesHolder, m_moParticleTextureHolder), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000000ed<<8)+40, offsetof(CEnvironmentParticlesHolder, m_fnTexture), "Particle Texture", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+50, offsetof(CEnvironmentParticlesHolder, m_fGrowthRenderingStep), "Growth frequency", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+51, offsetof(CEnvironmentParticlesHolder, m_fGrowthRenderingRadius), "Growth radius", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+52, offsetof(CEnvironmentParticlesHolder, m_fGrowthRenderingRadiusFade), "Growth fade radius", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000ed<<8)+53, offsetof(CEnvironmentParticlesHolder, m_bGrowthHighresMap), "Growth high res map", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000ed<<8)+54, offsetof(CEnvironmentParticlesHolder, m_iGrowthMapX), "Growth map tiles X", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000ed<<8)+55, offsetof(CEnvironmentParticlesHolder, m_iGrowthMapY), "Growth map tiles Y", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+56, offsetof(CEnvironmentParticlesHolder, m_fGrowthMinSize), "Growth min. size", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+57, offsetof(CEnvironmentParticlesHolder, m_fGrowthMaxSize), "Growth max. size", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+58, offsetof(CEnvironmentParticlesHolder, m_fParticlesSinkFactor), "Growth sink factor", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+70, offsetof(CEnvironmentParticlesHolder, m_fRainAppearLen), "Rain start duration", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000ed<<8)+71, offsetof(CEnvironmentParticlesHolder, m_fSnowAppearLen), "Snow start duration", 0, 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CEnvironmentParticlesHolder, CRationalEntity, "EnvironmentParticlesHolder", "Thumbnails\\EnvironmentParticlesHolder.tbn", 0x000000ed);
DECLARE_CTFILENAME(_fnmCEnvironmentParticlesHolder_tbn, "Thumbnails\\EnvironmentParticlesHolder.tbn");