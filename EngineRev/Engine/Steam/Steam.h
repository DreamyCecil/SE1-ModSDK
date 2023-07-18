/* Copyright (c) 2023 Dreamy Cecil
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef SE1_REV_INCL_STEAM_H
#define SE1_REV_INCL_STEAM_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Steam/Achievement.h>

// Need Steam API headers
class ISteamNetworking;
class ISteamUtils;
enum EResult;
enum ERemoteStoragePublishedFileVisibility;
struct SteamLeaderboardDetails { UBYTE a[256]; };
enum ELobbyType;
class gameserveritem_t;

class CSteamWorkshopItemDetails {
  public:
    ULONG aulFields[10]; // 40 bytes
};

// Steam ID structure
class CSteamID {
  public:
    U64 llID; // 8 bytes

    inline operator U64 &() {
      return llID;
    };

    inline operator const U64 &() const {
      return llID;
    };
};

// Steam callback structure
class Steam_CCallback {
  public:
    void *_vftable;
    ULONG ulField1;
    ULONG ulField2;
    void *pOwnerClass;
    void *pCallbackFunc;
};

// Steam call result structure
class Steam_CCallResult {
  public:
    void *_vftable;
    ULONG ulField1;
    ULONG ulField2;
    ULONG ulField3;
    ULONG ulField4;
    ULONG ulField5;
    void *pOwnerClass;
    void *pCallbackFunc;
};

class ENGINE_API CSteamStat {
  public:
    CSteamStat();
    CSteamStat(const CSteamStat &);
    ~CSteamStat();

    void AddFLOAT(FLOAT);
    void AddINT(INDEX);

    void SetFLOAT(FLOAT);
    void SetINT(INDEX);

    BOOL CanBeAdded(void);
    void SaveStat(void);

    CSteamStat &operator=(const CSteamStat &);
};

class ENGINE_API CSteam {
  public:
    typedef CStaticStackArray<CTString> CWorkshopTags;
    typedef void (*CSteamApiCallback)(EResult, U64, int);
    typedef ERemoteStoragePublishedFileVisibility ERemoteVis; // Shortened name

  public:
    ULONG ulAppID;
    ULONG ulApp;
    CTString strAppName; // Steam app display name
    CTString strNotification; // Overlay notification, e.g. when workshop content is updated

    BOOL bSteamInitialized; // Steam API has been initialized
    BOOL bWorkshopDisabled; // Don't load workshop content
    BOOL bRunningServer; // TRUE if running a server, FALSE if playing as a client
    BOOL bDedicatedServer; // Running a server application instead of the game

    ULONG ulField1; // Unknown field
    ULONG ulField2; // Unknown field
    ULONG ulField3; // Unknown field
    ULONG ulField4; // Unknown field

    TIME tmSinceGameStart; // Time since the game began (updates every 1.05 seconds - 21 ticks)
    BOOL bCheatsActive; // Cheats currently enabled
    BOOL bModifiedEntities; // Some entities have been forcefully modified

    // Unknown fields from here
    ULONG aulFields1[10];

    // Query data set by UploadLeaderboards()
    CTString strUploadLeaderboard;
    int iUploadLeaderboard;

    ULONG aulFields2[15];

    // Query data set by DownloadLeaderboardEntries()
    CTString strLeaderboardQuery;
    INDEX iLeaderboardQuery1;
    INDEX iLeaderboardQuery2;
    INDEX iLeaderboardQuery3;
    CStaticStackArray<ULONG> aField12; // Stack array of unknown type

    ULONG aulFields3[6]; // Unknown fields

    CStaticStackArray<CTFileName> afnmWorkshopPackages; // GRO packages from workshop

    ULONG aulFields4[6]; // Unknown fields

    CSteamApiCallback pWorkshopSubmitCallback; // Some function set by WorkshopSubmit() and WorkshopSubmit()
    ULONG ulField20;
    void (*pEnumPackagesFunc)(void); // Some function called in EnumeratePackages()

    ULONG ulFields30;
    ULONG ulFields31;

    // Query data set by WorkshopSubmit() and WorkshopUpdate()
    U64 llWorkshopItemID; // ID for updating or 0 for submitting
    BOOL bWorkshopUpdate; // Lowest byte set to 1 for updating or 0 for submitting

    // Query data set by WorkshopSubmit()
    CTString strWorkshopQuery1;
    CTString strWorkshopQuery2;
    CTString strWorkshopQuery3;
    CTString strWorkshopQuery4;
    ERemoteVis eRemoteVisibility;
    CWorkshopTags aWorkshopTags;

    // GetWorkshopItemDetails() searches for the ID within this structure and offsets it by 40
    CStaticStackArray<CSteamWorkshopItemDetails> aWorkshopItems;

    int aiAuthLevels[42]; // Authentication level per client

    ULONG aulFields6[84]; // 336 bytes (0x150)

    // Steam communication
    Steam_CCallback cbGameOverlayActivated_t;
    Steam_CCallback cbLobbyMatchList_t;
    Steam_CCallback cbLobbyDataUpdate_t;
    Steam_CCallback cbLobbyCreated_t;
    Steam_CCallback cbLobbyEnter_t;
    Steam_CCallback cbP2PSessionRequest_t__0;
    Steam_CCallback cbGameLobbyJoinRequested_t;
    Steam_CCallback cbP2PSessionRequest_t__1;
    Steam_CCallback cbGSClientApprove_t;
    Steam_CCallback cbGSClientDeny_t;
    Steam_CCallback cbGSClientKick_t;

    ULONG ulField40; // Unknown field

    Steam_CCallResult crNumberOfCurrentPlayers_t;
    Steam_CCallResult crHTTPRequestCompleted_t;
    Steam_CCallResult crLeaderboardFindResult_t;
    Steam_CCallResult crLeaderboardScoreUploaded_t;
    Steam_CCallResult crLeaderboardScoresDownloaded_t;
    Steam_CCallResult crSteamUGCQueryCompleted_t;
    Steam_CCallResult crCreateItemResult_t;
    Steam_CCallResult crSubmitItemUpdateResult_t;

  public:
    CSteam();
    ~CSteam();

    // Common
    void Initialize(BOOL bSetServer, INDEX iSetAppID, const CTString &strSetAppName);
    void End(void);

    BOOL CanBeUsed(void);
    void OpenOverlayPage(const CTString &);

    ISteamNetworking *steamNetworking(void);
    ISteamUtils *steamUtils(void);

    // Client authentification
    void AuthenticateClient(INDEX iClient, const CSteamID &, UBYTE *, ULONG);
    void SendAuthenticationPacket(void);

    inline int GetAuthLevelFor(INDEX iClient) {
      return aiAuthLevels[iClient];
    };

    void ForceFailClient(INDEX iClient);

    BOOL IsLicenseAvailable(void);
    BOOL IsSteamRunning(void);
    void RestartSteamIfNecessary(void);

    // Achievements
    void ClearAchievement(const char *);
    void ClearAchievements(void);
    void UnlockAchievement(const char *strID);

    CAchievement *GetAchievementByID(const char *);
    int GetAchievementCount(void);
    CAchievement *GetAchievements(void);
    void SetAchievement(const char *strID, INDEX iProgress, INDEX iMaxProgress);

    // Cloud
    void CloudSyncDelete(const CTString &strSyncFolder);
    void CloudSyncDownload(const CTString &strSyncFolder, const CTString &);
    void CloudSyncUpload(const CTString &strSyncFolder, const CTString &);

    // Leaderboards
    void FindLeaderboard(const CTString &strLeaderboardID);
    void DownloadLeaderboardEntries(const CTString &strLeaderboardID, INDEX, INDEX, INDEX);
    void DownloadLeaderboardEntries(U64 &, INDEX, INDEX, INDEX);
    void UploadLeaderboard(const CTString &strLeaderboardID, int, SteamLeaderboardDetails);
    void UploadLeaderboard(U64 &, int, SteamLeaderboardDetails);

    // Steam user
    int GetMyBadgeLevel(INDEX, int);
    int GetMySteamID(void);
    int GetMySteamLevel(void);
    char **GetMySteamName(void);

    char **GetUserDataFolder(void);

    // Network stuff
    void GetPlayerCount(CTString *);

    void GetSessionForGameserver(class CNetworkSession *, gameserveritem_t &);

    int PingServer(const CTString &, UWORD, void (*)(int, gameserveritem_t));
    void SetPlayedWith(const U64 &);
    void LeftServer(const CSteamID &);

    void EnterLobby(const CSteamID &);
    void LeaveLobby(void);
    void UpdateSteamLobbyData(void);

    // Server
    void AdvertiseServer(CSteamID &, CTString &, INDEX);

    void JoinServer(CTString &, const CSteamID *);
    void StartServer(ELobbyType);
    void StopServer(void);

    void OnServerStateChanged(void);
    void OnStep(void);

    // Workshop
    int         WorkshopSubmit(             CTString &, CTString &, CTString &, CTString &, ERemoteVis eVisibility, CWorkshopTags &aTags, CSteamApiCallback pCallback);
    int         WorkshopUpdate(U64 iItemID, CTString &, CTString &, CTString &, CTString &, ERemoteVis eVisibility, CWorkshopTags &aTags, CSteamApiCallback pCallback);
    int InternalWorkshopUpdate(U64 iItemID, CTString &, CTString &, CTString &, CTString &, ERemoteVis eVisibility, CWorkshopTags &aTags, CSteamApiCallback pCallback);
    CSteamWorkshopItemDetails *GetWorkshopItemDetails(U64 iItemID);

    void HTTPGetContents(CTString, CTString *);

    void StartEnumeration(void);
    void EnumeratePackages(int);
    void EnumerateSubscriptions(void);

    // Stats
    CSteamStat *GetStatByID(const char *);

    inline int GetStatsCount(void) {
      return 8;
    };

    // Rendering
    CTextureObject *GetTextureObject(INDEX);
    void RenderCustomOverlay(CDrawPort *pdp); // Display notification about updated workshop content
};

ENGINE_API extern CSteam * _pSteam;

ENGINE_API extern CTString SteamToString(const CSteamID &);
ENGINE_API extern CTString _SteamIDToStr(U64);

ENGINE_API extern CSteamStat *env_aSteamStats;
ENGINE_API extern INDEX env_ctSteamStats;

#endif
