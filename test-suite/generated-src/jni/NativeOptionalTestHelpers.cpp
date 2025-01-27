// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#include "NativeOptionalTestHelpers.hpp"  // my header
#include "NativeBaseRecord.hpp"
#include "NativeMixedRecord.hpp"
#include "NativeOptionalInterface.hpp"
#include "NativeOptionalRecord.hpp"

namespace djinni_generated {

NativeOptionalTestHelpers::NativeOptionalTestHelpers() : ::djinni::JniInterface<::testsuite::OptionalTestHelpers, NativeOptionalTestHelpers>("com/dropbox/djinni/test/OptionalTestHelpers$CppProxy") {}

NativeOptionalTestHelpers::~NativeOptionalTestHelpers() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::OptionalTestHelpers>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_getBaseRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::OptionalTestHelpers::get_base_record();
        return ::djinni::release(::djinni_generated::NativeBaseRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_optionalInterface(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::OptionalTestHelpers::optional_interface();
        return ::djinni::release(::djinni_generated::NativeOptionalInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_getMixedRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::OptionalTestHelpers::get_mixed_record();
        return ::djinni::release(::djinni_generated::NativeMixedRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_getOptionalRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::testsuite::OptionalTestHelpers::get_optional_record();
        return ::djinni::release(::djinni_generated::NativeOptionalRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_OptionalTestHelpers_mixedRecordId(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        auto r = ::testsuite::OptionalTestHelpers::mixed_record_id(::djinni_generated::NativeMixedRecord::toCpp(jniEnv, j_i));
        return ::djinni::release(::djinni_generated::NativeMixedRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
