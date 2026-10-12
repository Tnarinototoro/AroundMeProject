@echo off
REM PropHunt local 2-player test via EOS (DevAuth login).
REM MUST be ASCII-only (no Chinese) or cmd.exe will mangle the file.
REM Prereq: run DevAuthTool (localhost:6547) and register 2 credentials: Player1, Player2.

set "UE=S:\UE_5.5\Engine\Binaries\Win64\UnrealEditor.exe"
set "PROJ=S:\AroundMeProject\AroundMe\AroundMe.uproject"
set "MAP=/PropHunt/Maps/PH_Lobby"

echo Starting HOST...
powershell -NoProfile -Command "Start-Process -FilePath '%UE%' -ArgumentList @('%PROJ%','-game','%MAP%','-AUTH_TYPE=developer','-AUTH_LOGIN=localhost:6547','-AUTH_PASSWORD=Player1','-log','-windowed','-ResX=1280','-ResY=720','-WinX=40','-WinY=40')"

echo Waiting 8 seconds for host to be ready...
timeout /t 8 /nobreak >nul

echo Starting CLIENT...
powershell -NoProfile -Command "Start-Process -FilePath '%UE%' -ArgumentList @('%PROJ%','-game','%MAP%','-AUTH_TYPE=developer','-AUTH_LOGIN=localhost:6547','-AUTH_PASSWORD=Player2','-log','-windowed','-ResX=1280','-ResY=720','-WinX=1340','-WinY=40')"

echo Done.
echo   HOST window: Create Room
echo   CLIENT window: Join Room -^> Refresh Search -^> click the room
