cmake_minimum_required(VERSION 3.22)
project(labo10)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)

add_executable(labo10 main.cpp ejercicios.h ejercicios.cpp auxiliares.h auxiliares.cpp Tests/busquedaBinariaTEST.cpp Tests/jumpSearchTEST.cpp Tests/indicePicoTEST.cpp Tests/puntoFijoTEST.cpp)

target_link_libraries(labo10 gtest gtest_main)