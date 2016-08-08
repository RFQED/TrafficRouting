cmake_minimum_required(VERSION 3.5)
project(TrafficRouting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(Libs)

set(SOURCE_FILES main.cpp)
add_executable(TrafficRouting ${SOURCE_FILES})

target_link_libraries(TrafficRouting MapReader CountAlgo AlgoABC)

