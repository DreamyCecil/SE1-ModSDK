# Serious Engine 1.10 SDK

Headers and libraries here have been generated from [these sources](https://github.com/Croteam-official/Serious-Engine/tree/b408e88a16fd01aa1cfd0e0a999c86c2c1437c9e) using a compiler from Visual Studio 2013.

In order to build mods for your fork of Serious Engine 1, you need to copy headers and libraries from your project.

The basic gist is this:
- Copy all headers (`.h`) from `Engine` folder of your fork to `Engine` folder here.
- Copy all headers (`.h`) from `GameGUIMP` folder of your fork to `GameGUIV` folder here.
- Copy all headers (`.h`) from `GameMP` folder of your fork to `GameV` folder here.
- Copy all headers (`.h`) and entity sources (`.es`) from `EntitiesMP` folder of your fork to `EntitiesV` folder here and run the `CompileAllEntities.bat` script.
- Replace all references to `EntitiesMP`, `GameGUIMP` and `GameMP` folders in copied sources with `EntitiesV`, `GameGUIV` and `GameV` folders (e.g. `GameMP/SessionProperties.h` -> `GameV/SessionProperties.h`).
- Replace all exporting APIs with importing ones (e.g. `_declspec(dllexport)` -> `_declspec(dllimport)`).
- Remove inclusion of `Engine/Engine.h` from all source files.
- Copy `Engine.lib`, `EngineD.lib`, `EngineGUI.lib` and `EngineGUID.lib` to this folder.
- Copy `EntitiesMP.lib`, `EntitiesMPD.lib`, `GameGUIMP.lib`, `GameGUIMPD.lib`, `GameMP.lib` and `GameMPD.lib` to this folder and replace all `MP` suffixes with `V` (e.g. `EntitiesMPD.lib` -> `EntitiesVD.lib`).
