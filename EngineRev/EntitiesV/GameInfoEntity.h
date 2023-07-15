// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_GameInfoEntity_INCLUDED
#define _EntitiesV_GameInfoEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CGameInfoEntity_DLLClass;
class CGameInfoEntity : public CRationalEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_tmStartMatch;
  FLOAT m_tmStartCountDown;
  FLOAT m_tmSecondTimer;
  BOOL m_bWarmup;
  BOOL m_bInGame;
  BOOL m_bGameEnded;
  INDEX m_iControlZoneTeam0;
  INDEX m_iControlZoneTeam1;
  INDEX m_iClanArenaTeam0;
  INDEX m_iClanArenaTeam1;

  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x6D0000_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x6D0001_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x6D0002_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x6D0003_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x6D0004_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x6D0005_Procedure_6(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_GameInfoEntity_INCLUDED
