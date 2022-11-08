@echo off

:: Please inform the color palette you want to use here:
set Pal=Quake2.pal

:: Please inform the path to irfranview here:
set Irfran=C:\Program Files\IrfanView\i_view64.exe

if exist "%~1\" (set "Folder=%~1") else (exit)

pushd "%Folder%"

for /f "delims=" %%a in ('dir /b *.png') do "%Irfran%" "%%a" /import_pal="%Pal%" /convert="%%~na.pcx"