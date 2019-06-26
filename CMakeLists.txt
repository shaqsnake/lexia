cmake_minimum_required (VERSION 3.8)
set(This Lexia)
project(${This} CXX)

set (Lexia_VERSION_MAJOR 0)
set (Lexia_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

aux_source_directory (src SRC_DIR)

add_executable (lexia ${SRC_DIR})