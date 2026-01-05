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

REM ===================================================
REM =============== LOAD CACHE IF EXISTS ==============
REM ===================================================
REM *** NEW: 缓存文件，优先读取
set "CACHE_FILE=%PROJECT_DIR%InstallHooksCache.ini"
set "GIT_EXE="
set "PRINTLF="
set "UE_ROOT="

if exist "%CACHE_FILE%" (
    echo Loading cached paths from InstallHooksCache.ini...
    for /f "usebackq tokens=1,* delims==" %%A in ("%CACHE_FILE%") do (
        if /i "%%A"=="GIT_EXE"  set "GIT_EXE=%%B"
        if /i "%%A"=="PRINTLF"  set "PRINTLF=%%B"
        if /i "%%A"=="UE_ROOT"  set "UE_ROOT=%%B"
    )
)

REM -------- auto-find git.exe then derive printf path (stable search) --------
REM --- 检查 git.exe 与 printf.exe 是否真的存在，不存在则清空缓存并重新扫描 ---
if defined GIT_EXE if exist "%GIT_EXE%" (
    if defined PRINTLF if exist "%PRINTLF%" (
        echo Using cached git.exe:
        echo   %GIT_EXE%
        echo Using cached printf.exe:
        echo   %PRINTLF%
        goto AFTER_GIT_SEARCH
    )
)

REM --- 缓存无效，清空并进入扫描流程 ---
set "GIT_EXE="
set "PRINTLF="
echo Cached git/printf invalid, rescanning...

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

:AFTER_GIT_SEARCH
REM *** NEW: git 部分结束标签，用于缓存分支和扫描分支汇合


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

REM -------- Find matching Unreal Engine installation (fuzzy search) --------


set "MAJOR=%ENGINE_VERSION:~0,1%"
set "MINOR=%ENGINE_VERSION:~2,1%"

echo Searching Unreal Engine folders matching: UE + %MAJOR% + %MINOR%
echo.

REM --- 检查 UE_ROOT 是否存在 ---
if defined UE_ROOT if exist "%UE_ROOT%" (
    echo Using cached Unreal Engine:
    echo   %UE_ROOT%
    goto AFTER_UE_SEARCH
)

REM --- 缓存无效，清空并重新搜索 UE ---
set "UE_ROOT="
echo Cached UE_ROOT invalid, rescanning...

REM -----------------------------------------
REM   全盘 BFS 搜索 UE 目录，深度 <= 5
REM   广度优先：所有盘深度1 -> 所有盘深度2 -> ...
REM -----------------------------------------
set "QUEUE="

REM 初始化：把所有存在的盘根目录加入队列
for %%D in (C D E F G H I J K L M N O P Q R S T U V W X Y Z) do (
    if exist "%%D:\" (
        echo Scanning drive %%D...
        set "QUEUE=!QUEUE! "%%D:\!""
    )
)

REM 如果没有任何盘，直接结束
if not defined QUEUE goto FOUND_UE

REM BFS，从深度1到5
for /L %%L in (1,1,5) do (
    if not defined QUEUE goto BFS_DONE
    echo Depth %%L...

    set "NEXT="

    for %%P in (!QUEUE!) do (
        set "CUR=%%~P"
        echo   [DIR] !CUR!

        REM 列出当前目录的所有子目录
        for /f "delims=" %%F in ('dir /b /ad "!CUR!" 2^>nul') do (
            set "NAME=%%F"
            set "FULL=!CUR!!NAME!"

            REM --- 判断是否 UE 目录 ---
            echo !NAME! | findstr /i "ue unreal" >nul
            if !errorlevel! equ 0 (
                echo !NAME! | findstr /i "%MAJOR%.*%MINOR%" >nul
                if !errorlevel! equ 0 (
                    set "UE_ROOT=!FULL!"
                    echo Found UE folder: !UE_ROOT!
                    goto FOUND_UE
                )
            )

            REM 把子目录加入下一层队列（注意尾部 \）
            set "NEXT=!NEXT! "!FULL!\!""
        )
    )

    REM 进入下一层
    set "QUEUE=!NEXT!"
)

:BFS_DONE


:FOUND_UE

if "%UE_ROOT%"=="" (
    echo ERROR: Unreal Engine matching version %ENGINE_VERSION% not found!
    pause
    exit /b
)

echo Found Unreal Engine:
echo   %UE_ROOT%
echo.

:AFTER_UE_SEARCH
REM *** NEW: UE 搜索结束标签，用于缓存/扫描两路汇合

REM *** NEW: 在此统一保存缓存（git + printf + UE）
if not "%GIT_EXE%"=="" if not "%PRINTLF%"=="" if not "%UE_ROOT%"=="" (
    echo Saving cache to InstallHooksCache.ini...
    (
    echo GIT_EXE=%GIT_EXE%
    echo PRINTLF=%PRINTLF%
    echo UE_ROOT=%UE_ROOT%
    )>"%CACHE_FILE%"
    echo Cache saved.
    echo.
)


set BUILD_BAT=%UE_ROOT%\Engine\Build\BatchFiles\Build.bat

REM =============================================
REM     PATH CONVERSION (Windows → Unix)
REM =============================================
set POSTMERGE_UNIX=%HOOKS_DIR%\post-merge.cmd
set POSTCHECKOUT_UNIX=%HOOKS_DIR%\post-checkout.cmd
set PREPUSH_UNIX=%HOOKS_DIR%\pre-push.cmd
set PRECOMMIT_UNIX=%HOOKS_DIR%\pre-commit.cmd

set POSTMERGE_UNIX=%POSTMERGE_UNIX:\=/%/
set POSTCHECKOUT_UNIX=%POSTCHECKOUT_UNIX:\=/%/
set PREPUSH_UNIX=%PREPUSH_UNIX:\=/%/
set PRECOMMIT_UNIX=%PRECOMMIT_UNIX:\=/%/

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

echo Creating pre-commit...
setlocal DisableDelayedExpansion
"%PRINTLF%" "#!/bin/sh\n" > "%HOOKS_DIR%\pre-commit"
endlocal & (
    "%PRINTLF%" "%PRECOMMIT_UNIX%\n" >> "%HOOKS_DIR%\pre-commit"
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


echo Creating pre-commit.cmd...
set "PC_FILE=%HOOKS_DIR%\pre-commit.cmd"

REM --- 使用逐行写入，确保 100% 不触发安装脚本的语法错误 ---
echo @echo off > "%PC_FILE%"
echo setlocal >> "%PC_FILE%"
echo set "GIT_EXE=%GIT_EXE%" >> "%PC_FILE%"
echo cd /d "%%~dp0" >> "%PC_FILE%"
echo cd /d "..\.." >> "%PC_FILE%"
echo echo [pre-commit] Checking cloud status... >> "%PC_FILE%"
echo set "BRANCH=" >> "%PC_FILE%"
echo for /f "tokens=*" %%%%i in ('^""%%GIT_EXE%%" rev-parse --abbrev-ref HEAD 2^>nul^"') do set "BRANCH=%%%%i" >> "%PC_FILE%"
echo if "%%BRANCH%%"=="" exit /b 0 >> "%PC_FILE%"
echo "%%GIT_EXE%%" fetch origin %%BRANCH%% --quiet >> "%PC_FILE%"
echo set "BEHIND=0" >> "%PC_FILE%"
echo for /f "tokens=*" %%%%j in ('^""%%GIT_EXE%%" rev-list --count HEAD..origin/%%BRANCH%% 2^>nul^"') do set "BEHIND=%%%%j" >> "%PC_FILE%"

echo if %%BEHIND%% GTR 0 ( >> "%PC_FILE%"
echo     echo. >> "%PC_FILE%"
echo     echo [ALERT] Cloud has %%BEHIND%% new updates. >> "%PC_FILE%"
echo     start "Git Auto-Sync" cmd.exe /k "^"^"%%GIT_EXE%%^" pull --rebase origin %%BRANCH%% ^& echo. ^& echo Update Finished. ^& pause ^& exit^" >> "%PC_FILE%"
echo     exit /b 1 >> "%PC_FILE%"
echo ) else ( >> "%PC_FILE%"
echo     echo [OK] Local is up-to-date. >> "%PC_FILE%"
echo     REM --- 如果是手动双击运行的(没有父进程git), 则暂停一下看结果 ---
echo     echo %%CMDCMDLINE%% ^| findstr /i "%%~nx0" ^>nul ^&^& pause >> "%PC_FILE%"
echo     exit /b 0 >> "%PC_FILE%"
echo ) >> "%PC_FILE%"

REM =============================================
REM             PRINT FILE CONTENTS
REM =============================================
echo.
echo =============== CREATED FILE CONTENTS ===============

for %%F in (post-merge post-checkout pre-push pre-commit) do (
    echo ---- %%F ----
    type "%HOOKS_DIR%\%%F"
    echo.
)

echo =============================================
echo             Installation complete!
echo =============================================
pause
exit /b 0
