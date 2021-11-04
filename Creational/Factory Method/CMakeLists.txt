cmake_minimum_required(VERSION 3.16)
project(design-paterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(factory_method main.cpp concreteProductA.h concreteProductB.h Product.h concreteCreatorB.h concreteCreatorA.h Creator.h concreteProductA.h concreteProductB.h)
