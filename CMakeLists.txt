cmake_minimum_required(VERSION 3.1.0)
project(wlib-tlsf)

set(FILES
    include/tlsf.h
    src/tlsf.cpp
    src/config.h
    )

add_library(wlib-tlsf ${FILES})
