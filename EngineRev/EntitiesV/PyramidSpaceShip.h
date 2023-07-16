// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_PyramidSpaceShip_INCLUDED
#define _EntitiesV_PyramidSpaceShip_INCLUDED 1
#include <EntitiesV/PyramidSpaceShipMarker.h>
extern DECL_DLL CEntityPropertyEnumType PSSState_enum;
enum PSSState {
  PSSS_IDLE = 0,
  PSSS_MOVING = 1,
  PSSS_REACHED_DESTINATION = 2,
  PSSS_KILLING_BEAM_FIREING = 3,
  PSSS_BEAM_DEACTIVATED = 4,
  PSSS_DOORS_CLOSED = 5,
};
DECL_DLL inline void ClearToDefault(PSSState &e) { e = (PSSState)0; } ;
#define EVENTCODE_EForcePathMarker 0x02610000
class DECL_DLL EForcePathMarker : public CEntityEvent {
public:
EForcePathMarker();
CEntityEvent *MakeCopy(void);
CEntityPointer penForcedPathMarker;
};
DECL_DLL inline void ClearToDefault(EForcePathMarker &e) { e = EForcePathMarker(); } ;
extern "C" DECL_DLL CDLLEntityClass CPyramidSpaceShip_DLLClass;
class CPyramidSpaceShip : public CMovableModelEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  CTString m_strName;
  FLOAT m_fMovingSpeed;
  CEntityPointer m_penBeamHit;
  CEntityPointer m_penLightBeam;
  FLOAT m_tmBeamTime;
  CEntityPointer m_penHitPlaceFlare;
  FLOAT m_tmHitFlareTime;
  FLOAT m_iRingCounter;
  FLOAT m_fRatio;
  CTString m_strDescription;
  enum PSSState m_epssState;
  FLOAT m_fStretch;
  BOOL m_bStopMoving;
  CEntityPointer m_penTarget;
  CEntityPointer m_penFlyAwayTarget;
  CEntityPointer m_penLast;
  BOOL m_bMoving;
  FLOAT m_fRot;
  FLOAT m_fLastRotSpeed;
  FLOAT m_fRotSpeed;
  BOOL m_bApplyDamageToHitted;
  FLOAT m_tmTemp;
  FLOAT m_tmAtMarker;
  FLOAT m_tmDelta;
  FLOAT3D m_vPNp0;
  FLOAT3D m_vPNp1;
  FLOAT3D m_vTNp0;
  FLOAT3D m_vTNp1;
  FLOATquat3D m_qPNp0;
  FLOATquat3D m_qPNp1;
  FLOATquat3D m_qANp0;
  FLOATquat3D m_qANp1;
  FLOAT m_fRotSpeedp0;
  FLOAT m_fRotSpeedp1;
  FLOAT m_fTRotSpeedp0;
  FLOAT m_fTRotSpeedp1;
  CSoundObject m_soPlates;
  CSoundObject m_soBeamMachine;
  CSoundObject m_soBeam;
  CSoundObject m_soFlaresFX;
  BOOL m_bFiringDeactivatedBeam;
  BOOL m_bImmediateAnimations;
  FLOAT m_fWaitAfterKillingBeam;
  BOOL m_bInvisible;
   void Precache(void);
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   const CTString & GetDescription(void)const;
   CPlacement3D GetLerpedPlacement(void)const;
   void PreMoving();
   void HideBeamMachine(void);
   void ShowBeamMachine(void);
   void InitializePathMoving(CPyramidSpaceShipMarker * penStartMarker);
   void DoMoving();
   void PostMoving();
   void SpawnBeamMachineFlares(void);
   void SpawnBeamMachineMainFlare(void);
   void ShowBeamMachineHitFlare(void);
   void HideBeamMachineHitFlare(void);
   void SpawnBeamMachineLightnings(void);
   void SpawnBeamMachineMainLightning(void);
   void SpawnMovingRing(void);
   void TurnOnLightBeam(void);
   void TurnOffLightBeam(void);
   BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
#define  STATE_CPyramidSpaceShip_MPIntro 0x02610001
  BOOL MPIntro(const CEntityEvent &__eeInput);
  BOOL H0x02610002_MPIntro_01(const CEntityEvent &__eeInput);
  BOOL H0x02610003_MPIntro_02(const CEntityEvent &__eeInput);
  BOOL H0x02610004_MPIntro_03(const CEntityEvent &__eeInput);
  BOOL H0x02610005_MPIntro_04(const CEntityEvent &__eeInput);
  BOOL H0x02610006_MPIntro_05(const CEntityEvent &__eeInput);
  BOOL H0x02610007_MPIntro_06(const CEntityEvent &__eeInput);
  BOOL H0x02610008_MPIntro_07(const CEntityEvent &__eeInput);
  BOOL H0x02610009_MPIntro_08(const CEntityEvent &__eeInput);
  BOOL H0x0261000a_MPIntro_09(const CEntityEvent &__eeInput);
  BOOL H0x0261000b_MPIntro_10(const CEntityEvent &__eeInput);
#define  STATE_CPyramidSpaceShip_OpenDoors 0x0261000c
  BOOL OpenDoors(const CEntityEvent &__eeInput);
#define  STATE_CPyramidSpaceShip_CloseDoors 0x0261000d
  BOOL CloseDoors(const CEntityEvent &__eeInput);
  BOOL H0x0261000e_CloseDoors_01(const CEntityEvent &__eeInput);
  BOOL H0x0261000f_CloseDoors_02(const CEntityEvent &__eeInput);
  BOOL H0x02610010_CloseDoors_03(const CEntityEvent &__eeInput);
#define  STATE_CPyramidSpaceShip_FireLightBeam 0x02610011
  BOOL FireLightBeam(const CEntityEvent &__eeInput);
  BOOL H0x02610012_FireLightBeam_01(const CEntityEvent &__eeInput);
  BOOL H0x02610013_FireLightBeam_02(const CEntityEvent &__eeInput);
  BOOL H0x02610014_FireLightBeam_03(const CEntityEvent &__eeInput);
  BOOL H0x02610015_FireLightBeam_04(const CEntityEvent &__eeInput);
  BOOL H0x02610016_FireLightBeam_05(const CEntityEvent &__eeInput);
  BOOL H0x02610017_FireLightBeam_06(const CEntityEvent &__eeInput);
  BOOL H0x02610018_FireLightBeam_07(const CEntityEvent &__eeInput);
  BOOL H0x02610019_FireLightBeam_08(const CEntityEvent &__eeInput);
  BOOL H0x0261001a_FireLightBeam_09(const CEntityEvent &__eeInput);
  BOOL H0x0261001b_FireLightBeam_10(const CEntityEvent &__eeInput);
  BOOL H0x0261001c_FireLightBeam_11(const CEntityEvent &__eeInput);
  BOOL H0x0261001d_FireLightBeam_12(const CEntityEvent &__eeInput);
  BOOL H0x0261001e_FireLightBeam_13(const CEntityEvent &__eeInput);
  BOOL H0x0261001f_FireLightBeam_14(const CEntityEvent &__eeInput);
  BOOL H0x02610020_FireLightBeam_15(const CEntityEvent &__eeInput);
  BOOL H0x02610021_FireLightBeam_16(const CEntityEvent &__eeInput);
  BOOL H0x02610022_FireLightBeam_17(const CEntityEvent &__eeInput);
  BOOL H0x02610023_FireLightBeam_18(const CEntityEvent &__eeInput);
  BOOL H0x02610024_FireLightBeam_19(const CEntityEvent &__eeInput);
  BOOL H0x02610025_FireLightBeam_20(const CEntityEvent &__eeInput);
  BOOL H0x02610026_FireLightBeam_21(const CEntityEvent &__eeInput);
  BOOL H0x02610027_FireLightBeam_22(const CEntityEvent &__eeInput);
  BOOL H0x02610028_FireLightBeam_23(const CEntityEvent &__eeInput);
  BOOL H0x02610029_FireLightBeam_24(const CEntityEvent &__eeInput);
  BOOL H0x0261002a_FireLightBeam_25(const CEntityEvent &__eeInput);
  BOOL H0x0261002b_FireLightBeam_26(const CEntityEvent &__eeInput);
  BOOL H0x0261002c_FireLightBeam_27(const CEntityEvent &__eeInput);
  BOOL H0x0261002d_FireLightBeam_28(const CEntityEvent &__eeInput);
#define  STATE_CPyramidSpaceShip_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
  BOOL H0x0261002e_Main_01(const CEntityEvent &__eeInput);
  BOOL H0x0261002f_Main_02(const CEntityEvent &__eeInput);
  BOOL H0x02610030_Main_03(const CEntityEvent &__eeInput);
  BOOL H0x02610031_Main_04(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_PyramidSpaceShip_INCLUDED
