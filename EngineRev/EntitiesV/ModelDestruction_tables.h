// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(DestructionDebrisType)
  EP_ENUMVALUE(DDT_STONE, "Stone"),
  EP_ENUMVALUE(DDT_WOOD, "Wood"),
  EP_ENUMVALUE(DDT_PALM, "Palm"),
  EP_ENUMVALUE(DDT_CHILDREN_CUSTOM, "Custom (children)"),
EP_ENUMEND(DestructionDebrisType);

#define ENTITYCLASS CModelDestruction

CEntityProperty CModelDestruction_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd9<<8)+1, 0xE8, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0xd9<<8)+2, 0xEC, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+10, 0xF0, "Model 0", 'M', "m_penModel0", 0xFF000080UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+11, 0xF4, "Model 1", 0, "m_penModel1", 0xFF000080UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+12, 0xF8, "Model 2", 0, "m_penModel2", 0xFF000080UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+13, 0xFC, "Model 3", 0, "m_penModel3", 0xFF000080UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+14, 0x100, "Model 4", 0, "m_penModel4", 0xFF000080UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+20, 0x104, "Health", 'H', "m_fHealth", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DestructionDebrisType_enum, (0xd9<<8)+22, 0x108, "Debris", 'D', "m_ddtDebris", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd9<<8)+23, 0x10C, "Debris Count", 0, "m_ctDebris", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+24, 0x110, "Debris Size", 0, "m_fDebrisSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &EntityInfoBodyType_enum, (0xd9<<8)+25, 0x114, "Body Type", 0, "m_eibtBodyType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &SprayParticlesType_enum, (0xd9<<8)+26, 0x118, "Particle Type", 0, "m_sptType", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+27, 0x11C, "Particle Size", 'Z', "m_fParticleSize", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd9<<8)+28, 0x120, "Requires Explosion", 0, "m_bRequireExplosion", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+29, 0x124, "CC: Debris Launch Power", 'L', "m_fDebrisLaunchPower", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DebrisParticlesType_enum, (0xd9<<8)+30, 0x128, "CC: Trail particles", 0, "m_dptParticles", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &BasicEffectType_enum, (0xd9<<8)+31, 0x12C, "CC: Leave stain", 0, "m_betStain", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+32, 0x130, "CC: Launch cone", 0, "m_fLaunchCone", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+33, 0x134, "CC: Rotation heading", 0, "m_fRndRotH", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+34, 0x138, "CC: Rotation pitch", 0, "m_fRndRotP", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+35, 0x13C, "CC: Rotation banking", 0, "m_fRndRotB", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+36, 0x140, "Particle Launch Power", 'P', "m_fParticleLaunchPower", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0xd9<<8)+37, 0x144, "Central Particle Color", 'C', "m_colParticles", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMATION, NULL, (0xd9<<8)+40, 0x148, "Start anim", 0, "m_iStartAnim", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0xd9<<8)+41, 0x14C, "Immaterial ASAP", 0, "m_bDebrisImmaterialASAP", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0xd9<<8)+50, 0x150, "Dusts Count", 0, "m_ctDustFall", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+51, 0x154, "Dust Min Height Ratio", 0, "m_fMinDustFallHeightRatio", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+52, 0x158, "Dust Max Height Ratio", 0, "m_fMaxDustFallHeightRatio", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+53, 0x15C, "Dust Stretch", 0, "m_fDustStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+54, 0x160, "Dust Debris Random", 0, "m_fDebrisDustRandom", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0xd9<<8)+55, 0x164, "Dust Debris Stretch", 0, "m_fDebrisDustStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0xd9<<8)+56, 0x168, "Shake marker", 'A', "m_penShake", 0x7F0000FFUL, 0),
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
ENTITY_CLASSDEFINITION(CModelDestruction, CEntity, "ModelDestruction", "Thumbnails\\ModelDestruction.tbn", 217);
DECLARE_CTFILENAME(_fnmCModelDestruction_tbn, "Thumbnails\\ModelDestruction.tbn");
