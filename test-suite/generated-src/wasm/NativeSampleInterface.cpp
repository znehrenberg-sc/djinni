// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeSampleInterface.hpp"  // my header

namespace djinni_generated {

em::val NativeSampleInterface::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
    });
    return methods;
}


EMSCRIPTEN_BINDINGS(sample_interface) {
    em::class_<::testsuite::SampleInterface>("SampleInterface")
        .smart_ptr<std::shared_ptr<::testsuite::SampleInterface>>("SampleInterface")
        .function("nativeDestroy", &NativeSampleInterface::nativeDestroy)
        ;
}

}  // namespace djinni_generated