@echo off
setlocal

rem 指定uproject文件名
set PROJECT_NAME=AroundMe.uproject

rem 获取Unreal Engine根目录路径
set UE_PATH=%UE_ENGINE_ROOT%

rem 检查UE_PATH是否设置
if "%UE_PATH%"=="" (
    echo "UE_ENGINE_ROOT environment variable is not set."
    pause
    exit /b 1
)

rem 获取当前脚本的绝对路径，再获取uproject文件的绝对路径
pushd %~dp0
set UPROJECT_PATH=%CD%\%PROJECT_NAME%
popd

rem 构建生成VSCode文件的命令
set BATCH_FILE_PATH=%UE_PATH%\Engine\Build\BatchFiles\GenerateProjectFiles.bat

rem 检查批处理文件路径是否存在
if not exist "%BATCH_FILE_PATH%" (
    echo "Batch file path does not exist: %BATCH_FILE_PATH%"
    pause
    exit /b 1
)

set COMMAND="%BATCH_FILE_PATH%" -ProjectFiles -project="%UPROJECT_PATH%" -game -vscode

rem 输出调试信息
echo UE_ENGINE_ROOT=%UE_ENGINE_ROOT%
echo UPROJECT_PATH=%UPROJECT_PATH%
echo BATCH_FILE_PATH=%BATCH_FILE_PATH%
echo COMMAND=%COMMAND%

rem 执行命令
echo Running: %COMMAND%
call %COMMAND%

rem 执行完毕后保持窗口打开
pause

endlocal
