// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Bouncer_INCLUDED
#define _EntitiesV_Bouncer_INCLUDED 1
#define CBouncer_ClassID 105
extern "C" DECL_DLL CDLLEntityClass CBouncer_DLLClass;
class CBouncer : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  FLOAT m_fSpeed;
  ANGLE3D m_aDirection;
  FLOAT m_tmControl;
  BOOL m_bEntrySpeed;
  FLOAT m_fMaxExitSpeed;
  FLOAT m_fNormalComponentMultiplier;
  FLOAT m_fParallelComponentMultiplier;
#define  STATE_CBouncer_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Bouncer_INCLUDED
