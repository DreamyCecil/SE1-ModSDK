// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#ifndef _EntitiesV_WorldSettingsController_INCLUDED
#define _EntitiesV_WorldSettingsController_INCLUDED 1
#define CWorldSettingsController_ClassID 605
extern "C" DECL_DLL CDLLEntityClass CWorldSettingsController_DLLClass;
class CWorldSettingsController : public CEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsImportant(void) const { return TRUE; };
  DECL_DLL virtual void SetDefaultProperties(void);
  FLOAT m_tmStormStart;
  CTString m_strName;
  FLOAT m_tmLightningStart;
  FLOAT m_fLightningPower;
  FLOAT m_tmStormEnd;
  FLOAT m_tmPyramidPlatesStart;
  FLOAT m_tmActivatedPlate1;
  FLOAT m_tmDeactivatedPlate1;
  FLOAT m_tmActivatedPlate2;
  FLOAT m_tmDeactivatedPlate2;
  FLOAT m_tmActivatedPlate3;
  FLOAT m_tmDeactivatedPlate3;
  FLOAT m_tmActivatedPlate4;
  FLOAT m_tmDeactivatedPlate4;
  FLOAT m_tmPyramidMorphRoomActivated;
  FLOAT m_tmShakeStarted;
  FLOAT3D m_vShakePos;
  FLOAT m_fShakeFalloff;
  FLOAT m_fShakeFade;
  FLOAT m_fShakeIntensityY;
  FLOAT m_tmShakeFrequencyY;
  FLOAT m_fShakeIntensityB;
  FLOAT m_tmShakeFrequencyB;
  FLOAT m_fShakeIntensityZ;
  FLOAT m_tmShakeFrequencyZ;
  BOOL m_bShakeFadeIn;
  CEntityPointer m_penEnvPartHolder;
  BOOL m_bNoSaveGame;
  FLOAT m_tmGlaringStarted;
  FLOAT m_tmGlaringEnded;
  FLOAT m_fGlaringFadeInRatio;
  FLOAT m_fGlaringFadeOutRatio;
  COLOR m_colGlade;
  COLOR m_colBlendStart;
  COLOR m_colBlendStop;
  COLOR m_colShadeStart;
  COLOR m_colShadeStop;
  BOOL m_bApplyShadingToModels;
  FLOAT m_tmStormAppearTime;
  FLOAT m_tmStormDisappearTime;
  CEntityPointer m_penScrollHolder;
  CEntityPointer m_penTextFXHolder;
  CEntityPointer m_penCreditsHolder;
  CEntityPointer m_penHudPicFXHolder;
  FLOAT m_tmActivatedToggledLights1;
  FLOAT m_tmDeactivatedToggledLights1;
  FLOAT m_tmActivatedToggledLights2;
  FLOAT m_tmDeactivatedToggledLights2;
  FLOAT m_tmActivatedToggledLights3;
  FLOAT m_tmDeactivatedToggledLights3;
  FLOAT m_tmActivatedToggledLights4;
  FLOAT m_tmDeactivatedToggledLights4;
  FLOAT m_tmActivatedInstToggledLights1;
  FLOAT m_tmDeactivatedInstToggledLights1;
  FLOAT m_tmActivatedInstToggledLights2;
  FLOAT m_tmDeactivatedInstToggledLights2;
  FLOAT m_tmActivatedInstToggledLights3;
  FLOAT m_tmDeactivatedInstToggledLights3;
  FLOAT m_tmActivatedInstToggledLights4;
  FLOAT m_tmDeactivatedInstToggledLights4;
  FLOAT m_tmBlendSpeed;
  BOOL m_bFlyoverLogo;
   BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   FLOAT GetStormFactor(void);
   BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CWorldSettingsController_Main 1
  BOOL Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesV_WorldSettingsController_INCLUDED
