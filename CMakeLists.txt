cmake_minimum_required(VERSION 3.5.0)
project(CppStudy VERSION 0.1.0 LANGUAGES C CXX)

# 设置源文件目录
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

# 搜索源文件目录下的所有源文件
file(GLOB_RECURSE SourceFiles "${SOURCE_DIR}/*.cpp")

# 添加可执行文件
add_executable(CppStudy ${SourceFiles})

# 设置头文件目录
set(HEADER_DIR "${CMAKE_SOURCE_DIR}/src")

# 搜索头文件目录下的所有头文件
file(GLOB_RECURSE Headers "${HEADER_DIR}/*.h")

# 指定包含目录
target_include_directories(CppStudy PRIVATE "${HEADER_DIR}")
