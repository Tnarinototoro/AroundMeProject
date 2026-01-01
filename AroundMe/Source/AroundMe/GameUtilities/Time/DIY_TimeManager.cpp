#include "DIY_TimeManager.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
UDIY_TimeManager *UDIY_TimeManager::Get(const UObject *WorldContextObject)
{
    if (!WorldContextObject)
        return nullptr;
    UWorld *World = WorldContextObject->GetWorld();
    return World ? World->GetSubsystem<UDIY_TimeManager>() : nullptr;
}

void UDIY_TimeManager::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);
}

void UDIY_TimeManager::Deinitialize()
{

    Super::Deinitialize();
}

void UDIY_TimeManager::RequestNetworkTime()
{
    FHttpModule *Http = &FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    // 使用公共的时间 API (UTC)
    Request->SetURL(TEXT("http://worldtimeapi.org/api/timezone/Etc/UTC"));
    Request->SetVerb(TEXT("GET"));
    Request->OnProcessRequestComplete().BindUObject(this, &UDIY_TimeManager::OnNetworkTimeResponse);

    Request->ProcessRequest();
}

void UDIY_TimeManager::OnWorldBeginPlay(UWorld &InWorld)
{
    Super::OnWorldBeginPlay(InWorld);

    // 默认先拿本地时间垫底，后续通过网络异步校准
    SyncWithServer(FDateTime::Now());

    // 这里建议发起一个 HTTP 请求到时间服务器 (具体实现略)
    // 请求成功后再次调用 SyncWithServer
    RequestNetworkTime();
}

void UDIY_TimeManager::OnNetworkTimeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (bWasSuccessful && Response.IsValid())
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            // API 返回格式如: "2025-12-30T20:29:12.123456+00:00"
            FString UtcDateTimeString = JsonObject->GetStringField(TEXT("utc_datetime"));

            FDateTime NetworkTime;
            if (FDateTime::ParseIso8601(*UtcDateTimeString, NetworkTime))
            {
                // 【核心逻辑】校准：记录网络时间和当前的 CPU 运行秒数
                SyncedUTC = NetworkTime;
                LastSyncRealTime = FPlatformTime::Seconds();
                bIsTimeSynced = true;

                UE_LOG(LogTemp, Log, TEXT("Time Synchronized with Server: %s"), *NetworkTime.ToString());
                return;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Network Time Sync Failed. Using Local CPU Offset."));
}

void UDIY_TimeManager::SyncWithServer(FDateTime ServerUTC)
{
    SyncedUTC = ServerUTC;
    LastSyncRealTime = FPlatformTime::Seconds(); // 获取高精度运行增量
    bIsTimeSynced = true;
}

FDateTime UDIY_TimeManager::GetCurrentLocal() const
{
    if (!bIsTimeSynced)
        return FDateTime::Now();

    // 当前 UTC = 同步时的 UTC + (现在跑了多少秒 - 同步时跑了多少秒)
    double ElapsedSeconds = FPlatformTime::Seconds() - LastSyncRealTime;
    FTimespan Delta = FTimespan::FromSeconds(ElapsedSeconds);

    return SyncedUTC + Delta;
}

FString UDIY_TimeManager::GetFormattedTime() const
{
    FDateTime Now = GetCurrentLocal();
    // 始终以 24h 存储，需要转换时再格式化
    return Now.ToString(TEXT("%Y-%m-%d %H:%M:%S"));
}

int32 UDIY_TimeManager::GetCurrentHour() const
{
    return GetCurrentLocal().GetHour();
}