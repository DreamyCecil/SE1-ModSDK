// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Ughzy_INCLUDED
#define _EntitiesV_Ughzy_INCLUDED 1
#include <EntitiesV/EnemyBase.h>
extern DECL_DLL CEntityPropertyEnumType UghzyChar_enum;
enum UghzyType {
  UZT_SMALL = 0,
  UZT_NORMAL = 1,
  UZT_BIG = 2,
};
DECL_DLL inline void ClearToDefault(UghzyType &e) { e = (UghzyType)0; };
extern "C" DECL_DLL CDLLEntityClass CUghzy_DLLClass;
class CUghzy : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum UghzyType m_uztType;
  INDEX m_iFiredProjectiles;
  INDEX m_iMeleeAnimation;
  BOOL m_bRenderElectricity;
  FLOAT3D m_vElectricitySource;
  FLOAT3D m_vElectricityTarget;
  FLOAT m_tmTemp;
  FLOAT m_tmNextFXTime;
  FLOAT m_fSize;
  INDEX m_iAttID;
  BOOL m_bDoesMelee;
  BOOL m_bDoesRockets;
  BOOL m_bDoesLasers;
  BOOL m_bDoesLavabomb;
  BOOL m_bDoesGhostbuster;

  BOOL H0x1640000_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0x1640001_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x1640002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x1640003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x1640004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x1640005_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x1640006_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x1640007_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x1640008_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x1640009_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x164000A_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x164000B_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x164000C_Procedure_12(const CEntityEvent &__eeInput);
  BOOL H0x164000D_Procedure_13(const CEntityEvent &__eeInput);
  BOOL H0x164000E_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x164000F_Procedure_15(const CEntityEvent &__eeInput);
  BOOL H0x1640010_Procedure_16(const CEntityEvent &__eeInput);
  BOOL H0x1640011_Procedure_17(const CEntityEvent &__eeInput);
  BOOL H0x1640012_Procedure_18(const CEntityEvent &__eeInput);
  BOOL H0x1640013_Procedure_19(const CEntityEvent &__eeInput);
  BOOL H0x1640014_Procedure_20(const CEntityEvent &__eeInput);
  BOOL H0x1640015_Procedure_21(const CEntityEvent &__eeInput);
  BOOL H0x1640016_Procedure_22(const CEntityEvent &__eeInput);
  BOOL H0x1640017_Procedure_23(const CEntityEvent &__eeInput);
  BOOL H0x1640018_Procedure_24(const CEntityEvent &__eeInput);
  BOOL H0x1640019_Procedure_25(const CEntityEvent &__eeInput);
  BOOL H0x164001A_Procedure_26(const CEntityEvent &__eeInput);
  BOOL H0x164001B_Procedure_27(const CEntityEvent &__eeInput);
  BOOL H0x164001C_Procedure_28(const CEntityEvent &__eeInput);
  BOOL H0x164001D_Procedure_29(const CEntityEvent &__eeInput);
  BOOL H0x164001E_Procedure_30(const CEntityEvent &__eeInput);
  BOOL H0x164001F_Procedure_31(const CEntityEvent &__eeInput);
  BOOL H0x1640020_Procedure_32(const CEntityEvent &__eeInput);
  BOOL H0x1640021_Procedure_33(const CEntityEvent &__eeInput);
  BOOL H0x1640022_Procedure_34(const CEntityEvent &__eeInput);
  BOOL H0x1640023_Procedure_35(const CEntityEvent &__eeInput);
  BOOL H0x1640024_Procedure_36(const CEntityEvent &__eeInput);
  BOOL H0x1640025_Procedure_37(const CEntityEvent &__eeInput);
  BOOL H0x1640026_Procedure_38(const CEntityEvent &__eeInput);
  BOOL H0x1640027_Procedure_39(const CEntityEvent &__eeInput);
  BOOL H0x1640028_Procedure_40(const CEntityEvent &__eeInput);
  BOOL H0x1640029_Procedure_41(const CEntityEvent &__eeInput);
  BOOL H0x164002A_Procedure_42(const CEntityEvent &__eeInput);
  BOOL H0x164002B_Procedure_43(const CEntityEvent &__eeInput);
  BOOL H0x164002C_Procedure_44(const CEntityEvent &__eeInput);
  BOOL H0x164002D_Procedure_45(const CEntityEvent &__eeInput);
  BOOL H0x164002E_Procedure_46(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Ughzy_INCLUDED
