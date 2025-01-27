// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#include "NativeOverrideRecord.hpp"  // my header

namespace djinni_generated {

auto NativeOverrideRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::Optional<std::experimental::optional, ::djinni::I32>::Boxed::toCpp(j["optInt"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::F32>::Boxed::toCpp(j["optFloat"]),
            ::djinni::I32::Boxed::toCpp(j["reqInt"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::F64>::Boxed::toCpp(j["optDouble"])};
}
auto NativeOverrideRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("optInt", ::djinni::Optional<std::experimental::optional, ::djinni::I32>::Boxed::fromCpp(c.optInt));
    js.set("optFloat", ::djinni::Optional<std::experimental::optional, ::djinni::F32>::Boxed::fromCpp(c.optFloat));
    js.set("reqInt", ::djinni::I32::Boxed::fromCpp(c.reqInt));
    js.set("optDouble", ::djinni::Optional<std::experimental::optional, ::djinni::F64>::Boxed::fromCpp(c.optDouble));
    return js;
}

} // namespace djinni_generated
