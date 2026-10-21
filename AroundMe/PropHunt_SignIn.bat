@echo off
REM PropHunt - single instance with REAL Epic account login (Account Portal).
REM MUST be ASCII-only (no Chinese), or cmd.exe will mangle the file.
REM Flow: launch -> main menu shows "Not signed in" -> click "Sign in with Epic"
REM       -> browser opens -> log in with your own Epic account -> back to the game.
setlocal
set "UE=S:\UE_5.5\Engine\Binaries\Win64\UnrealEditor.exe"
set "PROJ=S:\AroundMeProject\AroundMe\AroundMe.uproject"
set "MAP=/PropHunt/Maps/PH_Lobby"

if not exist "%UE%" (
  echo [ERROR] UnrealEditor.exe not found: %UE%
  pause
  exit /b 1
)

echo Launching PropHunt (real Epic login)...
start "" "%UE%" "%PROJ%" -game "%MAP%" -windowed -ResX=1280 -ResY=720 -log
endlocal
