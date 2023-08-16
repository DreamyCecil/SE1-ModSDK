// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

#define ENTITYCLASS CPlayerAnimator

CEntityProperty CPlayerAnimator_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x196<<8)+1, 0x110, "", 0, "m_penPlayer", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+5, 0x114, "", 0, "m_bReference", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+6, 0x118, "", 0, "m_fLastActionTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x196<<8)+7, 0x11C, "", 0, "m_iContent", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+8, 0x120, "", 0, "m_bWaitJumpAnim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+9, 0x124, "", 0, "m_bCrouch", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+10, 0x128, "", 0, "m_iCrouchDownWait", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+11, 0x12C, "", 0, "m_iRiseUpWait", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+12, 0x130, "", 0, "m_bChangeWeapon", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+13, 0x134, "", 0, "m_bSwim", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x196<<8)+14, 0x138, "", 0, "m_iFlare", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x196<<8)+15, 0x13C, "", 0, "m_iSecondFlare", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+40, 0x140, "", 0, "m_tmSecondFlareAdded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+16, 0x144, "", 0, "m_bAttacking", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+19, 0x148, "", 0, "m_tmAttackingDue", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+17, 0x14C, "", 0, "m_tmFlareAdded", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+18, 0x150, "", 0, "m_bDisableAnimating", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x196<<8)+20, 0x154, "", 0, "m_vLastPlayerPosition", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+21, 0x160, "", 0, "m_fEyesYLastOffset", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+22, 0x164, "", 0, "m_fEyesYOffset", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+23, 0x168, "", 0, "m_fEyesYSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+27, 0x16C, "", 0, "m_fWeaponYLastOffset", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+28, 0x170, "", 0, "m_fWeaponYOffset", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+29, 0x174, "", 0, "m_fWeaponYSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+30, 0x178, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+31, 0x17C, "", 0, "m_fMoveLastBanking", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+32, 0x180, "", 0, "m_fMoveBanking", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+33, 0x184, "", 0, "m_iMovingSide", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+34, 0x188, "", 0, "m_bSidestepBankingLeft", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x196<<8)+35, 0x18C, "", 0, "m_bSidestepBankingRight", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+36, 0x190, "", 0, "m_fSidestepLastBanking", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+37, 0x194, "", 0, "m_fSidestepBanking", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x196<<8)+38, 0x198, "", 0, "m_iWeaponLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x196<<8)+39, 0x19C, "", 0, "m_fBodyAnimTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x196<<8)+255, 0x1A0, "", 0, "m_penPrediction", 0x0UL, 0),
};
#define CPlayerAnimator_propertiesct ARRAYCOUNT(CPlayerAnimator_properties)

CEntityComponent CPlayerAnimator_components[] = {
#define CLASS_REMINDER ((0x00000196<<8)+1)
 CEntityComponent(ECT_CLASS, CLASS_REMINDER, "EFNM" "Classes\\Reminder.ecl"),
#define MODEL_KNIFE ((0x00000196<<8)+20)
 CEntityComponent(ECT_MODEL, MODEL_KNIFE, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.mdl"),
#define TEXTURE_KNIFE ((0x00000196<<8)+22)
 CEntityComponent(ECT_TEXTURE, TEXTURE_KNIFE, "EFNM" "Models\\Weapons\\Knife\\KnifeItem.tex"),
#define MODEL_COLT ((0x00000196<<8)+30)
 CEntityComponent(ECT_MODEL, MODEL_COLT, "EFNM" "Models\\Weapons\\Colt\\ColtItem.mdl"),
#define MODEL_COLTCOCK ((0x00000196<<8)+31)
 CEntityComponent(ECT_MODEL, MODEL_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.mdl"),
#define MODEL_COLTMAIN ((0x00000196<<8)+32)
 CEntityComponent(ECT_MODEL, MODEL_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.mdl"),
#define MODEL_COLTBULLETS ((0x00000196<<8)+33)
 CEntityComponent(ECT_MODEL, MODEL_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.mdl"),
#define TEXTURE_COLTBULLETS ((0x00000196<<8)+34)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTBULLETS, "EFNM" "Models\\Weapons\\Colt\\ColtBullets.tex"),
#define TEXTURE_COLTMAIN ((0x00000196<<8)+35)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTMAIN, "EFNM" "Models\\Weapons\\Colt\\ColtMain.tex"),
#define TEXTURE_COLTCOCK ((0x00000196<<8)+36)
 CEntityComponent(ECT_TEXTURE, TEXTURE_COLTCOCK, "EFNM" "Models\\Weapons\\Colt\\ColtCock.tex"),
#define MODEL_SINGLESHOTGUN ((0x00000196<<8)+40)
 CEntityComponent(ECT_MODEL, MODEL_SINGLESHOTGUN, "EFNM" "Models\\Weapons\\SingleShotgun\\SingleShotgunItem.mdl"),
#define MODEL_SS_SLIDER ((0x00000196<<8)+41)
 CEntityComponent(ECT_MODEL, MODEL_SS_SLIDER, "EFNM" "Models\\Weapons\\SingleShotgun\\Slider.mdl"),
#define MODEL_SS_HANDLE ((0x00000196<<8)+42)
 CEntityComponent(ECT_MODEL, MODEL_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.mdl"),
#define MODEL_SS_BARRELS ((0x00000196<<8)+43)
 CEntityComponent(ECT_MODEL, MODEL_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.mdl"),
#define TEXTURE_SS_HANDLE ((0x00000196<<8)+44)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_HANDLE, "EFNM" "Models\\Weapons\\SingleShotgun\\Handle.tex"),
#define TEXTURE_SS_BARRELS ((0x00000196<<8)+45)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SS_BARRELS, "EFNM" "Models\\Weapons\\SingleShotgun\\Barrels.tex"),
#define MODEL_DOUBLESHOTGUN ((0x00000196<<8)+50)
 CEntityComponent(ECT_MODEL, MODEL_DOUBLESHOTGUN, "EFNM" "Models\\Weapons\\DoubleShotgun\\DoubleShotgunItem.mdl"),
#define MODEL_DS_HANDLE ((0x00000196<<8)+51)
 CEntityComponent(ECT_MODEL, MODEL_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunhandle.mdl"),
#define MODEL_DS_BARRELS ((0x00000196<<8)+52)
 CEntityComponent(ECT_MODEL, MODEL_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Dshotgunbarrels.mdl"),
#define MODEL_DS_SWITCH ((0x00000196<<8)+54)
 CEntityComponent(ECT_MODEL, MODEL_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.mdl"),
#define TEXTURE_DS_HANDLE ((0x00000196<<8)+56)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_HANDLE, "EFNM" "Models\\Weapons\\DoubleShotgun\\Handle.tex"),
#define TEXTURE_DS_BARRELS ((0x00000196<<8)+57)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_BARRELS, "EFNM" "Models\\Weapons\\DoubleShotgun\\Barrels.tex"),
#define TEXTURE_DS_SWITCH ((0x00000196<<8)+58)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DS_SWITCH, "EFNM" "Models\\Weapons\\DoubleShotgun\\Switch.tex"),
#define MODEL_TOMMYGUN ((0x00000196<<8)+70)
 CEntityComponent(ECT_MODEL, MODEL_TOMMYGUN, "EFNM" "Models\\Weapons\\TommyGun\\TommyGunItem.mdl"),
#define MODEL_TG_BODY ((0x00000196<<8)+71)
 CEntityComponent(ECT_MODEL, MODEL_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.mdl"),
#define MODEL_TG_SLIDER ((0x00000196<<8)+72)
 CEntityComponent(ECT_MODEL, MODEL_TG_SLIDER, "EFNM" "Models\\Weapons\\TommyGun\\Slider.mdl"),
#define TEXTURE_TG_BODY ((0x00000196<<8)+73)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TG_BODY, "EFNM" "Models\\Weapons\\TommyGun\\Body.tex"),
#define MODEL_MINIGUN ((0x00000196<<8)+80)
 CEntityComponent(ECT_MODEL, MODEL_MINIGUN, "EFNM" "Models\\Weapons\\MiniGun\\MiniGunItem.mdl"),
#define MODEL_MG_BARRELS ((0x00000196<<8)+81)
 CEntityComponent(ECT_MODEL, MODEL_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.mdl"),
#define MODEL_MG_BODY ((0x00000196<<8)+82)
 CEntityComponent(ECT_MODEL, MODEL_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.mdl"),
#define MODEL_MG_ENGINE ((0x00000196<<8)+83)
 CEntityComponent(ECT_MODEL, MODEL_MG_ENGINE, "EFNM" "Models\\Weapons\\MiniGun\\Engine.mdl"),
#define TEXTURE_MG_BODY ((0x00000196<<8)+84)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BODY, "EFNM" "Models\\Weapons\\MiniGun\\Body.tex"),
#define TEXTURE_MG_BARRELS ((0x00000196<<8)+99)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_BARRELS, "EFNM" "Models\\Weapons\\MiniGun\\Barrels.tex"),
#define MODEL_ROCKETLAUNCHER ((0x00000196<<8)+90)
 CEntityComponent(ECT_MODEL, MODEL_ROCKETLAUNCHER, "EFNM" "Models\\Weapons\\RocketLauncher\\RocketLauncherItem.mdl"),
#define MODEL_RL_BODY ((0x00000196<<8)+91)
 CEntityComponent(ECT_MODEL, MODEL_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.mdl"),
#define TEXTURE_RL_BODY ((0x00000196<<8)+92)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_BODY, "EFNM" "Models\\Weapons\\RocketLauncher\\Body.tex"),
#define MODEL_RL_ROTATINGPART ((0x00000196<<8)+93)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.mdl"),
#define TEXTURE_RL_ROTATINGPART ((0x00000196<<8)+94)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROTATINGPART, "EFNM" "Models\\Weapons\\RocketLauncher\\RotatingPart.tex"),
#define MODEL_RL_ROCKET ((0x00000196<<8)+95)
 CEntityComponent(ECT_MODEL, MODEL_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.mdl"),
#define TEXTURE_RL_ROCKET ((0x00000196<<8)+96)
 CEntityComponent(ECT_TEXTURE, TEXTURE_RL_ROCKET, "EFNM" "Models\\Weapons\\RocketLauncher\\Projectile\\Rocket.tex"),
#define MODEL_GRENADELAUNCHER ((0x00000196<<8)+100)
 CEntityComponent(ECT_MODEL, MODEL_GRENADELAUNCHER, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeLauncherItem.mdl"),
#define MODEL_GL_BODY ((0x00000196<<8)+101)
 CEntityComponent(ECT_MODEL, MODEL_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.mdl"),
#define MODEL_GL_MOVINGPART ((0x00000196<<8)+102)
 CEntityComponent(ECT_MODEL, MODEL_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.mdl"),
#define MODEL_GL_GRENADE ((0x00000196<<8)+103)
 CEntityComponent(ECT_MODEL, MODEL_GL_GRENADE, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeBack.mdl"),
#define TEXTURE_GL_BODY ((0x00000196<<8)+104)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_BODY, "EFNM" "Models\\Weapons\\GrenadeLauncher\\Body.tex"),
#define TEXTURE_GL_MOVINGPART ((0x00000196<<8)+105)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GL_MOVINGPART, "EFNM" "Models\\Weapons\\GrenadeLauncher\\MovingPipe.tex"),
#define MODEL_SNIPER ((0x00000196<<8)+110)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER, "EFNM" "ModelsMP\\Weapons\\Sniper\\Sniper.mdl"),
#define MODEL_SNIPER_BODY ((0x00000196<<8)+111)
 CEntityComponent(ECT_MODEL, MODEL_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.mdl"),
#define TEXTURE_SNIPER_BODY ((0x00000196<<8)+112)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SNIPER_BODY, "EFNM" "ModelsMP\\Weapons\\Sniper\\Body.tex"),
#define MODEL_FLAMER ((0x00000196<<8)+130)
 CEntityComponent(ECT_MODEL, MODEL_FLAMER, "EFNM" "ModelsMP\\Weapons\\Flamer\\FlamerItem.mdl"),
#define MODEL_FL_BODY ((0x00000196<<8)+131)
 CEntityComponent(ECT_MODEL, MODEL_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.mdl"),
#define MODEL_FL_RESERVOIR ((0x00000196<<8)+132)
 CEntityComponent(ECT_MODEL, MODEL_FL_RESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.mdl"),
#define MODEL_FL_FLAME ((0x00000196<<8)+133)
 CEntityComponent(ECT_MODEL, MODEL_FL_FLAME, "EFNM" "ModelsMP\\Weapons\\Flamer\\Flame.mdl"),
#define TEXTURE_FL_BODY ((0x00000196<<8)+134)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_BODY, "EFNM" "ModelsMP\\Weapons\\Flamer\\Body.tex"),
#define TEXTURE_FL_FLAME ((0x00000196<<8)+135)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FLAME, "EFNM" "ModelsMP\\Effects\\Flame\\Flame.tex"),
#define TEXTURE_FL_FUELRESERVOIR ((0x00000196<<8)+136)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FL_FUELRESERVOIR, "EFNM" "ModelsMP\\Weapons\\Flamer\\FuelReservoir.tex"),
#define MODEL_LASER ((0x00000196<<8)+140)
 CEntityComponent(ECT_MODEL, MODEL_LASER, "EFNM" "Models\\Weapons\\Laser\\LaserItem.mdl"),
#define MODEL_LS_BODY ((0x00000196<<8)+141)
 CEntityComponent(ECT_MODEL, MODEL_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.mdl"),
#define MODEL_LS_BARREL ((0x00000196<<8)+142)
 CEntityComponent(ECT_MODEL, MODEL_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.mdl"),
#define TEXTURE_LS_BODY ((0x00000196<<8)+143)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BODY, "EFNM" "Models\\Weapons\\Laser\\Body.tex"),
#define TEXTURE_LS_BARREL ((0x00000196<<8)+144)
 CEntityComponent(ECT_TEXTURE, TEXTURE_LS_BARREL, "EFNM" "Models\\Weapons\\Laser\\Barrel.tex"),
#define MODEL_CHAINSAW ((0x00000196<<8)+150)
 CEntityComponent(ECT_MODEL, MODEL_CHAINSAW, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\ChainsawForPlayer.mdl"),
#define MODEL_CS_BODY ((0x00000196<<8)+151)
 CEntityComponent(ECT_MODEL, MODEL_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\BodyForPlayer.mdl"),
#define MODEL_CS_BLADE ((0x00000196<<8)+152)
 CEntityComponent(ECT_MODEL, MODEL_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.mdl"),
#define MODEL_CS_TEETH ((0x00000196<<8)+153)
 CEntityComponent(ECT_MODEL, MODEL_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.mdl"),
#define TEXTURE_CS_BODY ((0x00000196<<8)+154)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BODY, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Body.tex"),
#define TEXTURE_CS_BLADE ((0x00000196<<8)+155)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_BLADE, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Blade.tex"),
#define TEXTURE_CS_TEETH ((0x00000196<<8)+156)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CS_TEETH, "EFNM" "ModelsMP\\Weapons\\Chainsaw\\Teeth.tex"),
#define MODEL_CANNON ((0x00000196<<8)+170)
 CEntityComponent(ECT_MODEL, MODEL_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Cannon.mdl"),
#define MODEL_CN_BODY ((0x00000196<<8)+171)
 CEntityComponent(ECT_MODEL, MODEL_CN_BODY, "EFNM" "Models\\Weapons\\Cannon\\Body.mdl"),
#define TEXTURE_CANNON ((0x00000196<<8)+173)
 CEntityComponent(ECT_TEXTURE, TEXTURE_CANNON, "EFNM" "Models\\Weapons\\Cannon\\Body.tex"),
#define MODEL_GOLDAMON ((0x00000196<<8)+180)
 CEntityComponent(ECT_MODEL, MODEL_GOLDAMON, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.mdl"),
#define TEXTURE_GOLDAMON ((0x00000196<<8)+181)
 CEntityComponent(ECT_TEXTURE, TEXTURE_GOLDAMON, "EFNM" "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.tex"),
#define TEX_REFL_BWRIPLES01 ((0x00000196<<8)+200)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES01, "EFNM" "Models\\ReflectionTextures\\BWRiples01.tex"),
#define TEX_REFL_BWRIPLES02 ((0x00000196<<8)+201)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_BWRIPLES02, "EFNM" "Models\\ReflectionTextures\\BWRiples02.tex"),
#define TEX_REFL_LIGHTMETAL01 ((0x00000196<<8)+202)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTMETAL01, "EFNM" "Models\\ReflectionTextures\\LightMetal01.tex"),
#define TEX_REFL_LIGHTBLUEMETAL01 ((0x00000196<<8)+203)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_LIGHTBLUEMETAL01, "EFNM" "Models\\ReflectionTextures\\LightBlueMetal01.tex"),
#define TEX_REFL_DARKMETAL ((0x00000196<<8)+204)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_DARKMETAL, "EFNM" "Models\\ReflectionTextures\\DarkMetal.tex"),
#define TEX_REFL_PURPLE01 ((0x00000196<<8)+205)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_PURPLE01, "EFNM" "Models\\ReflectionTextures\\Purple01.tex"),
#define TEX_REFL_GOLD01 ((0x00000196<<8)+206)
 CEntityComponent(ECT_TEXTURE, TEX_REFL_GOLD01, "EFNM" "Models\\ReflectionTextures\\Gold01.tex"),
#define TEX_SPEC_WEAK ((0x00000196<<8)+210)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_WEAK, "EFNM" "Models\\SpecularTextures\\Weak.tex"),
#define TEX_SPEC_MEDIUM ((0x00000196<<8)+211)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_MEDIUM, "EFNM" "Models\\SpecularTextures\\Medium.tex"),
#define TEX_SPEC_STRONG ((0x00000196<<8)+212)
 CEntityComponent(ECT_TEXTURE, TEX_SPEC_STRONG, "EFNM" "Models\\SpecularTextures\\Strong.tex"),
#define MODEL_FLARE02 ((0x00000196<<8)+250)
 CEntityComponent(ECT_MODEL, MODEL_FLARE02, "EFNM" "Models\\Effects\\Weapons\\Flare02\\Flare.mdl"),
#define TEXTURE_FLARE02 ((0x00000196<<8)+251)
 CEntityComponent(ECT_TEXTURE, TEXTURE_FLARE02, "EFNM" "Models\\Effects\\Weapons\\Flare02\\Flare.tex"),
#define CPlayerAnimator_MODEL_260 0x19704 // (0x196<<8)+260
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_260, "EFNM" "Models\\Weapons\\GhostBuster\\GhostBusterItem.mdl"),
#define CPlayerAnimator_MODEL_261 0x19705 // (0x196<<8)+261
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_261, "EFNM" "Models\\Weapons\\GhostBuster\\Body.mdl"),
#define CPlayerAnimator_MODEL_262 0x19706 // (0x196<<8)+262
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_262, "EFNM" "Models\\Weapons\\GhostBuster\\Rotator.mdl"),
#define CPlayerAnimator_MODEL_263 0x19707 // (0x196<<8)+263
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_263, "EFNM" "Models\\Weapons\\GhostBuster\\Effect01.mdl"),
#define CPlayerAnimator_MODEL_264 0x19708 // (0x196<<8)+264
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_264, "EFNM" "Models\\Weapons\\GhostBuster\\EffectFlare01.mdl"),
#define CPlayerAnimator_TEXTURE_265 0x19709 // (0x196<<8)+265
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_265, "EFNM" "Models\\Weapons\\GhostBuster\\Rotator.tex"),
#define CPlayerAnimator_TEXTURE_266 0x1970A // (0x196<<8)+266
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_266, "EFNM" "Models\\Weapons\\GhostBuster\\Body.tex"),
#define CPlayerAnimator_TEXTURE_267 0x1970B // (0x196<<8)+267
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_267, "EFNM" "Models\\Weapons\\GhostBuster\\Lightning.tex"),
#define CPlayerAnimator_TEXTURE_268 0x1970C // (0x196<<8)+268
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_268, "EFNM" "Models\\Weapons\\GhostBuster\\EffectFlare.tex"),
#define CPlayerAnimator_MODEL_270 0x1970E // (0x196<<8)+270
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_270, "EFNM" "Models\\Weapons\\Laser\\LaserItem.mdl"),
#define CPlayerAnimator_MODEL_271 0x1970F // (0x196<<8)+271
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_271, "EFNM" "Models\\Weapons\\PlasmaThrower\\Body.mdl"),
#define CPlayerAnimator_MODEL_272 0x19710 // (0x196<<8)+272
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_272, "EFNM" "Models\\Weapons\\PlasmaThrower\\Barrel.mdl"),
#define CPlayerAnimator_TEXTURE_273 0x19711 // (0x196<<8)+273
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_273, "EFNM" "Models\\Weapons\\PlasmaThrower\\Body.tex"),
#define CPlayerAnimator_TEXTURE_274 0x19712 // (0x196<<8)+274
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_274, "EFNM" "Models\\Weapons\\PlasmaThrower\\Barrel.tex"),
#define CPlayerAnimator_MODEL_275 0x19713 // (0x196<<8)+275
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_275, "EFNM" "Models\\Weapons\\PlasmaThrower\\Barrel_big.mdl"),
#define CPlayerAnimator_TEXTURE_276 0x19714 // (0x196<<8)+276
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_276, "EFNM" "Models\\Weapons\\PlasmaThrower\\Barrel_big.tex"),
#define CPlayerAnimator_MODEL_280 0x19718 // (0x196<<8)+280
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_280, "EFNM" "Models\\Weapons\\MineLayer\\MovingPipe.mdl"),
#define CPlayerAnimator_TEXTURE_281 0x19719 // (0x196<<8)+281
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_281, "EFNM" "Models\\Weapons\\MineLayer\\MovingPipe.tex"),
#define CPlayerAnimator_TEXTURE_282 0x1971A // (0x196<<8)+282
 CEntityComponent(ECT_TEXTURE, CPlayerAnimator_TEXTURE_282, "EFNM" "Models\\Weapons\\MineLayer\\Body.tex"),
#define CPlayerAnimator_MODEL_283 0x1971B // (0x196<<8)+283
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_283, "EFNM" "Models\\Weapons\\GrenadeLauncher\\GrenadeLauncher.mdl"),
#define CPlayerAnimator_MODEL_284 0x1971C // (0x196<<8)+284
 CEntityComponent(ECT_MODEL, CPlayerAnimator_MODEL_284, "EFNM" "Models\\Weapons\\MineLayer\\Body.mdl"),
};
#define CPlayerAnimator_componentsct ARRAYCOUNT(CPlayerAnimator_components)

CEventHandlerEntry CPlayerAnimator_handlers[] = {
 {0x01960001, -1, CEntity::pEventHandler(&CPlayerAnimator::ReminderAction),DEBUGSTRING("CPlayerAnimator::ReminderAction")},
 {1, -1, CEntity::pEventHandler(&CPlayerAnimator::Main),DEBUGSTRING("CPlayerAnimator::Main")},
 {0x01960002, -1, CEntity::pEventHandler(&CPlayerAnimator::H0x01960002_Main_01), DEBUGSTRING("CPlayerAnimator::H0x01960002_Main_01")},
 {0x01960003, -1, CEntity::pEventHandler(&CPlayerAnimator::H0x01960003_Main_02), DEBUGSTRING("CPlayerAnimator::H0x01960003_Main_02")},
};
#define CPlayerAnimator_handlersct ARRAYCOUNT(CPlayerAnimator_handlers)

CEntity *CPlayerAnimator_New(void) { return new CPlayerAnimator; };
void CPlayerAnimator_OnInitClass(void) {};
void CPlayerAnimator_OnEndClass(void) {};
void CPlayerAnimator_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerAnimator_OnWorldEnd(CWorld *pwo) {};
void CPlayerAnimator_OnWorldInit(CWorld *pwo) {};
void CPlayerAnimator_OnWorldTick(CWorld *pwo) {};
void CPlayerAnimator_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerAnimator, CRationalEntity, "Player Animator", "", 406);
DECLARE_CTFILENAME(_fnmCPlayerAnimator_tbn, "");
