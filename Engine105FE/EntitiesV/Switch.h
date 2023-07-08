// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_Switch_INCLUDED
#define _EntitiesV_Switch_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
extern DECL_DLL CEntityPropertyEnumType SwitchType_enum;
enum SwitchType {
  SWT_ONCE = 0,
  SWT_ONOFF = 1,
};
DECL_DLL inline void ClearToDefault(SwitchType &e) { e = (SwitchType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CSwitch_DLLClass;
class CSwitch : public CModelHolder2 {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  ANIMATION m_iModelONAnimation;
  ANIMATION m_iTextureONAnimation;
  ANIMATION m_iModelOFFAnimation;
  ANIMATION m_iTextureOFFAnimation;
  CEntityPointer m_penTarget;
  enum EventEType m_eetEvent;
  enum EventEType m_eetOffEvent;
  enum SwitchType m_swtType;
  CTString m_strMessage;
  BOOL m_bSwitchON;
  CEntityPointer m_penCaused;
  BOOL m_bUseable;
  BOOL m_bInvisible;
   CAnimData * GetAnimData(SLONG slPropertyOffset);
   BOOL CanReactOnEntity(CEntity * pen);
#define  STATE_CSwitch_SwitchON 0x00d10000
  BOOL SwitchON(const CEntityEvent &__eeInput);
  BOOL H0x00d10001_SwitchON_01(const CEntityEvent &__eeInput);
  BOOL H0x00d10002_SwitchON_02(const CEntityEvent &__eeInput);
#define  STATE_CSwitch_SwitchOFF 0x00d10003
  BOOL SwitchOFF(const CEntityEvent &__eeInput);
  BOOL H0x00d10004_SwitchOFF_01(const CEntityEvent &__eeInput);
  BOOL H0x00d10005_SwitchOFF_02(const CEntityEvent &__eeInput);
#define  STATE_CSwitch_MainLoop_Once 0x00d10006
  BOOL MainLoop_Once(const CEntityEvent &__eeInput);
  BOOL H0x00d10007_MainLoop_Once_01(const CEntityEvent &__eeInput);
  BOOL H0x00d10008_MainLoop_Once_02(const CEntityEvent &__eeInput);
#define  STATE_CSwitch_MainLoop_OnOff 0x00d10009
  BOOL MainLoop_OnOff(const CEntityEvent &__eeInput);
  BOOL H0x00d1000a_MainLoop_OnOff_01(const CEntityEvent &__eeInput);
  BOOL H0x00d1000b_MainLoop_OnOff_02(const CEntityEvent &__eeInput);
#define  STATE_CSwitch_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Switch_INCLUDED
