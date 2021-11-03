cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(strategia main.cpp SuperClass.h SubClass.h Algorithm.h concreteAlgo.h concreteAlgo2.h)
