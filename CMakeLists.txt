cmake_minimum_required(VERSION 3.10)
project(Aggregator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(aggregator 
    src/main.cpp 
    src/parser.cpp 
    src/cli.cpp
)

target_include_directories(aggregator PRIVATE include)
