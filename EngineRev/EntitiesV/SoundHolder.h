// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_SoundHolder_INCLUDED
#define _EntitiesV_SoundHolder_INCLUDED 1
#include <EntitiesV/ModelDestruction.h>
extern "C" DECL_DLL CDLLEntityClass CSoundHolder_DLLClass;
class CSoundHolder : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTFileName m_fnSound;
  RANGE m_rFallOffRange;
  RANGE m_rHotSpotRange;
  FLOAT m_fVolume;
  BOOL m_bLoop;
  BOOL m_bSurround;
  BOOL m_bVolumetric;
  CTString m_strName;
  CTString m_strDescription;
  BOOL m_bAutoStart;
  INDEX m_iPlayType;
  CSoundObject m_soSound;
  BOOL m_bDestroyable;
  FLOAT m_fPitch;
CAutoPrecacheSound m_aps;
   void Precache(void);
   void MirrorAndStretch(FLOAT fStretch,BOOL bMirrorX);
   SLONG GetUsedMemory(void);
#define  STATE_CSoundHolder_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00cc0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00cc0001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00cc0002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00cc0003_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x00cc0004_Main_05(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_SoundHolder_INCLUDED
