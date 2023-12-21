// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include "base_record.hpp"
#include <cstdint>
#include <memory>
#include <utility>

namespace testsuite {

class OptionalInterface;

/** Record containing only optional values */
struct OptionalRecord final {
    std::experimental::optional<int32_t> optInt;
    /*nullable*/ std::shared_ptr<OptionalInterface> optInterface;
    std::experimental::optional<BaseRecord> optRecord;

    OptionalRecord(std::experimental::optional<int32_t> optInt_,
                   /*nullable*/ std::shared_ptr<OptionalInterface> optInterface_,
                   std::experimental::optional<BaseRecord> optRecord_)
    : optInt(std::move(optInt_))
    , optInterface(std::move(optInterface_))
    , optRecord(std::move(optRecord_))
    {}

    OptionalRecord()
    : OptionalRecord(std::experimental::nullopt,
                     nullptr,
                     std::experimental::nullopt)
    {}
};

} // namespace testsuite