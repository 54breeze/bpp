//
// Created by Administrator on 2022/6/21.
//

#ifndef BPP_USERDTO_HPP
#define BPP_USERDTO_HPP

#include "plugin/PluginsSet.hpp"

#include DTO_BEGIN
#include DTO_PARSER

class UserDto : public bpp::Dto {

public:
    DTO_INIT(UserDto)

    DTO_VARIABLE(int, userId)

    DTO_VARIABLE(double, num)

};

#include DTO_END

#endif //BPP_USERDTO_HPP
