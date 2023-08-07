// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLibJNI.h"
#if PLATFORM_ANDROID



TestLibJNI::TestLibJNI()
{
    //System.loadLibrary("TestLib");
}

TestLibJNI::~TestLibJNI()
{
}
// 本地方法：将jint类型的参数打印到屏幕上

extern "C"
{
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_nativeTestFunc(JNIEnv* env, jobject thiz, jint value)
    {
        int32 CPPValue = static_cast<int32>(value); // 将jint类型的参数转换为int类型
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(CPPValue)); // 将参数打印到屏幕上
    }
}
void TestLibJNI::CallTest() 
{
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        bool bIsOptional = false;
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "nativeTestFunc", "(I)V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, 3);


     
        static jmethodID MethonId_Test_Func = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TestFunc","()V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test_Func);
    }
}








#endif