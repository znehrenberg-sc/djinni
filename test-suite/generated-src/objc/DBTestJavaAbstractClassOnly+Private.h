// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from interface_and_abstract_class.djinni

#include "test_java_abstract_class_only.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBTestJavaAbstractClassOnly;

namespace djinni_generated {

class TestJavaAbstractClassOnly
{
public:
    using CppType = std::shared_ptr<::testsuite::TestJavaAbstractClassOnly>;
    using CppOptType = std::shared_ptr<::testsuite::TestJavaAbstractClassOnly>;
    using ObjcType = DBTestJavaAbstractClassOnly*;

    using Boxed = TestJavaAbstractClassOnly;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
