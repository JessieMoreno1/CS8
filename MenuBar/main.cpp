#include <iostream>
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "MenuBar.h"

int main() {
    sf::RenderWindow window ({1280,720, 32}, "test");
    window.setFramerateLimit(60);

    //Menu m = {"file", "open", "Resize", "save", "close"};
    MenuBar mb;

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            mb.eventHandler(window, event);
        }
        window.clear();
        window.draw(mb);
        window.display();
    }


    return 0;
}
