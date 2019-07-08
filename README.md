# CMake Protobuf [![LICENSE](https://img.shields.io/github/license/deepgrace/cmake.protobuf.svg)](https://github.com/deepgrace/cmake.protobuf/blob/master/LICENSE_1_0.txt)

> **CMake with Protocol buffers**

This is a sample of using cmake together with Google Protocol buffers (Protobuf) to generate Go and C++ code.

## build
     mkdir build
     cd build
     cmake ..
     make && make install

## run
     LD_LIBRARY_PATH=lib bin/main
     LD_LIBRARY_PATH=lib bin/grpc_server
