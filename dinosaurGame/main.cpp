#include <iostream>
#include "Game.h"
#include "StartScreen.h"
int main() {
    sf::RenderWindow window({1080, 720, 32}, "Dinosaur Game");

    StartScreen startScreen;
    Game game;

    while (window.isOpen())
    {
        sf::Event event;


        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {
                startScreen.enableState(HIDDEN);
            }
            // other event handlers here
        }
        game.addEventHandler(window, event);
        window.clear(sf::Color::White);
        window.draw(startScreen);
        window.draw(game);
        window.display();
    }
}
