cmake_minimum_required(VERSION 3.11)
set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(${PROJECT_BINARY_DIR}/grpc_proto)

set(SERVER grpc_server)
set(CMAKE_CXX_FLAGS "-g -Wall -Werror -std=gnu++1z -fconcepts -fgnu-tm")

add_executable(${SERVER} grpc_server.cpp)
target_link_libraries(${SERVER} grpc++ grpc grpc++_reflection pthread grpc_proto ${PROTOBUF_LIBRARY})

install(TARGETS ${SERVER} DESTINATION ${PROJECT_SOURCE_DIR}/bin)
