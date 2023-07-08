del EntitiesV\_DefinePropertyRefLists.inl

for /f %%f in ('dir /b EntitiesV\*.es') do ..\Ecc.exe "EntitiesV/%%f" -line -compat -proplist *
