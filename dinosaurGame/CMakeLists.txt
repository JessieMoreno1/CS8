cmake_minimum_required(VERSION 3.23)
project(dinosaurGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(dinosaurGame main.cpp Animation.cpp Animation.h states.cpp states.h Texture.cpp Texture.h statesEnum.h textureEnum.h Game.cpp Game.h Ground.cpp Ground.h Dinosaur.cpp Dinosaur.h StartScreen.cpp StartScreen.h Font.cpp Font.h fontsEnum.h Cactus.cpp Cactus.h GameOverScreen.cpp GameOverScreen.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(dinosaurGame sfml-graphics sfml-audio)