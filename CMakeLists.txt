cmake_minimum_required(VERSION 3.20)
project(bpp)

set(CMAKE_CXX_STANDARD 14)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#bpp lib库
add_library(${PROJECT_NAME}Json STATIC
        include/bpp/type/TypeDefine.hpp
        include/bpp/type/TypeUndef.hpp
        include/bpp/codegen/Codegen.hpp
        include/bpp/type/Dto.cpp
        include/bpp/type/Dto.hpp
        include/bpp/parser/json/JsonUtil.cpp
        include/bpp/parser/json/JsonUtil.hpp)

target_include_directories(${PROJECT_NAME}Json PUBLIC include)

#dto lib库
add_library(${PROJECT_NAME} STATIC
        src/dto/UserDto.cpp
        src/dto/UserDto.hpp
        )

target_include_directories(${PROJECT_NAME} PUBLIC src)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}Json)

add_executable(${PROJECT_NAME}-exe src/main.cpp)

target_link_libraries(${PROJECT_NAME}-exe PRIVATE ${PROJECT_NAME})

