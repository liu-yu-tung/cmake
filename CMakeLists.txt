cmake_minimum_required(VERSION 3.16)
project(test CXX)
set(CMAKE_CXX_STANDARD 17)

add_executable(test src/test.cpp)
target_link_libraries(test
        yaml-cpp)

add_executable(generate_key src/generate_key.cpp)
target_link_libraries(generate_key
        yaml-cpp)