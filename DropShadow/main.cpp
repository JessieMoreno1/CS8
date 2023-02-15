#include <iostream>
#include "dropShadow.h"

int main() {
    dropShadow d;
    sf::RenderWindow window ({720,420,30}, "Reflection");

    while(window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (sf::Event::Closed == event.type)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(d);
        window.display();
    }

    return 0;
}
