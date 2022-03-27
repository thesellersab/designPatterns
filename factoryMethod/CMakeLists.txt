# template file : https://stackoverflow.com/questions/46296487/include-headers-with-a-library-in-cmake

cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 11)
enable_testing()
project(factoryPattern VERSION 0.1.0)
add_subdirectory(src)
add_subdirectory(test1)
add_test(NAME test1 COMMAND test1 )

#enable_testing()
#file(GLOB SRC_FILES src/*.cpp)
#message(STATUS "Adding list of source file: ${SRC_FILES}")
#add_executable(factoryPattern main.cpp src/camry.cpp)
#add_library(cars STATIC EXCLUDE_FROM_ALL ${SRC_FILES})
#include_directories(src) 
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
