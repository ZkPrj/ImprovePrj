CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(tst2)

message(STATUS "This is tst2 makelist")

message(STATUS "Tst Min")

set(SRC_FILE_LST
    main.cpp
)

add_executable(tst2 ${SRC_FILE_LST})
