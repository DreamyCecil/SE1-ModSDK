// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_TimeController_INCLUDED
#define _EntitiesV_TimeController_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CTimeController_DLLClass;
class CTimeController : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fTimeStretch;
  FLOAT m_tmFadeIn;
  FLOAT m_tmInterval;
  BOOL m_bAbsolute;
  FLOAT m_fMyTimer;
  FLOAT m_tmStretchChangeStart;
  CTString m_strName;
  FLOAT m_fOldTimeStretch;
  FLOAT m_fNewTimeStretch;
#define  STATE_CTimeController_ChangeTimeStretch 0x02650000
  BOOL ChangeTimeStretch(const CEntityEvent &__eeInput);
  BOOL H0x02650001_ChangeTimeStretch_01(const CEntityEvent &__eeInput);
  BOOL H0x02650002_ChangeTimeStretch_02(const CEntityEvent &__eeInput);
  BOOL H0x02650003_ChangeTimeStretch_03(const CEntityEvent &__eeInput);
  BOOL H0x02650004_ChangeTimeStretch_04(const CEntityEvent &__eeInput);
#define  STATE_CTimeController_ApplyTimeStretch 0x02650005
  BOOL ApplyTimeStretch(const CEntityEvent &__eeInput);
  BOOL H0x02650006_ApplyTimeStretch_01(const CEntityEvent &__eeInput);
  BOOL H0x02650007_ApplyTimeStretch_02(const CEntityEvent &__eeInput);
  BOOL H0x02650008_ApplyTimeStretch_03(const CEntityEvent &__eeInput);
  BOOL H0x02650009_ApplyTimeStretch_04(const CEntityEvent &__eeInput);
  BOOL H0x0265000a_ApplyTimeStretch_05(const CEntityEvent &__eeInput);
  BOOL H0x0265000b_ApplyTimeStretch_06(const CEntityEvent &__eeInput);
  BOOL H0x0265000c_ApplyTimeStretch_07(const CEntityEvent &__eeInput);
#define  STATE_CTimeController_ResetTimeStretch 0x0265000d
  BOOL ResetTimeStretch(const CEntityEvent &__eeInput);
  BOOL H0x0265000e_ResetTimeStretch_01(const CEntityEvent &__eeInput);
  BOOL H0x0265000f_ResetTimeStretch_02(const CEntityEvent &__eeInput);
#define  STATE_CTimeController_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x02650010_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x02650011_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x02650012_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x02650013_Main_04(const CEntityEvent &__eeInput);
};

static const char *CTimeController_propnames[] = {
  "m_fTimeStretch",
  "m_tmFadeIn",
  "m_tmInterval",
  "m_bAbsolute",
  "m_fMyTimer",
  "m_tmStretchChangeStart",
  "m_strName",
  "m_fOldTimeStretch",
  "m_fNewTimeStretch",
};
#define CTimeController_propnamesct ARRAYCOUNT(CTimeController_propnames)

#endif // _EntitiesV_TimeController_INCLUDED
