// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Damager_INCLUDED
#define _EntitiesV_Damager_INCLUDED 1
#define CDamager_ClassID 229
extern "C" DECL_DLL CDLLEntityClass CDamager_DLLClass;
class CDamager : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  enum DamageType m_dmtType;
  FLOAT m_fAmount;
  CEntityPointer m_penToDamage;
  BOOL m_bDamageFromTriggerer;
  CEntityPointer m_penLastDamaged;
  FLOAT m_tmLastDamage;
  BOOL m_bRangeDamage;
  RANGE m_fRangeHotspot;
  RANGE m_fRangeFalloff;
  BOOL m_bHeal;
   const CTString & GetDescription(void)const;
#define  STATE_CDamager_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00e50000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00e50001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00e50002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00e50003_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Damager_INCLUDED
