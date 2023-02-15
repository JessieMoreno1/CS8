cmake_minimum_required(VERSION 3.23)
project(calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(calculator main.cpp Calculator.cpp Calculator.h CalcScreen.cpp CalcScreen.h CalcButton.cpp CalcButton.h Font.cpp Font.h Helper.cpp Helper.h  Application.cpp Application.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(calculator sfml-graphics sfml-audio)
