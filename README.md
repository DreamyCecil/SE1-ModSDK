# Serious Sam SDK v1.07 - Includes
This is the original Serious Sam SDK v1.07 by Croteam released in 2002. This branch only includes headers needed by the SDK, more specifically headers for Serious Engine 1.07 and Serious Engine 1.10, as well as some of the model headers used by `EntitiesMP` and `GameMP` and an Entity Class Compiler.

This branch is useless by itself, so consider cloning the [`master`](https://github.com/DreamyCecil/SeriousSam_SDK107/tree/master) branch.

License
-------

Just like Croteam's [Serious Engine 1.10](https://github.com/Croteam-official/Serious-Engine) source code, Serious Sam SDK is licensed under the GNU GPL v2 (see LICENSE file).

This SDK includes Croteam's Entity Class Compiler (`Extras/Ecc.exe`) that is used to compile `.es` files and officially distributed with classic Serious Sam games. Its source code is included in Serious Engine 1.10.

Some of the code included with the SDK may not be licensed under the GNU GPL v2:

* DirectX8 SDK (Headers & Libraries) (`d3d8.h`, `d3d8caps.h` and `d3d8types.h` located in `Extras`) by Microsoft
