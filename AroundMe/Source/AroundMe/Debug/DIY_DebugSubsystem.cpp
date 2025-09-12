// Fill out your copyright notice in the Description page of Project Settings.

// #include "OdDebugSubsystem.h"

// #include "Gameplay/OdGameplayEventSubsystem.h"
// #include "Kismet/GameplayStatics.h"
// #include "Kismet/KismetSystemLibrary.h"
// #include "Util/OdGameplayStatics.h"
// #include "Util/OdUtils.h"
// #include "Widget/OdUiMediaPlayerWidget.h"

// TOptional<FOdDebugEntryInfo> UOdDebugSubsystem::OneTimeDebugEntryInfo = TOptional<FOdDebugEntryInfo>();
// TOptional<FOdDebugEntryInfo> UOdDebugSubsystem::StaticDebugEntryInfo = TOptional<FOdDebugEntryInfo>();

// // 九月版リスタート時にのデバッグエントリを使用するため強制有効化
// #ifndef OD_ENABLE_DEBUG_ENTRY
// // #define OD_ENABLE_DEBUG_ENTRY OD_ENABLE_DEBUG
// #define OD_ENABLE_DEBUG_ENTRY 1
// #endif

// bool UOdDebugSubsystem::ShouldEnableDebug()
// {
// #if OD_ENABLE_DEBUG
//     return true;
// #else
//     return false;
// #endif;
// }

// UOdDebugSubsystem::UOdDebugSubsystem()
// {
//     LevelMap.Add(EOdDebugEntryLevel::Knock, TSoftObjectPtr<UWorld>(FSoftObjectPath(TEXT("/Game/Levels/Knock/LV_Knock_Main.LV_Knock_Main"))));
//     LevelMap.Add(EOdDebugEntryLevel::Prologue, TSoftObjectPtr<UWorld>(FSoftObjectPath(TEXT("/Game/ToBeReplaced/Levels/Prologue/LV_TMP_Prologue_Main.LV_TMP_Prologue_Main"))));
// }

// bool GbLevelRestartingFromDebugEntry = false;

// void UOdDebugSubsystem::Initialize(FSubsystemCollectionBase &Collection)
// {
//     Super::Initialize(Collection);
//     if (GetGameInstance() && GetGameInstance()->GetInstanceType() == EInstanceType::MainPlayer)
//     {
//         GbLevelRestartingFromDebugEntry = false;
//         bool bHasEditorDebugEntry = false;
//         if (OneTimeDebugEntryInfo.IsSet())
//         {
//             StartFromDebugEntry(OneTimeDebugEntryInfo.GetValue());
//             OneTimeDebugEntryInfo.Reset();
//             bHasEditorDebugEntry = true;
//         }
//         else if (StaticDebugEntryInfo.IsSet())
//         {
//             StartFromDebugEntry(StaticDebugEntryInfo.GetValue());
//             bHasEditorDebugEntry = true;
//         }
//         if (bHasEditorDebugEntry)
//         {
//             UWorld *World = GetGameInstance()->GetWorld();
//             const TSoftObjectPtr<UWorld> &DebugEntryLevel = LevelMap.FindRef(CurrentDebugEntryInfo->Level);
//             if (World)
//             {
//                 if (!DebugEntryLevel.Get() || UGameplayStatics::GetCurrentLevelName(World, true) != DebugEntryLevel->GetMapName())
//                 {
//                     UOdGameplayStatics::RestartPlayerGame(World, DebugEntryLevel);
//                     GbLevelRestartingFromDebugEntry = true;
//                 }
//                 else
//                 {
//                     OnWorldChange(nullptr);
//                 }
//             }
//         }
//     }
// }

// void UOdDebugSubsystem::OnWorldChange(UWorld *NewWorld)
// {
//     Super::OnWorldChange(NewWorld);
//     if (!GetGameInstance())
//         return;
//     UWorld *World = GetGameInstance()->GetWorld();
//     if (!World)
//         return;
//     if (World->GetBegunPlay())
//     {
//         OnWorldActorsBeginPlay();
//     }
//     else
//     {
//         World->OnWorldBeginPlay.AddUObject(this, &UOdDebugSubsystem::OnWorldActorsBeginPlay);
//     }
// }

// void UOdDebugSubsystem::OnWorldActorsBeginPlay()
// {
//     if (!GetGameInstance())
//         return;
//     UWorld *World = GetGameInstance()->GetWorld();
//     if (!World)
//         return;
//     World->OnWorldBeginPlay.RemoveAll(this);
//     for (UOdDebugEntryScript *DebugScript : DebugEntryScripts)
//     {
//         if (!ensureAlways(DebugScript))
//             continue;
//         DebugScript->World = World;
//         DebugScript->OnWorldActorsBeginPlay();
//     }
//     if (UOdGameplayEventSubsystem *GameplayEventSubsystem = World->GetSubsystem<UOdGameplayEventSubsystem>())
//     {
//         FSimpleDynamicDelegate Delegate;
//         Delegate.BindDynamic(this, &ThisClass::OnWorldInit);
//         GameplayEventSubsystem->RegisterWorldInitEvent(MoveTemp(Delegate));
//     }
// }

// void UOdDebugSubsystem::OnWorldInit()
// {
//     for (UOdDebugEntryScript *DebugScript : DebugEntryScripts)
//     {
//         if (!ensureAlways(DebugScript))
//             continue;
//         DebugScript->OnWorldInit();
//     }
// }

// void UOdDebugSubsystem::OnCharacterInit()
// {
//     for (UOdDebugEntryScript *DebugScript : DebugEntryScripts)
//     {
//         if (!ensureAlways(DebugScript))
//             continue;
//         DebugScript->OnCharacterInit();
//     }
// }

// void UOdDebugSubsystem::SetDebugFastForward(bool bEnable)
// {
//     if (bDebugFastForward != bEnable)
//     {
//         bDebugFastForward = bEnable;
//         OnDebugFastForwardChanged.Broadcast(bEnable, DebugFastForwardRate);

//         UOdUiMediaPlayerWidget::FastForwardDelegate.Broadcast(bDebugFastForward);
//     }
// }

// float UOdDebugSubsystem::GetDebugFastForwardRate(const UObject *WorldContextObject)
// {
// #if OD_ENABLE_DEBUG
//     if (UOdDebugSubsystem *DebugSubsystem = OdUtils::GetGameInstanceSubsystem<UOdDebugSubsystem>(WorldContextObject))
//     {
//         if (DebugSubsystem->bDebugFastForward)
//         {
//             return DebugSubsystem->DebugFastForwardRate;
//         }
//     }
// #endif
//     return 1.f;
// }

// void UOdDebugSubsystem::StartFromDebugEntry(const FOdDebugEntryInfo &DebugEntryInfo)
// {
//     CurrentDebugEntryInfo = DebugEntryInfo;
//     DebugEntryScripts.Reset();

//     static IConsoleVariable *CVStartFromDay = IConsoleManager::Get().FindConsoleVariable(TEXT("od.StartFromDay"));
//     if (CVStartFromDay)
//     {
//         CVStartFromDay->Unset(ECVF_SetByConsole);
//         CVStartFromDay->Set(CurrentDebugEntryInfo->BeginDay);
//     }

//     UWorld *World = GetGameInstance()->GetWorld();
//     for (auto &Command : CurrentDebugEntryInfo->CustomConsoleCommands)
//     {
//         UKismetSystemLibrary::ExecuteConsoleCommand(World, Command);
//     }

//     for (const TSoftClassPtr<UOdDebugEntryScript> &Script : CurrentDebugEntryInfo->CustomScripts)
//     {
//         if (TSubclassOf<UOdDebugEntryScript> ScriptClass = Script.LoadSynchronous())
//         {
//             UOdDebugEntryScript *DebugScript = NewObject<UOdDebugEntryScript>(this, ScriptClass);
//             DebugEntryScripts.Add(DebugScript);
//             DebugScript->OnPreWorldRestart();
//         }
//     }
// }

// EOdDebugEntryBeginTiming UOdDebugSubsystem::GetCurrentDebugEntryTiming() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         return CurrentDebugEntryInfo->BeginTiming;
//     }
// #endif
//     return EOdDebugEntryBeginTiming::None;
// }

// EOdDebugEntryPosition UOdDebugSubsystem::GetCurrentDebugEntryPosition() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         return CurrentDebugEntryInfo->BeginPosition;
//     }
// #endif
//     return EOdDebugEntryPosition::None;
// }

// FGameplayTagContainer UOdDebugSubsystem::GetDebugGameFlags() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         return CurrentDebugEntryInfo->GameplayFlags;
//     }
// #endif
//     return FGameplayTagContainer();
// }

// TArray<TSoftClassPtr<UOdPocketInventoryItem>> UOdDebugSubsystem::GetDebugInventory() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         return CurrentDebugEntryInfo->InventoryItems;
//     }
// #endif
//     return TArray<TSoftClassPtr<UOdPocketInventoryItem>>();
// }

// TMap<TSoftObjectPtr<AActor>, bool> UOdDebugSubsystem::GetDebugDoorLockedState() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         return CurrentDebugEntryInfo->DoorLockedState;
//     }
// #endif
//     return TMap<TSoftObjectPtr<AActor>, bool>();
// }

// bool UOdDebugSubsystem::HasCurrentDebugEntryInfo(FOdDebugEntryInfo &DebugEntryInfo) const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     if (CurrentDebugEntryInfo.IsSet())
//     {
//         DebugEntryInfo = CurrentDebugEntryInfo.GetValue();
//         return true;
//     }
// #endif
//     return false;
// }

// TOptional<FOdDebugEntryInfo> UOdDebugSubsystem::GetCurrentDebugEntryInfo() const
// {
// #if OD_ENABLE_DEBUG_ENTRY
//     return CurrentDebugEntryInfo;
// #else
//     return TOptional<FOdDebugEntryInfo>();
// #endif
// }

// UDataTable *UOdDebugSubsystem::GetDebugEntryInfoTable()
// {
//     return GetDefault<UOdDebugSubsystem>()->DebugEntryInfoTable.LoadSynchronous();
// }

// bool UOdDebugSubsystem::FindDebugEntryInfo(const FName &RowName, FOdDebugEntryInfo &FoundDebugEntryInfo, bool bInheritPrevRows)
// {
//     if (UDataTable *DataTable = GetDebugEntryInfoTable())
//     {
//         FOdDebugEntryInfo *FoundRow = DataTable->FindRow<FOdDebugEntryInfo>(RowName, nullptr);
//         if (FoundRow)
//         {
//             FoundDebugEntryInfo = *FoundRow;
//             if (bInheritPrevRows && FoundRow->bInheritPrevDebugEntryItems)
//             {
//                 FoundDebugEntryInfo.InitFrom(*FoundRow);
//                 for (const auto &Pair : DataTable->GetRowMap())
//                 {
//                     const FName &OtherRowName = Pair.Key;
//                     const FOdDebugEntryInfo *OtherRow = reinterpret_cast<FOdDebugEntryInfo *>(Pair.Value);

//                     if (FoundDebugEntryInfo.Level != OtherRow->Level)
//                     {
//                         continue;
//                     }
//                     if (!FoundRow->IgnoreInheritDebugEntryItems.Contains(OtherRowName))
//                     {
//                         FoundDebugEntryInfo += *OtherRow;
//                         if (OtherRowName == RowName)
//                         {
//                             break;
//                         }
//                     }
//                 }
//             }
//             return true;
//         }
//     }
//     return false;
// }

// void UOdDebugSubsystem::SetOneTimeDebugEntryInfo(const FOdDebugEntryInfo &DebugEntryInfo)
// {
//     OneTimeDebugEntryInfo = DebugEntryInfo;
// }

// void UOdDebugSubsystem::SetStaticDebugEntryInfo(const FOdDebugEntryInfo &DebugEntryInfo)
// {
//     StaticDebugEntryInfo = DebugEntryInfo;
// }

// void UOdDebugSubsystem::ClearStaticDebugEntryInfo()
// {
//     StaticDebugEntryInfo.Reset();
// }
