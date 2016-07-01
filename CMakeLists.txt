cmake_minimum_required(VERSION 3.5)
project(LabProj)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_PREFIX_PATH "/Users/ned/Qt/5.7/clang_64/lib/cmake/Qt5Widgets/")

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

add_subdirectory(test)

find_package(Qt5Widgets REQUIRED)

set(SOURCE_FILES main.cpp LoadResources.h LoadResources.cpp File.h File.cpp MainWindow.h MainWindow.cpp)
add_executable(LabProj main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(core Qt5::Widgets)
target_link_libraries(LabProj core)