cmake_minimum_required(VERSION 3.5)
project(LabProj)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_PREFIX_PATH "/Users/ned/Qt/5.7/clang_64/lib/cmake/Qt5Widgets/")

find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES main.cpp LoadResources.h LoadResources.cpp)
add_executable(LabProj ${SOURCE_FILES})
target_link_libraries(LabProj Qt5::Widgets)