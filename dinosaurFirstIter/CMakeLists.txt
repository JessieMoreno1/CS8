cmake_minimum_required(VERSION 3.23)
project(dinosaurFirstIter)

set(CMAKE_CXX_STANDARD 14)

add_executable(dinosaurFirstIter main.cpp Animation.cpp Animation.h Texture.cpp Texture.h textureEnum.h Cactus.cpp Cactus.h Birds.cpp Birds.h PointSystem.cpp PointSystem.h Font.cpp Font.h fontsEnum.h startScreen.cpp startScreen.h states.cpp states.h statesEnum.h Dinosaur.cpp Dinosaur.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(dinosaurFirstIter sfml-graphics sfml-audio)