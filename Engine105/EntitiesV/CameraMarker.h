// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_CameraMarker_INCLUDED
#define _EntitiesV_CameraMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CCameraMarker_DLLClass;
class CCameraMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fDeltaTime;
  FLOAT m_fBias;
  FLOAT m_fTension;
  FLOAT m_fContinuity;
  BOOL m_bStopMoving;
  FLOAT m_fFOV;
  BOOL m_bSkipToNext;
  COLOR m_colFade;
  CEntityPointer m_penTrigger;
  CEntityPointer m_penViewTarget;
  FLOAT3D m_vPosRatio;
  FLOAT m_fRatioX;
  FLOAT m_fRatioY;
  FLOAT m_fRatioZ;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
#define  STATE_CCameraMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CCameraMarker_propnames[] = {
  "m_fDeltaTime",
  "m_fBias",
  "m_fTension",
  "m_fContinuity",
  "m_bStopMoving",
  "m_fFOV",
  "m_bSkipToNext",
  "m_colFade",
  "m_penTrigger",
  "m_penViewTarget",
  "m_vPosRatio",
  "m_fRatioX",
  "m_fRatioY",
  "m_fRatioZ",
};
#define CCameraMarker_propnamesct ARRAYCOUNT(CCameraMarker_propnames)

#endif // _EntitiesV_CameraMarker_INCLUDED