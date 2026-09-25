cmake_minimum_required(VERSION 3.20)

project(SRTS)

add_executable(srts main.cpp
get_days/get_days.cpp
create/create.cpp
help/help.cpp
)

target_include_directories(srts PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)