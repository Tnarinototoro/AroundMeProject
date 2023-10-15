# 等待 ngrok 完全启动
Start-Sleep -Seconds 5

# 获取 ngrok 公开 URL
$ngrok_url = (Invoke-RestMethod -Uri "http://localhost:4040/api/tunnels").tunnels[0].public_url
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
        url = "$ngrok_url/webhook"
    }
} | ConvertTo-Json
Invoke-RestMethod -Uri "https://api.github.com/repos/$repo/hooks/$webhook_id" -Method Patch -Headers $headers -Body $body

# 保持 PowerShell 窗口打开，直到用户按下一个键
pause