cmake_minimum_required(VERSION 3.16)

project(h4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h4 main.cpp
    engine.cpp
    wheel.cpp
    car.cpp
    car.h
    engine.h
    wheel.h)

include(GNUInstallDirs)
install(TARGETS h4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
