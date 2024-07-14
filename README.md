# Serious Sam SDK

This repository contains code from Serious Sam SDK by Croteam released in 2001-2002. The original source code have been adjusted to work well with any engine version but the logic should remain unchanged.

The project files are made for **Visual Studio 2010** and higher to allow selecting a preferred compiler.

You can use it to build mods (and port existing ones) for all Serious Sam games on Serious Engine 1:
- The First Encounter 1.05
- The Second Encounter 1.05
- The Second Encounter 1.07
- The Second Encounter 1.10
- Serious Sam Revolution 1.10 (WIP)

## Project structure

### Entities projects
- `EntitiesTFE` - all the entity logic for **The First Encounter** (compatible with v1.05)
- `EntitiesTSE` - all the entity logic for **The Second Encounter** (compatible with v1.05 and v1.07)
- `EntitiesSSR` - best possible recreation of all the entity logic for **Serious Sam Revolution** (WIP)

### Legacy Entities projects
- `Entities` - all the entity logic for **The First Encounter** from the original SDK (`sdk105`) with little to no changes to the source code and the project structure
- `EntitiesMP` - all the entity logic for **The Second Encounter** from the original SDK (`sdk107`) with little to no changes to the source code and the project structure

### Unified Game projects
- `Game` - all the game logic.
- `GameGUI` - additional GUI elements for Serious Editor.

## Wow that's a lot of Entities projects
I know. But there is a point to all of them. Let me clear things up to make it less confusing.

### Why multiple projects to begin with?
Each game, including different engine versions (1.00 - 1.05 for TFE, 1.05 - 1.07 for TSE), has its own version of the `Entities` library that contains code specifically for that game. It is required to have the exact same code for some game version due to the nature of how Serious Engine 1 works. Any slight deviation in logic may lead to desynchronization between vanilla clients and modded clients, even if on the surface gameplay seems exactly the same between the two.

### What projects should I use?
This SDK specifically is designed to be an entirely new base for **new** mods, which has been reworked to be much more comfortable to use compared to the original SDKs.

If you're making a mod for TFE, you should probably modify `EntitiesTFE` code. Otherwise use `EntitiesTSE`. Both projects are standalone and don't interact with each other in any way, making it possible to outright delete all but one Entities project that you're making your mod for.

- `EntitiesTFE` project can be used to build TFE logic for the original game (TFE 1.05) but also for newer games (TSE 1.05 and TSE 1.07), basically allowing making TFE mods that run on TSE's engine versions.
- `EntitiesTSE` project, similarly to TFE, can be used to build TSE logic for the original game (TSE 1.07) but for older versions (TSE 1.05 and TFE 1.05), in case you still need to support TSE on 1.05 or bring TSE mechanics to TFE.

### Then what are Entities and EntitiesMP projects for?
There are another two projects: `Entities` and `EntitiesMP`. They exist purely for compatibility purposes to allow existing mods to be easily ported over onto this SDK. The code of these projects remains *exactly* the same as it was originally released by Croteam (in `sdk105` and `sdk107` packages respectively).

These projects differ from `EntitiesTFE` and `EntitiesTSE` from this SDK in a number of ways:
- Entity source files (`.es`) are all in the same directory instead of being sorted by subfolders (e.g. `Players/Player.es` is now simply `Player.es`).
- Entity code lacks compatibility with other engine versions, making TSE code (`EntitiesMP`) generally incompatible with TFE 1.05 and TSE 1.05 without extra adjustments, like in `EntitiesTSE`.
  - When porting mods onto this SDK, they should probably stick to the configurations that they have been designed for to avoid unintentional errors from building entity code under the wrong engine version (i.e. `Debug_TFE105` & `Release_TFE105` for `Entities`and `Debug_TSE107` & `Release_TSE107` for `EntitiesMP`).
- The license header isn't present because of a different license that the SDK was released under during that time. For the sake of safety, it should probably be licensed under GNU GPL v2 from now on, just like the open-source release of **Serious Engine 1.10**, even if initially this wasn't the case and you didn't have to share the source code for your mod when publicly releasing it. Though those mods were technically fully owned by Croteam, judging by the attached license.

### And what the heck is EntitiesSSR supposed to be?
`EntitiesSSR` project is basically an original mod for TSE that reimplements and reintroduces as much logic and gameplay mechanics from **Serious Sam Revolution** as possible in a form that can be used as a base for its mods.

The code in this project is in no way compatible with any official **Serious Sam Revolution** version due to the lack of an official SDK, making it impossible to make small mods that are still compatible with vanilla multiplayer servers, for example.

It's kind of an experimental project more than anything that's supposed to complete the unofficial SDK for **Serious Sam Revolution** using [recreated headers for Revolution engine libraries](https://github.com/DreamyCecil/SE1-ModSDK/tree/includes/EngineRev). But it can still be used as a base for **The Second Encounter** mods, assuming you pack all the necessary resources from Revolution with it.

# Building

Building instructions are available here: https://github.com/DreamyCecil/SE1-ModSDK/wiki/Building

# Running

Once the project is compiled, there should be three libraries in the Bin folder (e.g. `Entities.dll`, `GameGUI.dll` and `Game.dll`).

There are two ways to start the mod:
1. Create a `.des` file in your game's "Mods" directory under the same name as this repository folder. Open it in a text editor and type mod's display name in it. Then start the game and launch your mod from the **MODS** menu.
2. Open `ModStart.bat` and `EditorStart.bat` from `Bin` in a text editor and replace `MyMod` with the name of this repository folder. After that just run any of the `.bat` files to launch the game or the editor.

When running a selected project, make sure the mod in project properties (**Debugging** -> **Command Arguments**) is set to this repository folder name instead of `MyMod` (example: `+game VeryCoolMod`).
- Running a `Game` project runs the game (`SeriousSam.exe`) with the mod.
- Running a `GameGUI` project runs the editor (`SeriousEditor.exe`) with the mod.

> [!WARNING]
> Mod folder names do not support spaces or dashes (`-`)!

# License

**Serious Sam SDK** is licensed under GNU GPL v2 because it uses code from [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) (see LICENSE file).
