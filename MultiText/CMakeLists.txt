cmake_minimum_required(VERSION 3.23)
project(MultiText)

set(CMAKE_CXX_STANDARD 14)

add_executable(MultiText main.cpp MultiText.cpp MultiText.h Letter.cpp Letter.h Font.cpp Font.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(MultiText sfml-graphics sfml-audio)