// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "override_record.hpp"

namespace djinni_generated {

struct NativeOverrideRecord
{
    using CppType = ::testsuite::OverrideRecord;
    using JsType = em::val;
    using Boxed = NativeOverrideRecord;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

} // namespace djinni_generated
