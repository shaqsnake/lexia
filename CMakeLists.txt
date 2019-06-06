cmake_minimum_required (VERSION 3.0)

project (Lexia)

set (Lexia_VERSION_MAJOR 0)
set (Lexia_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory (src SRC_DIR)

add_executable (lexia ${SRC_DIR})