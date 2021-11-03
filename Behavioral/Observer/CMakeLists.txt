cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(observer main.cpp concretePublisher.h conctreteObserver.h Observer.h Publisher.h)
