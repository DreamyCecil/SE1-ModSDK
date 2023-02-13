// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_AnimationHub_INCLUDED
#define _EntitiesV_AnimationHub_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CAnimationHub_DLLClass;
class CAnimationHub : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  FLOAT m_tmDelayEach;
  CEntityPointer m_penTarget0;
  CEntityPointer m_penTarget1;
  CEntityPointer m_penTarget2;
  CEntityPointer m_penTarget3;
  CEntityPointer m_penTarget4;
  CEntityPointer m_penTarget5;
  CEntityPointer m_penTarget6;
  CEntityPointer m_penTarget7;
  CEntityPointer m_penTarget8;
  CEntityPointer m_penTarget9;
  FLOAT m_tmDelay0;
  FLOAT m_tmDelay1;
  FLOAT m_tmDelay2;
  FLOAT m_tmDelay3;
  FLOAT m_tmDelay4;
  FLOAT m_tmDelay5;
  FLOAT m_tmDelay6;
  FLOAT m_tmDelay7;
  FLOAT m_tmDelay8;
  FLOAT m_tmDelay9;
  INDEX m_iModelAnim;
  BOOL m_bModelLoop;
  INDEX m_iTextureAnim;
  BOOL m_bTextureLoop;
  INDEX m_iLightAnim;
  BOOL m_bLightLoop;
  COLOR m_colAmbient;
  COLOR m_colDiffuse;
  INDEX m_iCounter;
   const CTString & GetDescription(void)const;
#define  STATE_CAnimationHub_RelayEvents 0x00e40000
  BOOL RelayEvents(const CEntityEvent &__eeInput);
  BOOL H0x00e40001_RelayEvents_01(const CEntityEvent &__eeInput);
  BOOL H0x00e40002_RelayEvents_02(const CEntityEvent &__eeInput);
  BOOL H0x00e40003_RelayEvents_03(const CEntityEvent &__eeInput);
  BOOL H0x00e40004_RelayEvents_04(const CEntityEvent &__eeInput);
  BOOL H0x00e40005_RelayEvents_05(const CEntityEvent &__eeInput);
#define  STATE_CAnimationHub_WaitChange 0x00e40006
  BOOL WaitChange(const CEntityEvent &__eeInput);
  BOOL H0x00e40007_WaitChange_01(const CEntityEvent &__eeInput);
  BOOL H0x00e40008_WaitChange_02(const CEntityEvent &__eeInput);
  BOOL H0x00e40009_WaitChange_03(const CEntityEvent &__eeInput);
  BOOL H0x00e4000a_WaitChange_04(const CEntityEvent &__eeInput);
#define  STATE_CAnimationHub_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};

static const char *CAnimationHub_propnames[] = {
  "m_strName",
  "m_strDescription",
  "m_tmDelayEach",
  "m_penTarget0",
  "m_penTarget1",
  "m_penTarget2",
  "m_penTarget3",
  "m_penTarget4",
  "m_penTarget5",
  "m_penTarget6",
  "m_penTarget7",
  "m_penTarget8",
  "m_penTarget9",
  "m_tmDelay0",
  "m_tmDelay1",
  "m_tmDelay2",
  "m_tmDelay3",
  "m_tmDelay4",
  "m_tmDelay5",
  "m_tmDelay6",
  "m_tmDelay7",
  "m_tmDelay8",
  "m_tmDelay9",
  "m_iModelAnim",
  "m_bModelLoop",
  "m_iTextureAnim",
  "m_bTextureLoop",
  "m_iLightAnim",
  "m_bLightLoop",
  "m_colAmbient",
  "m_colDiffuse",
  "m_iCounter",
};
#define CAnimationHub_propnamesct ARRAYCOUNT(CAnimationHub_propnames)

#endif // _EntitiesV_AnimationHub_INCLUDED