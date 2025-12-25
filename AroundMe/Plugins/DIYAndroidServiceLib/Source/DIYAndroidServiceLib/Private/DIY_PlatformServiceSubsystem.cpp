#include "DIY_PlatformServiceSubsystem.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "DIY_CommuLog.h"
#include "Misc/Parse.h"


#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidJavaEnv.h"
#include "Android/DIY_CommuManager.h"
#elif PLATFORM_IOS
//#include "DIY_CommuDevice.h"
#endif

void UDIYPlatformServiceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}

void UDIYPlatformServiceSubsystem::Deinitialize()
{
    Super::Deinitialize();
}

TScriptInterface<IDIY_CommuManagerInterface> UDIYPlatformServiceSubsystem::CreateDIY_CommuManager()
{
    TScriptInterface<IDIY_CommuManagerInterface> DIY_CommuManagerInterface;

#if PLATFORM_IOS || PLATFORM_ANDROID
    UDIY_CommuManager* DIY_CommuManager = NewObject<UDIY_CommuManager>();
    DIY_CommuManager->Init();

    DIY_CommuManagerInterface.SetObject(DIY_CommuManager);
    DIY_CommuManagerInterface.SetInterface(Cast<IDIY_CommuManagerInterface>(DIY_CommuManager));
#endif

    return DIY_CommuManagerInterface;
}

FString UDIYPlatformServiceSubsystem::ConvertBytesToHexString(const TArray<uint8>& Bytes)
{
    return BytesToHex(Bytes.GetData(), Bytes.Num());
}

FString UDIYPlatformServiceSubsystem::HexToUUID(const FString& InHexString)
{
    FString HexString = InHexString.TrimStartAndEnd();
    const int StartPos = HexString.StartsWith(TEXT("0x")) ? 2 : 0;

    if (HexString.Len() - StartPos > 4)
    {
        UE_LOG(DIY_CommuLog, Error, TEXT("Cannot convert %s as it is not a 16 bit value"), *HexString);
        return FString();
    }

    for (int i = StartPos; i < HexString.Len(); i++)
    {
        if (!CheckTCharIsHex(HexString[i]))
        {
            UE_LOG(DIY_CommuLog, Error, TEXT("Failed to convert %s to a valid UUID, found invalid character: %c"), *HexString, HexString[i]);
            return FString();
        }
    }

    uint32 Id = FParse::HexNumber(*HexString);
    FGuid Guid = FGuid(Id, 0x00001000, 0x80000080, 0x5f9b34fb);

    if (!Guid.IsValid())
    {
        UE_LOG(DIY_CommuLog, Error, TEXT("Failed to convert %s to a valid UUID"), *HexString);
        return FString();
    }

    FString GuidString = Guid.ToString(EGuidFormats::DigitsWithHyphens);
    return GuidString.ToLower();
}

TArray<FString> UDIYPlatformServiceSubsystem::HexToUUIDs(const TArray<FString>& HexStrings)
{
    TArray<FString>UuidArray;

    for (const FString& HexString : HexStrings)
    {
        UuidArray.Add(UDIYPlatformServiceSubsystem::HexToUUID(HexString));
    }

    return UuidArray;
}

bool UDIYPlatformServiceSubsystem::IsUUIDValid(const FString& UUID)
{
    FGuid Guid;

    if (UUID.Len() == 36 && !FGuid::ParseExact(UUID, EGuidFormats::DigitsWithHyphens, Guid)) return false;
    return Guid.IsValid();
}
void UDIYPlatformServiceSubsystem::OnImageBytesReceived(
    const TArray<uint8> &ImageBytes)
{
    UTexture2D *Texture = CreateTextureFromImageBytes(ImageBytes);

    if (!Texture)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to create texture from image bytes"));
        return;
    }

    // ① 保存到 Subsystem（非常重要，防 GC）
    LastReceivedImageTexture = Texture;

    // ② 通知游戏世界
    OnImageTextureReceived.Broadcast(Texture);
}
UTexture2D* UDIYPlatformServiceSubsystem::CreateTextureFromImageBytes(
    const TArray<uint8>& ImageData)
{
    IImageWrapperModule& ImageWrapperModule =
        FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");

    EImageFormat ImageFormat =
        ImageWrapperModule.DetectImageFormat(ImageData.GetData(), ImageData.Num());

    TSharedPtr<IImageWrapper> Wrapper =
        ImageWrapperModule.CreateImageWrapper(ImageFormat);

    if (!Wrapper.IsValid() ||
        !Wrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
    {
        return nullptr;
    }

    TArray<uint8> RawData;
    Wrapper->GetRaw(ERGBFormat::BGRA, 8, RawData);

    UTexture2D* Texture =
        UTexture2D::CreateTransient(
            Wrapper->GetWidth(),
            Wrapper->GetHeight(),
            PF_B8G8R8A8);

    Texture->SRGB = true;

    void* TextureData =
        Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

    FMemory::Memcpy(TextureData, RawData.GetData(), RawData.Num());

    Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
    Texture->UpdateResource();

    return Texture;
}
UDIYPlatformServiceSubsystem* UDIYPlatformServiceSubsystem::Get(UWorld* OptionalWorld)
{
    
    if (OptionalWorld)
    {
        if (UGameInstance* GI = OptionalWorld->GetGameInstance())
        {
            return GI->GetSubsystem<UDIYPlatformServiceSubsystem>();
        }
    }
    if (!GEngine)
    {
        return nullptr;
    }

    for (const FWorldContext& Context : GEngine->GetWorldContexts())
    {
        UWorld* World = Context.World();
        if (World && World->IsGameWorld())
        {
            if (UGameInstance* GI = World->GetGameInstance())
            {
                return GI->GetSubsystem<UDIYPlatformServiceSubsystem>();
            }
        }
    }

    return nullptr;
}

void UDIYPlatformServiceSubsystem::StartPlatformService()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        jclass ServiceClass = FAndroidApplication::FindJavaClass("com/aroundmelib/DIY_Service");
        jmethodID StartMethod = Env->GetStaticMethodID(ServiceClass, "StartDIYService", "(Landroid/app/Activity;)V");
        Env->CallStaticVoidMethod(ServiceClass, StartMethod, FJavaWrapper::GameActivityThis);
    }
#endif
}

void UDIYPlatformServiceSubsystem::StopPlatformService()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        jclass ServiceClass = FAndroidApplication::FindJavaClass("com/aroundmelib/DIY_Service");
        jmethodID StopMethod = Env->GetStaticMethodID(ServiceClass, "StopDIYService", "(Landroid/app/Activity;)V");
        Env->CallStaticVoidMethod(ServiceClass, StopMethod, FJavaWrapper::GameActivityThis);
    }
#endif
}

void UDIYPlatformServiceSubsystem::RequestAddGiveTask(int ItemID)
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        jclass ServiceClass = FAndroidApplication::FindJavaClass("com/aroundmelib/DIY_Service");
        jmethodID GiveMethod = Env->GetStaticMethodID(ServiceClass, "RequestGiveAItem", "(I)V");
        Env->CallStaticVoidMethod(ServiceClass, GiveMethod, ItemID);
    }
#endif
}


#if PLATFORM_ANDROID
extern "C"
{

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnNewLogGenerated(JNIEnv* jenv, jclass clazz, jstring MyString)
    {

        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ConvertedStr);
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnNewRandomDeviceEncountered_1GarbageName(JNIEnv* jenv, jclass clazz)
    {

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    {
                        Subsys->OnDeviceDetected_Delegate_GarbageName_Provider.Broadcast();
                    });
            }
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnNewRandomDeviceEncountered_1WithName(JNIEnv* jenv, jclass clazz, jstring MyString)
    {

        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    {
                        Subsys->OnDeviceDetected_Delegate_WithName_Provider.Broadcast(ConvertedStr);
                    });
            }
           
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnMessageReceivedFromOtherPDevices(JNIEnv* jenv, jclass clazz, jstring MyString)
    {

        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    { Subsys->OnMessageReceivedFromOtherPDevices_Delegate_Provider.Broadcast(ConvertedStr); });
            }
            
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnSubmittingBypassData_1GarbageNames(JNIEnv* jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    { Subsys->OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider.Broadcast(ConvertedInt); });
            }
           
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnSubmittingBypassData_1WithNames(JNIEnv* jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    { Subsys->OnSubmittingBaypassData_WithNamesCount_Delegate_Provider.Broadcast(ConvertedInt); });
            }
            
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnSubmittingBaypassData_1GameUser(JNIEnv* jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    { Subsys->OnSubmittingBaypassData_GameUserCount_Delegate_Provider.Broadcast(ConvertedInt); });
            }
           
        }
    }

    JNIEXPORT void JNICALL Java_com_aroundmelib_DIY_1Service_OnItemGiftReceived(JNIEnv* jenv, jclass clazz, jint inGiftItemID)
    {

        int ConvertedInt = static_cast<int>(inGiftItemID);

        if (GEngine)
        {
            if (auto* Subsys = UDIYPlatformServiceSubsystem::Get())
            {
                AsyncTask(ENamedThreads::GameThread, [=]()
                    { Subsys->OnItemGiftReceived_Delegate_Provider.Broadcast(ConvertedInt); });
            }
            
        }
    }

    JNIEXPORT void JNICALL
    Java_com_aroundmelib_DIY_1Service_OnImageBytesForGame(
        JNIEnv *Env,
        jclass,
        jbyteArray ImageBytes)
    {
        if (!ImageBytes)
            return;

        jsize Length = Env->GetArrayLength(ImageBytes);
        TArray<uint8> Bytes;
        Bytes.SetNumUninitialized(Length);

        Env->GetByteArrayRegion(
            ImageBytes,
            0,
            Length,
            reinterpret_cast<jbyte *>(Bytes.GetData()));

        if (auto *Subsys = UDIYPlatformServiceSubsystem::Get())
        {
            AsyncTask(ENamedThreads::GameThread, [Subsys, Bytes = MoveTemp(Bytes)]() mutable
                      { Subsys->OnImageBytesReceived(Bytes); });
        }
    }
}

#endif