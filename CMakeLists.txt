cmake_minimum_required(VERSION 3.15)
project(cpp-project)

set (CMAKE_BUILD_TYPE Debug)

set (MAJOR_VERSION 0)
set (MINOR_VERSION 1)

configure_file("${PROJECT_SOURCE_DIR}/version.h.in" "${PROJECT_SOURCE_DIR}/version.h")

set (sources main.cpp)

set (headers version.h)

add_executable(${CMAKE_PROJECT_NAME} ${sources} ${headers})
