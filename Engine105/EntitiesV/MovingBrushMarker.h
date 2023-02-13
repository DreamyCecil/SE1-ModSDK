// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_MovingBrushMarker_INCLUDED
#define _EntitiesV_MovingBrushMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CMovingBrushMarker_DLLClass;
class CMovingBrushMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bInverseRotate;
  FLOAT m_fSpeed;
  FLOAT m_fWaitTime;
  BOOL m_bStopMoving;
  enum BoolEType m_betMoveOnTouch;
  FLOAT m_fBlockDamage;
  FLOAT m_tmBankingRotation;
  BOOL m_bBankingClockwise;
  BOOL m_bNoRotation;
  enum EventEType m_eetMarkerEvent;
  CEntityPointer m_penMarkerEvent;
  enum EventEType m_eetTouchEvent;
  CEntityPointer m_penTouchEvent;
  CEntityPointer m_penSoundStart;
  CEntityPointer m_penSoundStop;
  CEntityPointer m_penSoundFollow;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
#define  STATE_CMovingBrushMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CMovingBrushMarker_propnames[] = {
  "m_bInverseRotate",
  "m_fSpeed",
  "m_fWaitTime",
  "m_bStopMoving",
  "m_betMoveOnTouch",
  "m_fBlockDamage",
  "m_tmBankingRotation",
  "m_bBankingClockwise",
  "m_bNoRotation",
  "m_eetMarkerEvent",
  "m_penMarkerEvent",
  "m_eetTouchEvent",
  "m_penTouchEvent",
  "m_penSoundStart",
  "m_penSoundStop",
  "m_penSoundFollow",
};
#define CMovingBrushMarker_propnamesct ARRAYCOUNT(CMovingBrushMarker_propnames)

#endif // _EntitiesV_MovingBrushMarker_INCLUDED