# PropHunt 网络 / EOS 联机 — 集成文档

> 本文是 PropHunt 联网架构 + Epic Online Services（EOS）联机的权威文档，供所有开发者 / AI 助手查阅。代码与配置的实时状态以 `AroundMe/Plugins/PropHunt/` 与 `AroundMe/Config/DefaultEngine.ini` 为准。

## 1. 架构总览

```
游戏逻辑：Server 权威（RPC + Replicated + OnRep）          ← 不变
    ↓
房间抽象：UPropHuntRoomSubsystem → IOnlineSession         ← 封装，后端无关
    ↓
EOS Lobby（发现：建房/搜房/进房） + EOS P2P（传输：NAT 穿透/中继）
    ↓
房主机器 = 权威 + Player；其它机器 = 纯 Client（listen server）
```

- **不是全网格 P2P**。UE 复制系统天生是 client-server 模型，必须有「一台权威机」。
- 正确架构 = **Server 权威 + Listen Server（房主当主机）+ EOS P2P 传输**。这是《Among Us》/《Phasmophobia》这类移动/独立游戏的主流方案。
- EOS 干两件缺一不可的事：**Lobby/Session（发现玩家）** + **P2P（传输，自带 NAT 穿透 + 中继）**。只用「发现」+ 裸 IP 直连的话，两个都在 NAT 后面的玩家连不上对方。

## 2. 当前进度（2026-10）

| 环节 | 状态 |
|---|---|
| EOS SDK 初始化 | ✅ |
| EOS 登录（DevAuth developer） | ✅ `Login complete: EOS_Success` |
| P2P 传输就绪（TURN relay） | ✅ `Requesting new TURN relay credentials` |
| Create Room（建 Lobby） | ✅ |
| Refresh Search（搜 Lobby） | ✅ 已修复空查询 bug，待最终确认 |
| Join Room（进房） | ⏳ 搜房确认后验证 |
| 跨机器 NAT 穿透 | ⏳ 待验证 |

## 3. 配置改动清单

### 3.1 `AroundMe/AroundMe.uproject`
启用插件：`OnlineSubsystem`、`OnlineSubsystemUtils`、`OnlineSubsystemNull`、**`OnlineSubsystemEOS`**（其依赖 EOSShared/SocketSubsystemEOS/EOSVoiceChat 自动启用）。

### 3.2 `AroundMe/Config/DefaultEngine.ini`
关键段（凭据为真实值，不要外泄 ClientSecret 到公开仓库外的地方）：

```ini
[OnlineSubsystem]
DefaultPlatformService=EOS

[/Script/OnlineSubsystemEOS.EOSSettings]
bUseEOSConnect=true
DefaultArtifactName=PropHunt
+Artifacts=(ArtifactName="PropHunt",ClientId="...",ClientSecret="...",ProductId="...",SandboxId="...",DeploymentId="...")

[/Script/Engine.GameEngine]
+NetDriverDefinitions=(DefName="GameNetDriver",DriverClassName="/Script/OnlineSubsystemEOS.NetDriverEOS",DriverClassNameFallback="/Script/OnlineSubsystemUtils.IpNetDriver")

[/Script/OnlineSubsystemEOS.NetDriverEOS]
bIsUsingP2PSockets=true
```

- `bIsUsingP2PSockets=true` + EOS URL（`EOS:PUID:SocketName:Channel`）走 P2P；普通 IP 自动回退 IpNetDriver。
- 本地切回 Null 测试：`DefaultPlatformService=Null`（`UPropHuntRoomSubsystem` 会自适应，业务代码零改动）。

### 3.3 `PropHunt.Build.cs`
EOS 是动态加载，**无需改 Build.cs**（只依赖 `OnlineSubsystem` + `OnlineSubsystemUtils`，这两个已有）。

## 4. Dev Portal 配置（第一次用 EOS 的完整流程）

1. **账号 + 组织**：`dev.epicgames.com/portal` 登录 Epic 账号 → 建 Organization → 接受 EOS SDK 协议。
2. **建 Product**：`+ Create Product`，名字 `PropHunt`。
3. **Sandbox + Deployment**：新 Product 自动有 Dev/Stage/Live 沙盒；**Dev 沙盒默认「休眠」**，去 **Deployments** 标签新建一个 Dev 部署即可激活（或直接用自动建好的 Live 部署，本地测试 Live 够用）。
4. **Client Policy + Client**：Product Settings → Clients → 建 Client Policy（类型选 **Peer2Peer**，勾 P2P/Lobby/Auth 权限）→ 建 Client 关联该 policy → 得到 **ClientId + ClientSecret**。
5. **建 EAS Application 并关联 Client**（⚠️ 关键，漏了会报「associated with an Application」）：**Epic Account Services** 区域 → 建 **Application** → 关联第 4 步的 Client。
6. **接受 EAS 协议**（⚠️ 漏了会报「Corrective action is required」）：接受 Epic Account Services 的服务条款。
7. **下载 DevAuthTool**：SDK Download 页下载 EOS SDK，内含 `SDK/Tools/EOS_DevAuthTool-win32-x64-*.zip`。
8. **5 个值**：ProductId / SandboxId / DeploymentId / ClientId / ClientSecret，在 SDK Download & Credentials 页一次性看到。

## 5. 本地双开测试流程

1. 跑 **DevAuthTool.exe**（默认 `localhost:6547`）→ 填上面 5 个值初始化 → 注册两个凭证 `Player1` / `Player2`（**两个不同 Epic 账号**，因为一个账号不能同时当房主和客户端）。
2. 双击 `AroundMe/PropHunt_LocalTwoPlayers.bat`（两个 `-game` 进程，各带 DevAuth 登录参数）：
   - host：`-AUTH_TYPE=developer -AUTH_LOGIN=localhost:6547 -AUTH_PASSWORD=Player1`
   - client：`-AUTH_TYPE=developer -AUTH_LOGIN=localhost:6547 -AUTH_PASSWORD=Player2`
3. **HOST** 窗口：`Create Room`；**CLIENT** 窗口：`Join Room` → `Refresh Search` → 点房间加入。

## 6. 关键代码结构（PropHunt 插件）

| 类 | 职责 |
|---|---|
| `UPropHuntRoomSubsystem` | 封装 `IOnlineSession`：CreateRoom/FindRooms/JoinRoom/LeaveRoom；**AutoLogin + 登录检查 + EOS/Null 自适应** |
| `UPropHuntMenuSubsystem` | 菜单页面切换（主菜单/房间列表/房间/结算），`bInRoom` 状态 |
| `APropHuntPlayerController` | 全部 RPC（选队/准备/附身/拾取/QTE/离开）+ 暂停菜单 + 罗盘 |
| `APropHuntLobbyGameMode` | 选队/准备/倒计时/开局；房主判定（第一个 PostLogin 的玩家）；`HandleLeaveRoom` |
| `APropHuntGameMode` | 游戏内附身/甩动/QTE/驱逐；`HandleLeaveGame`（任意人离开→所有人回主菜单）；server 权威暂停 |
| Widgets | MainMenu / RoomList / Room / Settlement / PauseMenu / Compass / QTE / PulseSynth |

## 7. 房间 / 离开 / 暂停逻辑（本 session 实现）

- **离开房间**：非房主离开 = 自己回主菜单、房间继续；房主离开 = 房间销毁、所有人回主菜单（本地 listen server 下房主=服务器，无真正 host migration）。
- **暂停（ESC，游戏内）**：server 权威暂停（`bPauseable=true` + `SetPause`），复制到所有客户端一起冻结；Resume 一起恢复。
- **任意人离开游戏（暂停菜单「回主菜单/退出」或掉线）**：`APropHuntGameMode::HandleLeaveGame` → 销毁 session + 广播所有客户端回菜单 + 房主延迟关闭/回菜单。

## 8. 踩过的坑（都定位到引擎源码确认过）

详见 memory `prophunt-eos-gotchas` / `prophunt-room-session-gotchas`，摘要：

1. **EOS Lobby 搜索**：必须 `QuerySettings.Set(SEARCH_LOBBIES, true)`（否则走 Session 搜索，搜不到 Lobby）+ **至少一个真实属性匹配**（否则 `Search query is empty, search invalid`）。做法：建房挂 `PROPHUNT_GAMEMODE=PROPHUNT`（`ViaOnlineService` → Public 可搜索），搜房用同键值 `Equals` 匹配。`SEARCH_LOBBIES` 在 `Online/OnlineSessionNames.h`。
2. **Client 关联 Application**：否则 OAuth TokenGrant 报 `associated with an Application`。
3. **接受 EAS 协议**：否则登录报 `EOS_Auth_CorrectiveActionRequired`。
4. **Null 后端 `session already exists`**：NULL 单例跨 PIE 存活，需 `Deinitialize` 里 `DestroySession` + 本地 `bHasActiveSession` 兜底；NULL 的 `CreateSession` 同步触发 delegate，失败路径别重复回调。
5. **本地双开可靠路径是 DirectConnect**（`ClientTravel("127.0.0.1")`），LAN beacon 跨进程有端口时机坑。
6. **`.bat` 必须纯 ASCII**：中文会被 cmd 当命令分隔符切断。

## 9. 下一步

- 确认 EOS 建房/搜房/进房闭环跑通。
- 跨机器（不同网络）验证 NAT 穿透。
- 上线前：把 DevAuth（`developer` 登录）换成真实玩家登录（Account Portal / PersistentAuth），并补 Application 的 brand/permissions。
