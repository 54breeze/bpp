cmake_minimum_required(VERSION 3.20)
project(bpp)

set(CMAKE_CXX_STANDARD 14)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#bpp lib库
add_library(${PROJECT_NAME}
        include/bpp/type/TypeDefine.hpp
        include/bpp/type/TypeUndef.hpp
        include/bpp/plugins/PluginSelector.hpp
        include/bpp/type/Dto.cpp
        include/bpp/type/Dto.hpp
        include/bpp/parser/json/Util.cpp
        include/bpp/parser/json/Util.hpp
        include/bpp/plugins/codegen/Codegen.hpp
        include/bpp/plugins/parser/Parser.hpp
        )

target_include_directories(${PROJECT_NAME} PUBLIC include)

#dto lib库
add_library(${PROJECT_NAME}-lib
        src/dto/UserDto.cpp
        src/dto/UserDto.hpp
        src/plugin/PluginsSet.hpp
        )

target_link_libraries(${PROJECT_NAME}-lib PUBLIC ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}-lib PUBLIC src)


# bpp-exe exe文件
add_executable(${PROJECT_NAME}-exe src/main.cpp)

target_link_libraries(${PROJECT_NAME}-exe PRIVATE ${PROJECT_NAME}-lib)

