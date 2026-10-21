@echo off
REM PropHunt - local 2-player test via EOS DevAuth (one PC, two windows).
REM MUST be ASCII-only (no Chinese) or cmd.exe will mangle the file.
REM Prereq: DevAuthTool on localhost:6547 with credentials Player1 and Player2.
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

echo Starting HOST...
start "PropHunt HOST" "%UE%" "%PROJ%" -game "%MAP%" -AUTH_TYPE=developer -AUTH_LOGIN=localhost:6547 -AUTH_PASSWORD=Player1 -log -windowed -ResX=1280 -ResY=720 -WinX=40 -WinY=40

echo Waiting 8 seconds for host to be ready...
timeout /t 8 /nobreak >nul

echo Starting CLIENT...
start "PropHunt CLIENT" "%UE%" "%PROJ%" -game "%MAP%" -AUTH_TYPE=developer -AUTH_LOGIN=localhost:6547 -AUTH_PASSWORD=Player2 -log -windowed -ResX=1280 -ResY=720 -WinX=1340 -WinY=40

echo Done.
echo   HOST window: Create Room
echo   CLIENT window: Join Room -^> Refresh Search -^> click the room
endlocal
