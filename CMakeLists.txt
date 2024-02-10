cmake_minimum_required(VERSION 3.26)
project(EFREI_SE_tp1 C)

set(CMAKE_C_STANDARD 11)

add_executable(EFREI_SE_tp1 main.c
        exercices/question1.c
        exercices/question1.h
        exercices/question2.c
        exercices/question2.h
        tests/test_Q1.c
        tests/test_Q1.h
        tests/test_Q2.c
        tests/test_Q2.h
        exercices/question3.c
        exercices/question3.h
        tests/test_Q3.c
        tests/test_Q3.h
        exercices/question4.c
        exercices/question4.h)
