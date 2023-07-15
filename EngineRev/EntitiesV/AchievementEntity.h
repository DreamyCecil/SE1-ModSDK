// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_AchievementEntity_INCLUDED
#define _EntitiesV_AchievementEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CAchievementEntity_DLLClass;
class CAchievementEntity : public CRationalEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strAchievement;
  BOOL m_bSinglePlayerOnly;
  BOOL m_bStat;
  BOOL m_bStatAdd;
  BOOL m_bStatFloat;
  INDEX m_iStatAmount;
  FLOAT m_fStatAmount;

  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x6E0000_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x6E0001_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x6E0002_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x6E0003_Procedure_4(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_AchievementEntity_INCLUDED
