// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_WorldInfoEntity_INCLUDED
#define _EntitiesV_WorldInfoEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CWorldInfoEntity_DLLClass;
class CWorldInfoEntity : public CEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fSVMedalBronze;
  FLOAT m_fSVMedalSilver;
  FLOAT m_fSVMedalGold;

  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_WorldInfoEntity_INCLUDED
