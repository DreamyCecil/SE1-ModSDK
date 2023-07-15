// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_ModelHolder2Movable_INCLUDED
#define _EntitiesV_ModelHolder2Movable_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
extern "C" DECL_DLL CDLLEntityClass CModelHolder2Movable_DLLClass;
class CModelHolder2Movable : public CMovableEntity {
public:
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

  BOOL H0xF50000_Procedure_0(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0xF50001_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0xF50002_Procedure_3(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_ModelHolder2Movable_INCLUDED
