#include "DIYPlatformServiceProvider.h"
#include "DIYPlatformService.h"

// ADIYPlatformServiceProvider::FOnDeviceDetectedDelegate_GarbageName ADIYPlatformServiceProvider::Garbage_Test;
// ADIYPlatformServiceProvider::FOnDeviceDetectedDelegate_WithName ADIYPlatformServiceProvider::With_Test;
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
        // �� jstring ת��Ϊ UTF-8 ����� const char*
        const char *chars = jenv->GetStringUTFChars(MyString, 0);

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

    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1GarbageName(JNIEnv *jenv, jclass clazz)
    {
        // ����������Ļ����ʾһ��������Ϣ
        if (GEngine)
        {

            AsyncTask(ENamedThreads::GameThread, [=]()
                      {
                          FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->DeviceDetectedDelegate_GarbageName.Broadcast();
                          // ADIYPlatformServiceProvider::Garbage_Test.Broadcast();
                      });
        }
    }
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewRandomDeviceEncountered_1WithName(JNIEnv *jenv, jclass clazz, jstring MyString)
    {
        // �� jstring ת��Ϊ UTF-8 ����� const char*
        const char *chars = jenv->GetStringUTFChars(MyString, 0);

        // ʹ�� UTF-8 ����� const char* ������ FString
        FString ConvertedStr(UTF8_TO_TCHAR(chars));

        // �ͷ��� GetStringUTFChars ������ڴ�
        jenv->ReleaseStringUTFChars(MyString, chars);

        // ���ַ�����ӡ����Ļ��
        if (GEngine)
        {
            AsyncTask(ENamedThreads::GameThread, [=]()
                      {
                          FDIYPlatformServiceModule::Get().GetPlatformProvider(nullptr)->DeviceDetectedDelegate_WithName.Broadcast(ConvertedStr);
                          // ADIYPlatformServiceProvider::With_Test.Broadcast(ConvertedStr);
                      });
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
}

void ADIYPlatformServiceProvider::Setup(UWorld *validWorld)
{
    this->world = validWorld;
}
