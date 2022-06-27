//
// Created by Administrator on 2022/6/21.
//

#ifndef BPP_USERDTO_HPP
#define BPP_USERDTO_HPP

#include "bpp/codegen/Codegen.hpp"

#include BPP_CODEGEN_BEGIN(DTO)

class UserDto : public bpp::Dto {

public:
    DTO_INIT(UserDto)

    DTO_VARIABLE(int, userId)
    DTO_VARIABLE(double, num)

};

#include BPP_CODEGEN_END(DTO)

#endif //BPP_USERDTO_HPP
