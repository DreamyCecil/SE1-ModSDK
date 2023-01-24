// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_ShipMarker_INCLUDED
#define _EntitiesV_ShipMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CShipMarker_DLLClass;
class CShipMarker : public CMarker {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bHarbor;
  FLOAT m_fSpeed;
  FLOAT m_fRotation;
  FLOAT m_fAcceleration;
  FLOAT m_fRockingV;
  FLOAT m_fRockingA;
  FLOAT m_tmRockingChange;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
#define  STATE_CShipMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CShipMarker_propnames[] = {
  "m_bHarbor",
  "m_fSpeed",
  "m_fRotation",
  "m_fAcceleration",
  "m_fRockingV",
  "m_fRockingA",
  "m_tmRockingChange",
};
#define CShipMarker_propnamesct ARRAYCOUNT(CShipMarker_propnames)

#endif // _EntitiesV_ShipMarker_INCLUDED
