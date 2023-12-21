// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "optional_test_helpers.hpp"

namespace djinni_generated {

struct NativeOptionalTestHelpers : ::djinni::JsInterface<::testsuite::OptionalTestHelpers, NativeOptionalTestHelpers> {
    using CppType = std::shared_ptr<::testsuite::OptionalTestHelpers>;
    using CppOptType = std::shared_ptr<::testsuite::OptionalTestHelpers>;
    using JsType = em::val;
    using Boxed = NativeOptionalTestHelpers;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        ::djinni::checkForNull(c.get(), "NativeOptionalTestHelpers::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static em::val get_base_record();
    static em::val optional_interface();
    static em::val get_mixed_record();
    static em::val get_optional_record();
    static em::val mixed_record_id(const em::val& w_i);

};

} // namespace djinni_generated