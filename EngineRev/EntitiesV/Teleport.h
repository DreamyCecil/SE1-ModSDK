// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_Teleport_INCLUDED
#define _EntitiesV_Teleport_INCLUDED 1
#include <EntitiesV/BasicEffects.h>
#define CTeleport_ClassID 219
extern "C" DECL_DLL CDLLEntityClass CTeleport_DLLClass;
class CTeleport : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual CEntity *GetTarget(void) const { return m_penTarget; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  CTString m_strDescription;
  CEntityPointer m_penTarget;
  FLOAT m_fWidth;
  FLOAT m_fHeight;
  BOOL m_bActive;
  BOOL m_bPlayersOnly;
  BOOL m_bForceStop;
  BOOL m_bStopsSpeedrunners;
   const CTString & GetDescription(void)const;
   void TeleportEntity(CEntity * pen,const CPlacement3D & pl);
   SLONG GetUsedMemory(void);
#define  STATE_CTeleport_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x00db0000_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x00db0001_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x00db0002_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x00db0003_Main_04(const CEntityEvent &__eeInput);
  BOOL H0x00db0004_Main_05(const CEntityEvent &__eeInput);
  BOOL H0x00db0005_Main_06(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_Teleport_INCLUDED
