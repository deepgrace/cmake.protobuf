cmake_minimum_required(VERSION 3.11)
set(CMAKE_VERBOSE_MAKEFILE ON)

set(PROTO proto)

find_package(Protobuf REQUIRED)
file(GLOB protos "*.proto")
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER ${protos})

add_library(${PROTO} SHARED ${PROTO_HEADER} ${PROTO_SRC})
target_link_libraries(${PROTO} ${PROTOBUF_LIBRARY})

install(TARGETS ${PROTO} DESTINATION ${PROJECT_SOURCE_DIR}/lib)
