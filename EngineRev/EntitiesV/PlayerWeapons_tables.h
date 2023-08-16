// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(WeaponType)
  EP_ENUMVALUE(WEAPON_NONE, ""),
  EP_ENUMVALUE(WEAPON_KNIFE, ""),
  EP_ENUMVALUE(WEAPON_COLT, ""),
  EP_ENUMVALUE(WEAPON_DOUBLECOLT, ""),
  EP_ENUMVALUE(WEAPON_SINGLESHOTGUN, ""),
  EP_ENUMVALUE(WEAPON_DOUBLESHOTGUN, ""),
  EP_ENUMVALUE(WEAPON_TOMMYGUN, ""),
  EP_ENUMVALUE(WEAPON_MINIGUN, ""),
  EP_ENUMVALUE(WEAPON_ROCKETLAUNCHER, ""),
  EP_ENUMVALUE(WEAPON_GRENADELAUNCHER, ""),
  EP_ENUMVALUE(WEAPON_CHAINSAW, ""),
  EP_ENUMVALUE(WEAPON_FLAMER, ""),
  EP_ENUMVALUE(WEAPON_LASER, ""),
  EP_ENUMVALUE(WEAPON_SNIPER, ""),
  EP_ENUMVALUE(WEAPON_IRONCANNON, ""),
  EP_ENUMVALUE(WEAPON_GHOSTBUSTER, ""),
  EP_ENUMVALUE(WEAPON_PLASMATHROWER, ""),
  EP_ENUMVALUE(WEAPON_MINELAYER, ""),
  EP_ENUMVALUE(WEAPON_LAST, ""),
EP_ENUMEND(WeaponType);

#define ENTITYCLASS CPlayerWeapons

CEntityProperty CPlayerWeapons_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+1, 0x110, "", 0, "m_penPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+2, 0x114, "", 0, "m_bFireWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+3, 0x118, "", 0, "m_bHasAmmo", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WeaponType_enum, (0x192<<8)+4, 0x11C, "", 0, "m_iCurrentWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WeaponType_enum, (0x192<<8)+5, 0x120, "", 0, "m_iWantedWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WeaponType_enum, (0x192<<8)+6, 0x124, "", 0, "m_iPreviousWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_U64, NULL, (0x192<<8)+11, 0x128, "", 0, "m_iAvailableWeapons", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+12, 0x130, "", 0, "m_bChangeWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+13, 0x134, "", 0, "m_bReloadWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+14, 0x138, "", 0, "m_bMirrorFire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+15, 0x13C, "", 0, "m_iAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+16, 0x140, "", 0, "m_fAnimWaitTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+17, 0x144, "", 0, "m_tmRangeSoundSpawned", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+23, 0x148, "", 0, "m_bSniperZoom", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+24, 0x14C, "", 0, "m_fSniperFOV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+28, 0x150, "", 0, "m_fSniperFOVlast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x192<<8)+18, 0x154, "", 0, "m_strLastTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+19, 0x158, "", 0, "m_tmTargetingStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+20, 0x15C, "", 0, "m_tmLastTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+21, 0x160, "", 0, "m_tmSnoopingStarted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+22, 0x164, "", 0, "m_penTargeting", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0x192<<8)+25, 0x168, "", 0, "m_moWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_MODELOBJECT, NULL, (0x192<<8)+26, 0x268, "", 0, "m_moWeaponSecond", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+27, 0x368, "", 0, "m_tmWeaponChangeRequired", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+30, 0x36C, "", 0, "m_penRayHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+31, 0x370, "", 0, "m_fRayHitDistance", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+32, 0x374, "", 0, "m_fEnemyHealth", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x192<<8)+33, 0x378, "", 0, "m_vRayHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x192<<8)+34, 0x384, "", 0, "m_vRayHitLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x192<<8)+35, 0x390, "", 0, "m_vBulletSource", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x192<<8)+36, 0x39C, "", 0, "m_vBulletTarget", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+40, 0x3A8, "", 0, "m_iBullets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+41, 0x3AC, "", 0, "m_iMaxBullets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+42, 0x3B0, "", 0, "m_iShells", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+43, 0x3B4, "", 0, "m_iMaxShells", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+44, 0x3B8, "", 0, "m_iRockets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+45, 0x3BC, "", 0, "m_iMaxRockets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+46, 0x3C0, "", 0, "m_iGrenades", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+47, 0x3C4, "", 0, "m_iMaxGrenades", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+48, 0x3C8, "", 0, "m_iNapalm", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+49, 0x3CC, "", 0, "m_iMaxNapalm", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+50, 0x3D0, "", 0, "m_iElectricity", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+51, 0x3D4, "", 0, "m_iMaxElectricity", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+52, 0x3D8, "", 0, "m_iIronBalls", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+53, 0x3DC, "", 0, "m_iMaxIronBalls", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+54, 0x3E0, "", 0, "m_iSniperBullets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+55, 0x3E4, "", 0, "m_iMaxSniperBullets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+56, 0x3E8, "", 0, "m_iPlasmaPacks", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+57, 0x3EC, "", 0, "m_iMaxPlasmaPacks", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+58, 0x3F0, "", 0, "m_iMinePacks", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+59, 0x3F4, "", 0, "m_iMaxMinePacks", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+210, 0x3F8, "", 0, "m_iKnifeStand", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+215, 0x3FC, "", 0, "m_iColtBullets", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+220, 0x400, "", 0, "m_aMiniGun", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+221, 0x404, "", 0, "m_aMiniGunLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+222, 0x408, "", 0, "m_aMiniGunSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+223, 0x40C, "", 0, "m_aMiniGunSpinLeft", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x192<<8)+230, 0x410, "", 0, "m_iLastBulletPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+231, 0x41C, "", 0, "m_iBulletsOnFireStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+233, 0x420, "", 0, "m_fSniperMaxFOV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+234, 0x424, "", 0, "m_fSniperMinFOV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+235, 0x428, "", 0, "m_fSnipingZoomSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+236, 0x42C, "", 0, "m_bSniping", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+237, 0x430, "", 0, "m_fMinimumZoomFOV", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+238, 0x434, "", 0, "m_tmLastSniperFire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+240, 0x438, "", 0, "m_penFlame", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+245, 0x43C, "", 0, "m_iLaserBarrel", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+246, 0x440, "", 0, "m_iPlasmaBarrel", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+250, 0x444, "", 0, "m_penGhostBusterRay", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+251, 0x448, "", 0, "m_iFlare", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+252, 0x44C, "", 0, "m_iSecondFlare", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+253, 0x450, "", 0, "m_tmFlareAdded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+254, 0x454, "", 0, "m_tmSecondFlareAdded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+260, 0x458, "", 0, "m_fWeaponDrawPowerOld", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+261, 0x45C, "", 0, "m_fWeaponDrawPower", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+262, 0x460, "", 0, "m_tmDrawStartTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+270, 0x464, "", 0, "m_tmFlamerStart", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+271, 0x468, "", 0, "m_tmFlamerStop", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+272, 0x46C, "", 0, "m_tmLastChainsawSpray", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+280, 0x470, "", 0, "m_bUsedKnifeOnly", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+281, 0x474, "", 0, "m_iTimesFired", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+282, 0x478, "", 0, "m_iTimesHit", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+283, 0x47C, "", 0, "m_iBulletBatchID", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+290, 0x480, "", 0, "m_bSecFireWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x192<<8)+291, 0x484, "", 0, "m_bPrimaryFire", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+300, 0x488, "", 0, "m_penEnergyMine", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x192<<8)+301, 0x48C, "", 0, "m_ctMaxMines", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x192<<8)+302, 0x490, "", 0, "m_fMinigunTickTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x192<<8)+255, 0x494, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CPlayerWeapons_propertiesct ARRAYCOUNT(CPlayerWeapons_properties)

CEntityComponent CPlayerWeapons_components[] = {
#define CLASS_PROJECTILE ((0x00000192<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_PROJECTILE, "EFNM" "Classes\\Projectile.ecl"),
#define CLASS_BULLET ((0x00000192<<8)+2)
 CEntityComponent(ECT_CLASS, CLASS_BULLET, "EFNM" "Classes\\Bullet.ecl"),
#define CLASS_WEAPONEFFECT ((0x00000192<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_WEAPONEFFECT, "EFNM" "Classes\\PlayerWeaponsEffects.ecl"),
#define CLASS_PIPEBOMB ((0x00000192<<8)+4)
 CEntityComponent(ECT_CLASS, CLASS_PIPEBOMB, "EFNM" "Classes\\Pipebomb.ecl"),
#define CLASS_GHOSTBUSTERRAY ((0x00000192<<8)+5)
 CEntityComponent(ECT_CLASS, CLASS_GHOSTBUSTERRAY, "EFNM" "Classes\\GhostBusterRay.ecl"),
#define CLASS_CANNONBALL ((0x00000192<<8)+6)
 CEntityComponent(ECT_CLASS, CLASS_CANNONBALL, "EFNM" "Classes\\CannonBall.ecl"),
#define CLASS_WEAPONITEM ((0x00000192<<8)+7)
 CEntityComponent(ECT_CLASS, CLASS_WEAPONITEM, "EFNM" "Classes\\WeaponItem.ecl"),
#define CLASS_BASIC_EFFECT ((0x00000192<<8)+8)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, "EFNM" "Classes\\BasicEffect.ecl"),
#define CLASS_ENERGYMINE ((0x00000192<<8)+9)
 CEntityComponent(ECT_CLASS, CLASS_ENERGYMINE, "EFNM" "Classes\\EnergyMine.ecl"),
#define TEXTURE_HAND ((0x00000192<<8)+10)
 CEntityComponent(ECT_TEXTURE, TEXTURE_HAND, "EFNM" "Models\\Weapons\\Hand.tex"),
#define MODEL_KNIFEITEM ((0x00000192<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_KNIFEITEM, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.mdl"),
#define TEXTURE_KNIFEITEM ((0x00000192<<8)+21)
 CEntityComponent(ECT_TEXTURE, TEXTURE_KNIFEITEM, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.tex"),
#define MODEL_KNIFE ((0x00000192<<8)+22)
 CEntityComponent(ECT_MODEL, MODEL_KNIFE, "EFNM" "Models\\Weapons\\Knife\\Knife.mdl"),
#define SOUND_KNIFE_BACK ((0x00000192<<8)+23)
 CEntityComponent(ECT_SOUND, SOUND_KNIFE_BACK, "EFNM" "Models\\Weapons\\Knife\\Sounds\\Back.wav"),
#define SOUND_KNIFE_HIGH ((0x00000192<<8)+24)
 CEntityComponent(ECT_SOUND, SOUND_KNIFE_HIGH, "EFNM" "Models\\Weapons\\Knife\\Sounds\\High.wav"),
#define SOUND_KNIFE_LONG ((0x00000192<<8)+25)
 CEntityComponent(ECT_SOUND, SOUND_KNIFE_LONG, "EFNM" "Models\\Weapons\\Knife\\Sounds\\Long.wav"),
#define SOUND_KNIFE_LOW ((0x00000192<<8)+26)
 CEntityComponent(ECT_SOUND, SOUND_KNIFE_LOW, "EFNM" "Models\\Weapons\\Knife\\Sounds\\Low.wav"),
#define MODEL_COLT ((0x00000192<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_COLT, "EFNM" "Models\\Weapons\\Colt\\Colt.mdl"),
#define MODEL_COLTCOCK ((0x00000192<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.mdl"),
#define MODEL_COLTMAIN ((0x00000192<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.mdl"),
#define MODEL_COLTBULLETS ((0x00000192<<8)+33)
 CEntityComponent(ECT_MODEL, MODEL_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.mdl"),
#define TEXTURE_COLTMAIN ((0x00000192<<8)+34)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.tex"),
#define TEXTURE_COLTCOCK ((0x00000192<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.tex"),
#define TEXTURE_COLTBULLETS ((0x00000192<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.tex"),
#define SOUND_COLT_FIRE ((0x00000192<<8)+37)
 CEntityComponent(ECT_SOUND, SOUND_COLT_FIRE, "EFNM" "Models\\Weapons\\Colt\\Sounds\\Fire.wav"),
#define SOUND_COLT_RELOAD ((0x00000192<<8)+38)
 CEntityComponent(ECT_SOUND, SOUND_COLT_RELOAD, "EFNM" "Models\\Weapons\\Colt\\Sounds\\Reload.wav"),
#define MODEL_SINGLESHOTGUN ((0x00000192<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_SINGLESHOTGUN, "EFNM" "Models\\Weapons\\SingleShotgun\\SingleShotgun.mdl"),
#define MODEL_SS_SLIDER ((0x00000192<<8)+41)
 CEntityComponent(ECT_MODEL, MODEL_SS_SLIDER, "EFNM" "Models\\Weapons\\SingleShotgun\\Slider.mdl"),
#define MODEL_SS_HANDLE ((0x00000192<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.mdl"),
#define MODEL_SS_BARRELS ((0x00000192<<8)+43)
 CEntityComponent(ECT_MODEL, MODEL_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.mdl"),
#define TEXTURE_SS_HANDLE ((0x00000192<<8)+44)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.tex"),
#define TEXTURE_SS_BARRELS ((0x00000192<<8)+45)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.tex"),
#define SOUND_SINGLESHOTGUN_FIRE ((0x00000192<<8)+46)
 CEntityComponent(ECT_SOUND, SOUND_SINGLESHOTGUN_FIRE, "EFNM" "Models\\Weapons\\SingleShotgun\\Sounds\\_Fire.wav"),
#define MODEL_DOUBLESHOTGUN ((0x00000192<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_DOUBLESHOTGUN, "EFNM" "Models\\Weapons\\DoubleShotgun\\DoubleShotgun.mdl"),
#define MODEL_DS_HANDLE ((0x00000192<<8)+51)
 CEntityComponent(ECT_MODEL, MODEL_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunhandle.mdl"),
#define MODEL_DS_BARRELS ((0x00000192<<8)+52)
 CEntityComponent(ECT_MODEL, MODEL_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunbarrels.mdl"),
#define MODEL_DS_AMMO ((0x00000192<<8)+53)
 CEntityComponent(ECT_MODEL, MODEL_DS_AMMO, "EFNM" "Models\\Weapons\\DoubleShotgun\\Ammo.mdl"),
#define MODEL_DS_SWITCH ((0x00000192<<8)+54)
 CEntityComponent(ECT_MODEL, MODEL_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.mdl"),
#define MODEL_DS_HANDWITHAMMO ((0x00000192<<8)+55)
 CEntityComponent(ECT_MODEL, MODEL_DS_HANDWITHAMMO, "EFNM" "Models\\Weapons\\DoubleShotgun\\HandWithAmmo.mdl"),
#define TEXTURE_DS_HANDLE ((0x00000192<<8)+56)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Handle.tex"),
#define TEXTURE_DS_BARRELS ((0x00000192<<8)+57)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Barrels.tex"),
#define TEXTURE_DS_AMMO ((0x00000192<<8)+58)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_AMMO, "EFNM" "Models\\Weapons\\DoubleShotgun\\Ammo.tex"),
#define TEXTURE_DS_SWITCH ((0x00000192<<8)+59)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.tex"),
#define SOUND_DOUBLESHOTGUN_FIRE ((0x00000192<<8)+60)
 CEntityComponent(ECT_SOUND, SOUND_DOUBLESHOTGUN_FIRE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Sounds\\Fire.wav"),
#define SOUND_DOUBLESHOTGUN_RELOAD ((0x00000192<<8)+61)
 CEntityComponent(ECT_SOUND, SOUND_DOUBLESHOTGUN_RELOAD, "EFNM" "Models\\Weapons\\DoubleShotgun\\Sounds\\Reload.wav"),
#define MODEL_TOMMYGUN ((0x00000192<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_TOMMYGUN, "EFNM" "Models\\Weapons\\TommyGun\\TommyGun.mdl"),
#define MODEL_TG_BODY ((0x00000192<<8)+71)
 CEntityComponent(ECT_MODEL, MODEL_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.mdl"),
#define MODEL_TG_SLIDER ((0x00000192<<8)+72)
 CEntityComponent(ECT_MODEL, MODEL_TG_SLIDER, "EFNM" "Models\\Weapons\\TommyGun\\Slider.mdl"),
#define TEXTURE_TG_BODY ((0x00000192<<8)+73)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.tex"),
#define SOUND_TOMMYGUN_FIRE ((0x00000192<<8)+74)
 CEntityComponent(ECT_SOUND, SOUND_TOMMYGUN_FIRE, "EFNM" "Models\\Weapons\\TommyGun\\Sounds\\_Fire.wav"),
#define MODEL_MINIGUN ((0x00000192<<8)+80)
 CEntityComponent(ECT_MODEL, MODEL_MINIGUN, "EFNM" "Models\\Weapons\\MiniGun\\MiniGun.mdl"),
#define MODEL_MG_BARRELS ((0x00000192<<8)+81)
 CEntityComponent(ECT_MODEL, MODEL_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.mdl"),
#define MODEL_MG_BODY ((0x00000192<<8)+82)
 CEntityComponent(ECT_MODEL, MODEL_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.mdl"),
#define MODEL_MG_ENGINE ((0x00000192<<8)+83)
 CEntityComponent(ECT_MODEL, MODEL_MG_ENGINE, "EFNM" "Models\\Weapons\\MiniGun\\Engine.mdl"),
#define TEXTURE_MG_BODY ((0x00000192<<8)+84)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.tex"),
#define TEXTURE_MG_BARRELS ((0x00000192<<8)+99)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.tex"),
#define SOUND_MINIGUN_FIRE ((0x00000192<<8)+85)
 CEntityComponent(ECT_SOUND, SOUND_MINIGUN_FIRE, "EFNM" "Models\\Weapons\\MiniGun\\Sounds\\Fire.wav"),
#define SOUND_MINIGUN_ROTATE ((0x00000192<<8)+86)
 CEntityComponent(ECT_SOUND, SOUND_MINIGUN_ROTATE, "EFNM" "Models\\Weapons\\MiniGun\\Sounds\\Rotate.wav"),
#define SOUND_MINIGUN_SPINUP ((0x00000192<<8)+87)
 CEntityComponent(ECT_SOUND, SOUND_MINIGUN_SPINUP, "EFNM" "Models\\Weapons\\MiniGun\\Sounds\\RotateUp.wav"),
#define SOUND_MINIGUN_SPINDOWN ((0x00000192<<8)+88)
 CEntityComponent(ECT_SOUND, SOUND_MINIGUN_SPINDOWN, "EFNM" "Models\\Weapons\\MiniGun\\Sounds\\RotateDown.wav"),
#define SOUND_MINIGUN_CLICK ((0x00000192<<8)+89)
 CEntityComponent(ECT_SOUND, SOUND_MINIGUN_CLICK, "EFNM" "Models\\Weapons\\MiniGun\\Sounds\\Click.wav"),
#define MODEL_ROCKETLAUNCHER ((0x00000192<<8)+90)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Weapons\\RocketLauncher\\RocketLauncher.mdl"),
#define MODEL_RL_BODY ((0x00000192<<8)+91)
 CEntityComponent(ECT_MODEL, MODEL_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.mdl"),
#define TEXTURE_RL_BODY ((0x00000192<<8)+92)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.tex"),
#define MODEL_RL_ROTATINGPART ((0x00000192<<8)+93)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.mdl"),
#define TEXTURE_RL_ROTATINGPART ((0x00000192<<8)+94)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.tex"),
#define MODEL_RL_ROCKET ((0x00000192<<8)+95)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.mdl"),
#define TEXTURE_RL_ROCKET ((0x00000192<<8)+96)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.tex"),
#define SOUND_ROCKETLAUNCHER_FIRE ((0x00000192<<8)+97)
 CEntityComponent(ECT_SOUND, SOUND_ROCKETLAUNCHER_FIRE, "EFNM" "Models\\Weapons\\RocketLauncher\\Sounds\\_Fire.wav"),
#define MODEL_GRENADELAUNCHER ((0x00000192<<8)+100)
 CEntityComponent(ECT_MODEL, MODEL_GRENADELAUNCHER, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeLauncher.mdl"),
#define MODEL_GL_BODY ((0x00000192<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.mdl"),
#define MODEL_GL_MOVINGPART ((0x00000192<<8)+102)
 CEntityComponent(ECT_MODEL, MODEL_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.mdl"),
#define MODEL_GL_GRENADE ((0x00000192<<8)+103)
 CEntityComponent(ECT_MODEL, MODEL_GL_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeBack.mdl"),
#define TEXTURE_GL_BODY ((0x00000192<<8)+104)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.tex"),
#define TEXTURE_GL_MOVINGPART ((0x00000192<<8)+105)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.tex"),
#define SOUND_GRENADELAUNCHER_FIRE ((0x00000192<<8)+106)
 CEntityComponent(ECT_SOUND, SOUND_GRENADELAUNCHER_FIRE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Sounds\\_Fire.wav"),
#define MODEL_SNIPER ((0x00000192<<8)+110)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sniper.mdl"),
#define MODEL_SNIPER_BODY ((0x00000192<<8)+111)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.mdl"),
#define TEXTURE_SNIPER_BODY ((0x00000192<<8)+112)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.tex"),
#define SOUND_SNIPER_FIRE ((0x00000192<<8)+113)
 CEntityComponent(ECT_SOUND, SOUND_SNIPER_FIRE, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sounds\\Fire.wav"),
#define SOUND_SNIPER_ZOOM ((0x00000192<<8)+115)
 CEntityComponent(ECT_SOUND, SOUND_SNIPER_ZOOM, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sounds\\Zoom.wav"),
#define MODEL_FLAMER ((0x00000192<<8)+130)
 CEntityComponent(ECT_MODEL, MODEL_FLAMER, "EFNM" "ModelsMP\\Weapons\\Flamer\\Flamer.mdl"),
#define MODEL_FL_BODY ((0x00000192<<8)+131)
 CEntityComponent(ECT_MODEL, MODEL_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.mdl"),
#define MODEL_FL_RESERVOIR ((0x00000192<<8)+132)
 CEntityComponent(ECT_MODEL, MODEL_FL_RESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.mdl"),
#define MODEL_FL_FLAME ((0x00000192<<8)+133)
 CEntityComponent(ECT_MODEL, MODEL_FL_FLAME, "EFNM" "ModelsMP\\Weapons\\Flamer\\Flame.mdl"),
#define TEXTURE_FL_BODY ((0x00000192<<8)+134)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.tex"),
#define TEXTURE_FL_FLAME ((0x00000192<<8)+135)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FLAME, "EFNM" "ModelsMP\\Effects\\Flame\\Flame.tex"),
#define SOUND_FL_FIRE ((0x00000192<<8)+136)
 CEntityComponent(ECT_SOUND, SOUND_FL_FIRE, "EFNM" "ModelsMP\\Weapons\\Flamer\\Sounds\\Fire.wav"),
#define SOUND_FL_START ((0x00000192<<8)+137)
 CEntityComponent(ECT_SOUND, SOUND_FL_START, "EFNM" "ModelsMP\\Weapons\\Flamer\\Sounds\\Start.wav"),
#define SOUND_FL_STOP ((0x00000192<<8)+138)
 CEntityComponent(ECT_SOUND, SOUND_FL_STOP, "EFNM" "ModelsMP\\Weapons\\Flamer\\Sounds\\Stop.wav"),
#define TEXTURE_FL_FUELRESERVOIR ((0x00000192<<8)+139)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FUELRESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.tex"),
#define MODEL_LASER ((0x00000192<<8)+140)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Weapons\\Laser\\Laser.mdl"),
#define MODEL_LS_BODY ((0x00000192<<8)+141)
 CEntityComponent(ECT_MODEL, MODEL_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.mdl"),
#define MODEL_LS_BARREL ((0x00000192<<8)+142)
 CEntityComponent(ECT_MODEL, MODEL_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.mdl"),
#define TEXTURE_LS_BODY ((0x00000192<<8)+144)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.tex"),
#define TEXTURE_LS_BARREL ((0x00000192<<8)+145)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.tex"),
#define SOUND_LASER_FIRE ((0x00000192<<8)+146)
 CEntityComponent(ECT_SOUND, SOUND_LASER_FIRE, "EFNM" "Models\\Weapons\\Laser\\Sounds\\_Fire.wav"),
#define MODEL_CHAINSAW ((0x00000192<<8)+150)
 CEntityComponent(ECT_MODEL, MODEL_CHAINSAW, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Chainsaw.mdl"),
#define MODEL_CS_BODY ((0x00000192<<8)+151)
 CEntityComponent(ECT_MODEL, MODEL_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Body.mdl"),
#define MODEL_CS_BLADE ((0x00000192<<8)+152)
 CEntityComponent(ECT_MODEL, MODEL_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.mdl"),
#define MODEL_CS_TEETH ((0x00000192<<8)+160)
 CEntityComponent(ECT_MODEL, MODEL_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.mdl"),
#define TEXTURE_CS_BODY ((0x00000192<<8)+153)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Body.tex"),
#define TEXTURE_CS_BLADE ((0x00000192<<8)+154)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.tex"),
#define TEXTURE_CS_TEETH ((0x00000192<<8)+161)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.tex"),
#define SOUND_CS_FIRE ((0x00000192<<8)+155)
 CEntityComponent(ECT_SOUND, SOUND_CS_FIRE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\Fire.wav"),
#define SOUND_CS_BEGINFIRE ((0x00000192<<8)+156)
 CEntityComponent(ECT_SOUND, SOUND_CS_BEGINFIRE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\BeginFire.wav"),
#define SOUND_CS_ENDFIRE ((0x00000192<<8)+157)
 CEntityComponent(ECT_SOUND, SOUND_CS_ENDFIRE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\EndFire.wav"),
#define SOUND_CS_BRINGUP ((0x00000192<<8)+158)
 CEntityComponent(ECT_SOUND, SOUND_CS_BRINGUP, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\BringUp.wav"),
#define SOUND_CS_IDLE ((0x00000192<<8)+159)
 CEntityComponent(ECT_SOUND, SOUND_CS_IDLE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\Idle.wav"),
#define SOUND_CS_BRINGDOWN ((0x00000192<<8)+162)
 CEntityComponent(ECT_SOUND, SOUND_CS_BRINGDOWN, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Sounds\\BringDown.wav"),
#define MODEL_CANNON ((0x00000192<<8)+170)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Cannon.mdl"),
#define MODEL_CN_BODY ((0x00000192<<8)+171)
 CEntityComponent(ECT_MODEL, MODEL_CN_BODY, "EFNM" "Models\\Weapons\\Cannon\\Body.mdl"),
#define TEXTURE_CANNON ((0x00000192<<8)+173)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define SOUND_CANNON ((0x00000192<<8)+174)
 CEntityComponent(ECT_SOUND, SOUND_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Sounds\\Fire.wav"),
#define SOUND_CANNON_PREPARE ((0x00000192<<8)+175)
 CEntityComponent(ECT_SOUND, SOUND_CANNON_PREPARE, "EFNM" "Models\\Weapons\\Cannon\\Sounds\\Prepare.wav"),
#define TEX_REFL_BWRIPLES01 ((0x00000192<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_REFL_BWRIPLES02 ((0x00000192<<8)+201)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES02, "EFNM" "Models\\ReflectionTextures\\BWRiples02.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x00000192<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_REFL_LIGHTBLUEMETAL01 ((0x00000192<<8)+203)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTBLUEMETAL01, "EFNM" "Models\\ReflectionTextures\\LightBlueMetal01.tex"),
#define TEX_REFL_DARKMETAL ((0x00000192<<8)+204)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_DARKMETAL, "EFNM" "Models\\ReflectionTextures\\DarkMetal.tex"),
#define TEX_REFL_PURPLE01 ((0x00000192<<8)+205)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_PURPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEX_SPEC_WEAK ((0x00000192<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x00000192<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x00000192<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define MODEL_FLARE01 ((0x00000192<<8)+250)
 CEntityComponent(ECT_MODEL, MODEL_FLARE01, "EFNM" "Models\\Effects\\Weapons\\Flare01\\Flare.mdl"),
#define TEXTURE_FLARE01 ((0x00000192<<8)+251)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE01, "EFNM" "Models\\Effects\\Weapons\\Flare01\\Flare.tex"),
#define SOUND_SILENCE ((0x00000192<<8)+280)
 CEntityComponent(ECT_SOUND, SOUND_SILENCE, "EFNM" "Sounds\\Misc\\Silence.wav"),
#define CPlayerWeapons_MODEL_290 0x19322 // (0x192<<8)+290
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_290, "EFNM" "Models\\Weapons\\GhostBuster\\GhostBuster.mdl"),
#define CPlayerWeapons_MODEL_291 0x19323 // (0x192<<8)+291
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_291, "EFNM" "Models\\Weapons\\GhostBuster\\Body.mdl"),
#define CPlayerWeapons_MODEL_292 0x19324 // (0x192<<8)+292
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_292, "EFNM" "Models\\Weapons\\GhostBuster\\Rotator.mdl"),
#define CPlayerWeapons_MODEL_293 0x19325 // (0x192<<8)+293
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_293, "EFNM" "Models\\Weapons\\GhostBuster\\Effect01.mdl"),
#define CPlayerWeapons_MODEL_294 0x19326 // (0x192<<8)+294
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_294, "EFNM" "Models\\Weapons\\GhostBuster\\EffectFlare01.mdl"),
#define CPlayerWeapons_TEXTURE_295 0x19327 // (0x192<<8)+295
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_295, "EFNM" "Models\\Weapons\\GhostBuster\\Rotator.tex"),
#define CPlayerWeapons_TEXTURE_296 0x19328 // (0x192<<8)+296
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_296, "EFNM" "Models\\Weapons\\GhostBuster\\Body.tex"),
#define CPlayerWeapons_TEXTURE_297 0x19329 // (0x192<<8)+297
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_297, "EFNM" "Models\\Weapons\\GhostBuster\\Lightning.tex"),
#define CPlayerWeapons_TEXTURE_298 0x1932A // (0x192<<8)+298
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_298, "EFNM" "Models\\Weapons\\GhostBuster\\EffectFlare.tex"),
#define CPlayerWeapons_SOUND_299 0x1932B // (0x192<<8)+299
 CEntityComponent(ECT_SOUND, CPlayerWeapons_SOUND_299, "EFNM" "Models\\Weapons\\GhostBuster\\Sounds\\_Fire.wav"),
#define CPlayerWeapons_MODEL_300 0x1932C // (0x192<<8)+300
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_300, "EFNM" "Models\\Weapons\\PlasmaThrower\\Laser.mdl"),
#define CPlayerWeapons_MODEL_301 0x1932D // (0x192<<8)+301
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_301, "EFNM" "Models\\Weapons\\PlasmaThrower\\Body.mdl"),
#define CPlayerWeapons_MODEL_302 0x1932E // (0x192<<8)+302
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_302, "EFNM" "Models\\Weapons\\PlasmaThrower\\barrel.mdl"),
#define CPlayerWeapons_TEXTURE_303 0x1932F // (0x192<<8)+303
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_303, "EFNM" "Models\\Weapons\\PlasmaThrower\\Body.tex"),
#define CPlayerWeapons_TEXTURE_304 0x19330 // (0x192<<8)+304
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_304, "EFNM" "Models\\Weapons\\PlasmaThrower\\barrel.tex"),
#define CPlayerWeapons_SOUND_305 0x19331 // (0x192<<8)+305
 CEntityComponent(ECT_SOUND, CPlayerWeapons_SOUND_305, "EFNM" "Models\\Weapons\\PlasmaThrower\\Sounds\\_Fire.wav"),
#define CPlayerWeapons_MODEL_306 0x19332 // (0x192<<8)+306
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_306, "EFNM" "Models\\Weapons\\PlasmaThrower\\barrel_big.mdl"),
#define CPlayerWeapons_TEXTURE_307 0x19333 // (0x192<<8)+307
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_307, "EFNM" "Models\\Weapons\\PlasmaThrower\\barrel_big.tex"),
#define CPlayerWeapons_MODEL_310 0x19336 // (0x192<<8)+310
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_310, "EFNM" "Models\\Weapons\\MineLayer\\MovingPipe.mdl"),
#define CPlayerWeapons_TEXTURE_311 0x19337 // (0x192<<8)+311
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_311, "EFNM" "Models\\Weapons\\MineLayer\\MovingPipe.tex"),
#define CPlayerWeapons_TEXTURE_312 0x19338 // (0x192<<8)+312
 CEntityComponent(ECT_TEXTURE, CPlayerWeapons_TEXTURE_312, "EFNM" "Models\\Weapons\\MineLayer\\Body.tex"),
#define CPlayerWeapons_SOUND_313 0x19339 // (0x192<<8)+313
 CEntityComponent(ECT_SOUND, CPlayerWeapons_SOUND_313, "EFNM" "Models\\Weapons\\MineLayer\\Sounds\\_Fire.wav"),
#define CPlayerWeapons_MODEL_314 0x1933A // (0x192<<8)+314
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_314, "EFNM" "Models\\Weapons\\MineLayer\\MineLayer.mdl"),
#define CPlayerWeapons_MODEL_315 0x1933B // (0x192<<8)+315
 CEntityComponent(ECT_MODEL, CPlayerWeapons_MODEL_315, "EFNM" "Models\\Weapons\\MineLayer\\Body.mdl"),
#define CPlayerWeapons_SOUND_316 0x1933C // (0x192<<8)+316
 CEntityComponent(ECT_SOUND, CPlayerWeapons_SOUND_316, "EFNM" "Models\\Weapons\\MineLayer\\Sounds\\_Fire.wav"),
};
#define CPlayerWeapons_componentsct ARRAYCOUNT(CPlayerWeapons_components)

CEventHandlerEntry CPlayerWeapons_handlers[] = {
 {0x01920009, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920009_Procedure_0), DEBUGSTRING("CPlayerWeapons::H0x01920009_Procedure_0")},
 {0x0192000a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000a_Procedure_1), DEBUGSTRING("CPlayerWeapons::H0x0192000a_Procedure_1")},
 {0x0192000b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000b_Procedure_2), DEBUGSTRING("CPlayerWeapons::H0x0192000b_Procedure_2")},
 {0x0192000c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000c_Procedure_3), DEBUGSTRING("CPlayerWeapons::H0x0192000c_Procedure_3")},
 {0x0192000d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000d_Procedure_4), DEBUGSTRING("CPlayerWeapons::H0x0192000d_Procedure_4")},
 {0x0192000e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000e_Procedure_5), DEBUGSTRING("CPlayerWeapons::H0x0192000e_Procedure_5")},
 {0x0192000f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192000f_Procedure_6), DEBUGSTRING("CPlayerWeapons::H0x0192000f_Procedure_6")},
 {0x01920010, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920010_Procedure_7), DEBUGSTRING("CPlayerWeapons::H0x01920010_Procedure_7")},
 {0x01920011, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920011_Procedure_8), DEBUGSTRING("CPlayerWeapons::H0x01920011_Procedure_8")},
 {0x01920012, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920012_Procedure_9), DEBUGSTRING("CPlayerWeapons::H0x01920012_Procedure_9")},
 {0x01920013, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920013_Procedure_10), DEBUGSTRING("CPlayerWeapons::H0x01920013_Procedure_10")},
 {0x01920014, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920014_Procedure_11), DEBUGSTRING("CPlayerWeapons::H0x01920014_Procedure_11")},
 {0x01920015, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920015_Procedure_12), DEBUGSTRING("CPlayerWeapons::H0x01920015_Procedure_12")},
 {0x01920016, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920016_Procedure_13), DEBUGSTRING("CPlayerWeapons::H0x01920016_Procedure_13")},
 {0x01920017, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920017_Procedure_14), DEBUGSTRING("CPlayerWeapons::H0x01920017_Procedure_14")},
 {0x01920018, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920018_Procedure_15), DEBUGSTRING("CPlayerWeapons::H0x01920018_Procedure_15")},
 {0x01920019, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920019_Procedure_16), DEBUGSTRING("CPlayerWeapons::H0x01920019_Procedure_16")},
 {0x0192001a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001a_Procedure_17), DEBUGSTRING("CPlayerWeapons::H0x0192001a_Procedure_17")},
 {0x0192001b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001b_Procedure_18), DEBUGSTRING("CPlayerWeapons::H0x0192001b_Procedure_18")},
 {0x0192001c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001c_Procedure_19), DEBUGSTRING("CPlayerWeapons::H0x0192001c_Procedure_19")},
 {0x0192001d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001d_Procedure_20), DEBUGSTRING("CPlayerWeapons::H0x0192001d_Procedure_20")},
 {0x0192001e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001e_Procedure_21), DEBUGSTRING("CPlayerWeapons::H0x0192001e_Procedure_21")},
 {0x0192001f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192001f_Procedure_22), DEBUGSTRING("CPlayerWeapons::H0x0192001f_Procedure_22")},
 {0x01920020, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920020_Procedure_23), DEBUGSTRING("CPlayerWeapons::H0x01920020_Procedure_23")},
 {0x01920021, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920021_Procedure_24), DEBUGSTRING("CPlayerWeapons::H0x01920021_Procedure_24")},
 {0x01920022, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920022_Procedure_25), DEBUGSTRING("CPlayerWeapons::H0x01920022_Procedure_25")},
 {0x01920023, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920023_Procedure_26), DEBUGSTRING("CPlayerWeapons::H0x01920023_Procedure_26")},
 {0x01920024, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920024_Procedure_27), DEBUGSTRING("CPlayerWeapons::H0x01920024_Procedure_27")},
 {0x01920025, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920025_Procedure_28), DEBUGSTRING("CPlayerWeapons::H0x01920025_Procedure_28")},
 {0x01920026, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920026_Procedure_29), DEBUGSTRING("CPlayerWeapons::H0x01920026_Procedure_29")},
 {0x01920027, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920027_Procedure_30), DEBUGSTRING("CPlayerWeapons::H0x01920027_Procedure_30")},
 {0x01920028, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920028_Procedure_31), DEBUGSTRING("CPlayerWeapons::H0x01920028_Procedure_31")},
 {0x01920029, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920029_Procedure_32), DEBUGSTRING("CPlayerWeapons::H0x01920029_Procedure_32")},
 {0x0192002a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002a_Procedure_33), DEBUGSTRING("CPlayerWeapons::H0x0192002a_Procedure_33")},
 {0x0192002b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002b_Procedure_34), DEBUGSTRING("CPlayerWeapons::H0x0192002b_Procedure_34")},
 {0x0192002c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002c_Procedure_35), DEBUGSTRING("CPlayerWeapons::H0x0192002c_Procedure_35")},
 {0x0192002d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002d_Procedure_36), DEBUGSTRING("CPlayerWeapons::H0x0192002d_Procedure_36")},
 {0x0192002e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002e_Procedure_37), DEBUGSTRING("CPlayerWeapons::H0x0192002e_Procedure_37")},
 {0x0192002f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192002f_Procedure_38), DEBUGSTRING("CPlayerWeapons::H0x0192002f_Procedure_38")},
 {0x01920030, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920030_Procedure_39), DEBUGSTRING("CPlayerWeapons::H0x01920030_Procedure_39")},
 {0x01920031, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920031_Procedure_40), DEBUGSTRING("CPlayerWeapons::H0x01920031_Procedure_40")},
 {0x01920032, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920032_Procedure_41), DEBUGSTRING("CPlayerWeapons::H0x01920032_Procedure_41")},
 {0x01920033, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920033_Procedure_42), DEBUGSTRING("CPlayerWeapons::H0x01920033_Procedure_42")},
 {0x01920034, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920034_Procedure_43), DEBUGSTRING("CPlayerWeapons::H0x01920034_Procedure_43")},
 {0x01920035, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920035_Procedure_44), DEBUGSTRING("CPlayerWeapons::H0x01920035_Procedure_44")},
 {0x01920036, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920036_Procedure_45), DEBUGSTRING("CPlayerWeapons::H0x01920036_Procedure_45")},
 {0x01920037, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920037_Procedure_46), DEBUGSTRING("CPlayerWeapons::H0x01920037_Procedure_46")},
 {0x01920038, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920038_Procedure_47), DEBUGSTRING("CPlayerWeapons::H0x01920038_Procedure_47")},
 {0x01920039, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920039_Procedure_48), DEBUGSTRING("CPlayerWeapons::H0x01920039_Procedure_48")},
 {0x0192003a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003a_Procedure_49), DEBUGSTRING("CPlayerWeapons::H0x0192003a_Procedure_49")},
 {0x0192003b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003b_Procedure_50), DEBUGSTRING("CPlayerWeapons::H0x0192003b_Procedure_50")},
 {0x0192003c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003c_Procedure_51), DEBUGSTRING("CPlayerWeapons::H0x0192003c_Procedure_51")},
 {0x0192003d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003d_Procedure_52), DEBUGSTRING("CPlayerWeapons::H0x0192003d_Procedure_52")},
 {0x0192003e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003e_Procedure_53), DEBUGSTRING("CPlayerWeapons::H0x0192003e_Procedure_53")},
 {0x0192003f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192003f_Procedure_54), DEBUGSTRING("CPlayerWeapons::H0x0192003f_Procedure_54")},
 {0x01920040, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920040_Procedure_55), DEBUGSTRING("CPlayerWeapons::H0x01920040_Procedure_55")},
 {0x01920041, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920041_Procedure_56), DEBUGSTRING("CPlayerWeapons::H0x01920041_Procedure_56")},
 {0x01920042, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920042_Procedure_57), DEBUGSTRING("CPlayerWeapons::H0x01920042_Procedure_57")},
 {0x01920043, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920043_Procedure_58), DEBUGSTRING("CPlayerWeapons::H0x01920043_Procedure_58")},
 {0x01920044, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920044_Procedure_59), DEBUGSTRING("CPlayerWeapons::H0x01920044_Procedure_59")},
 {0x01920045, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920045_Procedure_60), DEBUGSTRING("CPlayerWeapons::H0x01920045_Procedure_60")},
 {0x01920046, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920046_Procedure_61), DEBUGSTRING("CPlayerWeapons::H0x01920046_Procedure_61")},
 {0x01920047, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920047_Procedure_62), DEBUGSTRING("CPlayerWeapons::H0x01920047_Procedure_62")},
 {0x01920048, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920048_Procedure_63), DEBUGSTRING("CPlayerWeapons::H0x01920048_Procedure_63")},
 {0x01920049, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920049_Procedure_64), DEBUGSTRING("CPlayerWeapons::H0x01920049_Procedure_64")},
 {0x0192004a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004a_Procedure_65), DEBUGSTRING("CPlayerWeapons::H0x0192004a_Procedure_65")},
 {0x0192004b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004b_Procedure_66), DEBUGSTRING("CPlayerWeapons::H0x0192004b_Procedure_66")},
 {0x0192004c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004c_Procedure_67), DEBUGSTRING("CPlayerWeapons::H0x0192004c_Procedure_67")},
 {0x0192004d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004d_Procedure_68), DEBUGSTRING("CPlayerWeapons::H0x0192004d_Procedure_68")},
 {0x0192004e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004e_Procedure_69), DEBUGSTRING("CPlayerWeapons::H0x0192004e_Procedure_69")},
 {0x0192004f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192004f_Procedure_70), DEBUGSTRING("CPlayerWeapons::H0x0192004f_Procedure_70")},
 {0x01920050, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920050_Procedure_71), DEBUGSTRING("CPlayerWeapons::H0x01920050_Procedure_71")},
 {0x01920051, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920051_Procedure_72), DEBUGSTRING("CPlayerWeapons::H0x01920051_Procedure_72")},
 {0x01920052, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920052_Procedure_73), DEBUGSTRING("CPlayerWeapons::H0x01920052_Procedure_73")},
 {0x01920053, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920053_Procedure_74), DEBUGSTRING("CPlayerWeapons::H0x01920053_Procedure_74")},
 {0x01920054, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920054_Procedure_75), DEBUGSTRING("CPlayerWeapons::H0x01920054_Procedure_75")},
 {0x01920055, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920055_Procedure_76), DEBUGSTRING("CPlayerWeapons::H0x01920055_Procedure_76")},
 {0x01920056, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920056_Procedure_77), DEBUGSTRING("CPlayerWeapons::H0x01920056_Procedure_77")},
 {0x01920057, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920057_Procedure_78), DEBUGSTRING("CPlayerWeapons::H0x01920057_Procedure_78")},
 {0x01920058, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920058_Procedure_79), DEBUGSTRING("CPlayerWeapons::H0x01920058_Procedure_79")},
 {0x01920059, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920059_Procedure_80), DEBUGSTRING("CPlayerWeapons::H0x01920059_Procedure_80")},
 {0x0192005a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005a_Procedure_81), DEBUGSTRING("CPlayerWeapons::H0x0192005a_Procedure_81")},
 {0x0192005b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005b_Procedure_82), DEBUGSTRING("CPlayerWeapons::H0x0192005b_Procedure_82")},
 {0x0192005c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005c_Procedure_83), DEBUGSTRING("CPlayerWeapons::H0x0192005c_Procedure_83")},
 {0x0192005d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005d_Procedure_84), DEBUGSTRING("CPlayerWeapons::H0x0192005d_Procedure_84")},
 {0x0192005e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005e_Procedure_85), DEBUGSTRING("CPlayerWeapons::H0x0192005e_Procedure_85")},
 {0x0192005f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192005f_Procedure_86), DEBUGSTRING("CPlayerWeapons::H0x0192005f_Procedure_86")},
 {0x01920060, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920060_Procedure_87), DEBUGSTRING("CPlayerWeapons::H0x01920060_Procedure_87")},
 {0x01920061, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920061_Procedure_88), DEBUGSTRING("CPlayerWeapons::H0x01920061_Procedure_88")},
 {0x01920062, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920062_Procedure_89), DEBUGSTRING("CPlayerWeapons::H0x01920062_Procedure_89")},
 {0x01920063, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920063_Procedure_90), DEBUGSTRING("CPlayerWeapons::H0x01920063_Procedure_90")},
 {0x01920064, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920064_Procedure_91), DEBUGSTRING("CPlayerWeapons::H0x01920064_Procedure_91")},
 {0x01920065, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920065_Procedure_92), DEBUGSTRING("CPlayerWeapons::H0x01920065_Procedure_92")},
 {0x01920066, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920066_Procedure_93), DEBUGSTRING("CPlayerWeapons::H0x01920066_Procedure_93")},
 {0x01920067, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920067_Procedure_94), DEBUGSTRING("CPlayerWeapons::H0x01920067_Procedure_94")},
 {0x01920068, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920068_Procedure_95), DEBUGSTRING("CPlayerWeapons::H0x01920068_Procedure_95")},
 {0x01920069, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920069_Procedure_96), DEBUGSTRING("CPlayerWeapons::H0x01920069_Procedure_96")},
 {0x0192006a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006a_Procedure_97), DEBUGSTRING("CPlayerWeapons::H0x0192006a_Procedure_97")},
 {0x0192006b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006b_Procedure_98), DEBUGSTRING("CPlayerWeapons::H0x0192006b_Procedure_98")},
 {0x0192006c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006c_Procedure_99), DEBUGSTRING("CPlayerWeapons::H0x0192006c_Procedure_99")},
 {0x0192006d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006d_Procedure_100), DEBUGSTRING("CPlayerWeapons::H0x0192006d_Procedure_100")},
 {0x0192006e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006e_Procedure_101), DEBUGSTRING("CPlayerWeapons::H0x0192006e_Procedure_101")},
 {0x0192006f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192006f_Procedure_102), DEBUGSTRING("CPlayerWeapons::H0x0192006f_Procedure_102")},
 {0x01920070, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920070_Procedure_103), DEBUGSTRING("CPlayerWeapons::H0x01920070_Procedure_103")},
 {0x01920071, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920071_Procedure_104), DEBUGSTRING("CPlayerWeapons::H0x01920071_Procedure_104")},
 {0x01920072, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920072_Procedure_105), DEBUGSTRING("CPlayerWeapons::H0x01920072_Procedure_105")},
 {0x01920073, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920073_Procedure_106), DEBUGSTRING("CPlayerWeapons::H0x01920073_Procedure_106")},
 {0x01920074, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920074_Procedure_107), DEBUGSTRING("CPlayerWeapons::H0x01920074_Procedure_107")},
 {0x01920075, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920075_Procedure_108), DEBUGSTRING("CPlayerWeapons::H0x01920075_Procedure_108")},
 {0x01920076, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920076_Procedure_109), DEBUGSTRING("CPlayerWeapons::H0x01920076_Procedure_109")},
 {0x01920077, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920077_Procedure_110), DEBUGSTRING("CPlayerWeapons::H0x01920077_Procedure_110")},
 {0x01920078, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920078_Procedure_111), DEBUGSTRING("CPlayerWeapons::H0x01920078_Procedure_111")},
 {0x01920079, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920079_Procedure_112), DEBUGSTRING("CPlayerWeapons::H0x01920079_Procedure_112")},
 {0x0192007a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007a_Procedure_113), DEBUGSTRING("CPlayerWeapons::H0x0192007a_Procedure_113")},
 {0x0192007b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007b_Procedure_114), DEBUGSTRING("CPlayerWeapons::H0x0192007b_Procedure_114")},
 {0x0192007c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007c_Procedure_115), DEBUGSTRING("CPlayerWeapons::H0x0192007c_Procedure_115")},
 {0x0192007d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007d_Procedure_116), DEBUGSTRING("CPlayerWeapons::H0x0192007d_Procedure_116")},
 {0x0192007e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007e_Procedure_117), DEBUGSTRING("CPlayerWeapons::H0x0192007e_Procedure_117")},
 {0x0192007f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192007f_Procedure_118), DEBUGSTRING("CPlayerWeapons::H0x0192007f_Procedure_118")},
 {0x01920080, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920080_Procedure_119), DEBUGSTRING("CPlayerWeapons::H0x01920080_Procedure_119")},
 {0x01920081, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920081_Procedure_120), DEBUGSTRING("CPlayerWeapons::H0x01920081_Procedure_120")},
 {0x01920082, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920082_Procedure_121), DEBUGSTRING("CPlayerWeapons::H0x01920082_Procedure_121")},
 {0x01920083, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920083_Procedure_122), DEBUGSTRING("CPlayerWeapons::H0x01920083_Procedure_122")},
 {0x01920084, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920084_Procedure_123), DEBUGSTRING("CPlayerWeapons::H0x01920084_Procedure_123")},
 {0x01920085, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920085_Procedure_124), DEBUGSTRING("CPlayerWeapons::H0x01920085_Procedure_124")},
 {0x01920086, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920086_Procedure_125), DEBUGSTRING("CPlayerWeapons::H0x01920086_Procedure_125")},
 {0x01920087, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920087_Procedure_126), DEBUGSTRING("CPlayerWeapons::H0x01920087_Procedure_126")},
 {0x01920088, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920088_Procedure_127), DEBUGSTRING("CPlayerWeapons::H0x01920088_Procedure_127")},
 {0x01920089, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920089_Procedure_128), DEBUGSTRING("CPlayerWeapons::H0x01920089_Procedure_128")},
 {0x0192008a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008a_Procedure_129), DEBUGSTRING("CPlayerWeapons::H0x0192008a_Procedure_129")},
 {0x0192008b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008b_Procedure_130), DEBUGSTRING("CPlayerWeapons::H0x0192008b_Procedure_130")},
 {0x0192008c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008c_Procedure_131), DEBUGSTRING("CPlayerWeapons::H0x0192008c_Procedure_131")},
 {0x0192008d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008d_Procedure_132), DEBUGSTRING("CPlayerWeapons::H0x0192008d_Procedure_132")},
 {0x0192008e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008e_Procedure_133), DEBUGSTRING("CPlayerWeapons::H0x0192008e_Procedure_133")},
 {0x0192008f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192008f_Procedure_134), DEBUGSTRING("CPlayerWeapons::H0x0192008f_Procedure_134")},
 {0x01920090, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920090_Procedure_135), DEBUGSTRING("CPlayerWeapons::H0x01920090_Procedure_135")},
 {0x01920091, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920091_Procedure_136), DEBUGSTRING("CPlayerWeapons::H0x01920091_Procedure_136")},
 {0x01920092, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920092_Procedure_137), DEBUGSTRING("CPlayerWeapons::H0x01920092_Procedure_137")},
 {0x01920093, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920093_Procedure_138), DEBUGSTRING("CPlayerWeapons::H0x01920093_Procedure_138")},
 {0x01920094, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920094_Procedure_139), DEBUGSTRING("CPlayerWeapons::H0x01920094_Procedure_139")},
 {0x01920095, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920095_Procedure_140), DEBUGSTRING("CPlayerWeapons::H0x01920095_Procedure_140")},
 {0x01920096, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920096_Procedure_141), DEBUGSTRING("CPlayerWeapons::H0x01920096_Procedure_141")},
 {0x01920097, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920097_Procedure_142), DEBUGSTRING("CPlayerWeapons::H0x01920097_Procedure_142")},
 {0x01920098, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920098_Procedure_143), DEBUGSTRING("CPlayerWeapons::H0x01920098_Procedure_143")},
 {0x01920099, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x01920099_Procedure_144), DEBUGSTRING("CPlayerWeapons::H0x01920099_Procedure_144")},
 {0x0192009a, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009a_Procedure_145), DEBUGSTRING("CPlayerWeapons::H0x0192009a_Procedure_145")},
 {0x0192009b, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009b_Procedure_146), DEBUGSTRING("CPlayerWeapons::H0x0192009b_Procedure_146")},
 {0x0192009c, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009c_Procedure_147), DEBUGSTRING("CPlayerWeapons::H0x0192009c_Procedure_147")},
 {0x0192009d, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009d_Procedure_148), DEBUGSTRING("CPlayerWeapons::H0x0192009d_Procedure_148")},
 {0x0192009e, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009e_Procedure_149), DEBUGSTRING("CPlayerWeapons::H0x0192009e_Procedure_149")},
 {0x0192009f, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x0192009f_Procedure_150), DEBUGSTRING("CPlayerWeapons::H0x0192009f_Procedure_150")},
 {0x019200a0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a0_Procedure_151), DEBUGSTRING("CPlayerWeapons::H0x019200a0_Procedure_151")},
 {0x019200a1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a1_Procedure_152), DEBUGSTRING("CPlayerWeapons::H0x019200a1_Procedure_152")},
 {0x019200a2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a2_Procedure_153), DEBUGSTRING("CPlayerWeapons::H0x019200a2_Procedure_153")},
 {0x019200a3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a3_Procedure_154), DEBUGSTRING("CPlayerWeapons::H0x019200a3_Procedure_154")},
 {0x019200a4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a4_Procedure_155), DEBUGSTRING("CPlayerWeapons::H0x019200a4_Procedure_155")},
 {0x019200a5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a5_Procedure_156), DEBUGSTRING("CPlayerWeapons::H0x019200a5_Procedure_156")},
 {0x019200a6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a6_Procedure_157), DEBUGSTRING("CPlayerWeapons::H0x019200a6_Procedure_157")},
 {0x019200a7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a7_Procedure_158), DEBUGSTRING("CPlayerWeapons::H0x019200a7_Procedure_158")},
 {0x019200a8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a8_Procedure_159), DEBUGSTRING("CPlayerWeapons::H0x019200a8_Procedure_159")},
 {0x019200a9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200a9_Procedure_160), DEBUGSTRING("CPlayerWeapons::H0x019200a9_Procedure_160")},
 {0x019200aa, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200aa_Procedure_161), DEBUGSTRING("CPlayerWeapons::H0x019200aa_Procedure_161")},
 {0x019200ab, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ab_Procedure_162), DEBUGSTRING("CPlayerWeapons::H0x019200ab_Procedure_162")},
 {0x019200ac, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ac_Procedure_163), DEBUGSTRING("CPlayerWeapons::H0x019200ac_Procedure_163")},
 {0x019200ad, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ad_Procedure_164), DEBUGSTRING("CPlayerWeapons::H0x019200ad_Procedure_164")},
 {0x019200ae, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ae_Procedure_165), DEBUGSTRING("CPlayerWeapons::H0x019200ae_Procedure_165")},
 {0x019200af, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200af_Procedure_166), DEBUGSTRING("CPlayerWeapons::H0x019200af_Procedure_166")},
 {0x019200b0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b0_Procedure_167), DEBUGSTRING("CPlayerWeapons::H0x019200b0_Procedure_167")},
 {0x019200b1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b1_Procedure_168), DEBUGSTRING("CPlayerWeapons::H0x019200b1_Procedure_168")},
 {0x019200b2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b2_Procedure_169), DEBUGSTRING("CPlayerWeapons::H0x019200b2_Procedure_169")},
 {0x019200b3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b3_Procedure_170), DEBUGSTRING("CPlayerWeapons::H0x019200b3_Procedure_170")},
 {0x019200b4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b4_Procedure_171), DEBUGSTRING("CPlayerWeapons::H0x019200b4_Procedure_171")},
 {0x019200b5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b5_Procedure_172), DEBUGSTRING("CPlayerWeapons::H0x019200b5_Procedure_172")},
 {0x019200b6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b6_Procedure_173), DEBUGSTRING("CPlayerWeapons::H0x019200b6_Procedure_173")},
 {0x019200b7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b7_Procedure_174), DEBUGSTRING("CPlayerWeapons::H0x019200b7_Procedure_174")},
 {0x019200b8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b8_Procedure_175), DEBUGSTRING("CPlayerWeapons::H0x019200b8_Procedure_175")},
 {0x019200b9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200b9_Procedure_176), DEBUGSTRING("CPlayerWeapons::H0x019200b9_Procedure_176")},
 {0x019200ba, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ba_Procedure_177), DEBUGSTRING("CPlayerWeapons::H0x019200ba_Procedure_177")},
 {0x019200bb, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200bb_Procedure_178), DEBUGSTRING("CPlayerWeapons::H0x019200bb_Procedure_178")},
 {0x019200bc, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200bc_Procedure_179), DEBUGSTRING("CPlayerWeapons::H0x019200bc_Procedure_179")},
 {0x019200bd, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200bd_Procedure_180), DEBUGSTRING("CPlayerWeapons::H0x019200bd_Procedure_180")},
 {0x019200be, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200be_Procedure_181), DEBUGSTRING("CPlayerWeapons::H0x019200be_Procedure_181")},
 {0x019200bf, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200bf_Procedure_182), DEBUGSTRING("CPlayerWeapons::H0x019200bf_Procedure_182")},
 {0x019200c0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c0_Procedure_183), DEBUGSTRING("CPlayerWeapons::H0x019200c0_Procedure_183")},
 {0x019200c1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c1_Procedure_184), DEBUGSTRING("CPlayerWeapons::H0x019200c1_Procedure_184")},
 {0x019200c2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c2_Procedure_185), DEBUGSTRING("CPlayerWeapons::H0x019200c2_Procedure_185")},
 {0x019200c3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c3_Procedure_186), DEBUGSTRING("CPlayerWeapons::H0x019200c3_Procedure_186")},
 {0x019200c4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c4_Procedure_187), DEBUGSTRING("CPlayerWeapons::H0x019200c4_Procedure_187")},
 {0x019200c5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c5_Procedure_188), DEBUGSTRING("CPlayerWeapons::H0x019200c5_Procedure_188")},
 {0x019200c6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c6_Procedure_189), DEBUGSTRING("CPlayerWeapons::H0x019200c6_Procedure_189")},
 {0x019200c7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c7_Procedure_190), DEBUGSTRING("CPlayerWeapons::H0x019200c7_Procedure_190")},
 {0x019200c8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c8_Procedure_191), DEBUGSTRING("CPlayerWeapons::H0x019200c8_Procedure_191")},
 {0x019200c9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200c9_Procedure_192), DEBUGSTRING("CPlayerWeapons::H0x019200c9_Procedure_192")},
 {0x019200ca, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ca_Procedure_193), DEBUGSTRING("CPlayerWeapons::H0x019200ca_Procedure_193")},
 {0x019200cb, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200cb_Procedure_194), DEBUGSTRING("CPlayerWeapons::H0x019200cb_Procedure_194")},
 {0x019200cc, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200cc_Procedure_195), DEBUGSTRING("CPlayerWeapons::H0x019200cc_Procedure_195")},
 {0x019200cd, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200cd_Procedure_196), DEBUGSTRING("CPlayerWeapons::H0x019200cd_Procedure_196")},
 {0x019200ce, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ce_Procedure_197), DEBUGSTRING("CPlayerWeapons::H0x019200ce_Procedure_197")},
 {0x019200cf, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200cf_Procedure_198), DEBUGSTRING("CPlayerWeapons::H0x019200cf_Procedure_198")},
 {0x019200d0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d0_Procedure_199), DEBUGSTRING("CPlayerWeapons::H0x019200d0_Procedure_199")},
 {0x019200d1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d1_Procedure_200), DEBUGSTRING("CPlayerWeapons::H0x019200d1_Procedure_200")},
 {0x019200d2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d2_Procedure_201), DEBUGSTRING("CPlayerWeapons::H0x019200d2_Procedure_201")},
 {0x019200d3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d3_Procedure_202), DEBUGSTRING("CPlayerWeapons::H0x019200d3_Procedure_202")},
 {0x019200d4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d4_Procedure_203), DEBUGSTRING("CPlayerWeapons::H0x019200d4_Procedure_203")},
 {0x019200d5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d5_Procedure_204), DEBUGSTRING("CPlayerWeapons::H0x019200d5_Procedure_204")},
 {0x019200d6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d6_Procedure_205), DEBUGSTRING("CPlayerWeapons::H0x019200d6_Procedure_205")},
 {0x019200d7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d7_Procedure_206), DEBUGSTRING("CPlayerWeapons::H0x019200d7_Procedure_206")},
 {0x019200d8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d8_Procedure_207), DEBUGSTRING("CPlayerWeapons::H0x019200d8_Procedure_207")},
 {0x019200d9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200d9_Procedure_208), DEBUGSTRING("CPlayerWeapons::H0x019200d9_Procedure_208")},
 {0x019200da, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200da_Procedure_209), DEBUGSTRING("CPlayerWeapons::H0x019200da_Procedure_209")},
 {0x019200db, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200db_Procedure_210), DEBUGSTRING("CPlayerWeapons::H0x019200db_Procedure_210")},
 {0x019200dc, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200dc_Procedure_211), DEBUGSTRING("CPlayerWeapons::H0x019200dc_Procedure_211")},
 {0x019200dd, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200dd_Procedure_212), DEBUGSTRING("CPlayerWeapons::H0x019200dd_Procedure_212")},
 {0x019200de, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200de_Procedure_213), DEBUGSTRING("CPlayerWeapons::H0x019200de_Procedure_213")},
 {0x019200df, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200df_Procedure_214), DEBUGSTRING("CPlayerWeapons::H0x019200df_Procedure_214")},
 {0x019200e0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e0_Procedure_215), DEBUGSTRING("CPlayerWeapons::H0x019200e0_Procedure_215")},
 {0x019200e1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e1_Procedure_216), DEBUGSTRING("CPlayerWeapons::H0x019200e1_Procedure_216")},
 {0x019200e2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e2_Procedure_217), DEBUGSTRING("CPlayerWeapons::H0x019200e2_Procedure_217")},
 {0x019200e3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e3_Procedure_218), DEBUGSTRING("CPlayerWeapons::H0x019200e3_Procedure_218")},
 {0x019200e4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e4_Procedure_219), DEBUGSTRING("CPlayerWeapons::H0x019200e4_Procedure_219")},
 {0x019200e5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e5_Procedure_220), DEBUGSTRING("CPlayerWeapons::H0x019200e5_Procedure_220")},
 {0x019200e6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e6_Procedure_221), DEBUGSTRING("CPlayerWeapons::H0x019200e6_Procedure_221")},
 {0x019200e7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e7_Procedure_222), DEBUGSTRING("CPlayerWeapons::H0x019200e7_Procedure_222")},
 {0x019200e8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e8_Procedure_223), DEBUGSTRING("CPlayerWeapons::H0x019200e8_Procedure_223")},
 {0x019200e9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200e9_Procedure_224), DEBUGSTRING("CPlayerWeapons::H0x019200e9_Procedure_224")},
 {0x019200ea, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ea_Procedure_225), DEBUGSTRING("CPlayerWeapons::H0x019200ea_Procedure_225")},
 {0x019200eb, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200eb_Procedure_226), DEBUGSTRING("CPlayerWeapons::H0x019200eb_Procedure_226")},
 {0x019200ec, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ec_Procedure_227), DEBUGSTRING("CPlayerWeapons::H0x019200ec_Procedure_227")},
 {0x019200ed, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ed_Procedure_228), DEBUGSTRING("CPlayerWeapons::H0x019200ed_Procedure_228")},
 {0x019200ee, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ee_Procedure_229), DEBUGSTRING("CPlayerWeapons::H0x019200ee_Procedure_229")},
 {0x019200ef, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200ef_Procedure_230), DEBUGSTRING("CPlayerWeapons::H0x019200ef_Procedure_230")},
 {0x019200f0, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f0_Procedure_231), DEBUGSTRING("CPlayerWeapons::H0x019200f0_Procedure_231")},
 {0x019200f1, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f1_Procedure_232), DEBUGSTRING("CPlayerWeapons::H0x019200f1_Procedure_232")},
 {0x019200f2, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f2_Procedure_233), DEBUGSTRING("CPlayerWeapons::H0x019200f2_Procedure_233")},
 {0x019200f3, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f3_Procedure_234), DEBUGSTRING("CPlayerWeapons::H0x019200f3_Procedure_234")},
 {0x019200f4, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f4_Procedure_235), DEBUGSTRING("CPlayerWeapons::H0x019200f4_Procedure_235")},
 {0x019200f5, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f5_Procedure_236), DEBUGSTRING("CPlayerWeapons::H0x019200f5_Procedure_236")},
 {0x019200f6, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f6_Procedure_237), DEBUGSTRING("CPlayerWeapons::H0x019200f6_Procedure_237")},
 {0x019200f7, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f7_Procedure_238), DEBUGSTRING("CPlayerWeapons::H0x019200f7_Procedure_238")},
 {0x019200f8, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f8_Procedure_239), DEBUGSTRING("CPlayerWeapons::H0x019200f8_Procedure_239")},
 {0x019200f9, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200f9_Procedure_240), DEBUGSTRING("CPlayerWeapons::H0x019200f9_Procedure_240")},
 {1, -1, CEntity::pEventHandler(&CPlayerWeapons::Main), DEBUGSTRING("CPlayerWeapons::Main")},
 {0x019200fa, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200fa_Procedure_242), DEBUGSTRING("CPlayerWeapons::H0x019200fa_Procedure_242")},
 {0x019200fb, -1, CEntity::pEventHandler(&CPlayerWeapons::H0x019200fb_Procedure_243), DEBUGSTRING("CPlayerWeapons::H0x019200fb_Procedure_243")},
};
#define CPlayerWeapons_handlersct ARRAYCOUNT(CPlayerWeapons_handlers)

CEntity *CPlayerWeapons_New(void) { return new CPlayerWeapons; };
void CPlayerWeapons_OnInitClass(void) {};
void CPlayerWeapons_OnEndClass(void) {};
void CPlayerWeapons_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerWeapons_OnWorldEnd(CWorld *pwo) {};
void CPlayerWeapons_OnWorldInit(CWorld *pwo) {};
void CPlayerWeapons_OnWorldTick(CWorld *pwo) {};
void CPlayerWeapons_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerWeapons, CRationalEntity, "Player Weapons", "", 402);
DECLARE_CTFILENAME(_fnmCPlayerWeapons_tbn, "");
