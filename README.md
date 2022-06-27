# Serious Sam SDK - Includes
This is the original Serious Sam SDK by Croteam released in 2001-2002. This branch only includes headers and libraries needed by the SDK.

- Headers and libraries of different versions of Serious Engine
  - 1.05 for The First Encounter (`Engine105FE`)
  - 1.05 for The Second Encounter (`Engine105`)
  - 1.07 for The Second Encounter (`Engine107`)
  - 1.10 for The Second Encounter (`Engine110`)
- Some of the model headers used by `EntitiesMP` and `GameMP` (`Models` and `ModelsMP`)
- Entity Class Compiler (`Ecc.exe`)
- Some of the headers from DirectX8 SDK (`d3d8.h`, `d3d8caps.h` and `d3d8types.h`)

This branch is useless by itself, so consider cloning the [`master`](https://github.com/DreamyCecil/SeriousSam_SDK107/tree/master) branch.

License
-------

Just like Croteam's [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) source code, Serious Sam SDK is licensed under the GNU GPL v2 (see LICENSE file).

This SDK includes Croteam's Entity Class Compiler (`Ecc.exe`) that is used to compile entity source files (`*.es`) and is officially distributed with classic Serious Sam games. Its source code is included in Serious Engine 1.10.

Some of the code included with the SDK may not be licensed under the GNU GPL v2:

* DirectX8 SDK (Headers & Libraries) (`d3d8.h`, `d3d8caps.h` and `d3d8types.h`) by Microsoft
