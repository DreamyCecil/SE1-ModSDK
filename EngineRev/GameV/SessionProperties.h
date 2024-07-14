#ifndef SE_INCL_SESSIONPROPERTIES_H
#define SE_INCL_SESSIONPROPERTIES_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

/*
 * Class responsible for describing game session
 */
class CSessionProperties {
public:
  enum GameMode {
    GM_FLYOVER = -1,
    GM_COOPERATIVE = 0,
    GM_SCOREMATCH  = 1,
    GM_FRAGMATCH   = 2, // Deathmatch
    // [Cecil] Rev: New gamemodes
    GM_TDM         = 3, // Team Deathmatch
    GM_CTF         = 4, // Capture The Flag
    GM_SURVIVAL    = 5, // Survival
    GM_INSTANTKILL = 6, // Instant Kill
    GM_CONTROLZONE = 7, // Control Zone
    GM_DUEL        = 8, // Duel
  };
  enum GameDifficulty {
    GD_TOURIST = -1,
    GD_EASY = 0,
    GD_NORMAL,
    GD_HARD,
    GD_EXTREME,
  };

  INDEX sp_ctMaxPlayers;    // maximum number of players in game
  BOOL sp_bWaitAllPlayers;  // wait for all players to connect

  // [Cecil] Rev: Wait until all players are ready (Survival and Duel)
  BOOL sp_bWaitReady;

  BOOL sp_bQuickTest;       // set when game is tested from wed
  BOOL sp_bCooperative;     // players are not intended to kill each other
  BOOL sp_bSinglePlayer;    // single player mode has some special rules
  BOOL sp_bUseFrags;        // set if frags matter instead of score

  // [Cecil] Rev: Team deathmatch gamemode and its balancing
  BOOL sp_bTeamDM;
  BOOL sp_bAutoBalance;
  INDEX sp_iFairBalance;

  enum GameMode sp_gmGameMode;    // general game rules

  enum GameDifficulty sp_gdGameDifficulty;
  ULONG sp_ulSpawnFlags;
  BOOL sp_bMental;            // set if mental mode engaged

  // [Cecil] Rev: Ugh-Zan difficulty
  BOOL sp_bUghZan;

  INDEX sp_iScoreLimit;       // stop game after a player/team reaches given score
  INDEX sp_iFragLimit;        // stop game after a player/team reaches given score
  INDEX sp_iTimeLimit;        // stop game after given number of minutes elapses

  // [Cecil] Rev: Respawn cooldown
  FLOAT sp_fTeamRespawn;

  BOOL sp_bTeamPlay;          // players are divided in teams
  BOOL sp_bFriendlyFire;      // can harm player of same team
  BOOL sp_bWeaponsStay;       // weapon items do not dissapear when picked-up
  BOOL sp_bAmmoStays;         // ammo items do not dissapear when picked-up
  BOOL sp_bHealthArmorStays;  // health/armor items do exist
  BOOL sp_bPlayEntireGame;    // don't finish after one level in coop

  // [Cecil] Rev: Allow third person view
  BOOL sp_bAllowThirdPerson;

  BOOL sp_bAllowHealth;       // health items do exist
  BOOL sp_bAllowArmor;        // armor items do exist

  // [Cecil] Rev: Item customization
  BOOL sp_bAllowSupers;
  BOOL sp_bAllowPowerups;
  BOOL sp_bAllowCannon;

  BOOL sp_bInfiniteAmmo;      // ammo is not consumed when firing
  BOOL sp_bRespawnInPlace;    // players respawn on the place where they were killed, not on markers (coop only)

  // [Cecil] Rev: Gameplay customization
  BOOL sp_bInstaSpeedKnife;
  BOOL sp_bSpawnAsFarAsPossible;

  FLOAT sp_fEnemyMovementSpeed; // enemy speed multiplier
  FLOAT sp_fEnemyAttackSpeed;   // enemy speed multiplier
  FLOAT sp_fDamageStrength;     // multiplier when damaged
  FLOAT sp_fAmmoQuantity;       // multiplier when picking up ammo
  FLOAT sp_fManaTransferFactor; // multiplier for the killed player mana that is to be added to killer's mana
  INDEX sp_iInitialMana;        // life price (mana that each player'll have upon respawning)
  FLOAT sp_fExtraEnemyStrength;            // fixed adder for extra enemy power 
  FLOAT sp_fExtraEnemyStrengthPerPlayer;   // adder for extra enemy power per each player playing

  INDEX sp_ctCredits;           // number of credits for this game
  INDEX sp_ctCreditsLeft;       // number of credits left on this level
  FLOAT sp_tmSpawnInvulnerability;   // how many seconds players are invunerable after respawning

  INDEX sp_iBlood;         // blood/gibs type (0=none, 1=green, 2=red, 3=hippie)
  BOOL  sp_bGibs;          // enable/disable gibbing

  BOOL  sp_bEndOfGame;     // marked when dm game is finished (any of the limits reached)

  ULONG sp_ulLevelsMask;    // mask of visited levels so far

  BOOL  sp_bUseExtraEnemies;  // spawn extra multiplayer enemies

  // [Cecil] Rev: Other properties
  BOOL sp_bNoSpeedrunning;
  BOOL sp_bClassicHD;
  BOOL sp_bClassicHDDamages;

  // [Cecil] Rev: Game mutators
  BOOL sp_bUsingMutators; // Auto-enabled if any mutator is set
  FLOAT sp_fPlayerSpeedMultiplier;
  FLOAT sp_fPlayerAccelerationMultiplier;
  FLOAT sp_fPlayerDecelerationMultiplier;
  BOOL sp_bFallDamage;
  BOOL sp_bHeatDamage;
  INDEX sp_iExclusiveWeapon;
  FLOAT sp_fSpawnerMultiplier;
  FLOAT sp_fAmmoMultiplier;
  FLOAT sp_fFireRateMultiplier;
  FLOAT sp_fStartHealth;
  FLOAT sp_fStartArmor;
  BOOL sp_bEnemiesReplacer;
};

// NOTE: never instantiate CSessionProperties, as its size is not fixed to the size defined in engine
// use CUniversalSessionProperties for instantiating an object
class CUniversalSessionProperties {
public:
  union {
    CSessionProperties usp_sp;
    UBYTE usp_aubDummy[NET_MAXSESSIONPROPERTIES];
  };

  // must have exact the size as allocated block in engine
  CUniversalSessionProperties() { 
    ASSERT(sizeof(CSessionProperties)<=NET_MAXSESSIONPROPERTIES); 
    ASSERT(sizeof(CUniversalSessionProperties)==NET_MAXSESSIONPROPERTIES); 
  }
  operator CSessionProperties&(void) { return usp_sp; }
};

#endif  /* include-once check. */
