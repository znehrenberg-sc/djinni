// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#import "DBBaseRecord.h"
#include "base_record.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBBaseRecord;

namespace djinni_generated {

struct BaseRecord
{
    using CppType = ::testsuite::BaseRecord;
    using ObjcType = DBBaseRecord*;

    using Boxed = BaseRecord;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

} // namespace djinni_generated
