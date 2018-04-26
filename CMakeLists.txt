cmake_minimum_required(VERSION 2.6)
project(testing_harness)

add_executable(testing_harness main.cpp)

install(TARGETS testing_harness RUNTIME DESTINATION bin)
