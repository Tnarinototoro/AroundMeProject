@echo off
REM PropHunt - package a Win64 Development build for sharing with friends.
REM MUST be ASCII-only (no Chinese) or cmd.exe will mangle the file.
REM UE path is read from InstallHooksCache.ini (UE_ROOT), written by InstallHooks.bat.
setlocal

set "CACHE=%~dp0InstallHooksCache.ini"
set "UE_ROOT="
if exist "%CACHE%" for /f "usebackq tokens=1,* delims==" %%A in ("%CACHE%") do if /i "%%A"=="UE_ROOT" set "UE_ROOT=%%B"

set "UAT=%UE_ROOT%\Engine\Build\BatchFiles\RunUAT.bat"
set "PROJ=%~dp0AroundMe.uproject"
set "OUT=%~dp0..\Packaged\PropHunt"

if not exist "%UAT%" (
    echo [ERROR] RunUAT.bat not found: %UAT%
    echo         Check UE_ROOT in %CACHE%
    pause
    exit /b 1
)

echo Packaging PropHunt (Win64 Development)...
call "%UAT%" BuildCookRun ^
 -project="%PROJ%" -noP4 -platform=Win64 -clientconfig=Development ^
 -build -cook -stage -pak -archive -archivedirectory="%OUT%" ^
 -map=/PropHunt/Maps/PH_Lobby+/PropHunt/Maps/PH_GameMap

if errorlevel 1 (
    echo [ERROR] Packaging failed. Check the RunUAT log above.
    pause
    exit /b 1
)

for %%F in ("%PROJ%") do set "PROJ_NAME=%%~nF"
if exist "%OUT%\Windows\%PROJ_NAME%.exe" (
    > "%OUT%\Play_PropHunt.bat" echo @echo off
    >> "%OUT%\Play_PropHunt.bat" echo REM Launch PropHunt directly into the lobby.
    >> "%OUT%\Play_PropHunt.bat" echo start "" "%%~dp0Windows\%PROJ_NAME%.exe" /PropHunt/Maps/PH_Lobby -windowed -ResX=1280 -ResY=720
    echo Wrote %OUT%\Play_PropHunt.bat
)

echo Done. Zip the folder below and send it to your friend:
echo   %OUT%
pause
endlocal
