# 定义 ngrok 的完整路径和参数
$ngrokCommand = "D:\GitProjects\AroundMeProject\WorkSpaceConfigs\Tools\ngrok-v3-stable-windows-amd64\ngrok.exe http 10086"

# 启动 ngrok
Invoke-Expression $ngrokCommand
