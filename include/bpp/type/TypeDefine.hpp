//
// Created by Administrator on 2022/6/20.
//

#ifndef BPP_JSONCLASSDEFINE_HPP
#define BPP_JSONCLASSDEFINE_HPP

#include "bpp/type/Dto.hpp"
#include <memory>

#define DTO_INIT(ClassName) \
public:                     \
    static std::shared_ptr<ClassName> creatShared() { \
        return std::make_shared<ClassName>();         \
    }

#define DTO_VARIABLE(Type, Value) \
    Type Value = addValue<Type>(#Type, #Value);


#endif //BPP_JSONCLASSDEFINE_HPP
