cmake_minimum_required(VERSION 3.19)
project(UI_WIN32 C)

set(CMAKE_C_STANDARD 11)
set (CMAKE_EXE_LINKER_FLAGS -municode )
link_libraries(-lshell32  -lole32
        -lkernel32 -luser32 -lgdi32)
add_executable(UI_WIN32 main.c)