// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_PlayerMarker_INCLUDED
#define _EntitiesV_PlayerMarker_INCLUDED 1
#include <EntitiesV/Marker.h>
#define CPlayerMarker_ClassID 404
extern "C" DECL_DLL CDLLEntityClass CPlayerMarker_DLLClass;
class CPlayerMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fHealth;
  FLOAT m_fShield;
  INDEX m_iGiveWeapons;
  INDEX m_iTakeWeapons;
  CTString m_strGroup;
  BOOL m_bQuickStart;
  BOOL m_bStartInComputer;
  CEntityPointer m_penMessage;
  FLOAT m_fMaxAmmoRatio;
  FLOAT m_tmLastSpawned;
  INDEX m_iTakeAmmo;
  BOOL m_bNoRespawnInPlace;
  INDEX m_iTeam;
   void Precache(void);
   BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CPlayerMarker_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_PlayerMarker_INCLUDED
