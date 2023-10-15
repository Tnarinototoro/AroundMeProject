@echo off
set "PS_SCRIPT_PATTH_N=D:\GitProjects\AroundMeProject\WorkSpaceConfigs\Scripts\startNgrok.ps1"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command "& {Start-Process PowerShell -ArgumentList '-NoProfile -ExecutionPolicy Bypass -File ""%PS_SCRIPT_PATTH_N%""' -Verb RunAs}"


set "PS_SCRIPT_PATH=D:\GitProjects\AroundMeProject\WorkSpaceConfigs\Scripts\UpdateGithubWebHookScript.ps1"
powershell.exe -NoProfile -ExecutionPolicy Bypass -Command "& {Start-Process PowerShell -ArgumentList '-NoProfile -ExecutionPolicy Bypass -File ""%PS_SCRIPT_PATH%""' -Verb RunAs}"
