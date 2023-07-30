// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_ModelHolder2_INCLUDED
#define _EntitiesV_ModelHolder2_INCLUDED 1
#include <EntitiesV/ModelDestruction.h>
#include <EntitiesV/AnimationChanger.h>
#include <EntitiesV/BloodSpray.h>
extern DECL_DLL CEntityPropertyEnumType CustomShadingType_enum;
enum CustomShadingType {
  CST_NONE = 0,
  CST_FULL_CUSTOMIZED = 1,
  CST_CONSTANT_SHADING = 2,
};
DECL_DLL inline void ClearToDefault(CustomShadingType &e) { e = (CustomShadingType)0; } ;
extern DECL_DLL CEntityPropertyEnumType ShadowType_enum;
enum ShadowType {
  ST_NONE = 0,
  ST_CLUSTER = 1,
  ST_POLYGONAL = 2,
};
DECL_DLL inline void ClearToDefault(ShadowType &e) { e = (ShadowType)0; } ;
#define CModelHolder2_ClassID 210
extern "C" DECL_DLL CDLLEntityClass CModelHolder2_DLLClass;
class CModelHolder2 : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTFileName m_fnModel;
  CTFileName m_fnTexture;
  CTFileName m_fnReflection;
  CTFileName m_fnSpecular;
  CTFileName m_fnBump;
  FLOAT m_fStretchAll;
  FLOAT m_fStretchX;
  FLOAT m_fStretchY;
  FLOAT m_fStretchZ;
  CTString m_strName;
  CTString m_strDescription;
  BOOL m_bColliding;
  ANIMATION m_iModelAnimation;
  ANIMATION m_iTextureAnimation;
  enum ShadowType m_stClusterShadows;
  BOOL m_bBackground;
  BOOL m_bTargetable;
  enum CustomShadingType m_cstCustomShading;
  ANGLE3D m_aShadingDirection;
  COLOR m_colLight;
  COLOR m_colAmbient;
  CTFileName m_fnmLightAnimation;
  ANIMATION m_iLightAnimation;
  CAnimObject m_aoLightAnimation;
  BOOL m_bAttachments;
  BOOL m_bActive;
  FLOAT m_fMipAdd;
  FLOAT m_fMipMul;
  FLOAT m_fMipFadeDist;
  FLOAT m_fMipFadeLen;
  RANGE m_rMipFadeDistMetric;
  FLOAT m_fMipFadeLenMetric;
  BOOL m_bRandomStretch;
  FLOAT m_fStretchRndX;
  FLOAT m_fStretchRndY;
  FLOAT m_fStretchRndZ;
  FLOAT m_fStretchRndAll;
  FLOAT3D m_fStretchRandom;
  CEntityPointer m_penDestruction;
  FLOAT3D m_vDamage;
  FLOAT m_tmLastDamage;
  CEntityPointer m_penDestroyTarget;
  CEntityPointer m_penLastDamager;
  FLOAT m_tmSpraySpawned;
  FLOAT m_fSprayDamage;
  CEntityPointer m_penSpray;
  FLOAT m_fMaxDamageAmount;
  FLOAT m_fClassificationStretch;
  COLOR m_colBurning;
  enum DamageType m_dmtLastDamageType;
  FLOAT m_fChainSawCutDamage;
  INDEX m_iFirstRandomAnimation;
  FLOAT m_fMaxTessellationLevel;
  CTFileName m_fnVertexShader;
  CTFileName m_fnFragmentShader;
  CTFileName m_fnShaderTextureSampler0;
  CTFileName m_fnShaderTextureSampler1;
  CTFileName m_fnShaderTextureSampler2;
  CTFileName m_fnShaderTextureSampler3;
  CTFileName m_fnShaderTextureSampler4;
  FLOAT m_fnShaderParam0;
  FLOAT m_fnShaderParam1;
  FLOAT m_fnShaderParam2;
  FLOAT m_fnShaderParam3;
  FLOAT m_fnShaderParam4;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   FLOAT3D GetClassificationBoxStretch(void);
   FLOAT GetMaxTessellationLevel(void);
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void * GetEntityInfo(void);
   class CModelDestruction * GetDestruction(void);
   BOOL IsTargetable(void)const;
   CAnimData * GetAnimData(SLONG slPropertyOffset);
   void AdjustMipFactor(FLOAT & fMipFactor);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   void MirrorAndStretch(FLOAT fStretch,BOOL bMirrorX);
   void StretchModel(void);
   void InitModelHolder(void);
   SLONG GetUsedMemory(void);
#define  STATE_CModelHolder2_Die 0x00d20000
  BOOL Die(const CEntityEvent &__eeInput);
#define  STATE_CModelHolder2_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00d20001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00d20002_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_ModelHolder2_INCLUDED
