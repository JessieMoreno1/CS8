cmake_minimum_required(VERSION 3.23)
project(DropShadow)

set(CMAKE_CXX_STANDARD 14)

add_executable(DropShadow main.cpp dropShadow.cpp dropShadow.h Font.cpp Font.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(DropShadow sfml-graphics sfml-audio)
