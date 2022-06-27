//
// Created by Administrator on 2022/6/21.
//

#include "Dto.hpp"

template<class T>
T bpp::Dto::addValue(const std::string &type, const std::string &name) {
    map[name] = type;
    return T();
}