//
// Created by Administrator on 2022/6/20.
//

#ifndef BPP_TYPEDEFINE_HPP
#define BPP_TYPEDEFINE_HPP

#include "bpp/type/Dto.hpp"
#include <memory>

#define DTO_INIT(ClassName) \
friend bpp::Util;           \
public:                     \
    static std::shared_ptr<ClassName> creatShared() { \
        return std::make_shared<ClassName>();         \
    }                       \
                            \
    std::string dateToString() override{ \
        return bpp::Util::dateToString(map);    \
    }

#define DTO_VARIABLE(Type, Value) \
    Type Value = addValue<Type>(#Type, #Value);


#endif //BPP_TYPEDEFINE_HPP
