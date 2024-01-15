:: This script manually compiles all vanilla TSE entities using ECC bundled with this SDK
@echo off

echo Please enter extra ECC launch arguments (e.g. -line):
set /p EccArgs=%1

@echo on

for /f %%f in ('dir /b EntitiesTSE\*.es') do Includes\Ecc.exe "EntitiesTSE/%%f" %EccArgs%

for /f %%f in ('dir /b EntitiesTSE\AI\*.es') do Includes\Ecc.exe "EntitiesTSE/AI/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Brushes\*.es') do Includes\Ecc.exe "EntitiesTSE/Brushes/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Effects\*.es') do Includes\Ecc.exe "EntitiesTSE/Effects/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Enemies\*.es') do Includes\Ecc.exe "EntitiesTSE/Enemies/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Environment\*.es') do Includes\Ecc.exe "EntitiesTSE/Environment/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Items\*.es') do Includes\Ecc.exe "EntitiesTSE/Items/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Players\*.es') do Includes\Ecc.exe "EntitiesTSE/Players/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Tools\*.es') do Includes\Ecc.exe "EntitiesTSE/Tools/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTSE\Weapons\*.es') do Includes\Ecc.exe "EntitiesTSE/Weapons/%%f" %EccArgs%
