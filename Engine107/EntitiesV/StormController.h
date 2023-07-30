// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_StormController_INCLUDED
#define _EntitiesV_StormController_INCLUDED 1
#define CStormController_ClassID 606
extern "C" DECL_DLL CDLLEntityClass CStormController_DLLClass;
class CStormController : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CEntityPointer m_penwsc;
  CTString m_strName;
  FLOAT m_fNextLightningDelay;
  BOOL m_bStormOn;
  FLOAT m_fNextLightningStrike;
  CEntityPointer m_penLightning00;
  CEntityPointer m_penLightning01;
  CEntityPointer m_penLightning02;
  CEntityPointer m_penLightning03;
  CEntityPointer m_penLightning04;
  CEntityPointer m_penLightning05;
  CEntityPointer m_penLightning06;
  CEntityPointer m_penLightning07;
  CEntityPointer m_penLightning08;
  CEntityPointer m_penLightning09;
  CEntityPointer m_penLightning10;
  CEntityPointer m_penLightning11;
  CEntityPointer m_penLightning12;
  CEntityPointer m_penLightning13;
  CEntityPointer m_penLightning14;
  CEntityPointer m_penLightning15;
  CEntityPointer m_penLightning16;
  CEntityPointer m_penLightning17;
  CEntityPointer m_penLightning18;
  CEntityPointer m_penLightning19;
  FLOAT m_tmStormAppearTime;
  FLOAT m_tmStormDisappearTime;
  FLOAT m_fFirstLightningDelay;
  FLOAT m_fMaxLightningPeriod;
  FLOAT m_fMinLightningPeriod;
  FLOAT m_fMaxStormPowerTime;
  COLOR m_colBlendStart;
  COLOR m_colBlendStop;
  COLOR m_colShadeStart;
  COLOR m_colShadeStop;
   void CheckOneLightningTarget(CEntityPointer & pen);
   INDEX GetLightningsCount(void)const;
#define  STATE_CStormController_Storm 0x025e0000
  BOOL Storm(const CEntityEvent &__eeInput);
  BOOL H0x025e0001_Storm_01(const CEntityEvent &__eeInput);
  BOOL H0x025e0002_Storm_02(const CEntityEvent &__eeInput);
#define  STATE_CStormController_StormInternal 0x025e0003
  BOOL StormInternal(const CEntityEvent &__eeInput);
  BOOL H0x025e0004_StormInternal_01(const CEntityEvent &__eeInput);
  BOOL H0x025e0005_StormInternal_02(const CEntityEvent &__eeInput);
  BOOL H0x025e0006_StormInternal_03(const CEntityEvent &__eeInput);
  BOOL H0x025e0007_StormInternal_04(const CEntityEvent &__eeInput);
  BOOL H0x025e0008_StormInternal_05(const CEntityEvent &__eeInput);
  BOOL H0x025e0009_StormInternal_06(const CEntityEvent &__eeInput);
  BOOL H0x025e000a_StormInternal_07(const CEntityEvent &__eeInput);
  BOOL H0x025e000b_StormInternal_08(const CEntityEvent &__eeInput);
#define  STATE_CStormController_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x025e000c_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x025e000d_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x025e000e_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x025e000f_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x025e0010_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x025e0011_Main_06(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_StormController_INCLUDED
