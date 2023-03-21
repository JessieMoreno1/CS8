// random comment for no reason
#include <SFML/Graphics.hpp>
#include "Menu.h"
int main() {
    sf::RenderWindow window ({1280,720, 32}, "test");
    window.setFramerateLimit(60);

    Menu m = {"file", "open", "Resize", "save", "close"};

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            m.eventHandler(window, event);
        }
        window.clear();
        window.draw(m);
        window.display();
    }


    return 0;
}
