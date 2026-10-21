@echo off
REM PropHunt - package a Win64 Development build for sharing with friends.
REM MUST be ASCII-only (no Chinese), or cmd.exe will mangle the file.
REM Output: S:\AroundMeProject\Packaged\PropHunt
setlocal
set "UE_ROOT=S:\UE_5.5"
set "PROJ=S:\AroundMeProject\AroundMe\AroundMe.uproject"
set "OUT=S:\AroundMeProject\Packaged\PropHunt"

if not exist "%UE_ROOT%\Engine\Build\BatchFiles\RunUAT.bat" (
  echo [ERROR] RunUAT.bat not found under %UE_ROOT%
  pause
  exit /b 1
)

echo Packaging PropHunt (Win64 Development)...
echo   Project : %PROJ%
echo   Output  : %OUT%
echo.

call "%UE_ROOT%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun ^
 -project="%PROJ%" -noP4 -platform=Win64 -clientconfig=Development ^
 -build -cook -stage -pak -archive -archivedirectory="%OUT%" ^
 -map=/PropHunt/Maps/PH_Lobby+/PropHunt/Maps/PH_GameMap

if errorlevel 1 (
  echo.
  echo [ERROR] Packaging failed. Check the RunUAT log above.
  pause
  exit /b 1
)

if exist "%OUT%\Windows\AroundMe.exe" (
  > "%OUT%\Play_PropHunt.bat" echo @echo off
  >> "%OUT%\Play_PropHunt.bat" echo REM Launch PropHunt directly into the lobby.
  >> "%OUT%\Play_PropHunt.bat" echo start "" "%%~dp0Windows\AroundMe.exe" /PropHunt/Maps/PH_Lobby -windowed -ResX=1280 -ResY=720
  echo.
  echo Wrote %OUT%\Play_PropHunt.bat
)

echo.
echo Done. Zip the folder below and send it to your friend:
echo   %OUT%
pause
endlocal
