:: This script manually compiles all vanilla entities using ECC bundled with this SDK
@echo off

echo Please enter extra ECC launch arguments (e.g. -line):
set /p EccArgs=%1

@echo on

for /f %%f in ('dir /b Entities\*.es') do Includes\Ecc.exe "Entities/%%f" %EccArgs%

for /f %%f in ('dir /b Entities\AI\*.es') do Includes\Ecc.exe "Entities/AI/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Brushes\*.es') do Includes\Ecc.exe "Entities/Brushes/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Effects\*.es') do Includes\Ecc.exe "Entities/Effects/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Enemies\*.es') do Includes\Ecc.exe "Entities/Enemies/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Environment\*.es') do Includes\Ecc.exe "Entities/Environment/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Items\*.es') do Includes\Ecc.exe "Entities/Items/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Players\*.es') do Includes\Ecc.exe "Entities/Players/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Tools\*.es') do Includes\Ecc.exe "Entities/Tools/%%f" %EccArgs%
for /f %%f in ('dir /b Entities\Weapons\*.es') do Includes\Ecc.exe "Entities/Weapons/%%f" %EccArgs%
