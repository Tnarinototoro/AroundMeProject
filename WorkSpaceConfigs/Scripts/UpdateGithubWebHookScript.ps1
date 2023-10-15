# 等待 ngrok 完全启动
Start-Sleep -Seconds 5

# 获取 ngrok 公开 URL
$ngrok_url_raw = (Invoke-RestMethod -Uri "http://localhost:4040/api/tunnels").tunnels[0].public_url
$ngrok_url = $ngrok_url_raw.TrimEnd('/') + '/github-webhook/'  # 确保URL以 '/github-webhook/' 结尾
Write-Host "Ngrok URL: $ngrok_url"

# 你的 GitHub 令牌、仓库信息和 Webhook ID
$github_token = "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"
$repo = "Tnarinototoro/AroundMeProject"
$webhook_id = "438253780"

# 更新 GitHub webhook
$headers = @{
    "Authorization" = "token $github_token"
    "Content-Type" = "application/json"
}
$body = @{
    config = @{
        url = $ngrok_url  # 修改为$ngrok_url变量
        content_type = "json"  # 指定内容类型为 json
    }
} | ConvertTo-Json
Invoke-RestMethod -Uri "https://api.github.com/repos/$repo/hooks/$webhook_id" -Method Patch -Headers $headers -Body $body

#output log
Write-Host "Github 通知到discord配置已经完成~~~~"

# 保持 PowerShell 窗口打开，直到用户按下一个键
pause
