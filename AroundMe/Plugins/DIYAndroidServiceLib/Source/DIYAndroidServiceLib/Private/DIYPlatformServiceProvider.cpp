#include "DIYPlatformServiceProvider.h"


//ADIYPlatformServiceProvider::FOnDeviceDetectedDelegate_GarbageName ADIYPlatformServiceProvider::Garbage_Test;
//ADIYPlatformServiceProvider::FOnDeviceDetectedDelegate_WithName ADIYPlatformServiceProvider::With_Test;
ADIYPlatformServiceProvider::ADIYPlatformServiceProvider()
{

}


ADIYPlatformServiceProvider::~ADIYPlatformServiceProvider()
{

}
#if PLATFORM_ANDROID
extern "C"
{
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewLogGenerated(JNIEnv* jenv, jclass clazz, jstring MyString)
    {
        // 将 jstring 转换为 UTF-8 编码的 const char*
        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        // 使用 UTF-8 编码的 const char* 来构造 FString
        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        // 释放由 GetStringUTFChars 分配的内存
        jenv->ReleaseStringUTFChars(MyString, chars);

        // 将字符串打印到屏幕上
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ConvertedStr);
        }
    }
    
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1GarbageName(JNIEnv* jenv, jclass clazz)
    {
        // 举例：在屏幕上显示一个调试消息
        if (GEngine)
        {
           
            AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    FDIYPlatformServiceModule::Get().GetPlatformProvider()->DeviceDetectedDelegate_GarbageName.Broadcast();
                    //ADIYPlatformServiceProvider::Garbage_Test.Broadcast();
                });
        }
        
    }
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1WithName(JNIEnv* jenv, jclass clazz, jstring MyString)
    {
        // 将 jstring 转换为 UTF-8 编码的 const char*
        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        // 使用 UTF-8 编码的 const char* 来构造 FString
        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        // 释放由 GetStringUTFChars 分配的内存
        jenv->ReleaseStringUTFChars(MyString, chars);

        // 将字符串打印到屏幕上
        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    FDIYPlatformServiceModule::Get().GetPlatformProvider()->DeviceDetectedDelegate_WithName.Broadcast(ConvertedStr);
                   // ADIYPlatformServiceProvider::With_Test.Broadcast(ConvertedStr);
                });
        }
    }
}

#endif

void ADIYPlatformServiceProvider::StartProvidingService()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StartAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID); 
    }
#endif
    
}

void ADIYPlatformServiceProvider::StopProvidingService()
{

#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StopAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);

    }
#endif

}

void ADIYPlatformServiceProvider::Setup(UWorld* validWorld)
{
    this->world = validWorld;
}






