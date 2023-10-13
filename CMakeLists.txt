cmake_minimum_required(VERSION 3.26)
project(word_counter_c C)

set(CMAKE_C_STANDARD 99)

add_executable(word_counter_c
        source/word_main.c
        source/word_manager.h
        source/get_word.h
        source/word_manager_p.h
        source/initialize.c
        source/add_word.c
        source/dump_word.c
        source/finalize.c
        source/get_word.c
)
