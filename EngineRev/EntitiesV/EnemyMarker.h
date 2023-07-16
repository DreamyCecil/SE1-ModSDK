// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_EnemyMarker_INCLUDED
#define _EntitiesV_EnemyMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
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
  BOOL m_bStartTactics;
  BOOL m_bGetCloser;
  CEntityPointer m_pTarget01;
  CEntityPointer m_pTarget02;
  CEntityPointer m_pTarget03;
  CEntityPointer m_pTarget04;
  CEntityPointer m_pTarget05;
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
#define  STATE_CEnemyMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnemyMarker_INCLUDED
