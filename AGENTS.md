# AroundMeProject — 项目指南

> 本文件是仓库的权威（canonical）项目文档，供所有 AI 编码助手（Claude Code、Cursor、Codex、Windsurf 等）与开发者阅读。

## 项目是什么

**电波宇宙**（工程代号 **DIY Project**）— 擦肩通信驱动的后启示录 · 类动森生活建造手游（iOS/Android，UE5）。

玩家扮演坠毁地球的恒金回收员「亥伯」，在长着机械腿的飞船基地上生活、种田、建造，通过 BLE 擦肩通信与其他玩家交换道具，并拼合遗物文档还原人类被"造物主"亚比毁灭的真相。核心是**道具涌现式交互** + **非主动社交**。

### 命名约定

| 场合 | 用法 |
|---|---|
| 对外名称、宣传、商店页 | **电波宇宙** |
| 工程 / 代码 / 提交 / 模块目录 | **DIY Project**（类名前缀 `DIY_`） |
| UE 工程目录 `AroundMe/` | 仅是文件夹名，**不作为产品名对外使用** |

> 2026-11-07 拍板：此前并存的「AroundMe / Denpa Universe / 电波I宇宙 / 宇宙电波」一律收敛到上表。
> 剧情细节（玩家身份、24601 结局）**不定论**，交由玩家自行解读，详见 `AroundMe/Docs/README.md`。

## 仓库布局

| 路径 | 说明 |
|---|---|
| `AroundMe/` | **主游戏项目**（UE 5.5），Runtime 模块 `AroundMe` + Editor 模块 `AroundMeEditor` |
| `PlayGround/` | **独立测试/试验项目**（UE 5.4），单模块 `PlayGround`，用于隔离功能验证 |
| `AroundMeLib/` | **Android Gradle 工程**（`com.aroundmelib`），移动端配套库，通过 `DIYPlatformService` 与游戏通信 |
| `Configs/` | UE5 配置 + VS 配置（`ConfigsUE5/`、`DIY.vsconfig`） |
| `Docs/` | `UE5_CPP_INDEX.md` — 自动生成的 C++ 文件索引（1357 文件） |
| `PropHunt_Whitebox_Design.md` | PropHunt 的**唯一文档**：白盒设计、工程现状、联机实现、代码核对 |
| `AroundMe/Docs/` | **策划文档**（世界观 / 剧本 / 系统 / 美术 / 音频）。入口是 `AroundMe/Docs/README.md` |

- 主工程入口：`AroundMe/AroundMe.uproject`（`EngineAssociation: 5.5`）
- 测试工程入口：`PlayGround/PlayGround.uproject`（`EngineAssociation: 5.4`）

### 策划文档约定（`AroundMe/Docs/`）

- **单一入口**：`AroundMe/Docs/README.md` 维护「现行 / 已废弃 / 待决」三档清单，改文档先读它。
- **`AroundMe/Docs/_Deprecated/` 是历史留档，不得引用、不得编辑**；废弃文件移入时须在该目录 README 写明「废弃原因 + 被谁取代 + 哪部分仍有效」。
- 与仓库根目录的 `Docs/`（C++ 索引）不是同一个目录，勿混淆。

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

## 交付纪律（所有 AI 助手必须遵守）

**只保留用户明确说过"OK / 可以 / 就是这样"的东西。其余一律不留在仓库里。**

1. **不落盘未确认的中间产物。** 草稿、对比图、试验脚本、备份、探针、分析结果，默认不进仓库；
   需要临时文件时放仓库外的临时目录，任务结束清理。
2. **每次交付必须列清单。** 本轮新增/修改的每个文件，标明：
   - ✅ 用户已确认 → 保留
   - ⚠️ 未确认 → **明确写"我准备删除这些"**，不要沉默留着
3. **不确定就问。** 拿不准该不该删，直接问一句，不要赌。
4. **生成脚本默认一次性。** `build_*.py` / `make_*.py` / 临时转换脚本，交付后删除；
   只有用户明确要求"留着方便复现"才保留。
5. **不新增没被要求的文件。** 不要顺手加 README、索引、示例、`.gitignore` 之外的配置。
6. **绝不留下污染 git 状态的东西**：`__pycache__/`、临时目录、`.forge/`、探针脚本、
   被取代的旧版本文件。

> 背景：用户按 git 提交清单管理仓库，任何未确认的痕迹都是噪音。
> 宁可少留，也不要让用户自己来清理。

