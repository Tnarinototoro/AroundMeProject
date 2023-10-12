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
        // �� jstring ת��Ϊ UTF-8 ����� const char*
        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        // ʹ�� UTF-8 ����� const char* ������ FString
        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        // �ͷ��� GetStringUTFChars ������ڴ�
        jenv->ReleaseStringUTFChars(MyString, chars);

        // ���ַ�����ӡ����Ļ��
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ConvertedStr);
        }
    }

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1WithName(JNIEnv* jenv, jclass clazz, jstring MyString)
    {
        // �� jstring ת��Ϊ UTF-8 ����� const char*
        const char* chars = jenv->GetStringUTFChars(MyString, 0);

        // ʹ�� UTF-8 ����� const char* ������ FString
        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        // �ͷ��� GetStringUTFChars ������ڴ�
        jenv->ReleaseStringUTFChars(MyString, chars);

        // ���ַ�����ӡ����Ļ��
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


