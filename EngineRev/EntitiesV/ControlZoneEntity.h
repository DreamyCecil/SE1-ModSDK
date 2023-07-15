// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_ControlZoneEntity_INCLUDED
#define _EntitiesV_ControlZoneEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CControlZoneEntity_DLLClass;
class CControlZoneEntity : public CRationalEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;

  BOOL H0x700000_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0x700001_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0x700002_Procedure_2(const CEntityEvent &__eeInput);
  BOOL H0x700003_Procedure_3(const CEntityEvent &__eeInput);
  BOOL H0x700004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x700005_Procedure_6(const CEntityEvent &__eeInput);
  BOOL H0x700006_Procedure_7(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_ControlZoneEntity_INCLUDED
