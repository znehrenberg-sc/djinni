// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constants.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeConstants
{
    using CppType = ::testsuite::Constants;
    using JsType = em::val;
    using Boxed = NativeConstants;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
    static void staticInitialize();
};

}  // namespace djinni_generated