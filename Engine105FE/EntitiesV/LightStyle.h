// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_LightStyle_INCLUDED
#define _EntitiesV_LightStyle_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CLightStyle_DLLClass;
class CLightStyle : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
#define  STATE_CLightStyle_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CLightStyle_propnames[] = {
  "m_strName",
};
#define CLightStyle_propnamesct ARRAYCOUNT(CLightStyle_propnames)

#endif // _EntitiesV_LightStyle_INCLUDED