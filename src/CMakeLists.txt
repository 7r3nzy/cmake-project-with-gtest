
file(GLOB SOURCES
     ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
list(REMOVE_ITEM SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp )

add_library(testingharnesslib ${SOURCES})
add_executable(testingharness main.cpp)
target_link_libraries(testingharness ${testingharness_LIBRARIES})

