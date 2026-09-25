cmake_minimum_required(VERSION 3.20)

project(SRTS)

add_executable(srts main.cpp
tokens/get_tokens.cpp
tokens/handle_tokens_commands.cpp
get_days/get_days.cpp
)

target_include_directories(srts PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)