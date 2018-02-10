cmake_minimum_required(VERSION 3.9)
project(protobufTest3)

set(CMAKE_CXX_STANDARD 11)

add_executable(protobufTest3 main.cpp)

target_link_libraries(protobufTest3 libMessages)

add_subdirectory(messages)