cmake_minimum_required(VERSION 3.11)
set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(${PROJECT_BINARY_DIR}/proto)

set(MAIN main)
set(CMAKE_CXX_FLAGS "-g -Wall -Werror -std=c++2a -fconcepts -fgnu-tm")

add_executable(${MAIN} main.cpp)
target_link_libraries(${MAIN} proto ${PROTOBUF_LIBRARY})

install(TARGETS ${MAIN} DESTINATION ${PROJECT_SOURCE_DIR}/bin)
