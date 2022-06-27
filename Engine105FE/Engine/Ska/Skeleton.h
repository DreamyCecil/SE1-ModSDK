#ifndef SE_INCL_SKELETON_H
#define SE_INCL_SKELETON_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Math/Quaternion.h>
#include <Engine/Base/CTString.h>
#include <Engine/Math/Vector.h>
#include <Engine/Math/Placement.h>
#include <Engine/Graphics/Texture.h>
#include <Engine/Templates/DynamicArray.h>
#include <Engine/Templates/StaticArray.h>
#include <Engine/Base/Serial.h>


struct QVect
{
  FLOAT3D vPos;
  FLOATquat3D qRot;
};

struct ENGINE_API SkeletonLOD
{
  FLOAT slod_fMaxDistance;
  CStaticArray<struct SkeletonBone> slod_aBones;
  CTString slod_fnSourceFile;
};

struct ENGINE_API SkeletonBone
{
  INDEX sb_iID;               // ID of bone (name)
  INDEX sb_iParentID;         // ID of parent bone (name) // Index of parent bone (when importing this used as Parents ID (name))
  Matrix12 sb_mAbsPlacement;  // default bone placement
  QVect sb_qvRelPlacement;    // default bone placement (same as mAbsPlacement)
  FLOAT sb_fOffSetLen;
  FLOAT sb_fBoneLength;
};

class ENGINE_API CSkeleton : public CSerial
{
public:
  CSkeleton();
  ~CSkeleton();
  
  INDEX FindBone(INDEX iBoneID);
  INDEX FindBoneInLOD(INDEX iBoneID,INDEX iSkeletonLod);
  void SortSkeleton();
  void SortSkeletonRecursive(INDEX iParentID, INDEX iSkeletonLod);
  void CalculateAbsoluteTransformations(INDEX iSkeletonLod);
  void AddSkletonLod(SkeletonLOD &slod);
  void RemoveSkeletonLod(SkeletonLOD *pslodRemove);

  void Read_t( CTStream *istrFile); // throw char *
  void Write_t( CTStream *ostrFile); // throw char *
  void Clear(void);

  CStaticArray<struct SkeletonLOD>  skl_aSkeletonLODs;
}; 




#endif  /* include-once check. */

