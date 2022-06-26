#ifndef SE_INCL_RENDER_H
#define SE_INCL_RENDER_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif
#include <Engine/Math/Vector.h>
#include <Engine/Math/Quaternion.h>
#include <Engine/Ska/ModelInstance.h>
#include <Engine/Ska/Skeleton.h>
#include <Engine/Ska/Mesh.h>

#define RMF_WIREFRAME           (1UL<<0) // set wireframe on
#define RMF_SHOWSKELETON        (1UL<<1) // show skeleton
#define RMF_SHOWTEXTURE         (1UL<<2) // show texture
#define RMF_SHOWNORMALS         (1UL<<3) // show normalas  
// Rendering structures
struct RenModel
{
  CModelInstance *rm_pmiModel;
  INDEX rm_iParentModelIndex; // index of parent in _aRenModel array
  INDEX rm_iParentBoneIndex; 
  Matrix12 rm_mTransform;     // for models without skeletons 
  
  INDEX rm_iFirstBone;        // index in array _aRenBones where is this RenModel's first bone
  INDEX rm_ctBones;           // how much bones in array
  INDEX rm_iFirstMesh;
  INDEX rm_ctMeshes;
  INDEX rm_iFirstChildModel;
  INDEX rm_iNextSiblingModel;

  INDEX rm_iSkeletonLODIndex; // curent LOD index of slod_aBones array in Skeleton

};

struct RenBone
{
  SkeletonBone *rb_psbBone;
  INDEX rb_iParentIndex;
  INDEX rb_iRenModelIndex;
  AnimPos rb_apPos;
  AnimRot rb_arRot;
  Matrix12 rb_mTransform;
  Matrix12 rb_mBonePos;
};

struct RenMorph
{
  MeshMorphMap *rmp_pmmmMorphMap;
  FLOAT rmp_fFactor;
};

struct RenWeight
{
  MeshWeightMap *rw_pwmWeightMap;
  INDEX rw_iBoneIndex;
};

struct RenMesh
{
  struct MeshInstance *rmsh_pMeshInst;
  INDEX rmsh_iRenModelIndex;
  INDEX rmsh_iFirstWeight;
  INDEX rmsh_ctWeights;
  INDEX rmsh_iFirstMorph;
  INDEX rmsh_ctMorphs;
  INDEX rmsh_iMeshLODIndex;           // curent LOD index of msh_aMeshLODs array in Mesh
};

// initialize batch model rendering
ENGINE_API void RM_BeginRenderingView(CAnyProjection3D &apr, CDrawPort *pdp);
// cleanup after batch model rendering
ENGINE_API void RM_EndRenderingView(void);
// setup light parameters
ENGINE_API void RM_SetLightArray(ShaderLight **paLights,INDEX ctLights);

ENGINE_API void RM_SetLightDirection(const FLOAT3D &vLightDir);
ENGINE_API void RM_SetLightColor(COLOR colAmbient, COLOR colLight);
// LOD factor management
ENGINE_API void RM_SetDistanceFactor(FLOAT fDistFactor);
ENGINE_API FLOAT RM_GetMipFactor(void);
// setup object position
ENGINE_API void RM_SetObjectPlacement(const CPlacement3D &pl);
ENGINE_API void RM_SetObjectPlacement(const FLOATmatrix3D &m, const FLOAT3D &v);
// render one SKA model with its children
ENGINE_API void RM_RenderSKA(CModelInstance &mi);
// render one bone in model instance
ENGINE_API void RM_RenderBone(CModelInstance &mi,INDEX iBoneID);
ENGINE_API void RM_RenderBoundingBox(CModelInstance &mi,INDEX icb);
// lods
ENGINE_API void RM_SetCustomMeshLodDistance(FLOAT fMeshLod);
ENGINE_API void RM_SetCustomSkeletonLodDistance(FLOAT fSkeletonLod);
ENGINE_API void RM_RenderGround(CTextureData &td);

// Matrix12 operations
ENGINE_API void Matrix12ToQVect(QVect &qv,const Matrix12 &m12);
ENGINE_API void MatrixMultiply(Matrix12 &c,const Matrix12 &m, const Matrix12 &n);

// model flags
ENGINE_API void RM_SetFlags(ULONG ulNewFlags);
ENGINE_API ULONG RM_GetFlags();
ENGINE_API void RM_AddFlag(ULONG ulFlag);
ENGINE_API void RM_RemoveFlag(ULONG ulFlag);


#endif  /* include-once check. */

