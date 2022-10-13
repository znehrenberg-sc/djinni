// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from interface_and_abstract_class.djinni

#include "NativeTestJavaInterfaceOnly.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeTestJavaInterfaceOnly::NativeTestJavaInterfaceOnly() : ::djinni::JniInterface<::testsuite::TestJavaInterfaceOnly, NativeTestJavaInterfaceOnly>() {}

NativeTestJavaInterfaceOnly::~NativeTestJavaInterfaceOnly() = default;

NativeTestJavaInterfaceOnly::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTestJavaInterfaceOnly::JavaProxy::~JavaProxy() = default;

bool NativeTestJavaInterfaceOnly::JavaProxy::test_method() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTestJavaInterfaceOnly>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_testMethod);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated