@echo off
REM PropHunt 本地双开测试：一键启动 host（listen server）+ client。
set UE="S:\UE_5.5\Engine\Binaries\Win64\UnrealEditor.exe"
set PROJ="S:\AroundMeProject\AroundMe\AroundMe.uproject"
set MAP=/PropHunt/Maps/PH_Lobby

echo Starting HOST (listen server)...
start "PropHunt HOST" %UE% %PROJ% %MAP% -game -log -windowed -resx=1280 -resy=720 -WinX=40 -WinY=40

echo Waiting 8 seconds for host to be ready...
timeout /t 8 /nobreak >nul

echo Starting CLIENT...
start "PropHunt CLIENT" %UE% %PROJ% %MAP% -game -log -windowed -resx=1280 -resy=720 -WinX=1340 -WinY=40

echo Done. Host window: create a room. Client window: Join Room -> Connect to 127.0.0.1
