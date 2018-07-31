#Setup CMake to run tests
enable_testing()

include(${PROJECT_SOURCE_DIR}/cmake/gtest.cmake)
include_directories(${GTEST_INCLUDE_DIRS})

find_package(Threads REQUIRED)

include_directories (${testingharness_SOURCE_DIR}/src)
file(GLOB TEST_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)


add_executable(test_main ${TEST_SRCS} test_main.cpp)

target_link_libraries(test_main ${testingharness_LIBRARIES} gtest Threads::Threads)

set_target_properties(test_main PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR}/testBin)

#Finally add it to test execution - 
#Notice the WORKING_DIRECTORY and COMMAND
add_test(NAME test_main 
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/testBin 
            COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testBin/test_main )
