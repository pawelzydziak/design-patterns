cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(strategia main.cpp Glowna.h Sub.h Algo.h concreteAlgo.h concreteAlgo2.h)
