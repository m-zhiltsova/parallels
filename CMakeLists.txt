cmake_minimum_required(VERSION 3.10)
project(sum_of_sin)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(sum_of_sin src/main.cpp)

option(USE_DOUBLE "Use double precision" OFF)
option(USE_FLOAT "Use float precision" OFF)

if(USE_DOUBLE AND USE_FLOAT)
    message(FATAL_ERROR "Cannot set both USE_DOUBLE and USE_FLOAT to ON")
endif()

if(USE_DOUBLE)
    add_definitions(-DUSE_DOUBLE)
elseif(USE_FLOAT)
    add_definitions(-DUSE_FLOAT)
endif()
