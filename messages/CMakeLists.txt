cmake_minimum_required(VERSION 3.8)

#set up protobuf to be included
find_package(Protobuf REQUIRED)

file(GLOB ProtoFiles "${CMAKE_CURRENT_SOURCE_DIR}/proto/*.proto")

PROTOBUF_GENERATE_CPP(ProtoSources ProtoHeaders ${ProtoFiles})
SET_SOURCE_FILES_PROPERTIES(${ProtoSources} ${ProtoHeaders} PROPERTIES GENERATED TRUE)
include_directories(${CMAKE_CURRENT_BINARY_DIR})


message (STATUS "from Build ${CMAKE_CURRENT_SOURCE_DIR}")
message (STATUS "Protofiles ${ProtoFiles}")
message (STATUS "Generated  ${ProtoSources} ${ProtoHeaders}")



set (SOURCE_FILES MessageProcessor.cpp MessageProcessor.h)

add_library(libMessages ${ProtoSources} ${ProtoHeaders} ${SOURCE_FILES})
target_link_libraries(libMessages ${PROTOBUF_LIBRARIES})