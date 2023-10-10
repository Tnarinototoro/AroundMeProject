// Fill out your copyright notice in the Description page of Project Settings.


#include "DIYAndroidServiceLibJNI.h"
#if PLATFORM_ANDROID
extern "C"
{
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_OnNewLogGenerated(JNIEnv* jenv, jclass clazz, jstring MyString)
    {
        // 将 jstring 转换为 FString
        const char* chars = jenv->GetStringUTFChars(MyString, 0);
        FString ConvertedStr(chars);
        jenv->ReleaseStringUTFChars(MyString, chars);

        // 将字符串打印到屏幕上
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, ConvertedStr);
        }
    }



}


DIYAndroidServiceLibJNI::DIYAndroidServiceLibJNI()
{
    
}

DIYAndroidServiceLibJNI::~DIYAndroidServiceLibJNI()
{

}
// 本地方法：将jint类型的参数打印到屏幕上


void DIYAndroidServiceLibJNI::CallTest()
{
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        //used for call jave function
       /* bool bIsOptional = false;
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "nativeTestFunc", "(I)V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, 3);


     
        static jmethodID MethonId_Test_Func = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TestFunc","()V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test_Func);*/
    }
}








#endif