// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_MessageHolder_INCLUDED
#define _EntitiesV_MessageHolder_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CMessageHolder_DLLClass;
class CMessageHolder : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CTFileName m_fnmMessage;
  FLOAT m_fDistance;
  BOOL m_bActive;
  CEntityPointer m_penNext;
   const CTString & GetDescription(void)const;
#define  STATE_CMessageHolder_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00e20000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00e20001_Main_02(const CEntityEvent &__eeInput);
};

static const char *CMessageHolder_propnames[] = {
  "m_strName",
  "m_strDescription",
  "m_fnmMessage",
  "m_fDistance",
  "m_bActive",
  "m_penNext",
};
#define CMessageHolder_propnamesct ARRAYCOUNT(CMessageHolder_propnames)

#endif // _EntitiesV_MessageHolder_INCLUDED