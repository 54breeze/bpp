//
// Created by Administrator on 2022/6/29.
//

#ifndef BPP_CODEGEN_HPP
#define BPP_CODEGEN_HPP

/*
 * 代码生成器
 */
#define BPP_CODEGEN_BEGIN(NAME) BPP_CODEGEN_DEFINE_##NAME
#define BPP_CODEGEN_END(NAME) BPP_CODEGEN_UNDEF_##NAME

/*
 * @DTO
 */
#define BPP_CODEGEN_DEFINE_DTO "bpp/type/TypeDefine.hpp"
#define BPP_CODEGEN_UNDEF_DTO "bpp/type/TypeUndef.hpp"

#endif //BPP_CODEGEN_HPP
