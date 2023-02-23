#include <iostream>
#include <SFML/Graphics.hpp>
#include "Typing.h"

int main() {


    sf::RenderWindow window({720,420,32}, "");

//    Typing typing;

    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
                std::cout << std::string (1,event.key.code + 'A' <= 'Z' && event.key.code + 'A' >= 'A' ?event.key.code + 'A' : ' ');

//            typing.addEventHandler(window, event);
        }
//        typing.update();

        window.clear();
//        window.draw(typing);
        window.display();
    }
}
