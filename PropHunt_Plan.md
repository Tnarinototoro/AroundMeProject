# Prop 博弈（PropHunt）白盒原型 — 实施方案

## Context（为什么做这件事）

在现有 UE5 项目基础上新做一个游戏「Prop 博弈」——Prop Hunt（拟态捉迷藏）的变体。核心创新：**被 Hunter 拿起 ≠ 立刻输**，Ghost 在被拿起的 Cube 里凭微操「硬撑」过一段高压 QTE 忍耐博弈。

当前只做**白盒（graybox）原型**，验证一件事：Hunter 拿着附身道具疯狂摇晃、Ghost 在红圈快炸满的高压下抢按 QTE 时，双方「会不会笑出来、心跳有没有加速」。MVP 只做 1v1 最小闭环，不做美术、不做 EOS。

**已确认的约束**：
- 新游戏做成**独立 UE plugin**，且 **PropHunt 完全不依赖 AroundMe 旧代码**。
- 真正公共的代码**提取成独立公用 plugin**（本次即相机框架 + 子系统基类）。
- 网络**从第一天就做 UE 原生 replication**（现有代码库纯单机，多人框架从零搭）。本地用 PIE Net Mode + Num Players 联调；**EOS P2P 后置**，白盒先 LAN/listen server。

## 目标架构

```
AroundMe/Plugins/
├── DIYCore/          # 新：公共框架 plugin（相机管理 + 子系统基类）
│   └── Source/DIYCore/
│       ├── DIY_WorldSubsystem.h/.cpp          (从 AroundMe/System 迁入)
│       ├── DIY_TickableWorldSubsystem.h/.cpp  (迁入，清理残留 include)
│       ├── DIY_CameraDefines.h/.cpp           (FDIY_CameraEntry / EDIY_CameraType)
│       └── DIY_CameraManager.h/.cpp           (镜头混合/绑定)
├── PropHunt/         # 新：PropHunt 游戏 plugin（只依赖 DIYCore）
│   └── Source/PropHunt/  +  Content/
└── (其余既有插件不变)

AroundMe（主模块）→ 反向依赖 DIYCore，改 include 路径。
```

## 关键决策（3 条）

1. **提取公共 plugin `DIYCore`**：把 `UDIY_CameraManager` + `FDIY_CameraEntry`/`EDIY_CameraType`（`DIY_CameraDefines`）+ 两个子系统基类（`UDIY_WorldSubsystem`、`UDIY_TickableWorldSubsystem`）迁出 AroundMe。理由：这套是干净叶子，PropHunt 的 Ghost 镜头绑定明确要复用；`UDIY_CameraManager` 依赖 `UDIY_TickableWorldSubsystem`（薄基类），一并迁出。`ADIY_CameraBase`（带 AR 触摸手势、移动端特有）**留在 AroundMe 不迁**，它依赖 `FDIY_CameraEntry`，形成 AroundMe → DIYCore 的单向依赖（干净）。

2. **PropHunt 零依赖 AroundMe，只依赖 DIYCore**。拾取/检测/输入/UI 全部在 PropHunt 里新写瘦身版（几十行），不复用主项目那套互相硬绑定、`Cast<ADIY_ItemBase>` 绑死道具生命周期的 `ActionController/InputController/RoughEnvScanner/ItemBase`——泛化成本 > 重写成本。

3. **网络 = Server 权威 + Client RPC 本地表现 + OnRep 跨端状态**。所有游戏状态只在 server 执行；客户端只上报输入 + 渲染本地表现；QTE 进度/驱逐由 server 权威判定（公平、防作弊）。

## 模块与类

### 公共 plugin `DIYCore`（提取，仅 4 个类）

| 迁移内容 | 原路径（AroundMe/Source/AroundMe/） | 说明 |
|---|---|---|
| `UDIY_WorldSubsystem` | `System/DIY_WorldSubsystem.h/.cpp` | 世界子系统基类 |
| `UDIY_TickableWorldSubsystem` | `System/DIY_TickableWorldSubsystem.h/.cpp` | tickable 基类；清理头文件里残留的 `#include "DIY_GameInstanceSubsystem.h"` |
| `FDIY_CameraEntry` + `EDIY_CameraType` | `Player/Camera/DIY_CameraDefines.h/.cpp` | 相机条目结构 |
| `UDIY_CameraManager` | `Player/Camera/DIY_CameraManager.h/.cpp` | 镜头混合/绑定 |

AroundMe 适配：`AroundMe.Build.cs` 加 `DIYCore` 依赖；受影响文件改 include 路径（代表性：`Player/Camera/DIY_CameraBase.*`、`DIY_MainPlayerCameraController.*`、`Player/DIY_MainWatcher_Dbg.*`、`Debug/DIY_DebugImGuiSubsystem.h`、`Debug/Contents/DIY_ImGuiContentProxy_Camera.cpp`、`AroundMeEditor/Panels/DIY_CameraManagerPanel.*`、`AroundMeEditor/AroundMeEditorModule.cpp`，以及所有继承 `UDIY_WorldSubsystem`/`UDIY_TickableWorldSubsystem` 的类）。类名/API 保持不变，仅改 include 和归属模块。

### 游戏 plugin `PropHunt`

| 类 | 新/复用 | 职责 |
|---|---|---|
| `APropHuntGameMode` | 新（继承 `AGameModeBase`） | `PostLogin` 分配角色（第1个=Hunter，第2个=Ghost）、`ChoosePlayerStart`、QTE 权威推进 + 驱逐裁决 |
| `APropHuntGameState` | 新 | `MatchPhase`、`RoundTimeLeft`（复制） |
| `APropHuntPlayerState` | 新 | `TeamRole`（Hunter/Ghost/Spectator，复制） |
| `APropHuntPlayerController` | 新 | 全部 Server/Client/Multicast RPC + listen-server 本地特判 |
| `APropHuntCharacter` | 新（继承 `ACharacter`） | `bGhostHidden`（OnRep 隐藏/关碰撞）、`bSprinting`（OnRep 调 MaxWalkSpeed）；移动走 CMC 内建复制 |
| `APropHuntPropActor` | 新（继承 `AActor`） | `bIsPossessed/PossessedBy`、`bIsHeld/HeldBy`（复制）；根下挂 `UCameraComponent` |
| `UPropHuntPropScanner` | 新（`UBoxComponent`） | Hunter「前方+最近」目标选择 |
| `UPropHuntCarryComponent` | 新 | server 权威 Attach/Detach/Throw |
| `UPropHuntQTEUserWidget` | 新 | 红圈 + 按键提示 |
| `UDIY_CameraManager` | **复用（来自 DIYCore）** | Ghost 镜头 blend 到 Prop |
| `PropHuntTypes.h` | 新 | `EPropHuntRole`、`EPropHuntQTEKey` 等 |

Build.cs 依赖：PropHunt → `DIYCore` + `Core/CoreUObject/Engine/InputCore/EnhancedInput/UMG/Slate/SlateCore`。**不依赖 `AroundMe`**。

## 网络架构（核心）

**Replicated 类**：`APropHuntCharacter`（`bGhostHidden`、`bSprinting`）、`APropHuntPropActor`（`bIsPossessed`、`PossessedBy`、`bIsHeld`、`HeldBy`）。

**RPC**：
- Server：`ServerRequestPossess` / `ServerRequestPickup` / `ServerRequestDrop` / `ServerReportQTEKey`
- Client：`ClientBeginPossession` / `ClientEndPossession` / `ClientShowQTE` / `ClientHideQTE` / `ClientUpdateQTE`（Unreliable ~20Hz）
- Multicast：`MulticastExpelFeedback`

**QTE**：server 权威推进进度 + 驱逐判定，Ghost 本地只渲染。道具 attach 靠「复制父引用 + OnRep 重挂」，不逐帧复制 transform。

## 实施顺序

- **阶段 0** — 提取 DIYCore（迁移 + AroundMe 适配）
- **阶段 1** — PropHunt 插件脚手架 + 1v1 网络握手
- **阶段 2** — 附身 + 镜头绑定
- **阶段 3** — 拾取/拿/甩/扔
- **阶段 4** — 红圈 QTE + 驱逐
- **阶段 5** — 打磨

## 验证方式

编辑器 Play（2 players / Listen Server）逐阶段验证；重点验证 GDD 白盒三项指标：Ghost 的紧张感、Hunter 的快感、Ghost 能否撑 5–8s 逼 Hunter 放下。阶段 0 后单独确认 AroundMe 编译无回归。白盒跑通后同步 `AGENTS.md`。
