cmake_minimum_required(VERSION 3.26)
project(EFREI_SE_tp1 C)

set(CMAKE_C_STANDARD 11)

add_executable(EFREI_SE_tp1 main.c
        question1.c
        question1.h
        correction/gestion_tableaux.c
        correction/test_gestion_tableaux.c)
