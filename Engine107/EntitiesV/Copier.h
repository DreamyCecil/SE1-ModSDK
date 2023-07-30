// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Copier_INCLUDED
#define _EntitiesV_Copier_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#define CCopier_ClassID 225
extern "C" DECL_DLL CDLLEntityClass CCopier_DLLClass;
class CCopier : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
  BOOL m_bSpawnEffect;
  BOOL m_bTelefrag;
   const CTString & GetDescription(void)const;
   void TeleportEntity();
   SLONG GetUsedMemory(void);
#define  STATE_CCopier_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00e10000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00e10001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00e10002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00e10003_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x00e10004_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x00e10005_Main_06(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Copier_INCLUDED
