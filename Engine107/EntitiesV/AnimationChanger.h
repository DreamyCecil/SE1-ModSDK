// This file is generated by Entity Class Compiler, (c) 2002-2012 Croteam Ltd.

#ifndef _EntitiesV_AnimationChanger_INCLUDED
#define _EntitiesV_AnimationChanger_INCLUDED 1
#include <EntitiesV/ModelHolder2.h>
#include <EntitiesV/Light.h>
#define EVENTCODE_EChangeAnim 0x00da0000
class DECL_DLL EChangeAnim : public CEntityEvent {
public:
EChangeAnim();
CEntityEvent *MakeCopy(void);
INDEX iModelAnim;
BOOL bModelLoop;
INDEX iTextureAnim;
BOOL bTextureLoop;
INDEX iLightAnim;
INDEX iAmbientLightAnim;
BOOL bLightLoop;
BOOL bAmbientLightLoop;
COLOR colAmbient;
COLOR colDiffuse;
};
DECL_DLL inline void ClearToDefault(EChangeAnim &e) { e = EChangeAnim(); } ;
#define CAnimationChanger_ClassID 218
extern "C" DECL_DLL CDLLEntityClass CAnimationChanger_DLLClass;
class CAnimationChanger : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
  ANIMATION m_iModelAnim;
  BOOL m_bModelLoop;
  ANIMATION m_iTextureAnim;
  BOOL m_bTextureLoop;
  ANIMATION m_iLightAnim;
  BOOL m_bLightLoop;
  ANIMATION m_iAmbientLightAnim;
  BOOL m_bAmbientLightLoop;
  COLOR m_colAmbient;
  COLOR m_colDiffuse;
   const CTString & GetDescription(void)const;
   CAnimData * GetAnimData(SLONG slPropertyOffset);
#define  STATE_CAnimationChanger_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00da0001_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00da0002_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_AnimationChanger_INCLUDED
