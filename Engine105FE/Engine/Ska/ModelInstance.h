#ifndef SE_INCL_MODELINSTANCE_H
#define SE_INCL_MODELINSTANCE_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Ska/Skeleton.h>
#include <Engine/Ska/AnimSet.h>
#include <Engine/Math/AABBox.h>
#include <Engine/Templates/StaticStackArray.h>
#include <Engine/Templates/StaticArray.h>
#include <Engine/Templates/DynamicContainer.h>
#include <Engine/Graphics/Shader.h>


struct ColisionBox
{
  FLOAT3D cb_vMin;
  FLOAT3D cb_vMax;
  CTString cb_strName;
};

struct MeshInstance
{
  CMesh *mi_pMesh;
  CStaticArray<struct TextureInstance> mi_tiTextures;
};

struct TextureInstance
{
  int ti_iTextureID;
  CTextureData *ti_tdTexture;
};

struct AnimQueue
{
  CStaticStackArray<struct AnimList> aq_Lists;
};

struct AnimList
{
  FLOAT al_fStartTime;
  FLOAT al_fFadeTime;
  CStaticStackArray<struct PlayedAnim> al_PlayedAnims;
};

struct PlayedAnim
{
  FLOAT pa_fStartTime;
  INDEX pa_iAnimID;
  ULONG pa_ulFlags;
  FLOAT pa_Strength;
  INDEX pa_GroupID;
};

class ENGINE_API CModelInstance
{
public:
  CModelInstance();
  ~CModelInstance();

  // add new mesh to model instance
  void AddMesh_t(CTFileName fnMesh);
  // add new skeleton to model instance
  void AddSkeleton_t(CTFileName fnSkeleton);
  // add new animset to model instance
  void AddAnimSet_t(CTFileName fnAnimSet);
  // add new texture to model instance
  void AddTexture_t(CTFileName fnTexture, CTString strTexID,MeshInstance *pmshi);
  // add child model instance
  void AddChild(CModelInstance *pmi);
  // remove child model instance
  void RemoveChild(CModelInstance *pmi);
  // set parent bone of model instance
  void SetParentBone(INDEX iParentBoneID);
  // get parent of model instance
  CModelInstance *GetParent(CModelInstance *pmiStartFrom);
  // get first parent that does not reference its child model instance
  CModelInstance *GetFirstNonReferencedParent(CModelInstance *pmiRoot);
  // change parent of model instance
  void ChangeParent(CModelInstance *miOldParent, CModelInstance *miNewParent);
  // set offest of model instance
  void SetOffset(FLOAT fOffset[6]);
  // add new cloned anim state
  void NewClonedState(FLOAT fFadeTime);
  // add new clear anim state
  void NewClearState(FLOAT fFadeTime);
  // add animation to last anim queue
  void AddAnimation(INDEX iAnimID, DWORD dwFlags, FLOAT fStrength,INDEX iGroupID);
  // remove all animations before last animation that has fully faded in
  void RemovePassedAnimsFromQueue();
  // remove animation from anim queue
  void RemAnimation(INDEX iAnimID);
  // remove all animations from anim queue with same ID
  void RemAnimsWithID(INDEX iGroupID);
  // stop all animations in anim queue
  void StopAllAnimations(FLOAT fFadeTime);
  // get current colisiont box
  void GetCurentColisionBox(FLOATaabbox3D &paabbox);
  // add new colision box to model instance
  void AddColisionBox(CTString strName,FLOAT3D vMin,FLOAT3D vMax);
  // remove colision box from model instance
  void RemoveColisionBox(INDEX iIndex);
  // flag for parser to remember source file names
  static void EnableSrcRememberFN(BOOL bEnable);
  // clear model instance
  void Clear();

  // pointer to skeleton of this model instance
  CSkeleton *mi_psklSkeleton;
  // array of mesh instances for this model isntance
  CStaticArray<struct MeshInstance> mi_aMeshInst;
  // array of colision box for this model instance
  CStaticArray<struct ColisionBox> mi_cbAABox;
  // array of animsets for this model instance
  CDynamicContainer<class CAnimSet> mi_aAnimSet;
  // array of child model instances for this model instance
  CDynamicContainer<class CModelInstance> mi_cmiChildren;
  // current animation queue for this model instance
  AnimQueue mi_aqAnims;
  // current offset from parent model instance
  QVect mi_qvOffset;
  // ID of parent bone in parent model instance
  INDEX mi_iParentBoneID;
  // index of current colision box in colision box array
  INDEX mi_iCurentBBox;
  // color of this model instance ???
  COLOR mi_colModelColor;
  // stretch of this model instance ???
  FLOAT3D mi_vStretch;
  // name of this model instance
  CTString mi_strName;
  // source file name of this model instance [used only for ska studio]
  CTFileName  mi_fnSourceFile;
}; 

ENGINE_API CModelInstance *ParseSmcFile_t(CTString &fnAnimFile);
ENGINE_API CModelInstance *CreateModelInstance(CTString strName);
ENGINE_API FLOAT CalculateFadeFactor(AnimList &alList);


#endif  /* include-once check. */
