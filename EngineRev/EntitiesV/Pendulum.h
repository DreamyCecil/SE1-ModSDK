// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Pendulum_INCLUDED
#define _EntitiesV_Pendulum_INCLUDED 1
#define CPendulum_ClassID 106
extern "C" DECL_DLL CDLLEntityClass CPendulum_DLLClass;
class CPendulum : public CMovableBrushEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  BOOL m_bDynamicShadows;
  FLOAT m_fMaxAngle;
  FLOAT m_fSpeed;
  FLOAT m_fDampFactor;
  FLOAT m_fPendulumFactor;
  FLOAT m_fImpulseFactor;
  FLOAT m_fTriggerImpulse;
  BOOL m_bActive;
  FLOAT m_fMaxDamage;
   void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   void PostMoving();
#define  STATE_CPendulum_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x006a0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x006a0001_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Pendulum_INCLUDED
