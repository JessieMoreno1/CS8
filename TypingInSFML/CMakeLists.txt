cmake_minimum_required(VERSION 3.23)
project(TypingInSFML)

set(CMAKE_CXX_STANDARD 14)

add_executable(TypingInSFML main.cpp Typing.cpp Typing.h Font.cpp Font.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(TypingInSFML sfml-graphics sfml-audio)
