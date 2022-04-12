cmake_minimum_required(VERSION 3.6)

project(log)

include_directories(
    include
)

add_executable(main
    src/main.cpp
    src/logSingleton.cpp)
