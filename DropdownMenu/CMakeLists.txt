cmake_minimum_required(VERSION 3.23)
project(DropdownMenu)

set(CMAKE_CXX_STANDARD 14)

add_executable(DropdownMenu main.cpp Menu.cpp Menu.h ListItem.cpp ListItem.h States.cpp States.h MouseEvents.cpp MouseEvents.h List.cpp List.h Position.cpp Position.h statesEnum.h Fonts.cpp Fonts.h fontsEnum.h inputBox.cpp inputBox.h)

target_link_libraries(DropdownMenu sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)