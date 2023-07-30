// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_EnemyMarker_INCLUDED
#define _EntitiesV_EnemyMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
#define CEnemyMarker_ClassID 302
extern "C" DECL_DLL CDLLEntityClass CEnemyMarker_DLLClass;
class CEnemyMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fWaitTime;
  RANGE m_fMarkerRange;
  RANGE m_fPatrolAreaInner;
  RANGE m_fPatrolAreaOuter;
  FLOAT m_fPatrolTime;
  enum BoolEType m_betRunToMarker;
  enum BoolEType m_betFly;
  enum BoolEType m_betBlind;
  enum BoolEType m_betDeaf;
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
#define  STATE_CEnemyMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnemyMarker_INCLUDED
