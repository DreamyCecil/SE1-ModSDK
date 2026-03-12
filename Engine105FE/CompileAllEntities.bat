:: This script generates headers for all entity source files it can find in the vanilla Engine and Entities projects
:: as well as the entity property reference lists for each class

:: Engine classes
del Engine\Classes\_DefinePropertyRefLists.inl

for /f %%f in ('dir /b Engine\Classes\*.es') do ..\Ecc.exe "Engine/Classes/%%f" -line -compat -proplist *

:: Entities classes
del EntitiesV\_DefinePropertyRefLists.inl

for /f %%f in ('dir /b EntitiesV\*.es') do ..\Ecc.exe "EntitiesV/%%f" -line -compat -proplist *
