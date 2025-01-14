// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include "color.hpp"
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

namespace testsuite {

struct EnumUsageRecord final {
    color e;
    std::experimental::optional<color> o;
    std::vector<color> l;
    std::unordered_set<color> s;
    std::unordered_map<color, color> m;

    EnumUsageRecord(color e_,
                    std::experimental::optional<color> o_,
                    std::vector<color> l_,
                    std::unordered_set<color> s_,
                    std::unordered_map<color, color> m_)
    : e(std::move(e_))
    , o(std::move(o_))
    , l(std::move(l_))
    , s(std::move(s_))
    , m(std::move(m_))
    {}

    EnumUsageRecord(color e_,
                    std::vector<color> l_,
                    std::unordered_set<color> s_,
                    std::unordered_map<color, color> m_)
    : EnumUsageRecord(std::move(e_),
                      std::experimental::nullopt,
                      std::move(l_),
                      std::move(s_),
                      std::move(m_))
    {}
};

} // namespace testsuite
