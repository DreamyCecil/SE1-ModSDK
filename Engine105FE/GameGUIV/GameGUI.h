#include <GameV/Game.h>

// This class is exported from the GameGUI.dll
class __declspec(dllimport) CGameGUI {
public:
  // functions called from World Editor
  static void OnInvokeConsole(void);
  static void OnPlayerSettings(void);
  static void OnAudioQuality(void);
  static void OnVideoQuality(void);
  static void OnSelectPlayerAndControls(void);
};

// global game gui object
extern CGameGUI _GameGUI;
