// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_EnvironmentMarker_INCLUDED
#define _EntitiesV_EnvironmentMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CEnvironmentMarker_DLLClass;
class CEnvironmentMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fWaitTime;
  FLOAT m_fRandomTime;
  RANGE m_fMarkerRange;
  BOOL m_bFixedAnimLength;
  BOOL m_bChangeDefaultAnim;
  FLOAT m_fMoveSpeed;
  FLOAT m_fRotateSpeed;
  CTFileName m_fnMdl;
  ANIMATION m_iAnim;
  CModelObject m_moAnimData;
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   CAnimData * GetAnimData(SLONG slPropertyOffset);
   void SetModelObject(void);
#define  STATE_CEnvironmentMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnvironmentMarker_INCLUDED