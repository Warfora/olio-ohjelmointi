cmake_minimum_required(VERSION 3.16)

project(h5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h5 main.cpp
    ClassB.h
    ClassB.cpp
    AssosiationA.h
    AssosiationA.cpp
    AggregationA.h
    AggregationA.cpp)

include(GNUInstallDirs)
install(TARGETS h5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
