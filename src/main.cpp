//
// Created by Administrator on 2022/6/18.
//

#include "dto/UserDto.hpp"
#include<iostream>

int main(int argc, char *argv[]) {
    std::shared_ptr<UserDto> a = UserDto::creatShared();
    a->userId = 3;
    a->num = 5.6;
    std::cout << a->userId << std::endl;
    std::cout << a->num << std::endl;
}