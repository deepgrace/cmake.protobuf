cmake_minimum_required(VERSION 3.11)
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(Protobuf REQUIRED)
file(GLOB protos "*.proto")
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER ${protos})

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules")
include(FindGRPC)

PROTOBUF_GENERATE_GRPC_CPP(GRPC_SRC GRPC_HEADER ${protos})

set(PROTO grpc_proto)

add_library(${PROTO} SHARED ${PROTO_HEADER} ${PROTO_SRC} ${GRPC_HEADER} ${GRPC_SRC})
target_link_libraries(${PROTO} ${PROTOBUF_LIBRARY})

install(TARGETS ${PROTO} DESTINATION ${PROJECT_SOURCE_DIR}/lib)
