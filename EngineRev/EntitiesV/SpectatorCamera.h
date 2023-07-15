// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_SpectatorCamera_INCLUDED
#define _EntitiesV_SpectatorCamera_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CSpectatorCamera_DLLClass;
class CSpectatorCamera : public CEntity {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  FLOAT m_fFOV;
  CEntityPointer m_penNext;
  CTString m_strTitle;

  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_SpectatorCamera_INCLUDED
