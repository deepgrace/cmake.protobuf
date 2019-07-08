project(server)

cmake_minimum_required(VERSION 3.11)
 
add_subdirectory(go)
add_subdirectory(src)
add_subdirectory(proto)
add_subdirectory(grpc_src)
add_subdirectory(grpc_proto)
