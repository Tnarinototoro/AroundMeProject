@echo off
setlocal EnableDelayedExpansion

title Install UE Git Hooks (LF version + Popup Build Window)

echo =============================================
echo       Installing UE Git Hooks (LF safe)
echo =============================================
echo.

REM -------- locate uproject --------
set PROJECT_DIR=%~dp0
set PROJECT_FILE=%PROJECT_DIR%AroundMe.uproject

if not exist "%PROJECT_FILE%" (
    echo ERROR: AroundMe.uproject not found!
    pause
    exit /b
)

REM -------- locate .git/hooks --------
set GIT_ROOT=%PROJECT_DIR%..
set HOOKS_DIR=%GIT_ROOT%\.git\hooks

if not exist "%HOOKS_DIR%" (
    echo ERROR: .git/hooks not found!
    pause
    exit /b
)

REM -------- find printf --------
set PRINTLF="C:\Program Files\Git\usr\bin\printf.exe"
if not exist %PRINTLF% (
    echo ERROR: printf not found!
    pause
    exit /b
)

REM -------- Parse EngineAssociation from uproject --------
echo Reading EngineAssociation from uproject...

set ENGINE_VERSION=
for /f "tokens=2 delims=:," %%A in ('findstr /i "EngineAssociation" "%PROJECT_FILE%"') do (
    set RAW=%%A
)

REM Clean quotes and spaces
set ENGINE_VERSION=%RAW:"=%
set ENGINE_VERSION=%ENGINE_VERSION: =%

echo   EngineAssociation = %ENGINE_VERSION%
echo.

REM -------- Find matching Unreal Engine installation --------
set UE_ROOT=

for %%D in (C D E F G) do (
  if exist "%%D:\UE_%ENGINE_VERSION%" (
      set UE_ROOT=%%D:\UE_%ENGINE_VERSION%
  )
)

if "%UE_ROOT%"=="" (
    echo ERROR: Unreal Engine UE_%ENGINE_VERSION% not found on any drive root!
    pause
    exit /b
)

echo Found Unreal Engine:
echo   %UE_ROOT%
echo.

set BUILD_BAT=%UE_ROOT%\Engine\Build\BatchFiles\Build.bat


echo Found UE:
echo   %UE_ROOT%
echo.

REM =============================================
REM     PATH CONVERSION (Windows → Unix)
REM =============================================
set POSTMERGE_UNIX=%HOOKS_DIR%\post-merge.cmd
set POSTCHECKOUT_UNIX=%HOOKS_DIR%\post-checkout.cmd
set PREPUSH_UNIX=%HOOKS_DIR%\pre-push.cmd

set POSTMERGE_UNIX=%POSTMERGE_UNIX:\=/%
set POSTCHECKOUT_UNIX=%POSTCHECKOUT_UNIX:\=/%
set PREPUSH_UNIX=%PREPUSH_UNIX:\=/%

REM =============================================
REM      WRITE SH HOOKS (SAFE VERSION)
REM =============================================
echo Creating post-merge...
setlocal DisableDelayedExpansion
%PRINTLF% "#!/bin/sh\n" > "%HOOKS_DIR%\post-merge"
endlocal & (
    %PRINTLF% "%POSTMERGE_UNIX%\n" >> "%HOOKS_DIR%\post-merge"
)

echo Creating post-checkout...
setlocal DisableDelayedExpansion
%PRINTLF% "#!/bin/sh\n" > "%HOOKS_DIR%\post-checkout"
endlocal & (
    %PRINTLF% "%POSTCHECKOUT_UNIX%\n" >> "%HOOKS_DIR%\post-checkout"
)

echo Creating pre-push...
setlocal DisableDelayedExpansion
%PRINTLF% "#!/bin/sh\n" > "%HOOKS_DIR%\pre-push"
endlocal & (
    %PRINTLF% "%PREPUSH_UNIX%\n" >> "%HOOKS_DIR%\pre-push"
)


REM =============================================
REM       CREATE CMD FILES (POPUP BUILD)
REM =============================================

echo Creating post-merge.cmd...
(
echo @echo off
echo echo [post-merge] Launching UE Build Window...
echo start "UE Build" cmd.exe /k ^"^"%BUILD_BAT%^" AroundMeEditor Win64 Development ^"%PROJECT_FILE%^" -WaitMutex ^&^& echo Build OK ^|^| echo Build Failed^"
echo exit /b 0
) > "%HOOKS_DIR%\post-merge.cmd"

echo Creating post-checkout.cmd...
(
echo @echo off
echo echo [post-checkout] Launching UE Build Window...
echo start "UE Build" cmd.exe /k ^"^"%BUILD_BAT%^" AroundMeEditor Win64 Development ^"%PROJECT_FILE%^" -WaitMutex ^&^& echo Build OK ^|^| echo Build Failed^"
echo exit /b 0
) > "%HOOKS_DIR%\post-checkout.cmd"

echo Creating pre-push.cmd...
(
echo @echo off
echo echo [pre-push] Launching UE Build Window...
echo start "UE Build" cmd.exe /k ^"^"%BUILD_BAT%^" AroundMeEditor Win64 Development ^"%PROJECT_FILE%^" -WaitMutex ^&^& echo Build OK ^|^| echo Build Failed^"
echo exit /b 0
) > "%HOOKS_DIR%\pre-push.cmd"


REM =============================================
REM             PRINT FILE CONTENTS
REM =============================================
echo.
echo =============== CREATED FILE CONTENTS ===============

for %%F in (post-merge post-checkout pre-push) do (
    echo ---- %%F ----
    type "%HOOKS_DIR%\%%F"
    echo.
)

echo =============================================
echo             Installation complete!
echo =============================================
pause
exit /b 0
