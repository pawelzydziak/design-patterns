cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(facade main.cpp ComplicatedSystem1.h ComplicatedSystem2.h Facade.h)
