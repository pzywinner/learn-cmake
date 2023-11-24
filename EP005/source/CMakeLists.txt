#最小版本要求
cmake_minimum_required(VERSION 3.5)

#项目
project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The leading Hello world App"
        LANGUAGES CXX)

#不推荐使用这种方式 CMake的官方文档也不推荐使用这种方式
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SRC_FILES})

#Target
# add_executable(HelloAppBinary main.cpp
#                 src/dog.cpp
#                 src/operations.cpp
#                 )


#目标编译器的特性设置
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)