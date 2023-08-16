// This header file has been recreated by Dreamy Cecil, 2023
// It is a part of Serious Sam SDK maintained here: https://github.com/DreamyCecil/SE1-ModSDK

EP_ENUMBEG(PSSState)
  EP_ENUMVALUE(PSSS_IDLE, "Idle"),
  EP_ENUMVALUE(PSSS_MOVING, "Moving"),
  EP_ENUMVALUE(PSSS_REACHED_DESTINATION, "Reached destination"),
  EP_ENUMVALUE(PSSS_KILLING_BEAM_FIREING, "Killing beam fireing"),
  EP_ENUMVALUE(PSSS_BEAM_DEACTIVATED, "Killing beam deactivated"),
  EP_ENUMVALUE(PSSS_DOORS_CLOSED, "Doors closed"),
EP_ENUMEND(PSSState);

#define ENTITYCLASS CPyramidSpaceShip

CEntityProperty CPyramidSpaceShip_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x261<<8)+1, 0x340, "Name", 'N', "m_strName", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+3, 0x344, "", 0, "m_fMovingSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+5, 0x348, "Beam hit target marker", 'T', "m_penBeamHit", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+6, 0x34C, "Beam model holder", 'B', "m_penLightBeam", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+7, 0x350, "", 0, "m_tmBeamTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+8, 0x354, "Hit place flare", 'H', "m_penHitPlaceFlare", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+9, 0x358, "", 0, "m_tmHitFlareTime", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+10, 0x35C, "", 0, "m_iRingCounter", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+11, 0x360, "", 0, "m_fRatio", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x261<<8)+12, 0x364, "", 0, "m_strDescription", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &PSSState_enum, (0x261<<8)+13, 0x368, "", 0, "m_epssState", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+14, 0x36C, "Stretch", 'S', "m_fStretch", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+20, 0x370, "", 0, "m_bStopMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+21, 0x374, "Target", 'T', "m_penTarget", 0x7F7FFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+29, 0x378, "Fly away path marker", 0, "m_penFlyAwayTarget", 0x7F7FFFFFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x261<<8)+22, 0x37C, "", 0, "m_penLast", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+23, 0x380, "", 0, "m_bMoving", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+24, 0x384, "", 0, "m_fRot", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+25, 0x388, "", 0, "m_fLastRotSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+26, 0x38C, "", 0, "m_fRotSpeed", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+27, 0x390, "", 0, "m_bApplyDamageToHitted", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+28, 0x394, "", 0, "m_tmTemp", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+30, 0x398, "", 0, "m_tmAtMarker", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+31, 0x39C, "", 0, "m_tmDelta", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x261<<8)+32, 0x3A0, "", 0, "m_vPNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x261<<8)+33, 0x3AC, "", 0, "m_vPNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x261<<8)+34, 0x3B8, "", 0, "m_vTNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x261<<8)+35, 0x3C4, "", 0, "m_vTNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x261<<8)+36, 0x3D0, "", 0, "m_qPNp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x261<<8)+37, 0x3E0, "", 0, "m_qPNp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x261<<8)+38, 0x3F0, "", 0, "m_qANp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOATQUAT3D, NULL, (0x261<<8)+39, 0x400, "", 0, "m_qANp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+40, 0x410, "", 0, "m_fRotSpeedp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+41, 0x414, "", 0, "m_fRotSpeedp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+42, 0x418, "", 0, "m_fTRotSpeedp0", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+43, 0x41C, "", 0, "m_fTRotSpeedp1", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x261<<8)+50, 0x420, "", 0, "m_soPlates", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x261<<8)+51, 0x49C, "", 0, "m_soBeamMachine", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x261<<8)+52, 0x518, "", 0, "m_soBeam", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_SOUNDOBJECT, NULL, (0x261<<8)+53, 0x594, "", 0, "m_soFlaresFX", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+54, 0x610, "", 0, "m_bFiringDeactivatedBeam", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+55, 0x614, "", 0, "m_bImmediateAnimations", 0x0UL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x261<<8)+56, 0x618, "Wait after auto killing beam", 'W', "m_fWaitAfterKillingBeam", 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x261<<8)+60, 0x61C, "Invisible", 'I', "m_bInvisible", 0x7F0000FFUL, 0),
};
#define CPyramidSpaceShip_propertiesct ARRAYCOUNT(CPyramidSpaceShip_properties)

CEntityComponent CPyramidSpaceShip_components[] = {
#define MODEL_SPACESHIP ((0x00000261<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_SPACESHIP, "EFNM" "Models\\CutSequences\\SpaceShip\\SpaceShip.mdl"),
#define MODEL_BODY ((0x00000261<<8)+2)
 CEntityComponent(ECT_MODEL, MODEL_BODY, "EFNM" "Models\\CutSequences\\SpaceShip\\Body.mdl"),
#define TEXTURE_BODY ((0x00000261<<8)+3)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BODY, "EFNM" "Models\\CutSequences\\SpaceShip\\Body.tex"),
#define MODEL_DOOR ((0x00000261<<8)+4)
 CEntityComponent(ECT_MODEL, MODEL_DOOR, "EFNM" "Models\\CutSequences\\SpaceShip\\Door.mdl"),
#define TEXTURE_DOOR ((0x00000261<<8)+5)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DOOR, "EFNM" "Models\\CutSequences\\SpaceShip\\Door.tex"),
#define MODEL_BEAMMACHINE ((0x00000261<<8)+6)
 CEntityComponent(ECT_MODEL, MODEL_BEAMMACHINE, "EFNM" "Models\\CutSequences\\SpaceShip\\BeamMachine.mdl"),
#define TEXTURE_BEAMMACHINE ((0x00000261<<8)+7)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAMMACHINE, "EFNM" "Models\\CutSequences\\SpaceShip\\BeamMachine.tex"),
#define MODEL_BEAMRIM ((0x00000261<<8)+8)
 CEntityComponent(ECT_MODEL, MODEL_BEAMRIM, "EFNM" "Models\\CutSequences\\SpaceShip\\BeamMachineRim.mdl"),
#define TEXTURE_BEAMRIM ((0x00000261<<8)+9)
 CEntityComponent(ECT_TEXTURE, TEXTURE_BEAMRIM, "EFNM" "Models\\CutSequences\\SpaceShip\\BeamMachineRim.tex"),
#define CLASS_EFFECTOR ((0x00000261<<8)+10)
 CEntityComponent(ECT_CLASS, CLASS_EFFECTOR, "EFNM" "Classes\\Effector.ecl"),
#define MODEL_SHIP_INSIDE ((0x00000261<<8)+11)
 CEntityComponent(ECT_MODEL, MODEL_SHIP_INSIDE, "EFNM" "Models\\CutSequences\\SpaceShip\\Fillin.mdl"),
#define SOUND_PLATES ((0x00000261<<8)+20)
 CEntityComponent(ECT_SOUND, SOUND_PLATES, "EFNM" "Sounds\\CutSequences\\SpaceShip\\SSPlates.wav"),
#define SOUND_BEAMMACHINE ((0x00000261<<8)+21)
 CEntityComponent(ECT_SOUND, SOUND_BEAMMACHINE, "EFNM" "Sounds\\CutSequences\\SpaceShip\\SSProbe.wav"),
#define SOUND_BEAM ((0x00000261<<8)+22)
 CEntityComponent(ECT_SOUND, SOUND_BEAM, "EFNM" "Sounds\\CutSequences\\SpaceShip\\LaserBeam.wav"),
#define SOUND_WARMUP ((0x00000261<<8)+23)
 CEntityComponent(ECT_SOUND, SOUND_WARMUP, "EFNM" "Sounds\\CutSequences\\SpaceShip\\Warmup.wav"),
};
#define CPyramidSpaceShip_componentsct ARRAYCOUNT(CPyramidSpaceShip_components)

CEventHandlerEntry CPyramidSpaceShip_handlers[] = {
 {0x02610001, -1, CEntity::pEventHandler(&CPyramidSpaceShip::MPIntro),DEBUGSTRING("CPyramidSpaceShip::MPIntro")},
 {0x02610002, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610002_MPIntro_01), DEBUGSTRING("CPyramidSpaceShip::H0x02610002_MPIntro_01")},
 {0x02610003, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610003_MPIntro_02), DEBUGSTRING("CPyramidSpaceShip::H0x02610003_MPIntro_02")},
 {0x02610004, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610004_MPIntro_03), DEBUGSTRING("CPyramidSpaceShip::H0x02610004_MPIntro_03")},
 {0x02610005, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610005_MPIntro_04), DEBUGSTRING("CPyramidSpaceShip::H0x02610005_MPIntro_04")},
 {0x02610006, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610006_MPIntro_05), DEBUGSTRING("CPyramidSpaceShip::H0x02610006_MPIntro_05")},
 {0x02610007, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610007_MPIntro_06), DEBUGSTRING("CPyramidSpaceShip::H0x02610007_MPIntro_06")},
 {0x02610008, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610008_MPIntro_07), DEBUGSTRING("CPyramidSpaceShip::H0x02610008_MPIntro_07")},
 {0x02610009, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610009_MPIntro_08), DEBUGSTRING("CPyramidSpaceShip::H0x02610009_MPIntro_08")},
 {0x0261000a, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261000a_MPIntro_09), DEBUGSTRING("CPyramidSpaceShip::H0x0261000a_MPIntro_09")},
 {0x0261000b, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261000b_MPIntro_10), DEBUGSTRING("CPyramidSpaceShip::H0x0261000b_MPIntro_10")},
 {0x0261000c, -1, CEntity::pEventHandler(&CPyramidSpaceShip::OpenDoors),DEBUGSTRING("CPyramidSpaceShip::OpenDoors")},
 {0x0261000d, -1, CEntity::pEventHandler(&CPyramidSpaceShip::CloseDoors),DEBUGSTRING("CPyramidSpaceShip::CloseDoors")},
 {0x0261000e, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261000e_CloseDoors_01), DEBUGSTRING("CPyramidSpaceShip::H0x0261000e_CloseDoors_01")},
 {0x0261000f, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261000f_CloseDoors_02), DEBUGSTRING("CPyramidSpaceShip::H0x0261000f_CloseDoors_02")},
 {0x02610010, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610010_CloseDoors_03), DEBUGSTRING("CPyramidSpaceShip::H0x02610010_CloseDoors_03")},
 {0x02610011, -1, CEntity::pEventHandler(&CPyramidSpaceShip::FireLightBeam),DEBUGSTRING("CPyramidSpaceShip::FireLightBeam")},
 {0x02610012, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610012_FireLightBeam_01), DEBUGSTRING("CPyramidSpaceShip::H0x02610012_FireLightBeam_01")},
 {0x02610013, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610013_FireLightBeam_02), DEBUGSTRING("CPyramidSpaceShip::H0x02610013_FireLightBeam_02")},
 {0x02610014, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610014_FireLightBeam_03), DEBUGSTRING("CPyramidSpaceShip::H0x02610014_FireLightBeam_03")},
 {0x02610015, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610015_FireLightBeam_04), DEBUGSTRING("CPyramidSpaceShip::H0x02610015_FireLightBeam_04")},
 {0x02610016, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610016_FireLightBeam_05), DEBUGSTRING("CPyramidSpaceShip::H0x02610016_FireLightBeam_05")},
 {0x02610017, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610017_FireLightBeam_06), DEBUGSTRING("CPyramidSpaceShip::H0x02610017_FireLightBeam_06")},
 {0x02610018, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610018_FireLightBeam_07), DEBUGSTRING("CPyramidSpaceShip::H0x02610018_FireLightBeam_07")},
 {0x02610019, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610019_FireLightBeam_08), DEBUGSTRING("CPyramidSpaceShip::H0x02610019_FireLightBeam_08")},
 {0x0261001a, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001a_FireLightBeam_09), DEBUGSTRING("CPyramidSpaceShip::H0x0261001a_FireLightBeam_09")},
 {0x0261001b, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001b_FireLightBeam_10), DEBUGSTRING("CPyramidSpaceShip::H0x0261001b_FireLightBeam_10")},
 {0x0261001c, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001c_FireLightBeam_11), DEBUGSTRING("CPyramidSpaceShip::H0x0261001c_FireLightBeam_11")},
 {0x0261001d, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001d_FireLightBeam_12), DEBUGSTRING("CPyramidSpaceShip::H0x0261001d_FireLightBeam_12")},
 {0x0261001e, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001e_FireLightBeam_13), DEBUGSTRING("CPyramidSpaceShip::H0x0261001e_FireLightBeam_13")},
 {0x0261001f, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261001f_FireLightBeam_14), DEBUGSTRING("CPyramidSpaceShip::H0x0261001f_FireLightBeam_14")},
 {0x02610020, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610020_FireLightBeam_15), DEBUGSTRING("CPyramidSpaceShip::H0x02610020_FireLightBeam_15")},
 {0x02610021, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610021_FireLightBeam_16), DEBUGSTRING("CPyramidSpaceShip::H0x02610021_FireLightBeam_16")},
 {0x02610022, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610022_FireLightBeam_17), DEBUGSTRING("CPyramidSpaceShip::H0x02610022_FireLightBeam_17")},
 {0x02610023, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610023_FireLightBeam_18), DEBUGSTRING("CPyramidSpaceShip::H0x02610023_FireLightBeam_18")},
 {0x02610024, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610024_FireLightBeam_19), DEBUGSTRING("CPyramidSpaceShip::H0x02610024_FireLightBeam_19")},
 {0x02610025, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610025_FireLightBeam_20), DEBUGSTRING("CPyramidSpaceShip::H0x02610025_FireLightBeam_20")},
 {0x02610026, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610026_FireLightBeam_21), DEBUGSTRING("CPyramidSpaceShip::H0x02610026_FireLightBeam_21")},
 {0x02610027, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610027_FireLightBeam_22), DEBUGSTRING("CPyramidSpaceShip::H0x02610027_FireLightBeam_22")},
 {0x02610028, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610028_FireLightBeam_23), DEBUGSTRING("CPyramidSpaceShip::H0x02610028_FireLightBeam_23")},
 {0x02610029, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610029_FireLightBeam_24), DEBUGSTRING("CPyramidSpaceShip::H0x02610029_FireLightBeam_24")},
 {0x0261002a, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002a_FireLightBeam_25), DEBUGSTRING("CPyramidSpaceShip::H0x0261002a_FireLightBeam_25")},
 {0x0261002b, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002b_FireLightBeam_26), DEBUGSTRING("CPyramidSpaceShip::H0x0261002b_FireLightBeam_26")},
 {0x0261002c, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002c_FireLightBeam_27), DEBUGSTRING("CPyramidSpaceShip::H0x0261002c_FireLightBeam_27")},
 {0x0261002d, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002d_FireLightBeam_28), DEBUGSTRING("CPyramidSpaceShip::H0x0261002d_FireLightBeam_28")},
 {1, -1, CEntity::pEventHandler(&CPyramidSpaceShip::Main),DEBUGSTRING("CPyramidSpaceShip::Main")},
 {0x0261002e, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002e_Main_01), DEBUGSTRING("CPyramidSpaceShip::H0x0261002e_Main_01")},
 {0x0261002f, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x0261002f_Main_02), DEBUGSTRING("CPyramidSpaceShip::H0x0261002f_Main_02")},
 {0x02610030, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610030_Main_03), DEBUGSTRING("CPyramidSpaceShip::H0x02610030_Main_03")},
 {0x02610031, -1, CEntity::pEventHandler(&CPyramidSpaceShip::H0x02610031_Main_04), DEBUGSTRING("CPyramidSpaceShip::H0x02610031_Main_04")},
};
#define CPyramidSpaceShip_handlersct ARRAYCOUNT(CPyramidSpaceShip_handlers)

CEntity *CPyramidSpaceShip_New(void) { return new CPyramidSpaceShip; };
void CPyramidSpaceShip_OnInitClass(void) {};
void CPyramidSpaceShip_OnEndClass(void) {};
void CPyramidSpaceShip_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPyramidSpaceShip_OnWorldEnd(CWorld *pwo) {};
void CPyramidSpaceShip_OnWorldInit(CWorld *pwo) {};
void CPyramidSpaceShip_OnWorldTick(CWorld *pwo) {};
void CPyramidSpaceShip_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPyramidSpaceShip, CMovableModelEntity, "PyramidSpaceShip", "Thumbnails\\PyramidSpaceShip.tbn", 609);
DECLARE_CTFILENAME(_fnmCPyramidSpaceShip_tbn, "Thumbnails\\PyramidSpaceShip.tbn");
