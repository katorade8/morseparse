cmake_minimum_required(VERSION 3.16)
project(morseparse)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(main main.cpp node.cpp trie.cpp)