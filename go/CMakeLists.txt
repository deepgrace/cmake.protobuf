cmake_minimum_required(VERSION 3.11)
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(Protobuf REQUIRED)
file(GLOB proto_files "*.proto")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules")
include(go_generator)

PROTOBUF_GENERATE_GO(GO ${proto_files})
add_custom_target(Go ALL DEPENDS ${GO})
	           
