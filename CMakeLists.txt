cmake_minimum_required(VERSION 3.28)
project(underpassc C)

set(CMAKE_C_STANDARD 17)

add_executable(underpassc main.c
        helloworld.c
        helloworld.h)
