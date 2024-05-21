// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_WorldBase_INCLUDED
#define _EntitiesV_WorldBase_INCLUDED 1
#include <EntitiesV\FogMarker.h>
#include <EntitiesV\HazeMarker.h>
#include <EntitiesV\MirrorMarker.h>
#include <EntitiesV\GradientMarker.h>
#define CWorldBase_ClassID 100
extern "C" DECL_DLL CDLLEntityClass CWorldBase_DLLClass;
class CWorldBase : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  BOOL m_bZoning;
  BOOL m_bBackground;
  BOOL m_bAnchored;
  BOOL m_bBarrier;
  BOOL m_bCollisions;
  BOOL m_bOnlyBlocksPlayer;
  CEntityPointer m_penGravity0;
  CEntityPointer m_penGravity1;
  CEntityPointer m_penGravity2;
  CEntityPointer m_penGravity3;
  CEntityPointer m_penGravity4;
  CEntityPointer m_penGravity5;
  CEntityPointer m_penGravity6;
  CEntityPointer m_penGravity7;
  CEntityPointer m_penGravity8;
  CEntityPointer m_penGravity9;
  CEntityPointer m_penFog0;
  CEntityPointer m_penFog1;
  CEntityPointer m_penFog2;
  CEntityPointer m_penFog3;
  CEntityPointer m_penFog4;
  CEntityPointer m_penFog5;
  CEntityPointer m_penFog6;
  CEntityPointer m_penFog7;
  CEntityPointer m_penFog8;
  CEntityPointer m_penFog9;
  CEntityPointer m_penHaze0;
  CEntityPointer m_penHaze1;
  CEntityPointer m_penHaze2;
  CEntityPointer m_penHaze3;
  CEntityPointer m_penHaze4;
  CEntityPointer m_penMirror0;
  CEntityPointer m_penMirror1;
  CEntityPointer m_penMirror2;
  CEntityPointer m_penMirror3;
  CEntityPointer m_penMirror4;
  CEntityPointer m_penGradient0;
  CEntityPointer m_penGradient1;
  CEntityPointer m_penGradient2;
  CEntityPointer m_penGradient3;
  CEntityPointer m_penGradient4;
  CEntityPointer m_penGradient5;
  CEntityPointer m_penGradient6;
  CEntityPointer m_penGradient7;
  CEntityPointer m_penGradient8;
  CEntityPointer m_penGradient9;
  CEntityPointer m_penGradient10;
  CEntityPointer m_penGradient11;
  CEntityPointer m_penGradient12;
  CEntityPointer m_penGradient13;
  CEntityPointer m_penGradient14;
  CEntityPointer m_penGradient15;
  CEntityPointer m_penGradient16;
  CEntityPointer m_penGradient17;
  CEntityPointer m_penGradient18;
  CEntityPointer m_penGradient19;
  ULONG m_cbClassificationBits;
  ULONG m_vbVisibilityBits;
  FLOAT m_fOpacity;
   ULONG GetVisTweaks(void);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   const CTString & GetForceName(INDEX iForce);
   void GetForce(INDEX iForce,const FLOAT3D & vPoint,CForceStrength & fsGravity,CForceStrength & fsField);
   CEntity * GetForceController(INDEX iForce);
   const CTString & GetFogName(INDEX iFog);
   BOOL GetFog(INDEX iFog,class CFogParameters & fpFog);
   const CTString & GetHazeName(INDEX iHaze);
   BOOL GetHaze(INDEX iHaze,class CHazeParameters & hpHaze,FLOAT3D & vViewDir);
   const CTString & GetMirrorName(INDEX iMirror);
   BOOL GetMirror(INDEX iMirror,class CMirrorParameters & mpMirror);
   const CTString & GetGradientName(INDEX iGradient);
   void UncacheShadowsForGradient(class CGradientMarker * penDiscard);
   BOOL GetGradient(INDEX iGradient,class CGradientParameters & fpGradient);
   BOOL HandleEvent(const CEntityEvent & ee);
   SLONG GetUsedMemory(void);
   FLOAT GetOpacity(void);
#define  STATE_CWorldBase_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_WorldBase_INCLUDED