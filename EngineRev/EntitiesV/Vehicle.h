// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Vehicle_INCLUDED
#define _EntitiesV_Vehicle_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CVehicle_DLLClass;
class CVehicle : public CModelHolder2Movable {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  BOOL m_bStuckToGround;
  FLOAT m_fGroundHoverHeight;
  FLOAT m_fVerticalSpeed;
  FLOAT m_fMovementSpeed;
  FLOAT m_fCameraOffset;
  FLOAT m_fCameraPitch;
  CTString m_strEnterMessage;
  CEntityPointer m_penPlayerInside;

  BOOL H0xF40001_Procedure_0(const CEntityEvent &__eeInput);
  BOOL H0xF40002_Procedure_1(const CEntityEvent &__eeInput);
  BOOL H0xF40003_Procedure_2(const CEntityEvent &__eeInput);
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0xF40004_Procedure_4(const CEntityEvent &__eeInput);
  BOOL H0xF40005_Procedure_5(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Vehicle_INCLUDED
