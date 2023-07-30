// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Gizmo_INCLUDED
#define _EntitiesV_Gizmo_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/BasicEffects.h>
#define CGizmo_ClassID 335
extern "C" DECL_DLL CDLLEntityClass CGizmo_DLLClass;
class CGizmo : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bExploded;
  BOOL m_bIsSpawnedByWalker;
  virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  virtual const CTFileName & GetComputerMessageName(void)const;
   void * GetEntityInfo(void);
   void Precache(void);
   void SightSound(void);
   void RunningAnim(void);
   void MortalJumpAnim(void);
   void StandAnim(void);
   void IdleSound(void);
   void BlowUpNotify(void);
   void Explode(void);
   BOOL ShouldBlowUp(void);
  virtual void LeaveStain(BOOL bGrow);
#define  STATE_CGizmo_PerformAttack 0x014f0000
  BOOL PerformAttack(const CEntityEvent &__eeInput);
  BOOL H0x014f0001_PerformAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x014f0002_PerformAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x014f0003_PerformAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x014f0004_PerformAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x014f0005_PerformAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x014f0006_PerformAttack_06(const CEntityEvent &__eeInput);
#define  STATE_CGizmo_JumpOnce 0x014f0007
  BOOL JumpOnce(const CEntityEvent &__eeInput);
  BOOL H0x014f0008_JumpOnce_01(const CEntityEvent &__eeInput);
  BOOL H0x014f0009_JumpOnce_02(const CEntityEvent &__eeInput);
  BOOL H0x014f000a_JumpOnce_03(const CEntityEvent &__eeInput);
  BOOL H0x014f000b_JumpOnce_04(const CEntityEvent &__eeInput);
#define  STATE_CGizmo_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Gizmo_INCLUDED
