// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_AmmoPack_INCLUDED
#define _EntitiesV_AmmoPack_INCLUDED 1
#include <EntitiesV/Item.h>
extern DECL_DLL CEntityPropertyEnumType AmmoPackType_enum;
enum AmmoPackType {
  APT_CUSTOM = 1,
  APT_SERIOUS = 2,
};
DECL_DLL inline void ClearToDefault(AmmoPackType &e) { e = (AmmoPackType)0; } ;
#define EVENTCODE_EAmmoPackItem 0x03260000
class DECL_DLL EAmmoPackItem : public CEntityEvent {
public:
EAmmoPackItem();
CEntityEvent *MakeCopy(void);
INDEX iShells;
INDEX iBullets;
INDEX iRockets;
INDEX iGrenades;
INDEX iNapalm;
INDEX iElectricity;
INDEX iIronBalls;
INDEX iSniperBullets;
};
DECL_DLL inline void ClearToDefault(EAmmoPackItem &e) { e = EAmmoPackItem(); } ;
#define CAmmoPack_ClassID 806
extern "C" DECL_DLL CDLLEntityClass CAmmoPack_DLLClass;
class CAmmoPack : public CItem {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum AmmoPackType m_aptPackType;
  INDEX m_iShells;
  INDEX m_iBullets;
  INDEX m_iRockets;
  INDEX m_iGrenades;
  INDEX m_iNapalm;
  INDEX m_iElectricity;
  INDEX m_iIronBalls;
  INDEX m_iSniperBullets;
  INDEX m_iPlasmaPacks;
  INDEX m_iMinePacks;
   void Precache(void);
   void RenderParticles(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void SetProperties(void);
   void AdjustDifficulty(void);
#define  STATE_CAmmoPack_ItemCollected 0x03260001
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CAmmoPack_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_AmmoPack_INCLUDED
