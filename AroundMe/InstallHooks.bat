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

REM -------- auto-find git.exe then derive printf path (stable search) --------
set GIT_EXE=
set PRINTLF=

echo Searching for git.exe (max depth 5)...

for %%D in (C D E F G H I J K L M N O P Q R S T U V W X Y Z) do (
    if exist "%%D:\" (

        echo Scanning drive %%D...

        REM --- 只扫描文件夹并实时打印 ---
        for /f "delims=" %%P in ('dir "%%D:\" /ad /b 2^>nul') do (
            echo   [DIR] %%D:\%%P
        )

        REM --- 使用你原来的逻辑找 git.exe（保持不变） ---
        for /f "delims=" %%F in ('dir /b /s "%%D:\git.exe" 2^>nul') do (

            REM depth limit (safe computation)
            set "FP=%%F"
            set "P=!FP:%%D:\=!"
            set "CNT=0"

            for %%X in (!P:\=\!) do set /a CNT+=1

            if !CNT! LEQ 5 (
                set "GIT_EXE=%%F"
                echo Found git.exe at depth !CNT!: %%F
                goto FOUND_GIT
            )
        )
    )
)





:FOUND_GIT

if "%GIT_EXE%"=="" (
    echo ERROR: git.exe NOT found on any drive within depth 5!
    pause
    exit /b
)

echo.
echo Found git.exe:
echo   %GIT_EXE%
echo.

REM git.exe is usually inside ".../cmd/git.exe"
for %%P in ("%GIT_EXE%") do set "GIT_BASE=%%~dpP"

set "PRINTLF=%GIT_BASE%..\usr\bin\printf.exe"

echo Derived printf.exe path:
echo   %PRINTLF%
echo.

if not exist "%PRINTLF%" (
    echo ERROR: derived printf.exe DOES NOT EXIST
    pause
    exit /b
)

echo printf.exe confirmed existing.
echo.




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
"%PRINTLF%" "#!/bin/sh\n" > "%HOOKS_DIR%\post-merge"
endlocal & (
    "%PRINTLF%" "%POSTMERGE_UNIX%\n" >> "%HOOKS_DIR%\post-merge"
)

echo Creating post-checkout...
setlocal DisableDelayedExpansion
"%PRINTLF%" "#!/bin/sh\n" > "%HOOKS_DIR%\post-checkout"
endlocal & (
    "%PRINTLF%" "%POSTCHECKOUT_UNIX%\n" >> "%HOOKS_DIR%\post-checkout"
)

echo Creating pre-push...
setlocal DisableDelayedExpansion
"%PRINTLF%" "#!/bin/sh\n" > "%HOOKS_DIR%\pre-push"
endlocal & (
    "%PRINTLF%" "%PREPUSH_UNIX%\n" >> "%HOOKS_DIR%\pre-push"
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
