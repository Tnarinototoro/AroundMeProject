#include "DIYPlatformServiceProvider.h"



DIYPlatformServiceProvider::DIYPlatformServiceProvider()
{

}


DIYPlatformServiceProvider::~DIYPlatformServiceProvider()
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
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, ConvertedStr);
        }
    }
}

#endif

void DIYPlatformServiceProvider::StartProvidingService()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StartAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID); 
    }
#endif
    
}

void DIYPlatformServiceProvider::StopProvidingService()
{

#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID MethodID = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "StopAroundMeService", "()V", false);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethodID);

    }
#endif

}


