cmake_minimum_required(VERSION 3.27)
project(Laba_3_3G)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_3_3G main.cpp
        Account.h
        Money.h
        Money.cpp
        Account.cpp
        Object.h
        Object.cpp)
