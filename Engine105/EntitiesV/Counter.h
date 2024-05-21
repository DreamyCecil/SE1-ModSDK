// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Counter_INCLUDED
#define _EntitiesV_Counter_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
#define CCounter_ClassID 232
extern "C" DECL_DLL CDLLEntityClass CCounter_DLLClass;
class CCounter : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_fCountdownSpeed;
  CEntityPointer m_penTarget;
  FLOAT m_fNumber;
  FLOAT m_tmStart;
  CTString m_strName;
  CSoundObject m_soSound;
  INDEX m_iCountFrom;
  CEntityPointer m_pen0;
  CEntityPointer m_pen1;
  CEntityPointer m_pen2;
  CEntityPointer m_pen3;
  CEntityPointer m_pen4;
  CEntityPointer m_pen5;
  CEntityPointer m_pen6;
  CEntityPointer m_pen7;
  CEntityPointer m_pen8;
  CEntityPointer m_pen9;
   void Precache(void);
   void DisplayNumber(void);
#define  STATE_CCounter_CountDown 0x00e80000
  BOOL CountDown(const CEntityEvent &__eeInput);
  BOOL H0x00e80001_CountDown_01(const CEntityEvent &__eeInput);
  BOOL H0x00e80002_CountDown_02(const CEntityEvent &__eeInput);
  BOOL H0x00e80003_CountDown_03(const CEntityEvent &__eeInput);
  BOOL H0x00e80004_CountDown_04(const CEntityEvent &__eeInput);
#define  STATE_CCounter_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00e80005_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00e80006_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00e80007_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00e80008_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Counter_INCLUDED