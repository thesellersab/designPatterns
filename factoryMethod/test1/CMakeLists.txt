
file(GLOB TEST1_FILES *.cpp)
add_executable(test1 ${TEST1_FILES})
target_link_libraries(test1 cars)