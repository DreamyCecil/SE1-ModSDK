// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_EnergyMine_INCLUDED
#define _EntitiesV_EnergyMine_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CEnergyMine_DLLClass;
class CEnergyMine : public CMovableModelEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penLauncher;
  BOOL m_bArmed;
  FLOAT m_fSpeed;
  CEntityPointer m_penNextMine;
  BOOL m_bExploded;
  FLOAT m_fRange;
  CSoundObject m_soArming;
  CSoundObject m_soDetonating;
  BOOL m_bArming;
  CEntityPointer m_penPrediction;

  BOOL H0x3860002_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0x3860003_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x3860004_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x3860005_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x3860006_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0x3860007_Procedure_5(const CEntityEvent &__eeInput);
  BOOL H0x3860008_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x3860009_Procedure_7(const CEntityEvent &__eeInput);
  BOOL H0x386000A_Procedure_8(const CEntityEvent &__eeInput);
  BOOL H0x386000B_Procedure_9(const CEntityEvent &__eeInput);
  BOOL H0x386000C_Procedure_10(const CEntityEvent &__eeInput);
  BOOL H0x386000D_Procedure_11(const CEntityEvent &__eeInput);
  BOOL H0x386000E_Procedure_12(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x386000F_Procedure_14(const CEntityEvent &__eeInput);
  BOOL H0x3860010_Procedure_15(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_EnergyMine_INCLUDED
