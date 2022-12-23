# Serious Sam SDK - Includes

This branch contains headers and libraries from different versions of Serious Engine 1 from the Serious Sam SDK. Original files have been released by Croteam during 2001-2002 period. [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) headers have been released in 2016.

This SDK also includes a custom Entity Class Compiler (`Ecc.exe`) that is used to compile entity source files (`*.es`). Its source code is available separately here: https://github.com/DreamyCecil/SE1-ECC

If you wish to develop mods for classic Serious Sam games, consider cloning the [`master`](https://github.com/DreamyCecil/SE1-ModSDK/tree/master) branch of this repository.

If you wish to develop any other kind of project for classic Serious Sam games, you can include this branch into your repository as a submodule and build your projects for any Serious Sam game on Serious Engine 1.

## Contents
- Headers & libraries of Serious Engine versions:
  - 1.05 for The First Encounter (`Engine105FE`)
  - 1.05 for The Second Encounter (`Engine105`)
  - 1.07 for The Second Encounter (`Engine107`)
  - 1.10 for The Second Encounter (`Engine110`) *- clean build using Visual Studio 2013*
- Model headers used by `Entities` and `Game` projects from the SDK (`Models` and `ModelsMP`)
- Entity Class Compiler (`Ecc.exe`)
- Some of the headers from DirectX8 SDK (`d3d8.h`, `d3d8caps.h` and `d3d8types.h`)

## Project settings

- When specifying paths to includes, specify the root directory of this branch (usually `Includes`), headers for all engine versions (e.g. `Includes/Common`) and a desired engine version (e.g. `Includes/Engine107`).

- To include static libraries of a specific engine version, specify the same path as for the engine headers (e.g. `Includes/Engine107`).

- And finally, specify the root directory of this branch (usually `Includes`) as a path to executable files (for running Entity Class Compiler as a simple `ecc` command). This is only required for projects that contain and compile entity source (`.es`) files.

## License

Just like Croteam's [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) source code, Serious Sam SDK is licensed under the GNU GPL v2 (see LICENSE file).

Some of the code included with the SDK may not be licensed under the GNU GPL v2:

* DirectX8 SDK (Headers & Libraries) (`d3d8.h`, `d3d8caps.h` and `d3d8types.h` located in `Common`) by Microsoft
