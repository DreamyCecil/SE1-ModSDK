// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Destroyer_INCLUDED
#define _EntitiesV_Destroyer_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
#include <EntitiesV/Projectile.h>
extern "C" DECL_DLL CDLLEntityClass CDestroyer_DLLClass;
class CDestroyer : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  INDEX m_iCounter;
  CEntityPointer m_penFireFX;
  INDEX m_iAttackRandPrNumber;
  INDEX m_iAttackLoopCounter;
  INDEX m_iAttackLoopAngle;
  INDEX m_iAttackSeries;
  INDEX m_iAttackIsCircle;
  FLOAT m_fWaitTime1;
  FLOAT m_fWaitTime2;
  FLOAT m_fAttackLoopAngleForPP;
  BOOL m_bTextureTurnOn;
  enum ProjectileType m_ptAttackProjectile;

  BOOL H0x1650000_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0x1650001_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x1650002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x1650003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x1650004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x1650005_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x1650006_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x1650007_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x1650008_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x1650009_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x165000A_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x165000B_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x165000C_Procedure_12(const CEntityEvent &__eeInput);
  BOOL H0x165000D_Procedure_13(const CEntityEvent &__eeInput);
  BOOL H0x165000E_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x165000F_Procedure_15(const CEntityEvent &__eeInput);
  BOOL H0x1650010_Procedure_16(const CEntityEvent &__eeInput);
  BOOL H0x1650011_Procedure_17(const CEntityEvent &__eeInput);
  BOOL H0x1650012_Procedure_18(const CEntityEvent &__eeInput);
  BOOL H0x1650013_Procedure_19(const CEntityEvent &__eeInput);
  BOOL H0x1650014_Procedure_20(const CEntityEvent &__eeInput);
  BOOL H0x1650015_Procedure_21(const CEntityEvent &__eeInput);
  BOOL H0x1650016_Procedure_22(const CEntityEvent &__eeInput);
  BOOL H0x1650017_Procedure_23(const CEntityEvent &__eeInput);
  BOOL H0x1650018_Procedure_24(const CEntityEvent &__eeInput);
  BOOL H0x1650019_Procedure_25(const CEntityEvent &__eeInput);
  BOOL H0x165001A_Procedure_26(const CEntityEvent &__eeInput);
  BOOL H0x165001B_Procedure_27(const CEntityEvent &__eeInput);
  BOOL H0x165001C_Procedure_28(const CEntityEvent &__eeInput);
  BOOL H0x165001D_Procedure_29(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Destroyer_INCLUDED
