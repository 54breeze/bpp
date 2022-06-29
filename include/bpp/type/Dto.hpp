//
// Created by Administrator on 2022/6/21.
//

#ifndef BPP_DTO_HPP
#define BPP_DTO_HPP

#include <map>
#include <string>

namespace bpp {
    namespace type {
        class Dto {
        public:
            virtual std::string dateToString()=0;

        protected:
            std::map<std::string, std::string> map;

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
