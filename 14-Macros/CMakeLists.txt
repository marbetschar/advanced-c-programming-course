cmake_minimum_required(VERSION 3.23)
project(14_Macros C)

set(CMAKE_C_STANDARD 11)

add_executable(14_Macros main.c challenges.h predefined-symbolic-constants.c sum-macro.c square-cube-macro.c uppercase-lowercase-macro.c)
