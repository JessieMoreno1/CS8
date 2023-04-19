cmake_minimum_required(VERSION 3.23)
project(autocorrect_heapsort)

set(CMAKE_CXX_STANDARD 14)

add_executable(autocorrect_heapsort main.cpp Application.cpp Application.h Textbox.cpp Textbox.h Cursor.cpp Cursor.h Font.cpp Font.h Button.cpp Button.h Helper.cpp Helper.h ImageRotation.cpp ImageRotation.h fontsEnum.h MouseEvents.cpp MouseEvents.h Typing.cpp Typing.h Letter.cpp Letter.h States.cpp States.h StatesEnum.h TypingInput.cpp TypingInput.h FileReader.cpp FileReader.h Word.cpp Word.h WordSuggestion.cpp WordSuggestion.h Suggester.cpp Suggester.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(autocorrect_heapsort sfml-graphics sfml-audio)
