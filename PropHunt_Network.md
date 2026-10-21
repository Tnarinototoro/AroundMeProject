# PropHunt 网络 / EOS 联机 — 集成文档

> 本文是 PropHunt 联网架构 + Epic Online Services（EOS）联机的权威文档。
> 最后更新：2026-10-21（新增真实玩家 Account Portal 登录）。

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
- 正确架构 = **Server 权威 + Listen Server（房主当主机）+ EOS P2P 传输**。
- EOS 干两件缺一不可的事：**Lobby/Session（发现玩家）** + **P2P（传输，自带 NAT 穿透 + 中继）**。

## 2. 登录方式（两条路，别混用）

| 场景 | 登录方式 | 怎么启动 | 账号要求 |
|---|---|---|---|
| **给朋友玩（真实联机）** | **Account Portal**（Epic 账号） | 正常启动游戏，主菜单点 `Sign in with Epic` | 每个玩家自己的 Epic 账号 |
| 本机双开调试 | DevAuth（developer） | `PropHunt_LocalTwoPlayers.bat` + DevAuthTool | 本机两个 DevAuth 凭证 |

### 2.1 真实玩家登录（Account Portal）

由 `UPropHuntAuthSubsystem` 负责，流程：

```
启动 → 读 OSS 登录状态
     → 已登录：直接可用
     → 未登录：尝试 PersistentAuth（EOS SDK 本地密钥环）
            ├─ 成功：静默恢复，直接可用
            └─ 失败：停在「未登录」，**不弹窗**
玩家点 Sign in with Epic
     → EOS_Auth_Login(AccountPortal)
     → 打开系统浏览器（device code 登录页）
     → 玩家登录 Epic 账号并确认
     → 游戏内轮询拿到 token → 已登录
```

**为什么不用引擎自带的 `bPreferPersistentAuth` 自动登录**：
当前引擎构建里 `EOS_AUTH_TOKEN_SAVEGAME_STORAGE` 被定义为 `0`，
`FUserManagerEOS::LoginViaPersistentAuth()` 整个函数体是空实现，`AutoLogin` 会静默失败。
所以我们自己调 `IOnlineIdentity::Login()`：

- 先 `Login(0, FOnlineAccountCredentials("persistentauth", "", ""))`
- 失败后不自动弹浏览器，由玩家点按钮触发 `Login(0, FOnlineAccountCredentials("accountportal", "", ""))`

日志里能看到的正常路径：

```
LogPropHunt: [Auth] Login request: type=persistentauth silent=1
LogEOSSDK: Warning: LogEOSAuth: No existing persistent auth credentials were found for automatic login.
LogOnline: Warning: EOS: Login(0) failed with EOS result code (EOS_InvalidAuth)
LogPropHunt: [Auth] State -> EPropHuntAuthState::NotSignedIn
...
LogPropHunt: [Auth] Login request: type=accountportal silent=0
LogEOSSDK: LogEOSAuth: GenerateUserAuthByDeviceCode: Received FUserAuthToken
LogEOSSDK: LogEOSAuth: LaunchAccountPortalWithPlatformBrowser: Successfully launched with platform browser
LogEOSSDK: Warning: LogEOS: Error response received from backend ...
           ErrorCode=[errors.com.epicgames.account.oauth.authorization_pending]   ← 等玩家在浏览器完成
```

`authorization_pending` 是正常的等待状态，玩家在浏览器里确认后就会变成登录成功。

**实测结果（2026-10-21）**：浏览器登录成功后正常退出游戏，再次启动会直接：

```
LogPropHunt: [Auth] Login request: type=persistentauth silent=1
LogEOSSDK: LogEOSAuth: UserAuthGenerated: Login complete: EOS_Success
LogPropHunt: [Auth] State -> EPropHuntAuthState::SignedIn (Signed in as <昵称>)
```

即「登录一次，之后免登录」。refresh token 由 EOS SDK 自己保存在本机（约 180 天有效期）。
注意：如果登录后**强制杀进程**，token 可能来不及落盘，下次就要重新登录一次。

### 2.2 本机双开（DevAuth）

仅用于本机调试：`PropHunt_LocalTwoPlayers.bat` 会带：

```
-AUTH_TYPE=developer -AUTH_LOGIN=localhost:6547 -AUTH_PASSWORD=Player1/Player2
```

**不要用它给朋友玩**：DevAuthTool 不随游戏分发，且同一台机器上多个实例会共用同一个 EOS 账号（同 PUID）。

## 3. 当前进度

| 环节 | 状态 |
|---|---|
| EOS SDK 初始化 | ✅ 正常（能拉到 SDK Config / Watermark） |
| 真实账号登录（Account Portal） | ✅ **已验证**（2026-10-21，`Login complete: EOS_Success`） |
| 登录持久化（下次启动免登录） | ✅ **已验证**（重启用 `persistentauth` 3 秒内静默恢复） |
| 本地 DevAuth 登录 | ✅ |
| P2P 传输就绪（TURN relay） | ✅ |
| Create Room（建 Lobby） | ✅ |
| Refresh Search（搜 Lobby） | ✅（SEARCH_LOBBIES + 属性匹配） |
| Join Room（进房） | ✅ 本地已通；跨机器待两台机器实机验证 |
| 跨网络 NAT 穿透 | ⏳ 待两台机器验证 |
| 打包给朋友 | ⏳ 脚本已备好，建议登录确认后再打包 |

## 4. 配置清单

### 4.1 `AroundMe/AroundMe.uproject`

启用：`OnlineSubsystem`、`OnlineSubsystemUtils`、`OnlineSubsystemNull`、`OnlineSubsystemEOS`
（EOSShared / SocketSubsystemEOS / EOSVoiceChat 自动启用）。

### 4.2 `AroundMe/Config/DefaultEngine.ini`

```ini
[OnlineSubsystem]
DefaultPlatformService=EOS

[/Script/OnlineSubsystemEOS.EOSSettings]
bUseEOSConnect=true
bUseEAS=true
+AuthScopeFlags=BasicProfile|FriendsList|Presence|Country
DefaultArtifactName=PropHunt
+Artifacts=(ArtifactName="PropHunt",ClientId="...",ClientSecret="...",ProductId="...",SandboxId="...",DeploymentId="...")

[/Script/Engine.GameEngine]
+NetDriverDefinitions=(DefName="GameNetDriver",DriverClassName="/Script/OnlineSubsystemEOS.NetDriverEOS",DriverClassNameFallback="/Script/OnlineSubsystemUtils.IpNetDriver")

[/Script/OnlineSubsystemEOS.NetDriverEOS]
bIsUsingP2PSockets=true
```

- 多个 scope 用 `|` 分隔（`EOSShared` 的 `LexFromString` 就是按 `|` 切的）。
- `bIsUsingP2PSockets=true` + EOS URL（`EOS:PUID:SocketName:Channel`）走 P2P；普通 IP 自动回退 IpNetDriver。
- 本地切回 Null 测试：`DefaultPlatformService=Null`（`UPropHuntRoomSubsystem` 自适应，业务代码零改动）。

### 4.3 `AroundMe/Config/DefaultGame.ini`

```ini
+DirectoriesToAlwaysCook=(Path="/PropHunt")
+MapsToCook=(FilePath="/PropHunt/Maps/PH_Lobby")
+MapsToCook=(FilePath="/PropHunt/Maps/PH_GameMap")
```

插件地图默认不会被 `bCookAll=False` 的工程自动带进包里，必须显式列出来，否则打出来的包进游戏就黑屏 / 找不到地图。

### 4.4 `PropHunt.Build.cs`

EOS 是动态加载，**无需**直接链接 EOSSDK；只依赖 `OnlineSubsystem` + `OnlineSubsystemUtils`。

## 5. Dev Portal 必须确认的 5 件事

Account Portal 登录依赖 Epic 账号服务，控制台里任何一项没配好，`EOS_Auth_Login` 都会失败。逐项确认：

1. **Deployment 是激活状态**
   `dev.epicgames.com/portal` → Product `PropHunt` → Deployments。
   Dev 沙箱默认是休眠的，需要有一个可用 Deployment（或直接用 Live）。

2. **Client Policy 允许 Account Portal / Epic 账号**
   Product Settings → Clients → 该 Client 绑定的 Policy。
   类型 `Peer2Peer`，勾选 P2P / Lobby / Auth；Epic Account Services 相关权限要打开，
   否则浏览器登录回来会报 `invalid_client` / `unauthorized`。

3. **Epic Account Services Application 已建并且关联了这个 Client**
   Epic Account Services → Applications → 关联步骤 2 的 Client。
   漏了这步会报 `not associated with an Application`。

4. **接受 Epic Account Services 协议**
   没接受会报 `EOS_Auth_CorrectiveActionRequired`。

5. **Brand / 隐私政策 / 服务条款**
   生产环境需要过审；Dev 沙箱一般可以先测。
   如果浏览器页面提示应用未验证，但能登录成功，就不影响白盒 demo。

> 任何一个环节报错，把日志里 `LogEOSSDK: Warning: LogEOS: Error response received from backend ... ErrorCode=[...]`
> 那一行发出来，能直接定位到是哪一项。

## 6. 两台机器联机测试步骤

前置：两台机器都装了**同一份**打包版本（或都装了 UE 5.5 + 同一份工程），并且都有 Epic 账号。

1. A 启动游戏 → 主菜单点 `Sign in with Epic` → 浏览器完成登录
   → 状态变成 `Signed in as <昵称>`，`Create Room` 变可点。
2. A 点 `Create Room` → 自动进入 `PH_Lobby` 并成为房主。
3. A 在房间里选 `Hunter`，点 `Ready`。
4. B 启动游戏 → 同样登录 → `Join Room` → `Refresh Search`
   → 列表里出现 A 的房间（显示 A 的昵称）→ 点击加入。
5. B 选 `Ghost`，点 `Ready`。
6. 两边都 Ready 后 1 秒倒计时 → 自动 `ServerTravel` 到 `PH_GameMap`。

预期日志（A 侧）：

```
LogPropHunt: [Auth] State -> EPropHuntAuthState::SignedIn (Signed in as <name>)
LogPropHunt: Warning: [PropHunt] PostLogin: <name> joined lobby
LogPropHunt: Warning: [PropHunt] <name> is now host
```

B 侧应当出现 `Login succeeded`，随后进房、`ClientTravel` 到 `EOS:<PUID>:...`。

如果搜不到房间，按顺序查：

1. 两边是否都已登录（未登录时搜索按钮会被前置检查拦掉并提示）；
2. 两边是否同 Artifact / Sandbox / Deployment（配置里写死，一般不会错）；
3. 房间列表是否提示 `Search failed: ...`（有具体原因）；
4. `LogOnline: Warning: EOS: ...` 里的错误码。

## 7. 离开 / 暂停逻辑（已有）

- **离开房间**：非房主离开 = 自己回主菜单、房间继续；房主离开 = 房间销毁、所有人回主菜单。
- **暂停（ESC，游戏内）**：server 权威暂停（`bPauseable=true` + `SetPause`），所有客户端一起冻结。
- **任意人掉线/退出**：`HandleLeaveGame` → 销毁 session + 广播回菜单 + 房主延迟关闭。

## 8. 打包给朋友

用 `AroundMe/PropHunt_Package.bat`（内部调 RunUAT BuildCookRun）：

```
Out: <仓库根>/Packaged/PropHunt
Map: /PropHunt/Maps/PH_Lobby + /PropHunt/Maps/PH_GameMap
Config: Win64 Development
```

脚本里没有硬编码路径：

- 引擎路径取自 `AroundMe/InstallHooksCache.ini` 的 `UE_ROOT`（由 `InstallHooks.bat` 写入，换机器后先跑一次它）；
- 工程路径取脚本所在目录；
- 输出固定在 `<仓库根>/Packaged/PropHunt`。

`PropHunt_SignIn.bat` / `PropHunt_LocalTwoPlayers.bat` 用同样的方式取引擎路径，所以在别的电脑上只要缓存里的 `UE_ROOT` 正确就能直接双击运行。

打完之后把整个 `PropHunt/` 目录压缩发出去；朋友解压后运行
`PropHunt_Play.bat`（或直接 `AroundMe.exe /PropHunt/Maps/PH_Lobby`）。

打包注意：

- 必须带上 `EOSSDK-Win64-Shipping.dll` 等 EOS 运行库（RunUAT 会自动 stage 引擎插件依赖）。
- `DefaultGame.ini` 里的 `MapsToCook` 缺一项，进游戏就会回退到空地图。
- ClientSecret 会随包发出去，这是 EOS 客户端的正常形态；但不要把这个仓库公开。

## 9. 已知限制

1. 同一台机器不能同时用真实登录开两个号（共用同一个 EOS 账号/PUID）——本机调试请继续用 DevAuth。
2. 跨网络是否通取决于 EOS 中继；公司网络若封 UDP，可能失败，日志会有 P2P/relay 相关报错。
3. 目前房间只支持 2 人（`NumPublicConnections=2`）。
4. 未实现「邀请好友」列表；目前靠公共 Lobby 搜索，房间会出现在同一 Deployment 的所有人列表里。

## 10. 下一步

- [ ] 用真实账号完成一次 Account Portal 登录（确认第 5 节配置齐）
- [ ] 两台机器跑通 Create / Search / Join / 开局
- [ ] 打包 Win64 Development 版本，发给朋友实测
- [ ] 之后再做回合与胜负（目前只有 Hunter Wins）
