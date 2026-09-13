# AroundMeProject — 项目指南

> 本文件是仓库的权威（canonical）项目文档，供所有 AI 编码助手（Claude Code、Cursor、Codex、Windsurf 等）与开发者阅读。

## 项目是什么

**AroundMe** — "A Life Vibe App"：一款 UE5 驱动的 AR / 移动端生活方式游戏，核心玩法围绕宠物 AI、环境交互、物品/装备系统展开。

## 仓库布局

| 路径 | 说明 |
|---|---|
| `AroundMe/` | **主游戏项目**（UE 5.5），Runtime 模块 `AroundMe` + Editor 模块 `AroundMeEditor` |
| `PlayGround/` | **独立测试/试验项目**（UE 5.4），单模块 `PlayGround`，用于隔离功能验证 |
| `AroundMeLib/` | **Android Gradle 工程**（`com.aroundmelib`），移动端配套库，通过 `DIYPlatformService` 与游戏通信 |
| `Configs/` | UE5 配置 + VS 配置（`ConfigsUE5/`、`DIY.vsconfig`） |
| `Docs/` | `UE5_CPP_INDEX.md` — 自动生成的 C++ 文件索引（1357 文件） |

- 主工程入口：`AroundMe/AroundMe.uproject`（`EngineAssociation: 5.5`）
- 测试工程入口：`PlayGround/PlayGround.uproject`（`EngineAssociation: 5.4`）

## 主项目源码结构（`AroundMe/Source/AroundMe`，约 248 文件）

| 目录 | 职责 |
|---|---|
| `AI/` | 宠物 AI：StateTree、`DIY_PetMemoryComponent`、`DIY_PetWorldContext`、Routine/Soul 资产 |
| `Area/` | 区域管理：`DIY_AreaManager`、环境对象、挖矿岩石、传送锚点、环境路径 / SmartObject |
| `Player/` | 玩家系统：主玩家 / 宠物、相机（`DIY_CameraManager`）、动作 / 交互（导电性、温度、坚固度处理器）、装备（Bag/Cap/Chest/Face/Kago/RobotHand）、物品、主基地、UI |
| `GameUtilities/` | 音乐播放器、动态网格 / 顶点绘制、天气（`DIY_WeatherManager`）、声音、日志 |
| `Debug/` | ImGui 调试子系统 + 内容代理（相机 / 装备 / 物品 / 音乐 / 玩家 / 天空 / 天气） |
| `System/` | `DIY_WorldSubsystem` / `DIY_GameInstanceSubsystem` / `DIY_TickableWorldSubsystem`、动画、工具 |
| `UIWidgets/` | 合成台、背包、交互菜单、物品状态、音乐播放器等 Slate/UMG 控件 |
| `Components/`、`Essentials/` | 通用组件、Smart Viewport Client |
| `AroundMeEditor/` | 编辑器工具面板（相机管理器、图标浏览器、宠物记忆调试、Tag 调试） |

## 插件

大量第三方插件以源码形式 vendor 进 `AroundMe/Plugins/`，其中 **Voxel（Voxel Pro）体积最大**。重要插件：

- **自有**：`DIYAndroidServiceLib`（模块 `DIYPlatformService`，见下）
- **第三方 vendor**：Voxel、UnrealImGui、VaRest、DragonIKPlugin、AnimatedTexturePlugin、RuntimeVertexPainter、GraphFormatter、Locomotor、GameplayMessageRouter、AssetsCleaner
- **引擎插件（在 uproject 启用）**：GoogleARCore、ARUtilities、MobileFSR、AndroidCamera、StateTree、GameplayStateTree、SmartObjects、GeometryScripting、CommonUI 等

## 技术栈与关键集成点

- **AR / 移动端**：GoogleARCore + ARUtilities + MobileFSR；面向 Android/iOS。
- **AI / 交互**：StateTree + SmartObjects + GameplayTags 是核心。
- **设备通信**：`DIYPlatformService`（插件 `DIYAndroidServiceLib`）负责「移动设备 ↔ 游戏实例」通信，Android/iOS 双实现，LoadingPhase `PreLoadingScreen`；对应 Android 侧工程 `AroundMeLib/`。
- **调试 UI**：ImGui（运行时 + 编辑器面板）。
- **网络 / JSON**：VaRest、HTTP、Json。

## 开发约定

- **命名前缀**：游戏类统一 `DIY_` 前缀（如 `DIY_MainPlayer`、`DIY_AreaManager`）。
- **提交风格**：`PlayGround` 的验证性提交使用 `PG/` 前缀（如 `PG/ Init CoinDuel`）；提交信息可为中文。
- **引擎版本**：主项目 5.5，测试项目 5.4 —— 修改 `.uproject` / `Target.cs` 时注意版本差异。
- **模块依赖**：主模块 `AroundMe` 的核心公共依赖见 `AroundMe/Source/AroundMe/AroundMe.Build.cs`。
