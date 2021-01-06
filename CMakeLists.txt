cmake_minimum_required(VERSION 3.13)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 14)

add_executable(RockPaperScissors main.cpp helper.cpp helper.h getAI.cpp getAI.h winner.cpp winner.h)