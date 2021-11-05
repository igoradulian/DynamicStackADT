cmake_minimum_required(VERSION 3.15)
project(CustomDataStructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(CustomDataStructure StackInterface.h DynamicStack.h DynamicStack.cpp mainDynamic.cpp)