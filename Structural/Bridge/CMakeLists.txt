cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(bridge main.cpp Abstraction.h ImpInterface.h niceImplementation.h rudeImplementation.h Bridge.h UseCases.h)
