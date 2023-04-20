cmake_minimum_required(VERSION 3.23)
project(MusicPlayerTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(MusicPlayerTest main.cpp SongCreator.cpp SongCreator.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(MusicPlayerTest sfml-graphics sfml-audio)
