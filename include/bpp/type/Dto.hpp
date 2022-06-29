//
// Created by Administrator on 2022/6/21.
//

#ifndef BPP_DTO_HPP
#define BPP_DTO_HPP

#ifdef BPP_CODEGEN_DEFINE_DTO_JSON

#include BPP_CODEGEN_DTO_JSON

#endif

#include <map>
#include <string>

namespace bpp {
    namespace type {
        class Dto {
        protected:
            std::map<std::string, std::string> map;
            bpp::Util util;

            template<class T>
            T addValue(const std::string &type, const std::string &name) {
                map[name] = type;
                return T();
            }
        };
    }
    typedef bpp::type::Dto Dto;
}

#endif //BPP_DTO_HPP
