// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Marker_INCLUDED
#define _EntitiesV_Marker_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CMarker_DLLClass;
class CMarker : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
   const CTString & GetDescription(void)const;
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
  virtual BOOL IsMarker(void)const;
   SLONG GetUsedMemory(void);
#define  STATE_CMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CMarker_propnames[] = {
  "m_strName",
  "m_strDescription",
  "m_penTarget",
};
#define CMarker_propnamesct ARRAYCOUNT(CMarker_propnames)

#endif // _EntitiesV_Marker_INCLUDED
