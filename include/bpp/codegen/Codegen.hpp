//
// Created by Administrator on 2022/6/20.
//

#ifndef BPP_CODEGEN_HPP
#define BPP_CODEGEN_HPP

/*
 * DTO
 */
#define BPP_CODEGEN_DEFINE_DTO "bpp/type/TypeDefine.hpp"
#define BPP_CODEGEN_UNDEF_DTO "bpp/type/TypeUndef.hpp"
#define BPP_CODEGEN_DEFINE_DTO_ BPP_CODEGEN_DEFINE_DTO
#define BPP_CODEGEN_UNDEF_DTO_ BPP_CODEGEN_UNDEF_DTO

/*
 * 代码生成器
 */
#define BPP_CODEGEN_BEGIN(NAME,...) BPP_CODEGEN_DEFINE_##NAME##_##__VA_ARGS__
#define BPP_CODEGEN_END(NAME,...) BPP_CODEGEN_UNDEF_##NAME##_##__VA_ARGS__

#endif //BPP_CODEGEN_HPP
