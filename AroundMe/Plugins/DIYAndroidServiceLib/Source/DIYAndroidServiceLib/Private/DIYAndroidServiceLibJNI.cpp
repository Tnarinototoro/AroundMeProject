// Fill out your copyright notice in the Description page of Project Settings.


#include "DIYAndroidServiceLibJNI.h"
#if PLATFORM_ANDROID



DIYAndroidServiceLibJNI::DIYAndroidServiceLibJNI()
{
    
}

DIYAndroidServiceLibJNI::~DIYAndroidServiceLibJNI()
{

}
// ���ط�������jint���͵Ĳ�����ӡ����Ļ��

extern "C"
{
    JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_nativeTestFunc(JNIEnv* env, jobject thiz, jint value)
    {
        int32 CPPValue = static_cast<int32>(value); // ��jint���͵Ĳ���ת��Ϊint����
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(CPPValue)); // ��������ӡ����Ļ��
    }
}
void DIYAndroidServiceLibJNI::CallTest()
{
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
       /* bool bIsOptional = false;
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "nativeTestFunc", "(I)V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test, 3);


     
        static jmethodID MethonId_Test_Func = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TestFunc","()V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test_Func);*/
    }
}








#endif