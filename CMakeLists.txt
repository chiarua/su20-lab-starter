cmake_minimum_required(VERSION 3.23)
project(su20_lab_starter C)

set(CMAKE_C_STANDARD 11)

include_directories(lab01)
include_directories(lab02)
include_directories(lab09)
include_directories(lab10)
include_directories(lab10/libbmp)
include_directories(lab10/libhttp)

add_executable(su20_lab_starter
        lab01/test_ll_cycle.c
        lab01/ll_cycle.c
        lab01/ll_cycle.h
       )
