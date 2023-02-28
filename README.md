# Serious Sam SDK

This repository contains code from Serious Sam SDK by Croteam released in 2001-2002 that includes the following projects:
- `EntitiesTFE` - all the entity logic for The First Encounter game.
- `EntitiesTSE` - all the entity logic for The Second Encounter game.
- `Game` - all the game logic.
- `GameGUI` - additional GUI elements for Serious Editor.

The original source code have been adjusted to work well with any engine version but the logic should remain unchanged.

The project files are made for **Visual Studio 2010** and higher to allow selecting a preferred compiler.

You can use it to build mods for all Serious Sam games on Serious Engine 1, including:
- The First Encounter 1.05
- The Second Encounter 1.05
- The Second Encounter 1.07
- The Second Encounter 1.10

# Building

## Before building
1. Run `git submodule update --init --recursive` to load files for all submodules in the repository.
2. Select `Debug_TSE110` or `Release_TSE110` configuration to compile source code for Serious Engine 1.10.
3. Otherwise follow the steps below before compiling the source code for any older Serious Engine version (e.g. 1.05 or 1.07).

**Important!** Do not rename `(LibMain).cpp` file within `EntitiesTFE` or `EntitiesTSE` projects! It starts with a symbol that goes before any alphanumeric character to be able to compile before any other source file.

## Using MSVC 6.0
You have to use an old compiler in order to make your code compatible with engine versions from 1.00 to 1.07 and 1.50.
Since this SDK is designed for modern IDEs, you cannot use an old compiler out of the box.

1. Install **Microsoft Visual C++ 6.0** with Service Pack 6. [See guide with details](https://github.com/DreamyCecil/SE1-ModSDK/wiki#microsoft-visual-c-60).
2. Install **Visual Studio 2010**. [See guide with details](https://github.com/DreamyCecil/SE1-ModSDK/wiki#visual-studio-2010).
3. (Optional) Install a Visual Studio of your choice (if it's newer than 2010).
4. And finally, download and install [Daffodil](https://github.com/DreamyCecil/SE1-ModSDK/releases/download/daffodil/daffodil.zip). It's a set of configuration files that allows modern Visual Studios to target older compilers.

Before building projects for old engine versions, make sure that their platform toolset is set to `v60` (**Project properties** -> **Configuration Properties** -> **General** -> **Platform Toolset**).

# Running

Once the project is compiled, there should be three libraries in the Bin folder (e.g. `Entities.dll`, `GameGUI.dll` and `Game.dll`).

There are two ways to start the mod:
1. Create a `.des` file in your game's "Mods" directory under the same name as this repository folder; open it in any text editor and type the mod display name in it. Then start the game and launch your mod from the **MODS** menu.
2. Open `ModStart.bat` and `EditorStart.bat` from the Bin folder in any text editor and replace `MyMod` with the name of your mod (the name of this repository folder). After that just run any of the `.bat` files to launch the game or the editor.

When running a selected project, make sure the mod in project properties (**Debugging** -> **Command Arguments**) is set to your mod name instead of `MyMod` (example: `+game VeryCoolMod`).
- Running an `Game` project runs the game (`SeriousSam.exe`) with the mod.
- Running a `GameGUI` project runs the editor (`SeriousEditor.exe`) with the mod.

**Keep in mind that mod folder names do not support spaces or dashes (`-`)!**

# Debugging

Visual Studios after 2010 are unable to use program database files (`.pdb`) that are generated with MSVC 6.0, making traditional debugging impossible.

There are two ways around this:
1. Attach to the running process using **Microsoft Visual C++ 6.0** or **Visual Studio 2010**.
2. Build for Serious Engine 1.10 and debug under the new engine (assuming your game's Bin folder contains binaries from 1.10 that have been built using the same compiler).

# License

Just like Croteam's [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) source code, Serious Sam SDK is licensed under the GNU GPL v2 (see LICENSE file).
