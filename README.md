# Serious Sam SDK
This repository contains original Serious Sam SDK by Croteam released in 2001-2002 that includes the following projects:

* `EntitiesMP` All the entity logic
* `GameGUIMP` Common GUI things for game tools
* `GameMP` All the game logic

The original source code of these projects remains untouched, however the project files were created for Visual Studio 2013 and 2019.

You can use it to build mods for all kinds of Serious Sam games on Serious Engine 1.

### That includes:
- The First Encounter 1.05.
- The Second Encounter 1.05.
- The Second Encounter 1.07.
- The Second Encounter 1.10.

## Building

Before building the code, make sure to load in the submodules. Use `git submodule update --init --recursive` command to load files for all submodules.

To compile the source code under 1.10 engine configurations (`Debug_TSE110` or `Release_TSE110`), no additional steps are required.

To compile the source code under TSE 1.07, TSE 1.05 or TFE 1.05 engines (any other `Debug_*` & `Release_*` configurations), you'll need to use a compiler from Microsoft Visual C++ 6.0.

1. Download and install `Microsoft Visual C++ 6.0` with Service Pack 6. If you're installing in on Windows 8 or newer, **make sure to untick "Data Environment" despite the warning during installation for it to finish installing properly!**
2. Download and install `Visual Studio 2010` (only C++ tools are enough).
3. Then install a Visual Studio of your choice (2013 or newer).
4. Now you need to download and install [Daffodil](https://github.com/DreamyCecil/SeriousSam_SDK107/releases/download/daffodil/daffodil.zip). It's a set of configuration files that allows newer Visual Studios to target older VC compilers.

### You may only use newer Visual Studios as long as the 2010 one is also installed, otherwise it won't work.

Now you are able to build the entire solution (`.sln` file) but make sure that all of the projects have `v60` set as their platform toolset (**Project properties** -> **Configuration Properties** -> **General** -> **Platform Toolset**).

## Notes
- Debugging tools from newer studios are unable to use program database files (`.pdb`) that are generated with `v60`, making traditional debugging impossible. Consider debugging using `Microsoft Visual C++ 6.0` or `Visual Studio 2010` and enable `Program Database` as debug information format (**Project properties** -> **Configuration Properties** -> **C/C++** -> **General**).
  - If you can't use either for some reason, base your project on Serious Engine v1.10 and then port the code back to this project.
- Do not use spaces in the path to the solution.

## Running

Once the project is compiled, there should be three libraries in the Bin folder: `EntitiesMP.dll`, `GameGUIMP.dll` and `GameMP.dll`.

There are two ways to start the mod:
1. Create a `.des` file in your Mods directory under the same name as this repository, open it in any text editor and type your mod name in it. Then you'll be able to launch your mod from the game's `Mods` list.
2. Open `ModStart.bat` and `EditorStart.bat` from the Bin folder in any text editor and replace `MyMod` with the name of your mod (the name of this repository in the `Mods` folder). After that just run any of the `.bat` files to open the editor or the mod.
  - Keep in mind that mod folder names do not support spaces or dashes (`-`)!

When running a selected project, make sure the mod in project properties **Debugging** -> **Command Arguments** is set to your mod name instead of `SeriousSam_SDK107` (example: `+game MyMod`).

## License

Just like Croteam's [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) source code, Serious Sam SDK is licensed under the GNU GPL v2 (see LICENSE file).

This SDK includes Croteam's Entity Class Compiler (`Sources/Includes/Ecc.exe`) that is used to compile entity source files (`*.es`) and is officially distributed with classic Serious Sam games. Its source code is included in Serious Engine 1.10.

Some of the code included with the SDK may not be licensed under the GNU GPL v2:

* DirectX8 SDK (Headers & Libraries) (`d3d8.h`, `d3d8caps.h` and `d3d8types.h` located in `Sources/Includes`) by Microsoft
