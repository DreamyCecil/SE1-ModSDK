// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

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
INDEX iElectricity;
INDEX iIronBalls;
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
  INDEX m_iElectricity;
  INDEX m_iIronBalls;
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