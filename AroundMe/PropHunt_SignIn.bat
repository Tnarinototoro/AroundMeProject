@echo off
REM PropHunt - single instance with real Epic account login (Account Portal).
REM MUST be ASCII-only (no Chinese) or cmd.exe will mangle the file.
REM UE path is read from InstallHooksCache.ini (UE_ROOT), written by InstallHooks.bat.
setlocal

set "CACHE=%~dp0InstallHooksCache.ini"
set "UE_ROOT="
if exist "%CACHE%" for /f "usebackq tokens=1,* delims==" %%A in ("%CACHE%") do if /i "%%A"=="UE_ROOT" set "UE_ROOT=%%B"

set "UE=%UE_ROOT%\Engine\Binaries\Win64\UnrealEditor.exe"
set "PROJ=%~dp0AroundMe.uproject"
set "MAP=/PropHunt/Maps/PH_Lobby"

if not exist "%UE%" (
    echo [ERROR] UnrealEditor.exe not found: %UE%
    echo         Check UE_ROOT in %CACHE%
    pause
    exit /b 1
)

echo Launching PropHunt...
start "" "%UE%" "%PROJ%" -game "%MAP%" -windowed -ResX=1280 -ResY=720 -log
endlocal
