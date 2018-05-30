// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from handy.djinni

#include "NativeImgTransformWrapper.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeImgTransformWrapper::NativeImgTransformWrapper() : ::djinni::JniInterface<::generated::ImgTransformWrapper, NativeImgTransformWrapper>("dying/slowly/generated/ImgTransformWrapper$CppProxy") {}

NativeImgTransformWrapper::~NativeImgTransformWrapper() = default;


CJNIEXPORT void JNICALL Java_dying_slowly_generated_ImgTransformWrapper_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::generated::ImgTransformWrapper>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jbyteArray JNICALL Java_dying_slowly_generated_ImgTransformWrapper_cvtGray(JNIEnv* jniEnv, jobject /*this*/, jbyteArray j_image, jint j_frameHeight, jint j_frameWidth, jint j_rotationDegrees)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::generated::ImgTransformWrapper::cvtGray(::djinni::Binary::toCpp(jniEnv, j_image),
                                                           ::djinni::I32::toCpp(jniEnv, j_frameHeight),
                                                           ::djinni::I32::toCpp(jniEnv, j_frameWidth),
                                                           ::djinni::I32::toCpp(jniEnv, j_rotationDegrees));
        return ::djinni::release(::djinni::Binary::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_dying_slowly_generated_ImgTransformWrapper_hello(JNIEnv* jniEnv, jobject /*this*/, jstring j_name)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::generated::ImgTransformWrapper::hello(::djinni::String::toCpp(jniEnv, j_name));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated