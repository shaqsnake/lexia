cmake_minimum_required (VERSION 3.8)
set(This Lexia)
project(${This} CXX)

set (Lexia_VERSION_MAJOR 0)
set (Lexia_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)
set_target_properties(gtest gtest_main PROPERTIES 
    FOLDER Libraries
)

add_subdirectory(uriparser)
add_subdirectory(message)