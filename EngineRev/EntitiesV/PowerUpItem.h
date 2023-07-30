// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_PowerUpItem_INCLUDED
#define _EntitiesV_PowerUpItem_INCLUDED 1
#include <EntitiesV/Item.h>
#include <EntitiesV/Player.h>
extern DECL_DLL CEntityPropertyEnumType PowerUpItemType_enum;
enum PowerUpItemType {
  PUIT_INVISIB = 0,
  PUIT_INVULNER = 1,
  PUIT_DAMAGE = 2,
  PUIT_SPEED = 3,
  PUIT_BOMB = 4,
  PUIT_JUMP = 5,
};
DECL_DLL inline void ClearToDefault(PowerUpItemType &e) { e = (PowerUpItemType)0; } ;
#define EVENTCODE_EPowerUp 0x03280000
class DECL_DLL EPowerUp : public CEntityEvent {
public:
EPowerUp();
CEntityEvent *MakeCopy(void);
enum PowerUpItemType puitType;
};
DECL_DLL inline void ClearToDefault(EPowerUp &e) { e = EPowerUp(); } ;
#define CPowerUpItem_ClassID 808
extern "C" DECL_DLL CDLLEntityClass CPowerUpItem_DLLClass;
class CPowerUpItem : public CItem {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum PowerUpItemType m_puitType;
   void Precache(void);
   BOOL FillEntityStatistics(EntityStats * pes);
   void RenderParticles(void);
   void SetProperties(void);
#define  STATE_CPowerUpItem_ItemCollected 0x03280001
  BOOL ItemCollected(const CEntityEvent &__eeInput);
#define  STATE_CPowerUpItem_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_PowerUpItem_INCLUDED
