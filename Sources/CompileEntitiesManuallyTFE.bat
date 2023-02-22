:: This script manually compiles all vanilla TFE entities using ECC bundled with this SDK
@echo off

echo Please enter extra ECC launch arguments (e.g. -line):
set /p EccArgs=%1

@echo on

for /f %%f in ('dir /b EntitiesTFE\*.es') do Includes\Ecc.exe "EntitiesTFE/%%f" %EccArgs%

for /f %%f in ('dir /b EntitiesTFE\AI\*.es') do Includes\Ecc.exe "EntitiesTFE/AI/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Brushes\*.es') do Includes\Ecc.exe "EntitiesTFE/Brushes/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Effects\*.es') do Includes\Ecc.exe "EntitiesTFE/Effects/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Enemies\*.es') do Includes\Ecc.exe "EntitiesTFE/Enemies/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Environment\*.es') do Includes\Ecc.exe "EntitiesTFE/Environment/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Items\*.es') do Includes\Ecc.exe "EntitiesTFE/Items/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Players\*.es') do Includes\Ecc.exe "EntitiesTFE/Players/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Tools\*.es') do Includes\Ecc.exe "EntitiesTFE/Tools/%%f" %EccArgs%
for /f %%f in ('dir /b EntitiesTFE\Weapons\*.es') do Includes\Ecc.exe "EntitiesTFE/Weapons/%%f" %EccArgs%
