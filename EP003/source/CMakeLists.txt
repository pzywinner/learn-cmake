#最小版本要求
cmake_minimum_required(VERSION 3.5)

#项目
project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The leading Hello world App"
        LANGUAGES CXX)

#Target
add_executable(HelloAppBinary main.cpp)

#目标编译器的特性设置
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)