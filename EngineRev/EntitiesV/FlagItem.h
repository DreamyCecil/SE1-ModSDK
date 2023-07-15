// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_FlagItem_INCLUDED
#define _EntitiesV_FlagItem_INCLUDED 1
#include <EntitiesV/Item.h>
extern "C" DECL_DLL CDLLEntityClass CFlagItem_DLLClass;
class CFlagItem : public CItem {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  INDEX m_iTeam;
  INDEX m_iLoose;
  INDEX m_iPicked;
  FLOAT m_tmRecovered;
  CEntityPointer m_penLooseReminder;

  BOOL H0x3290001_Procedure_0(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x3290002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x3290003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x3290004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x3290005_Procedure_5(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_FlagItem_INCLUDED
