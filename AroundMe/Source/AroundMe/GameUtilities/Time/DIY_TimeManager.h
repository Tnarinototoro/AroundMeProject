#pragma once

#include "CoreMinimal.h"
#include "../../System/DIY_WorldSubsystem.h"
#include "Misc/DateTime.h"
#include "Interfaces/IHttpRequest.h" // 必须包含
#include "DIY_TimeManager.generated.h"

UCLASS()
class UDIY_TimeManager : public UDIY_WorldSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Time", meta = (WorldContext = "WorldContextObject"))
    static UDIY_TimeManager *Get(const UObject *WorldContextObject);

    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;
    /** 发起网络对时请求 */
    void RequestNetworkTime();
    // --- 核心接口 ---

    /** 获取格式化的时间字符串 (例如: "2025-12-30 20:29:12") */
    UFUNCTION(BlueprintPure, Category = "Time")
    FString GetFormattedTime() const;

    /** 获取当前小时 (0-23) 用于驱动 AI 计划表 */
    UFUNCTION(BlueprintPure, Category = "Time")
    int32 GetCurrentHour() const;

    /** 获取当前日期数据 */
    UFUNCTION(BlueprintPure, Category = "Time")
    FDateTime GetCurrentLocal() const;

    /** 手动校准时间（比如从服务器获取了最新时间后调用） */
    void SyncWithServer(FDateTime ServerUTC);

protected:
    virtual void OnWorldBeginPlay(UWorld &InWorld) override;

private:
    /** HTTP 回调函数 */
    void OnNetworkTimeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    // 记录同步时的服务器 UTC 时间
    FDateTime SyncedUTC;
    // 记录同步时，系统运行了多少秒 (CPU Cycles)
    double LastSyncRealTime = 0.0;

    bool bIsTimeSynced = false;
};