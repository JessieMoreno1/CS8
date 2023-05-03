cmake_minimum_required(VERSION 3.23)
project(MusicPlayerTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(MusicPlayerTest main.cpp SongCreator.cpp SongCreator.h MusicPlayer.cpp MusicPlayer.h Button.cpp Button.h MouseEvents.cpp MouseEvents.h Helper.cpp Helper.h Font.cpp Font.h fontsEnum.h List.cpp List.h ListItem.cpp ListItem.h Menu.cpp Menu.h MenuBar.cpp MenuBar.h Position.cpp Position.h States.cpp States.h statesEnum.h searchButton.cpp searchButton.h Typing.cpp Typing.h Cursor.cpp Cursor.h Letter.cpp Letter.h Textbox.cpp Textbox.h Textures.cpp Textures.h TextureEnums.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(MusicPlayerTest sfml-graphics sfml-audio)
