#include "DIYPlatformServiceProvider.h"
#include "DIYPlatformService.h"

ADIYPlatformServiceProvider::ADIYPlatformServiceProvider()
{
}

ADIYPlatformServiceProvider::~ADIYPlatformServiceProvider()
{
}
#if PLATFORM_ANDROID
extern "C"
{

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewLogGenerated(JNIEnv *jenv, jclass clazz, jstring MyString)
    {

        const char *chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ConvertedStr);
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1GarbageName(JNIEnv *jenv, jclass clazz)
    {

        if (GEngine)
        {

            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnDeviceDetected_Delegate_GarbageName_Provider.Broadcast(); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1WithName(JNIEnv *jenv, jclass clazz, jstring MyString)
    {

        const char *chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnDeviceDetected_Delegate_WithName_Provider.Broadcast(ConvertedStr); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnMessageReceivedFromOtherPDevices(JNIEnv *jenv, jclass clazz, jstring MyString)
    {

        const char *chars = jenv->GetStringUTFChars(MyString, 0);

        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        jenv->ReleaseStringUTFChars(MyString, chars);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnMessageReceivedFromOtherPDevices_Delegate_Provider.Broadcast(ConvertedStr); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnSubmittingBypassData_1GarbageNames(JNIEnv *jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider.Broadcast(ConvertedInt); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnSubmittingBypassData_1WithNames(JNIEnv *jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnSubmittingBaypassData_WithNamesCount_Delegate_Provider.Broadcast(ConvertedInt); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnSubmittingBaypassData_1GameUser(JNIEnv *jenv, jclass clazz, jint inCount)
    {

        int ConvertedInt = static_cast<int>(inCount);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnSubmittingBaypassData_GameUserCount_Delegate_Provider.Broadcast(ConvertedInt); });
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnItemGiftReceived(JNIEnv *jenv, jclass clazz, jint inGiftItemID)
    {

        int ConvertedInt = static_cast<int>(inGiftItemID);

        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      { FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->OnItemGiftReceived_Delegate_Provider.Broadcast(ConvertedInt); });
        }
    }
}

#endif

void ADIYPlatformServiceProvider::StartProvidingService()
{
#if PLATFORM_ANDROID
    if (JNIEnv *Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StartAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);
    }

#endif

#if PLATFORM_ANDROID
    if (JNIEnv *Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StartDIYServiceFromUE", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);
        UE_LOG(LogTemp, Log, TEXT("DIY_Service started via UPL extension!"));
    }
#endif
}

void ADIYPlatformServiceProvider::StopProvidingService()
{

#if PLATFORM_ANDROID
    if (JNIEnv *Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StopAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);
    }
#endif

#if PLATFORM_ANDROID
    if (JNIEnv *Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StopDIYServiceFromUE", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);
    }
#endif
}

void ADIYPlatformServiceProvider::RequestAddGiveTask(int in_Item_ID)
{
    //@Todo implement task code
#if PLATFORM_ANDROID
    if (JNIEnv *Env = FAndroidApplication::GetJavaEnv())
    {

        static jmethodID MethodID = FJavaWrapper::FindMethod(
            Env,
            FJavaWrapper::GameActivityClassID,
            "OnRequestAddGiveTask",
            "(I)V",
            false);

        if (MethodID != nullptr)
        {

            FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID, in_Item_ID);
        }
    }
#endif
}

void ADIYPlatformServiceProvider::Setup(UWorld *validWorld)
{
    this->world = validWorld;
}
