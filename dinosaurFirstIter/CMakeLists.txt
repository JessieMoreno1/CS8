cmake_minimum_required(VERSION 3.23)
project(dinosaurFirstIter)

set(CMAKE_CXX_STANDARD 14)

add_executable(dinosaurFirstIter main.cpp Animation.cpp Animation.h Texture.cpp Texture.h textureEnum.h Cactus.cpp Cactus.h Birds.cpp Birds.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(dinosaurFirstIter sfml-graphics sfml-audio)