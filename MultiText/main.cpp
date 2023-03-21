#include <iostream>
#include <SFML/Graphics.hpp>
#include "MultiText.h"

int main() {
    MultiText m;
    sf::RenderWindow window({720,420,32}, "");
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            m.addEventHandler(window, event);

        }
        window.clear();
        window.draw(m);
        window.display();
    }
    return 0;
}
