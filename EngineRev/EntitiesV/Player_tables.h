// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(PlayerViewType)
  EP_ENUMVALUE(PVT_PLAYEREYES, ""),
  EP_ENUMVALUE(PVT_PLAYERAUTOVIEW, ""),
  EP_ENUMVALUE(PVT_SCENECAMERA, ""),
  EP_ENUMVALUE(PVT_3RDPERSONVIEW, ""),
EP_ENUMEND(PlayerViewType);

EP_ENUMBEG(PlayerState)
  EP_ENUMVALUE(PST_STAND, ""),
  EP_ENUMVALUE(PST_CROUCH, ""),
  EP_ENUMVALUE(PST_SWIM, ""),
  EP_ENUMVALUE(PST_DIVE, ""),
  EP_ENUMVALUE(PST_FALL, ""),
EP_ENUMEND(PlayerState);

#define ENTITYCLASS CPlayer

CEntityProperty CPlayer_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x191<<8)+1, 0x3C0, "Name", 0, "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x191<<8)+2, 0x3C4, "", 0, "m_ulLastButtons", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+3, 0x3C8, "", 0, "m_fArmor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x191<<8)+4, 0x3CC, "", 0, "m_strGroup", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_U64, NULL, (0x191<<8)+5, 0x3D0, "", 0, "m_ulKeys", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+6, 0x3D8, "", 0, "m_fMaxHealth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+7, 0x3DC, "", 0, "m_ulFlags", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+16, 0x3E0, "", 0, "m_penWeapons", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+17, 0x3E4, "", 0, "m_penAnimator", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+18, 0x3E8, "", 0, "m_penView", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+19, 0x3EC, "", 0, "m_pen3rdPersonView", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+20, 0x3F0, "", 0, "m_iViewState", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+21, 0x3F4, "", 0, "m_iLastViewState", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+22, 0x3F8, "", 0, "m_iViewStateVehicle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANIMOBJECT, NULL, (0x191<<8)+26, 0x400, "", 0, "m_aoLightAnimation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+27, 0x420, "", 0, "m_fDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+28, 0x424, "", 0, "m_tmWoundedTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+29, 0x428, "", 0, "m_tmScreamTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+30, 0x42C, "", 0, "m_tmShitGitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+31, 0x430, "", 0, "m_bGotHurt", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+32, 0x434, "", 0, "m_bJumped", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+33, 0x438, "", 0, "m_iGender", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &PlayerState_enum, (0x191<<8)+34, 0x43C, "", 0, "m_pstState", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+35, 0x440, "", 0, "m_fFallTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+36, 0x444, "", 0, "m_fSwimTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+45, 0x448, "", 0, "m_tmOutOfWater", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+37, 0x44C, "", 0, "m_tmMoveSound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+38, 0x450, "", 0, "m_bMoveSoundLeft", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+39, 0x454, "", 0, "m_tmNextAmbientOnce", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+43, 0x458, "", 0, "m_tmMouthSoundLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+40, 0x45C, "", 0, "m_penCamera", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x191<<8)+41, 0x460, "", 0, "m_strCenterMessage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+42, 0x464, "", 0, "m_tmCenterMessageEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+48, 0x468, "", 0, "m_bPendingMessage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+47, 0x46C, "", 0, "m_tmMessagePlay", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+49, 0x470, "", 0, "m_tmAnalyseEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+50, 0x474, "", 0, "m_bComputerInvoked", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+57, 0x478, "", 0, "m_tmAnimateInbox", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+44, 0x47C, "", 0, "m_penMainMusicHolder", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+51, 0x480, "", 0, "m_tmLastDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+52, 0x484, "", 0, "m_fMaxDamageAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+53, 0x488, "", 0, "m_vDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+54, 0x494, "", 0, "m_tmSpraySpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+55, 0x498, "", 0, "m_fSprayDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+56, 0x49C, "", 0, "m_penSpray", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+60, 0x4A0, "", 0, "m_soWeapon0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+61, 0x51C, "", 0, "m_soWeapon1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+62, 0x598, "", 0, "m_soWeapon2", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+63, 0x614, "", 0, "m_soWeapon3", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+64, 0x690, "", 0, "m_soWeaponAmbient", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+65, 0x70C, "", 0, "m_soPowerUpBeep", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+70, 0x788, "", 0, "m_soMouth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+71, 0x804, "", 0, "m_soFootL", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+72, 0x880, "", 0, "m_soFootR", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+73, 0x8FC, "", 0, "m_soBody", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+74, 0x978, "", 0, "m_soLocalAmbientLoop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+75, 0x9F4, "", 0, "m_soLocalAmbientOnce", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+76, 0xA70, "", 0, "m_soMessage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+78, 0xAEC, "", 0, "m_soSpeech", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+79, 0xB68, "", 0, "m_soSniperZoom", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+81, 0xBE4, "", 0, "m_iMana", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+94, 0xBE8, "", 0, "m_fManaFraction", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+89, 0xBEC, "", 0, "m_tmLatency", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+88, 0xBF0, "", 0, "m_tmLatencyLastAvg", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+87, 0xBF4, "", 0, "m_tmLatencyAvgSum", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+86, 0xBF8, "", 0, "m_ctLatencyAvg", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+96, 0xBFC, "", 0, "m_bEndOfLevel", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+97, 0xC00, "", 0, "m_bEndOfGame", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+98, 0xC04, "", 0, "m_iMayRespawn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+99, 0xC08, "", 0, "m_tmSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+100, 0xC0C, "", 0, "m_vDied", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+101, 0xC18, "", 0, "m_aDied", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+103, 0xC24, "", 0, "m_tmEstTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+105, 0xC28, "", 0, "m_iTimeScore", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+106, 0xC2C, "", 0, "m_iStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+107, 0xC30, "", 0, "m_iEndTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+108, 0xC34, "", 0, "m_tmLevelStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x191<<8)+93, 0xC38, "", 0, "m_strLevelStats", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+110, 0xC3C, "", 0, "m_penActionMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+111, 0xC40, "", 0, "m_fAutoSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+112, 0xC44, "", 0, "m_iAutoOrgWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+113, 0xC48, "", 0, "m_vAutoSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+114, 0xC54, "", 0, "m_tmSpiritStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+115, 0xC58, "", 0, "m_tmFadeStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+120, 0xC5C, "", 0, "m_tmLastPicked", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x191<<8)+121, 0xC60, "", 0, "m_strPickedName", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+122, 0xC64, "", 0, "m_fPickedAmount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+123, 0xC68, "", 0, "m_fPickedMana", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+130, 0xC6C, "", 0, "m_iLastHealth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+131, 0xC70, "", 0, "m_iLastArmor", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+132, 0xC74, "", 0, "m_iLastAmmo", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+135, 0xC78, "", 0, "m_tmHealthChanged", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+136, 0xC7C, "", 0, "m_tmArmorChanged", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+137, 0xC80, "", 0, "m_tmAmmoChanged", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+138, 0xC84, "", 0, "m_tmMinigunAutoFireStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+150, 0xC88, "", 0, "m_vLastStain", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x191<<8)+151, 0xC94, "", 0, "m_aLastRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x191<<8)+152, 0xCA0, "", 0, "m_aLastViewRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+153, 0xCAC, "", 0, "m_vLastTranslation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x191<<8)+154, 0xCB8, "", 0, "m_aLocalRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x191<<8)+155, 0xCC4, "", 0, "m_aLocalViewRotation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x191<<8)+156, 0xCD0, "", 0, "m_vLocalTranslation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+160, 0xCDC, "", 0, "m_tmInvisibility", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+161, 0xCE0, "", 0, "m_tmInvulnerability", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+162, 0xCE4, "", 0, "m_tmSeriousDamage", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+163, 0xCE8, "", 0, "m_tmSeriousSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+164, 0xCEC, "", 0, "m_tmSeriousJump", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+166, 0xCF0, "", 0, "m_tmInvisibilityMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+167, 0xCF4, "", 0, "m_tmInvulnerabilityMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+168, 0xCF8, "", 0, "m_tmSeriousDamageMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+169, 0xCFC, "", 0, "m_tmSeriousSpeedMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+170, 0xD00, "", 0, "m_tmSeriousJumpMax", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+180, 0xD04, "", 0, "m_tmChainShakeEnd", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+181, 0xD08, "", 0, "m_fChainShakeStrength", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+182, 0xD0C, "", 0, "m_fChainShakeFreqMod", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+183, 0xD10, "", 0, "m_fChainsawShakeDX", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+184, 0xD14, "", 0, "m_fChainsawShakeDY", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+190, 0xD18, "", 0, "m_iSeriousBombCount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+191, 0xD1C, "", 0, "m_iLastSeriousBombCount", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+192, 0xD20, "", 0, "m_tmSeriousBombFired", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+193, 0xD24, "", 0, "m_iTeam", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+194, 0xD28, "", 0, "m_kaiKills", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+195, 0xD2C, "", 0, "m_kaiRoundKills", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+196, 0xD30, "", 0, "m_katmLastKill", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+197, 0xD34, "", 0, "m_iHasFlag", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+198, 0xD38, "", 0, "m_penCarriedFlag", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+200, 0xD3C, "", 0, "m_soCTFYouHaveTheirFlag", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+201, 0xDB8, "", 0, "m_soCTFTheyHaveYourFlag", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+202, 0xE34, "", 0, "m_soCTFRedTeamScores", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+203, 0xEB0, "", 0, "m_soCTFBlueTeamScores", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+204, 0xF2C, "", 0, "m_soCTFRedFlagReturned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+205, 0xFA8, "", 0, "m_soCTFBlueFlagReturned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+206, 0x1024, "", 0, "m_soKABackstab", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+207, 0x10A0, "", 0, "m_soKAHumiliation", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+208, 0x111C, "", 0, "m_soKAExcellent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+209, 0x1198, "", 0, "m_soKAMultiKll", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x191<<8)+210, 0x1214, "", 0, "m_soKAOwned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+211, 0x1290, "", 0, "m_bIsReady", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+212, 0x1294, "", 0, "m_tmStartFadeIn", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+213, 0x1298, "", 0, "m_tmDiedAt", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+214, 0x129C, "", 0, "m_tmGravityStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x191<<8)+215, 0x12A0, "", 0, "m_iBulletBatchIDLastHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+216, 0x12A4, "", 0, "m_penInControlZone", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x191<<8)+217, 0x12A8, "", 0, "m_tmFragMade", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+218, 0x12AC, "", 0, "m_penFragPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+219, 0x12B0, "", 0, "m_penInVehicle", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+220, 0x12B4, "", 0, "m_bSelectingTeam", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x191<<8)+221, 0x12B8, "", 0, "m_bWaitingForNextRound", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x191<<8)+255, 0x12BC, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CPlayer_propertiesct ARRAYCOUNT(CPlayer_properties)

CEntityComponent CPlayer_components[] = {
#define CLASS_PLAYER_WEAPONS ((0x00000191<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PLAYER_WEAPONS, "EFNM" "Classes\\PlayerWeapons.ecl"),
#define CLASS_PLAYER_ANIMATOR ((0x00000191<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_PLAYER_ANIMATOR, "EFNM" "Classes\\PlayerAnimator.ecl"),
#define CLASS_PLAYER_VIEW ((0x00000191<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_PLAYER_VIEW, "EFNM" "Classes\\PlayerView.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000191<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_BLOOD_SPRAY ((0x00000191<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_BLOOD_SPRAY, "EFNM" "Classes\\BloodSpray.ecl"),
#define CLASS_SERIOUSBOMB ((0x00000191<<8)+6)
 CEntityComponent(ECT_CLASS, CLASS_SERIOUSBOMB, "EFNM" "Classes\\SeriousBomb.ecl"),
#define SOUND_WATER_ENTER ((0x00000191<<8)+50)
 CEntityComponent(ECT_SOUND, SOUND_WATER_ENTER, "EFNM" "Sounds\\Player\\WaterEnter.wav"),
#define SOUND_WATER_LEAVE ((0x00000191<<8)+51)
 CEntityComponent(ECT_SOUND, SOUND_WATER_LEAVE, "EFNM" "Sounds\\Player\\WaterLeave.wav"),
#define SOUND_WALK_L ((0x00000191<<8)+52)
 CEntityComponent(ECT_SOUND, SOUND_WALK_L, "EFNM" "Sounds\\Player\\WalkL.wav"),
#define SOUND_WALK_R ((0x00000191<<8)+53)
 CEntityComponent(ECT_SOUND, SOUND_WALK_R, "EFNM" "Sounds\\Player\\WalkR.wav"),
#define SOUND_SWIM_L ((0x00000191<<8)+54)
 CEntityComponent(ECT_SOUND, SOUND_SWIM_L, "EFNM" "Sounds\\Player\\SwimL.wav"),
#define SOUND_SWIM_R ((0x00000191<<8)+55)
 CEntityComponent(ECT_SOUND, SOUND_SWIM_R, "EFNM" "Sounds\\Player\\SwimR.wav"),
#define SOUND_DIVE_L ((0x00000191<<8)+56)
 CEntityComponent(ECT_SOUND, SOUND_DIVE_L, "EFNM" "Sounds\\Player\\Dive.wav"),
#define SOUND_DIVE_R ((0x00000191<<8)+57)
 CEntityComponent(ECT_SOUND, SOUND_DIVE_R, "EFNM" "Sounds\\Player\\Dive.wav"),
#define SOUND_DIVEIN ((0x00000191<<8)+58)
 CEntityComponent(ECT_SOUND, SOUND_DIVEIN, "EFNM" "Sounds\\Player\\DiveIn.wav"),
#define SOUND_DIVEOUT ((0x00000191<<8)+59)
 CEntityComponent(ECT_SOUND, SOUND_DIVEOUT, "EFNM" "Sounds\\Player\\DiveOut.wav"),
#define SOUND_DROWN ((0x00000191<<8)+60)
 CEntityComponent(ECT_SOUND, SOUND_DROWN, "EFNM" "Sounds\\Player\\Drown.wav"),
#define SOUND_INHALE0 ((0x00000191<<8)+61)
 CEntityComponent(ECT_SOUND, SOUND_INHALE0, "EFNM" "Sounds\\Player\\Inhale00.wav"),
#define SOUND_JUMP ((0x00000191<<8)+62)
 CEntityComponent(ECT_SOUND, SOUND_JUMP, "EFNM" "Sounds\\Player\\Jump.wav"),
#define SOUND_LAND ((0x00000191<<8)+63)
 CEntityComponent(ECT_SOUND, SOUND_LAND, "EFNM" "Sounds\\Player\\Land.wav"),
#define SOUND_DEATH ((0x00000191<<8)+66)
 CEntityComponent(ECT_SOUND, SOUND_DEATH, "EFNM" "Sounds\\Player\\Death.wav"),
#define SOUND_DEATHWATER ((0x00000191<<8)+67)
 CEntityComponent(ECT_SOUND, SOUND_DEATHWATER, "EFNM" "Sounds\\Player\\DeathWater.wav"),
#define SOUND_WATERWALK_L ((0x00000191<<8)+70)
 CEntityComponent(ECT_SOUND, SOUND_WATERWALK_L, "EFNM" "Sounds\\Player\\WalkWaterL.wav"),
#define SOUND_WATERWALK_R ((0x00000191<<8)+71)
 CEntityComponent(ECT_SOUND, SOUND_WATERWALK_R, "EFNM" "Sounds\\Player\\WalkWaterR.wav"),
#define SOUND_INHALE1 ((0x00000191<<8)+72)
 CEntityComponent(ECT_SOUND, SOUND_INHALE1, "EFNM" "Sounds\\Player\\Inhale01.wav"),
#define SOUND_INHALE2 ((0x00000191<<8)+73)
 CEntityComponent(ECT_SOUND, SOUND_INHALE2, "EFNM" "Sounds\\Player\\Inhale02.wav"),
#define SOUND_WALK_SAND_L ((0x00000191<<8)+75)
 CEntityComponent(ECT_SOUND, SOUND_WALK_SAND_L, "EFNM" "Sounds\\Player\\WalkSandL.wav"),
#define SOUND_WALK_SAND_R ((0x00000191<<8)+76)
 CEntityComponent(ECT_SOUND, SOUND_WALK_SAND_R, "EFNM" "Sounds\\Player\\WalkSandR.wav"),
#define SOUND_WOUNDWEAK ((0x00000191<<8)+80)
 CEntityComponent(ECT_SOUND, SOUND_WOUNDWEAK, "EFNM" "Sounds\\Player\\WoundWeak.wav"),
#define SOUND_WOUNDMEDIUM ((0x00000191<<8)+81)
 CEntityComponent(ECT_SOUND, SOUND_WOUNDMEDIUM, "EFNM" "Sounds\\Player\\WoundMedium.wav"),
#define SOUND_WOUNDSTRONG ((0x00000191<<8)+82)
 CEntityComponent(ECT_SOUND, SOUND_WOUNDSTRONG, "EFNM" "Sounds\\Player\\WoundStrong.wav"),
#define SOUND_WOUNDWATER ((0x00000191<<8)+85)
 CEntityComponent(ECT_SOUND, SOUND_WOUNDWATER, "EFNM" "Sounds\\Player\\WoundWater.wav"),
#define SOUND_WALK_GRASS_L ((0x00000191<<8)+86)
 CEntityComponent(ECT_SOUND, SOUND_WALK_GRASS_L, "EFNM" "SoundsMP\\Player\\WalkGrassL.wav"),
#define SOUND_WALK_GRASS_R ((0x00000191<<8)+87)
 CEntityComponent(ECT_SOUND, SOUND_WALK_GRASS_R, "EFNM" "SoundsMP\\Player\\WalkGrassR.wav"),
#define SOUND_WALK_WOOD_L ((0x00000191<<8)+88)
 CEntityComponent(ECT_SOUND, SOUND_WALK_WOOD_L, "EFNM" "SoundsMP\\Player\\WalkWoodL.wav"),
#define SOUND_WALK_WOOD_R ((0x00000191<<8)+89)
 CEntityComponent(ECT_SOUND, SOUND_WALK_WOOD_R, "EFNM" "SoundsMP\\Player\\WalkWoodR.wav"),
#define SOUND_WALK_SNOW_L ((0x00000191<<8)+90)
 CEntityComponent(ECT_SOUND, SOUND_WALK_SNOW_L, "EFNM" "SoundsMP\\Player\\WalkSnowL.wav"),
#define SOUND_WALK_SNOW_R ((0x00000191<<8)+91)
 CEntityComponent(ECT_SOUND, SOUND_WALK_SNOW_R, "EFNM" "SoundsMP\\Player\\WalkSnowR.wav"),
#define SOUND_WALK_GRAVEL_R ((0x00000191<<8)+92)
 CEntityComponent(ECT_SOUND, SOUND_WALK_GRAVEL_R, "EFNM" "SoundsMP\\Player\\WalkGravelR.wav"),
#define SOUND_WALK_GRAVEL_L ((0x00000191<<8)+93)
 CEntityComponent(ECT_SOUND, SOUND_WALK_GRAVEL_L, "EFNM" "SoundsMP\\Player\\WalkGravelL.wav"),
#define SOUND_BLOWUP ((0x00000191<<8)+92)
 CEntityComponent(ECT_SOUND, SOUND_BLOWUP, "EFNM" "SoundsMP\\Player\\BlowUp.wav"),
#define SOUND_F_WATER_ENTER ((0x00000191<<8)+150)
 CEntityComponent(ECT_SOUND, SOUND_F_WATER_ENTER, "EFNM" "SoundsMP\\Player\\Female\\WaterEnter.wav"),
#define SOUND_F_WATER_LEAVE ((0x00000191<<8)+151)
 CEntityComponent(ECT_SOUND, SOUND_F_WATER_LEAVE, "EFNM" "SoundsMP\\Player\\Female\\WaterLeave.wav"),
#define SOUND_F_WALK_L ((0x00000191<<8)+152)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_L, "EFNM" "SoundsMP\\Player\\Female\\WalkL.wav"),
#define SOUND_F_WALK_R ((0x00000191<<8)+153)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_R, "EFNM" "SoundsMP\\Player\\Female\\WalkR.wav"),
#define SOUND_F_SWIM_L ((0x00000191<<8)+154)
 CEntityComponent(ECT_SOUND, SOUND_F_SWIM_L, "EFNM" "SoundsMP\\Player\\Female\\SwimL.wav"),
#define SOUND_F_SWIM_R ((0x00000191<<8)+155)
 CEntityComponent(ECT_SOUND, SOUND_F_SWIM_R, "EFNM" "SoundsMP\\Player\\Female\\SwimR.wav"),
#define SOUND_F_DIVE_L ((0x00000191<<8)+156)
 CEntityComponent(ECT_SOUND, SOUND_F_DIVE_L, "EFNM" "SoundsMP\\Player\\Female\\Dive.wav"),
#define SOUND_F_DIVE_R ((0x00000191<<8)+157)
 CEntityComponent(ECT_SOUND, SOUND_F_DIVE_R, "EFNM" "SoundsMP\\Player\\Female\\Dive.wav"),
#define SOUND_F_DIVEIN ((0x00000191<<8)+158)
 CEntityComponent(ECT_SOUND, SOUND_F_DIVEIN, "EFNM" "SoundsMP\\Player\\Female\\DiveIn.wav"),
#define SOUND_F_DIVEOUT ((0x00000191<<8)+159)
 CEntityComponent(ECT_SOUND, SOUND_F_DIVEOUT, "EFNM" "SoundsMP\\Player\\Female\\DiveOut.wav"),
#define SOUND_F_DROWN ((0x00000191<<8)+160)
 CEntityComponent(ECT_SOUND, SOUND_F_DROWN, "EFNM" "SoundsMP\\Player\\Female\\Drown.wav"),
#define SOUND_F_INHALE0 ((0x00000191<<8)+161)
 CEntityComponent(ECT_SOUND, SOUND_F_INHALE0, "EFNM" "SoundsMP\\Player\\Female\\Inhale00.wav"),
#define SOUND_F_JUMP ((0x00000191<<8)+162)
 CEntityComponent(ECT_SOUND, SOUND_F_JUMP, "EFNM" "SoundsMP\\Player\\Female\\Jump.wav"),
#define SOUND_F_LAND ((0x00000191<<8)+163)
 CEntityComponent(ECT_SOUND, SOUND_F_LAND, "EFNM" "SoundsMP\\Player\\Female\\Land.wav"),
#define SOUND_F_DEATH ((0x00000191<<8)+166)
 CEntityComponent(ECT_SOUND, SOUND_F_DEATH, "EFNM" "SoundsMP\\Player\\Female\\Death.wav"),
#define SOUND_F_DEATHWATER ((0x00000191<<8)+167)
 CEntityComponent(ECT_SOUND, SOUND_F_DEATHWATER, "EFNM" "SoundsMP\\Player\\Female\\DeathWater.wav"),
#define SOUND_F_WATERWALK_L ((0x00000191<<8)+170)
 CEntityComponent(ECT_SOUND, SOUND_F_WATERWALK_L, "EFNM" "SoundsMP\\Player\\Female\\WalkWaterL.wav"),
#define SOUND_F_WATERWALK_R ((0x00000191<<8)+171)
 CEntityComponent(ECT_SOUND, SOUND_F_WATERWALK_R, "EFNM" "SoundsMP\\Player\\Female\\WalkWaterR.wav"),
#define SOUND_F_INHALE1 ((0x00000191<<8)+172)
 CEntityComponent(ECT_SOUND, SOUND_F_INHALE1, "EFNM" "SoundsMP\\Player\\Female\\Inhale01.wav"),
#define SOUND_F_INHALE2 ((0x00000191<<8)+173)
 CEntityComponent(ECT_SOUND, SOUND_F_INHALE2, "EFNM" "SoundsMP\\Player\\Female\\Inhale02.wav"),
#define SOUND_F_WALK_SAND_L ((0x00000191<<8)+175)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_SAND_L, "EFNM" "SoundsMP\\Player\\Female\\WalkSandL.wav"),
#define SOUND_F_WALK_SAND_R ((0x00000191<<8)+176)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_SAND_R, "EFNM" "SoundsMP\\Player\\Female\\WalkSandR.wav"),
#define SOUND_F_WOUNDWEAK ((0x00000191<<8)+180)
 CEntityComponent(ECT_SOUND, SOUND_F_WOUNDWEAK, "EFNM" "SoundsMP\\Player\\Female\\WoundWeak.wav"),
#define SOUND_F_WOUNDMEDIUM ((0x00000191<<8)+181)
 CEntityComponent(ECT_SOUND, SOUND_F_WOUNDMEDIUM, "EFNM" "SoundsMP\\Player\\Female\\WoundMedium.wav"),
#define SOUND_F_WOUNDSTRONG ((0x00000191<<8)+182)
 CEntityComponent(ECT_SOUND, SOUND_F_WOUNDSTRONG, "EFNM" "SoundsMP\\Player\\Female\\WoundStrong.wav"),
#define SOUND_F_WOUNDWATER ((0x00000191<<8)+185)
 CEntityComponent(ECT_SOUND, SOUND_F_WOUNDWATER, "EFNM" "SoundsMP\\Player\\Female\\WoundWater.wav"),
#define SOUND_F_WALK_GRASS_L ((0x00000191<<8)+186)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_GRASS_L, "EFNM" "SoundsMP\\Player\\Female\\WalkGrassL.wav"),
#define SOUND_F_WALK_GRASS_R ((0x00000191<<8)+187)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_GRASS_R, "EFNM" "SoundsMP\\Player\\Female\\WalkGrassR.wav"),
#define SOUND_F_WALK_WOOD_L ((0x00000191<<8)+188)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_WOOD_L, "EFNM" "SoundsMP\\Player\\Female\\WalkWoodL.wav"),
#define SOUND_F_WALK_WOOD_R ((0x00000191<<8)+189)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_WOOD_R, "EFNM" "SoundsMP\\Player\\Female\\WalkWoodR.wav"),
#define SOUND_F_WALK_SNOW_L ((0x00000191<<8)+190)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_SNOW_L, "EFNM" "SoundsMP\\Player\\Female\\WalkSnowL.wav"),
#define SOUND_F_WALK_SNOW_R ((0x00000191<<8)+191)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_SNOW_R, "EFNM" "SoundsMP\\Player\\Female\\WalkSnowR.wav"),
#define SOUND_F_WALK_GRAVEL_R ((0x00000191<<8)+192)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_GRAVEL_R, "EFNM" "SoundsMP\\Player\\WalkGravelR.wav"),
#define SOUND_F_WALK_GRAVEL_L ((0x00000191<<8)+193)
 CEntityComponent(ECT_SOUND, SOUND_F_WALK_GRAVEL_L, "EFNM" "SoundsMP\\Player\\WalkGravelL.wav"),
#define SOUND_SILENCE ((0x00000191<<8)+200)
 CEntityComponent(ECT_SOUND, SOUND_SILENCE, "EFNM" "Sounds\\Misc\\Silence.wav"),
#define SOUND_SNIPER_ZOOM ((0x00000191<<8)+201)
 CEntityComponent(ECT_SOUND, SOUND_SNIPER_ZOOM, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sounds\\Zoom.wav"),
#define SOUND_SNIPER_QZOOM ((0x00000191<<8)+206)
 CEntityComponent(ECT_SOUND, SOUND_SNIPER_QZOOM, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sounds\\QuickZoom.wav"),
#define SOUND_INFO ((0x00000191<<8)+202)
 CEntityComponent(ECT_SOUND, SOUND_INFO, "EFNM" "Sounds\\Player\\Info.wav"),
#define SOUND_WATERAMBIENT ((0x00000191<<8)+203)
 CEntityComponent(ECT_SOUND, SOUND_WATERAMBIENT, "EFNM" "Sounds\\Player\\Underwater.wav"),
#define SOUND_WATERBUBBLES ((0x00000191<<8)+204)
 CEntityComponent(ECT_SOUND, SOUND_WATERBUBBLES, "EFNM" "Sounds\\Player\\Bubbles.wav"),
#define SOUND_POWERUP_BEEP ((0x00000191<<8)+205)
 CEntityComponent(ECT_SOUND, SOUND_POWERUP_BEEP, "EFNM" "SoundsMP\\Player\\PowerUpBeep.wav"),
#define MODEL_FLESH ((0x00000191<<8)+210)
 CEntityComponent(ECT_MODEL, MODEL_FLESH, "EFNM" "Models\\Effects\\Debris\\Flesh\\Flesh.mdl"),
#define MODEL_FLESH_APPLE ((0x00000191<<8)+211)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_APPLE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Apple.mdl"),
#define MODEL_FLESH_BANANA ((0x00000191<<8)+212)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.mdl"),
#define MODEL_FLESH_BURGER ((0x00000191<<8)+213)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_BURGER, "EFNM" "Models\\Effects\\Debris\\Fruits\\CheeseBurger.mdl"),
#define MODEL_FLESH_LOLLY ((0x00000191<<8)+214)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_LOLLY, "EFNM" "Models\\Effects\\Debris\\Fruits\\LollyPop.mdl"),
#define MODEL_FLESH_ORANGE ((0x00000191<<8)+215)
 CEntityComponent(ECT_MODEL, MODEL_FLESH_ORANGE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Orange.mdl"),
#define TEXTURE_FLESH_RED ((0x00000191<<8)+220)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_RED, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshRed.tex"),
#define TEXTURE_FLESH_GREEN ((0x00000191<<8)+221)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_GREEN, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshGreen.tex"),
#define TEXTURE_FLESH_APPLE ((0x00000191<<8)+222)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_APPLE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Apple.tex"),
#define TEXTURE_FLESH_BANANA ((0x00000191<<8)+223)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_BANANA, "EFNM" "Models\\Effects\\Debris\\Fruits\\Banana.tex"),
#define TEXTURE_FLESH_BURGER ((0x00000191<<8)+224)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_BURGER, "EFNM" "Models\\Effects\\Debris\\Fruits\\CheeseBurger.tex"),
#define TEXTURE_FLESH_LOLLY ((0x00000191<<8)+225)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_LOLLY, "EFNM" "Models\\Effects\\Debris\\Fruits\\LollyPop.tex"),
#define TEXTURE_FLESH_ORANGE ((0x00000191<<8)+226)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_ORANGE, "EFNM" "Models\\Effects\\Debris\\Fruits\\Orange.tex"),
#define TEXTURE_FLESH_YELLOW ((0x00000191<<8)+241)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_YELLOW, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshYellow.tex"),
#define TEXTURE_FLESH_BLUE ((0x00000191<<8)+242)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLESH_BLUE, "EFNM" "Models\\Effects\\Debris\\Flesh\\FleshBlue.tex"),
#define SOUND_CTF_YOUHAVEFLAG ((0x00000191<<8)+227)
 CEntityComponent(ECT_SOUND, SOUND_CTF_YOUHAVEFLAG, "EFNM" "Sounds\\CTF\\YouHaveTheirFlag.wav"),
#define SOUND_CTF_THEYHAVEFLAG ((0x00000191<<8)+228)
 CEntityComponent(ECT_SOUND, SOUND_CTF_THEYHAVEFLAG, "EFNM" "Sounds\\CTF\\TheyHaveYourFlag.wav"),
#define SOUND_CTF_REDTEAMSCORES ((0x00000191<<8)+229)
 CEntityComponent(ECT_SOUND, SOUND_CTF_REDTEAMSCORES, "EFNM" "Sounds\\CTF\\RedTeamScores.wav"),
#define SOUND_CTF_BLUETEAMSCORES ((0x00000191<<8)+230)
 CEntityComponent(ECT_SOUND, SOUND_CTF_BLUETEAMSCORES, "EFNM" "Sounds\\CTF\\BlueTeamScores.wav"),
#define SOUND_CTF_REDFLAGRETURNED ((0x00000191<<8)+231)
 CEntityComponent(ECT_SOUND, SOUND_CTF_REDFLAGRETURNED, "EFNM" "Sounds\\CTF\\RedFlagReturned.wav"),
#define SOUND_CTF_BLUEFLAGRETURNED ((0x00000191<<8)+232)
 CEntityComponent(ECT_SOUND, SOUND_CTF_BLUEFLAGRETURNED, "EFNM" "Sounds\\CTF\\BlueFlagReturned.wav"),
#define SOUND_KA_BACKSTAB ((0x00000191<<8)+233)
 CEntityComponent(ECT_SOUND, SOUND_KA_BACKSTAB, "EFNM" "Sounds\\KA\\Backstab.wav"),
#define SOUND_KA_HUMILIATION ((0x00000191<<8)+234)
 CEntityComponent(ECT_SOUND, SOUND_KA_HUMILIATION, "EFNM" "Sounds\\KA\\Humiliation.wav"),
#define SOUND_KA_EXCELLENT ((0x00000191<<8)+235)
 CEntityComponent(ECT_SOUND, SOUND_KA_EXCELLENT, "EFNM" "Sounds\\KA\\Excellent.wav"),
#define SOUND_KA_MULTIKILL ((0x00000191<<8)+236)
 CEntityComponent(ECT_SOUND, SOUND_KA_MULTIKILL, "EFNM" "Sounds\\KA\\MultiKill.wav"),
#define SOUND_KA_OWNED ((0x00000191<<8)+237)
 CEntityComponent(ECT_SOUND, SOUND_KA_OWNED, "EFNM" "Sounds\\KA\\Owned.wav"),
#define MODEL_CTF_FLAG ((0x00000191<<8)+238)
 CEntityComponent(ECT_MODEL, MODEL_CTF_F, "EFNM" "Models\\Flag\\Flag.mdl"),
#define TEXTURE_CTF_FLAG_RED ((0x00000191<<8)+239)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CTF_FLAG_RED, "EFNM" "Models\\Flag\\Flag.tex"),
#define TEXTURE_CTF_FLAG_BLUE ((0x00000191<<8)+240)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CTF_FLAG_BLUE, "EFNM" "Models\\Flag\\FlagBlue.tex"),
};
#define CPlayer_componentsct ARRAYCOUNT(CPlayer_components)

CEventHandlerEntry CPlayer_handlers[] = {
 {0x01910005, -1, CEntity::pEventHandler(&CPlayer::WorldChange),DEBUGSTRING("CPlayer::WorldChange")},
 {0x01910006, -1, CEntity::pEventHandler(&CPlayer::WorldChangeDead),DEBUGSTRING("CPlayer::WorldChangeDead")},
 {0x01910007, -1, CEntity::pEventHandler(&CPlayer::H0x01910007_WorldChangeDead_01), DEBUGSTRING("CPlayer::H0x01910007_WorldChangeDead_01")},
 {0x01910008, -1, CEntity::pEventHandler(&CPlayer::H0x01910008_WorldChangeDead_02), DEBUGSTRING("CPlayer::H0x01910008_WorldChangeDead_02")},
 {0x01910009, -1, CEntity::pEventHandler(&CPlayer::Death),DEBUGSTRING("CPlayer::Death")},
 {0x0191000a, -1, CEntity::pEventHandler(&CPlayer::H0x0191000a_Death_01), DEBUGSTRING("CPlayer::H0x0191000a_Death_01")},
 {0x0191000b, -1, CEntity::pEventHandler(&CPlayer::H0x0191000b_Death_02), DEBUGSTRING("CPlayer::H0x0191000b_Death_02")},
 {0x0191000c, -1, CEntity::pEventHandler(&CPlayer::SelectTeam), DEBUGSTRING("CPlayer::SelectTeam")},
 {0x0191000d, -1, CEntity::pEventHandler(&CPlayer::TheEnd),DEBUGSTRING("CPlayer::TheEnd")},
 {0x0191000e, -1, CEntity::pEventHandler(&CPlayer::H0x0191000e_TheEnd_01), DEBUGSTRING("CPlayer::H0x0191000e_TheEnd_01")},
 {0x0191000f, -1, CEntity::pEventHandler(&CPlayer::H0x0191000f_TheEnd_02), DEBUGSTRING("CPlayer::H0x0191000f_TheEnd_02")},
 {0x01910010, -1, CEntity::pEventHandler(&CPlayer::FirstInit),DEBUGSTRING("CPlayer::FirstInit")},
 {0x01910011, -1, CEntity::pEventHandler(&CPlayer::Rebirth),DEBUGSTRING("CPlayer::Rebirth")},
 {0x01910012, -1, CEntity::pEventHandler(&CPlayer::AutoGoToMarker),DEBUGSTRING("CPlayer::AutoGoToMarker")},
 {0x01910013, -1, CEntity::pEventHandler(&CPlayer::H0x01910013_AutoGoToMarker_01), DEBUGSTRING("CPlayer::H0x01910013_AutoGoToMarker_01")},
 {0x01910014, -1, CEntity::pEventHandler(&CPlayer::H0x01910014_AutoGoToMarker_02), DEBUGSTRING("CPlayer::H0x01910014_AutoGoToMarker_02")},
 {0x01910015, -1, CEntity::pEventHandler(&CPlayer::H0x01910015_AutoGoToMarker_03), DEBUGSTRING("CPlayer::H0x01910015_AutoGoToMarker_03")},
 {0x01910016, -1, CEntity::pEventHandler(&CPlayer::H0x01910016_AutoGoToMarker_04), DEBUGSTRING("CPlayer::H0x01910016_AutoGoToMarker_04")},
 {0x01910017, -1, CEntity::pEventHandler(&CPlayer::AutoGoToMarkerAndStop),DEBUGSTRING("CPlayer::AutoGoToMarkerAndStop")},
 {0x01910018, -1, CEntity::pEventHandler(&CPlayer::H0x01910018_AutoGoToMarkerAndStop_01), DEBUGSTRING("CPlayer::H0x01910018_AutoGoToMarkerAndStop_01")},
 {0x01910019, -1, CEntity::pEventHandler(&CPlayer::H0x01910019_AutoGoToMarkerAndStop_02), DEBUGSTRING("CPlayer::H0x01910019_AutoGoToMarkerAndStop_02")},
 {0x0191001a, -1, CEntity::pEventHandler(&CPlayer::H0x0191001a_AutoGoToMarkerAndStop_03), DEBUGSTRING("CPlayer::H0x0191001a_AutoGoToMarkerAndStop_03")},
 {0x0191001b, -1, CEntity::pEventHandler(&CPlayer::H0x0191001b_AutoGoToMarkerAndStop_04), DEBUGSTRING("CPlayer::H0x0191001b_AutoGoToMarkerAndStop_04")},
 {0x0191001c, -1, CEntity::pEventHandler(&CPlayer::AutoUseItem),DEBUGSTRING("CPlayer::AutoUseItem")},
 {0x0191001d, -1, CEntity::pEventHandler(&CPlayer::H0x0191001d_AutoUseItem_01), DEBUGSTRING("CPlayer::H0x0191001d_AutoUseItem_01")},
 {0x0191001e, -1, CEntity::pEventHandler(&CPlayer::H0x0191001e_AutoUseItem_02), DEBUGSTRING("CPlayer::H0x0191001e_AutoUseItem_02")},
 {0x0191001f, -1, CEntity::pEventHandler(&CPlayer::H0x0191001f_AutoUseItem_03), DEBUGSTRING("CPlayer::H0x0191001f_AutoUseItem_03")},
 {0x01910020, -1, CEntity::pEventHandler(&CPlayer::H0x01910020_AutoUseItem_04), DEBUGSTRING("CPlayer::H0x01910020_AutoUseItem_04")},
 {0x01910021, -1, CEntity::pEventHandler(&CPlayer::H0x01910021_AutoUseItem_05), DEBUGSTRING("CPlayer::H0x01910021_AutoUseItem_05")},
 {0x01910022, -1, CEntity::pEventHandler(&CPlayer::H0x01910022_AutoUseItem_06), DEBUGSTRING("CPlayer::H0x01910022_AutoUseItem_06")},
 {0x01910023, -1, CEntity::pEventHandler(&CPlayer::AutoPickItem),DEBUGSTRING("CPlayer::AutoPickItem")},
 {0x01910024, -1, CEntity::pEventHandler(&CPlayer::H0x01910024_AutoPickItem_01), DEBUGSTRING("CPlayer::H0x01910024_AutoPickItem_01")},
 {0x01910025, -1, CEntity::pEventHandler(&CPlayer::H0x01910025_AutoPickItem_02), DEBUGSTRING("CPlayer::H0x01910025_AutoPickItem_02")},
 {0x01910026, -1, CEntity::pEventHandler(&CPlayer::H0x01910026_AutoPickItem_03), DEBUGSTRING("CPlayer::H0x01910026_AutoPickItem_03")},
 {0x01910027, -1, CEntity::pEventHandler(&CPlayer::H0x01910027_AutoPickItem_04), DEBUGSTRING("CPlayer::H0x01910027_AutoPickItem_04")},
 {0x01910028, -1, CEntity::pEventHandler(&CPlayer::AutoFallDown),DEBUGSTRING("CPlayer::AutoFallDown")},
 {0x01910029, -1, CEntity::pEventHandler(&CPlayer::H0x01910029_AutoFallDown_01), DEBUGSTRING("CPlayer::H0x01910029_AutoFallDown_01")},
 {0x0191002a, -1, CEntity::pEventHandler(&CPlayer::H0x0191002a_AutoFallDown_02), DEBUGSTRING("CPlayer::H0x0191002a_AutoFallDown_02")},
 {0x0191002b, -1, CEntity::pEventHandler(&CPlayer::AutoFallToAbys),DEBUGSTRING("CPlayer::AutoFallToAbys")},
 {0x0191002c, -1, CEntity::pEventHandler(&CPlayer::H0x0191002c_AutoFallToAbys_01), DEBUGSTRING("CPlayer::H0x0191002c_AutoFallToAbys_01")},
 {0x0191002d, -1, CEntity::pEventHandler(&CPlayer::H0x0191002d_AutoFallToAbys_02), DEBUGSTRING("CPlayer::H0x0191002d_AutoFallToAbys_02")},
 {0x0191002e, -1, CEntity::pEventHandler(&CPlayer::AutoLookAround),DEBUGSTRING("CPlayer::AutoLookAround")},
 {0x0191002f, -1, CEntity::pEventHandler(&CPlayer::H0x0191002f_AutoLookAround_01), DEBUGSTRING("CPlayer::H0x0191002f_AutoLookAround_01")},
 {0x01910030, -1, CEntity::pEventHandler(&CPlayer::H0x01910030_AutoLookAround_02), DEBUGSTRING("CPlayer::H0x01910030_AutoLookAround_02")},
 {0x01910031, -1, CEntity::pEventHandler(&CPlayer::H0x01910031_AutoLookAround_03), DEBUGSTRING("CPlayer::H0x01910031_AutoLookAround_03")},
 {0x01910032, -1, CEntity::pEventHandler(&CPlayer::H0x01910032_AutoLookAround_04), DEBUGSTRING("CPlayer::H0x01910032_AutoLookAround_04")},
 {0x01910033, -1, CEntity::pEventHandler(&CPlayer::AutoTeleport),DEBUGSTRING("CPlayer::AutoTeleport")},
 {0x01910034, -1, CEntity::pEventHandler(&CPlayer::AutoAppear),DEBUGSTRING("CPlayer::AutoAppear")},
 {0x01910035, -1, CEntity::pEventHandler(&CPlayer::H0x01910035_AutoAppear_01), DEBUGSTRING("CPlayer::H0x01910035_AutoAppear_01")},
 {0x01910036, -1, CEntity::pEventHandler(&CPlayer::H0x01910036_AutoAppear_02), DEBUGSTRING("CPlayer::H0x01910036_AutoAppear_02")},
 {0x01910037, -1, CEntity::pEventHandler(&CPlayer::H0x01910037_AutoAppear_03), DEBUGSTRING("CPlayer::H0x01910037_AutoAppear_03")},
 {0x01910038, -1, CEntity::pEventHandler(&CPlayer::H0x01910038_AutoAppear_04), DEBUGSTRING("CPlayer::H0x01910038_AutoAppear_04")},
 {0x01910039, -1, CEntity::pEventHandler(&CPlayer::H0x01910039_AutoAppear_05), DEBUGSTRING("CPlayer::H0x01910039_AutoAppear_05")},
 {0x0191003a, -1, CEntity::pEventHandler(&CPlayer::H0x0191003a_AutoAppear_06), DEBUGSTRING("CPlayer::H0x0191003a_AutoAppear_06")},
 {0x0191003b, -1, CEntity::pEventHandler(&CPlayer::H0x0191003b_AutoAppear_07), DEBUGSTRING("CPlayer::H0x0191003b_AutoAppear_07")},
 {0x0191003c, -1, CEntity::pEventHandler(&CPlayer::H0x0191003c_AutoAppear_08), DEBUGSTRING("CPlayer::H0x0191003c_AutoAppear_08")},
 {0x0191003d, -1, CEntity::pEventHandler(&CPlayer::TravellingInBeam),DEBUGSTRING("CPlayer::TravellingInBeam")},
 {0x0191003e, -1, CEntity::pEventHandler(&CPlayer::H0x0191003e_TravellingInBeam_01), DEBUGSTRING("CPlayer::H0x0191003e_TravellingInBeam_01")},
 {0x0191003f, -1, CEntity::pEventHandler(&CPlayer::H0x0191003f_TravellingInBeam_02), DEBUGSTRING("CPlayer::H0x0191003f_TravellingInBeam_02")},
 {0x01910040, -1, CEntity::pEventHandler(&CPlayer::LogoFireMinigun),DEBUGSTRING("CPlayer::LogoFireMinigun")},
 {0x01910041, -1, CEntity::pEventHandler(&CPlayer::H0x01910041_LogoFireMinigun_01), DEBUGSTRING("CPlayer::H0x01910041_LogoFireMinigun_01")},
 {0x01910042, -1, CEntity::pEventHandler(&CPlayer::H0x01910042_LogoFireMinigun_02), DEBUGSTRING("CPlayer::H0x01910042_LogoFireMinigun_02")},
 {0x01910043, -1, CEntity::pEventHandler(&CPlayer::H0x01910043_LogoFireMinigun_03), DEBUGSTRING("CPlayer::H0x01910043_LogoFireMinigun_03")},
 {0x01910044, -1, CEntity::pEventHandler(&CPlayer::H0x01910044_LogoFireMinigun_04), DEBUGSTRING("CPlayer::H0x01910044_LogoFireMinigun_04")},
 {0x01910045, -1, CEntity::pEventHandler(&CPlayer::H0x01910045_LogoFireMinigun_05), DEBUGSTRING("CPlayer::H0x01910045_LogoFireMinigun_05")},
 {0x01910046, -1, CEntity::pEventHandler(&CPlayer::H0x01910046_LogoFireMinigun_06), DEBUGSTRING("CPlayer::H0x01910046_LogoFireMinigun_06")},
 {0x01910047, -1, CEntity::pEventHandler(&CPlayer::H0x01910047_LogoFireMinigun_07), DEBUGSTRING("CPlayer::H0x01910047_LogoFireMinigun_07")},
 {0x01910048, -1, CEntity::pEventHandler(&CPlayer::H0x01910048_LogoFireMinigun_08), DEBUGSTRING("CPlayer::H0x01910048_LogoFireMinigun_08")},
 {0x01910049, -1, CEntity::pEventHandler(&CPlayer::AutoStoreWeapon),DEBUGSTRING("CPlayer::AutoStoreWeapon")},
 {0x0191004a, -1, CEntity::pEventHandler(&CPlayer::H0x0191004a_AutoStoreWeapon_01), DEBUGSTRING("CPlayer::H0x0191004a_AutoStoreWeapon_01")},
 {0x0191004b, -1, CEntity::pEventHandler(&CPlayer::H0x0191004b_AutoStoreWeapon_02), DEBUGSTRING("CPlayer::H0x0191004b_AutoStoreWeapon_02")},
 {0x0191004c, -1, CEntity::pEventHandler(&CPlayer::H0x0191004c_AutoStoreWeapon_03), DEBUGSTRING("CPlayer::H0x0191004c_AutoStoreWeapon_03")},
 {0x0191004d, -1, CEntity::pEventHandler(&CPlayer::H0x0191004d_AutoStoreWeapon_04), DEBUGSTRING("CPlayer::H0x0191004d_AutoStoreWeapon_04")},
 {0x0191004e, -1, CEntity::pEventHandler(&CPlayer::DoAutoActions),DEBUGSTRING("CPlayer::DoAutoActions")},
 {0x0191004f, -1, CEntity::pEventHandler(&CPlayer::H0x0191004f_DoAutoActions_01), DEBUGSTRING("CPlayer::H0x0191004f_DoAutoActions_01")},
 {0x01910050, -1, CEntity::pEventHandler(&CPlayer::H0x01910050_DoAutoActions_02), DEBUGSTRING("CPlayer::H0x01910050_DoAutoActions_02")},
 {0x01910051, -1, CEntity::pEventHandler(&CPlayer::H0x01910051_DoAutoActions_03), DEBUGSTRING("CPlayer::H0x01910051_DoAutoActions_03")},
 {0x01910052, -1, CEntity::pEventHandler(&CPlayer::H0x01910052_DoAutoActions_04), DEBUGSTRING("CPlayer::H0x01910052_DoAutoActions_04")},
 {0x01910053, -1, CEntity::pEventHandler(&CPlayer::H0x01910053_DoAutoActions_05), DEBUGSTRING("CPlayer::H0x01910053_DoAutoActions_05")},
 {0x01910054, -1, CEntity::pEventHandler(&CPlayer::H0x01910054_DoAutoActions_06), DEBUGSTRING("CPlayer::H0x01910054_DoAutoActions_06")},
 {0x01910055, -1, CEntity::pEventHandler(&CPlayer::H0x01910055_DoAutoActions_07), DEBUGSTRING("CPlayer::H0x01910055_DoAutoActions_07")},
 {0x01910056, -1, CEntity::pEventHandler(&CPlayer::H0x01910056_DoAutoActions_08), DEBUGSTRING("CPlayer::H0x01910056_DoAutoActions_08")},
 {0x01910057, -1, CEntity::pEventHandler(&CPlayer::H0x01910057_DoAutoActions_09), DEBUGSTRING("CPlayer::H0x01910057_DoAutoActions_09")},
 {0x01910058, -1, CEntity::pEventHandler(&CPlayer::H0x01910058_DoAutoActions_10), DEBUGSTRING("CPlayer::H0x01910058_DoAutoActions_10")},
 {0x01910059, -1, CEntity::pEventHandler(&CPlayer::H0x01910059_DoAutoActions_11), DEBUGSTRING("CPlayer::H0x01910059_DoAutoActions_11")},
 {0x0191005a, -1, CEntity::pEventHandler(&CPlayer::H0x0191005a_DoAutoActions_12), DEBUGSTRING("CPlayer::H0x0191005a_DoAutoActions_12")},
 {0x0191005b, -1, CEntity::pEventHandler(&CPlayer::H0x0191005b_DoAutoActions_13), DEBUGSTRING("CPlayer::H0x0191005b_DoAutoActions_13")},
 {0x0191005c, -1, CEntity::pEventHandler(&CPlayer::H0x0191005c_DoAutoActions_14), DEBUGSTRING("CPlayer::H0x0191005c_DoAutoActions_14")},
 {0x0191005d, -1, CEntity::pEventHandler(&CPlayer::H0x0191005d_DoAutoActions_15), DEBUGSTRING("CPlayer::H0x0191005d_DoAutoActions_15")},
 {0x0191005e, -1, CEntity::pEventHandler(&CPlayer::H0x0191005e_DoAutoActions_16), DEBUGSTRING("CPlayer::H0x0191005e_DoAutoActions_16")},
 {0x0191005f, -1, CEntity::pEventHandler(&CPlayer::H0x0191005f_DoAutoActions_17), DEBUGSTRING("CPlayer::H0x0191005f_DoAutoActions_17")},
 {0x01910060, -1, CEntity::pEventHandler(&CPlayer::H0x01910060_DoAutoActions_18), DEBUGSTRING("CPlayer::H0x01910060_DoAutoActions_18")},
 {0x01910061, -1, CEntity::pEventHandler(&CPlayer::H0x01910061_DoAutoActions_19), DEBUGSTRING("CPlayer::H0x01910061_DoAutoActions_19")},
 {0x01910062, -1, CEntity::pEventHandler(&CPlayer::H0x01910062_DoAutoActions_20), DEBUGSTRING("CPlayer::H0x01910062_DoAutoActions_20")},
 {0x01910063, -1, CEntity::pEventHandler(&CPlayer::H0x01910063_DoAutoActions_21), DEBUGSTRING("CPlayer::H0x01910063_DoAutoActions_21")},
 {0x01910064, -1, CEntity::pEventHandler(&CPlayer::H0x01910064_DoAutoActions_22), DEBUGSTRING("CPlayer::H0x01910064_DoAutoActions_22")},
 {0x01910065, -1, CEntity::pEventHandler(&CPlayer::H0x01910065_DoAutoActions_23), DEBUGSTRING("CPlayer::H0x01910065_DoAutoActions_23")},
 {0x01910066, -1, CEntity::pEventHandler(&CPlayer::H0x01910066_DoAutoActions_24), DEBUGSTRING("CPlayer::H0x01910066_DoAutoActions_24")},
 {0x01910067, -1, CEntity::pEventHandler(&CPlayer::H0x01910067_DoAutoActions_25), DEBUGSTRING("CPlayer::H0x01910067_DoAutoActions_25")},
 {0x01910068, -1, CEntity::pEventHandler(&CPlayer::H0x01910068_DoAutoActions_26), DEBUGSTRING("CPlayer::H0x01910068_DoAutoActions_26")},
 {0x01910069, -1, CEntity::pEventHandler(&CPlayer::H0x01910069_DoAutoActions_27), DEBUGSTRING("CPlayer::H0x01910069_DoAutoActions_27")},
 {0x0191006a, -1, CEntity::pEventHandler(&CPlayer::H0x0191006a_DoAutoActions_28), DEBUGSTRING("CPlayer::H0x0191006a_DoAutoActions_28")},
 {0x0191006b, -1, CEntity::pEventHandler(&CPlayer::H0x0191006b_DoAutoActions_29), DEBUGSTRING("CPlayer::H0x0191006b_DoAutoActions_29")},
 {0x0191006c, -1, CEntity::pEventHandler(&CPlayer::H0x0191006c_DoAutoActions_30), DEBUGSTRING("CPlayer::H0x0191006c_DoAutoActions_30")},
 {0x0191006d, -1, CEntity::pEventHandler(&CPlayer::H0x0191006d_DoAutoActions_31), DEBUGSTRING("CPlayer::H0x0191006d_DoAutoActions_31")},
 {0x0191006e, -1, CEntity::pEventHandler(&CPlayer::H0x0191006e_DoAutoActions_32), DEBUGSTRING("CPlayer::H0x0191006e_DoAutoActions_32")},
 {0x0191006f, -1, CEntity::pEventHandler(&CPlayer::H0x0191006f_DoAutoActions_33), DEBUGSTRING("CPlayer::H0x0191006f_DoAutoActions_33")},
 {0x01910070, -1, CEntity::pEventHandler(&CPlayer::H0x01910070_DoAutoActions_34), DEBUGSTRING("CPlayer::H0x01910070_DoAutoActions_34")},
 {0x01910071, -1, CEntity::pEventHandler(&CPlayer::H0x01910071_DoAutoActions_35), DEBUGSTRING("CPlayer::H0x01910071_DoAutoActions_35")},
 {0x01910072, -1, CEntity::pEventHandler(&CPlayer::H0x01910072_DoAutoActions_36), DEBUGSTRING("CPlayer::H0x01910072_DoAutoActions_36")},
 {0x01910073, -1, CEntity::pEventHandler(&CPlayer::H0x01910073_DoAutoActions_37), DEBUGSTRING("CPlayer::H0x01910073_DoAutoActions_37")},
 {0x01910074, -1, CEntity::pEventHandler(&CPlayer::H0x01910074_DoAutoActions_38), DEBUGSTRING("CPlayer::H0x01910074_DoAutoActions_38")},
 {0x01910075, -1, CEntity::pEventHandler(&CPlayer::H0x01910075_DoAutoActions_39), DEBUGSTRING("CPlayer::H0x01910075_DoAutoActions_39")},
 {0x01910076, -1, CEntity::pEventHandler(&CPlayer::H0x01910076_DoAutoActions_40), DEBUGSTRING("CPlayer::H0x01910076_DoAutoActions_40")},
 {0x01910077, -1, CEntity::pEventHandler(&CPlayer::H0x01910077_DoAutoActions_41), DEBUGSTRING("CPlayer::H0x01910077_DoAutoActions_41")},
 {0x01910078, -1, CEntity::pEventHandler(&CPlayer::H0x01910078_DoAutoActions_42), DEBUGSTRING("CPlayer::H0x01910078_DoAutoActions_42")},
 {0x01910079, -1, CEntity::pEventHandler(&CPlayer::H0x01910079_DoAutoActions_43), DEBUGSTRING("CPlayer::H0x01910079_DoAutoActions_43")},
 {0x0191007a, -1, CEntity::pEventHandler(&CPlayer::H0x0191007a_DoAutoActions_44), DEBUGSTRING("CPlayer::H0x0191007a_DoAutoActions_44")},
 {0x0191007b, -1, CEntity::pEventHandler(&CPlayer::H0x0191007b_DoAutoActions_45), DEBUGSTRING("CPlayer::H0x0191007b_DoAutoActions_45")},
 {0x0191007c, -1, CEntity::pEventHandler(&CPlayer::H0x0191007c_DoAutoActions_46), DEBUGSTRING("CPlayer::H0x0191007c_DoAutoActions_46")},
 {0x0191007d, -1, CEntity::pEventHandler(&CPlayer::H0x0191007d_DoAutoActions_47), DEBUGSTRING("CPlayer::H0x0191007d_DoAutoActions_47")},
 {0x0191007e, -1, CEntity::pEventHandler(&CPlayer::H0x0191007e_DoAutoActions_48), DEBUGSTRING("CPlayer::H0x0191007e_DoAutoActions_48")},
 {0x0191007f, -1, CEntity::pEventHandler(&CPlayer::H0x0191007f_DoAutoActions_49), DEBUGSTRING("CPlayer::H0x0191007f_DoAutoActions_49")},
 {0x01910080, -1, CEntity::pEventHandler(&CPlayer::H0x01910080_DoAutoActions_50), DEBUGSTRING("CPlayer::H0x01910080_DoAutoActions_50")},
 {0x01910081, -1, CEntity::pEventHandler(&CPlayer::H0x01910081_DoAutoActions_51), DEBUGSTRING("CPlayer::H0x01910081_DoAutoActions_51")},
 {0x01910082, -1, CEntity::pEventHandler(&CPlayer::H0x01910082_DoAutoActions_52), DEBUGSTRING("CPlayer::H0x01910082_DoAutoActions_52")},
 {0x01910083, -1, CEntity::pEventHandler(&CPlayer::H0x01910083_DoAutoActions_53), DEBUGSTRING("CPlayer::H0x01910083_DoAutoActions_53")},
 {0x01910084, -1, CEntity::pEventHandler(&CPlayer::H0x01910084_DoAutoActions_54), DEBUGSTRING("CPlayer::H0x01910084_DoAutoActions_54")},
 {0x01910085, -1, CEntity::pEventHandler(&CPlayer::H0x01910085_DoAutoActions_55), DEBUGSTRING("CPlayer::H0x01910085_DoAutoActions_55")},
 {0x01910086, -1, CEntity::pEventHandler(&CPlayer::H0x01910086_DoAutoActions_56), DEBUGSTRING("CPlayer::H0x01910086_DoAutoActions_56")},
 {0x01910087, -1, CEntity::pEventHandler(&CPlayer::H0x01910087_DoAutoActions_57), DEBUGSTRING("CPlayer::H0x01910087_DoAutoActions_57")},
 {0x01910088, -1, CEntity::pEventHandler(&CPlayer::H0x01910088_DoAutoActions_58), DEBUGSTRING("CPlayer::H0x01910088_DoAutoActions_58")},
 {0x01910089, -1, CEntity::pEventHandler(&CPlayer::H0x01910089_DoAutoActions_59), DEBUGSTRING("CPlayer::H0x01910089_DoAutoActions_59")},
 {0x0191008a, -1, CEntity::pEventHandler(&CPlayer::H0x0191008a_DoAutoActions_60), DEBUGSTRING("CPlayer::H0x0191008a_DoAutoActions_60")},
 {0x0191008b, -1, CEntity::pEventHandler(&CPlayer::H0x0191008b_DoAutoActions_61), DEBUGSTRING("CPlayer::H0x0191008b_DoAutoActions_61")},
 {0x0191008c, -1, CEntity::pEventHandler(&CPlayer::H0x0191008c_DoAutoActions_62), DEBUGSTRING("CPlayer::H0x0191008c_DoAutoActions_62")},
 {0x0191008d, -1, CEntity::pEventHandler(&CPlayer::H0x0191008d_DoAutoActions_63), DEBUGSTRING("CPlayer::H0x0191008d_DoAutoActions_63")},
 {0x0191008e, -1, CEntity::pEventHandler(&CPlayer::H0x0191008e_DoAutoActions_64), DEBUGSTRING("CPlayer::H0x0191008e_DoAutoActions_64")},
 {0x0191008f, -1, CEntity::pEventHandler(&CPlayer::H0x0191008f_DoAutoActions_65), DEBUGSTRING("CPlayer::H0x0191008f_DoAutoActions_65")},
 {0x01910090, -1, CEntity::pEventHandler(&CPlayer::H0x01910090_DoAutoActions_66), DEBUGSTRING("CPlayer::H0x01910090_DoAutoActions_66")},
 {0x01910091, -1, CEntity::pEventHandler(&CPlayer::H0x01910091_DoAutoActions_67), DEBUGSTRING("CPlayer::H0x01910091_DoAutoActions_67")},
 {0x01910092, -1, CEntity::pEventHandler(&CPlayer::H0x01910092_DoAutoActions_68), DEBUGSTRING("CPlayer::H0x01910092_DoAutoActions_68")},
 {0x01910093, -1, CEntity::pEventHandler(&CPlayer::H0x01910093_DoAutoActions_69), DEBUGSTRING("CPlayer::H0x01910093_DoAutoActions_69")},
 {0x01910094, -1, CEntity::pEventHandler(&CPlayer::H0x01910094_DoAutoActions_70), DEBUGSTRING("CPlayer::H0x01910094_DoAutoActions_70")},
 {0x01910095, -1, CEntity::pEventHandler(&CPlayer::H0x01910095_DoAutoActions_71), DEBUGSTRING("CPlayer::H0x01910095_DoAutoActions_71")},
 {0x01910096, -1, CEntity::pEventHandler(&CPlayer::H0x01910096_DoAutoActions_72), DEBUGSTRING("CPlayer::H0x01910096_DoAutoActions_72")},
 {0x01910097, -1, CEntity::pEventHandler(&CPlayer::H0x01910097_DoAutoActions_73), DEBUGSTRING("CPlayer::H0x01910097_DoAutoActions_73")},
 {0x01910098, -1, CEntity::pEventHandler(&CPlayer::H0x01910098_DoAutoActions_74), DEBUGSTRING("CPlayer::H0x01910098_DoAutoActions_74")},
 {0x01910099, -1, CEntity::pEventHandler(&CPlayer::H0x01910099_DoAutoActions_75), DEBUGSTRING("CPlayer::H0x01910099_DoAutoActions_75")},
 {0x0191009a, -1, CEntity::pEventHandler(&CPlayer::H0x0191009a_DoAutoActions_76), DEBUGSTRING("CPlayer::H0x0191009a_DoAutoActions_76")},
 {0x0191009b, -1, CEntity::pEventHandler(&CPlayer::H0x0191009b_DoAutoActions_77), DEBUGSTRING("CPlayer::H0x0191009b_DoAutoActions_77")},
 {0x0191009c, -1, CEntity::pEventHandler(&CPlayer::H0x0191009c_DoAutoActions_78), DEBUGSTRING("CPlayer::H0x0191009c_DoAutoActions_78")},
 {0x0191009d, -1, CEntity::pEventHandler(&CPlayer::H0x0191009d_DoAutoActions_79), DEBUGSTRING("CPlayer::H0x0191009d_DoAutoActions_79")},
 {0x0191009e, -1, CEntity::pEventHandler(&CPlayer::H0x0191009e_DoAutoActions_80), DEBUGSTRING("CPlayer::H0x0191009e_DoAutoActions_80")},
 {0x0191009f, -1, CEntity::pEventHandler(&CPlayer::H0x0191009f_DoAutoActions_81), DEBUGSTRING("CPlayer::H0x0191009f_DoAutoActions_81")},
 {0x019100a0, -1, CEntity::pEventHandler(&CPlayer::H0x019100a0_DoAutoActions_82), DEBUGSTRING("CPlayer::H0x019100a0_DoAutoActions_82")},
 {0x019100a1, -1, CEntity::pEventHandler(&CPlayer::H0x019100a1_DoAutoActions_83), DEBUGSTRING("CPlayer::H0x019100a1_DoAutoActions_83")},
 {0x019100a2, -1, CEntity::pEventHandler(&CPlayer::H0x019100a2_DoAutoActions_84), DEBUGSTRING("CPlayer::H0x019100a2_DoAutoActions_84")},
 {0x019100a3, -1, CEntity::pEventHandler(&CPlayer::H0x019100a3_DoAutoActions_85), DEBUGSTRING("CPlayer::H0x019100a3_DoAutoActions_85")},
 {1, -1, CEntity::pEventHandler(&CPlayer::Main),DEBUGSTRING("CPlayer::Main")},
 {0x019100a4, -1, CEntity::pEventHandler(&CPlayer::H0x019100a4_Main_01), DEBUGSTRING("CPlayer::H0x019100a4_Main_01")},
 {0x019100a5, -1, CEntity::pEventHandler(&CPlayer::H0x019100a5_Main_02), DEBUGSTRING("CPlayer::H0x019100a5_Main_02")},
 {0x019100a6, -1, CEntity::pEventHandler(&CPlayer::H0x019100a6_Main_03), DEBUGSTRING("CPlayer::H0x019100a6_Main_03")},
 {0x019100a7, -1, CEntity::pEventHandler(&CPlayer::H0x019100a7_Main_04), DEBUGSTRING("CPlayer::H0x019100a7_Main_04")},
};
#define CPlayer_handlersct ARRAYCOUNT(CPlayer_handlers)

CEntity *CPlayer_New(void) { return new CPlayer; };
void CPlayer_OnInitClass(void);
void CPlayer_OnEndClass(void);
void CPlayer_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayer_OnWorldEnd(CWorld *pwo) {};
void CPlayer_OnWorldInit(CWorld *pwo) {};
void CPlayer_OnWorldTick(CWorld *pwo) {};
void CPlayer_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayer, CPlayerEntity, "Player", "", 401);
DECLARE_CTFILENAME(_fnmCPlayer_tbn, "");
