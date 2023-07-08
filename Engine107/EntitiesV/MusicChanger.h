// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_MusicChanger_INCLUDED
#define _EntitiesV_MusicChanger_INCLUDED 1
#include <EntitiesV/MusicHolder.h>
extern "C" DECL_DLL CDLLEntityClass CMusicChanger_DLLClass;
class CMusicChanger : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CTFileName m_fnMusic;
  FLOAT m_fVolume;
  enum MusicType m_mtType;
  BOOL m_bForceStart;
#define  STATE_CMusicChanger_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00e10000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00e10001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00e10002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00e10003_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_MusicChanger_INCLUDED
