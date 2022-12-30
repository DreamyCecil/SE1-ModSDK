// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

EP_ENUMBEG(DestructionDebrisType)
  EP_ENUMVALUE(DDT_STONE, "Stone"),
  EP_ENUMVALUE(DDT_WOOD, "Wood"),
  EP_ENUMVALUE(DDT_PALM, "Palm"),
  EP_ENUMVALUE(DDT_CHILDREN_CUSTOM, "Custom (children)"),
EP_ENUMEND(DestructionDebrisType);

#define ENTITYCLASS CModelDestruction

CEntityProperty CModelDestruction_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000d9<<8)+1, offsetof(CModelDestruction, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000d9<<8)+2, offsetof(CModelDestruction, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+10, offsetof(CModelDestruction, m_penModel0), "Model 0", 'M', C_RED  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+11, offsetof(CModelDestruction, m_penModel1), "Model 1", 0, C_RED  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+12, offsetof(CModelDestruction, m_penModel2), "Model 2", 0, C_RED  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+13, offsetof(CModelDestruction, m_penModel3), "Model 3", 0, C_RED  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+14, offsetof(CModelDestruction, m_penModel4), "Model 4", 0, C_RED  | 0x80, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+20, offsetof(CModelDestruction, m_fHealth), "Health", 'H', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DestructionDebrisType_enum, (0x000000d9<<8)+22, offsetof(CModelDestruction, m_ddtDebris), "Debris", 'D', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000d9<<8)+23, offsetof(CModelDestruction, m_ctDebris), "Debris Count", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+24, offsetof(CModelDestruction, m_fDebrisSize), "Debris Size", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EntityInfoBodyType_enum, (0x000000d9<<8)+25, offsetof(CModelDestruction, m_eibtBodyType), "Body Type", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SprayParticlesType_enum, (0x000000d9<<8)+26, offsetof(CModelDestruction, m_sptType), "Particle Type", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+27, offsetof(CModelDestruction, m_fParticleSize), "Particle Size", 'Z', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d9<<8)+28, offsetof(CModelDestruction, m_bRequireExplosion), "Requires Explosion", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+29, offsetof(CModelDestruction, m_fDebrisLaunchPower), "CC: Debris Launch Power", 'L', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DebrisParticlesType_enum, (0x000000d9<<8)+30, offsetof(CModelDestruction, m_dptParticles), "CC: Trail particles", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0x000000d9<<8)+31, offsetof(CModelDestruction, m_betStain), "CC: Leave stain", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+32, offsetof(CModelDestruction, m_fLaunchCone), "CC: Launch cone", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+33, offsetof(CModelDestruction, m_fRndRotH), "CC: Rotation heading", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+34, offsetof(CModelDestruction, m_fRndRotP), "CC: Rotation pitch", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+35, offsetof(CModelDestruction, m_fRndRotB), "CC: Rotation banking", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+36, offsetof(CModelDestruction, m_fParticleLaunchPower), "Particle Launch Power", 'P', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x000000d9<<8)+37, offsetof(CModelDestruction, m_colParticles), "Central Particle Color", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0x000000d9<<8)+40, offsetof(CModelDestruction, m_iStartAnim), "Start anim", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d9<<8)+41, offsetof(CModelDestruction, m_bDebrisImmaterialASAP), "Immaterial ASAP", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000d9<<8)+50, offsetof(CModelDestruction, m_ctDustFall), "Dusts Count", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+51, offsetof(CModelDestruction, m_fMinDustFallHeightRatio), "Dust Min Height Ratio", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+52, offsetof(CModelDestruction, m_fMaxDustFallHeightRatio), "Dust Max Height Ratio", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+53, offsetof(CModelDestruction, m_fDustStretch), "Dust Stretch", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+54, offsetof(CModelDestruction, m_fDebrisDustRandom), "Dust Debris Random", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000d9<<8)+55, offsetof(CModelDestruction, m_fDebrisDustStretch), "Dust Debris Stretch", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d9<<8)+56, offsetof(CModelDestruction, m_penShake), "Shake marker", 'A', 0x7F0000FFUL, 0),
};
#define CModelDestruction_propertiesct ARRAYCOUNT(CModelDestruction_properties)

CEntityComponent CModelDestruction_components[] = {
#define MODEL_MODELDESTRUCTION ((0x000000d9<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MODELDESTRUCTION, "EFNM" "Models\\Editor\\ModelDestruction.mdl"),
#define TEXTURE_MODELDESTRUCTION ((0x000000d9<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MODELDESTRUCTION, "EFNM" "Models\\Editor\\ModelDestruction.tex"),
#define CLASS_BASIC_EFFECT ((0x000000d9<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define MODEL_WOOD ((0x000000d9<<8)+10)
 CEntityComponent(ECT_MODEL, MODEL_WOOD, "EFNM" "Models\\Effects\\Debris\\Wood01\\Wood.mdl"),
#define TEXTURE_WOOD ((0x000000d9<<8)+11)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WOOD, "EFNM" "Models\\Effects\\Debris\\Wood01\\Wood.tex"),
#define MODEL_BRANCH ((0x000000d9<<8)+12)
 CEntityComponent(ECT_MODEL, MODEL_BRANCH, "EFNM" "ModelsMP\\Effects\\Debris\\Tree\\Tree.mdl"),
#define TEXTURE_BRANCH ((0x000000d9<<8)+13)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BRANCH, "EFNM" "ModelsMP\\Plants\\Tree01\\Tree01.tex"),
#define MODEL_STONE ((0x000000d9<<8)+14)
 CEntityComponent(ECT_MODEL, MODEL_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.mdl"),
#define TEXTURE_STONE ((0x000000d9<<8)+15)
 CEntityComponent(ECT_TEXTURE, TEXTURE_STONE, "EFNM" "Models\\Effects\\Debris\\Stone\\Stone.tex"),
};
#define CModelDestruction_componentsct ARRAYCOUNT(CModelDestruction_components)

CEventHandlerEntry CModelDestruction_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CModelDestruction::Main),DEBUGSTRING("CModelDestruction::Main")},
};
#define CModelDestruction_handlersct ARRAYCOUNT(CModelDestruction_handlers)

CEntity *CModelDestruction_New(void) { return new CModelDestruction; };
void CModelDestruction_OnInitClass(void) {};
void CModelDestruction_OnEndClass(void) {};
void CModelDestruction_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CModelDestruction_OnWorldEnd(CWorld *pwo) {};
void CModelDestruction_OnWorldInit(CWorld *pwo) {};
void CModelDestruction_OnWorldTick(CWorld *pwo) {};
void CModelDestruction_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CModelDestruction, CEntity, "ModelDestruction", "Thumbnails\\ModelDestruction.tbn", 0x000000d9);
DECLARE_CTFILENAME(_fnmCModelDestruction_tbn, "Thumbnails\\ModelDestruction.tbn");
