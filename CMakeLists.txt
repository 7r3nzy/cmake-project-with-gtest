cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(testingharness)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(testingharness_LIBRARIES ${testingharness_LIBRARIES} testingharnesslib)

add_subdirectory(src)
add_subdirectory(test)
