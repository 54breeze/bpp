//
// Created by Administrator on 2022/6/27.
//

#ifndef BPP_UTIL_HPP
#define BPP_UTIL_HPP

#include <map>
#include <string>

namespace bpp {
    namespace parser {
        namespace json {
            class Util {
            public:
                static std::string dateToString(std::map<std::string, std::string> &date) {
                    return date.begin()->first;
                }
            };
        }
    }
    typedef bpp::parser::json::Util Util;
}

#endif //BPP_UTIL_HPP
