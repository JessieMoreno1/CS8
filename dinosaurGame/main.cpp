#include <iostream>
#include "Game.h"
#include "StartScreen.h"
#include "GameOverScreen.h"
#include "Animation.h"

int main() {

    sf::RenderWindow window({1080, 720, 32}, "Dinosaur Game");

    StartScreen startScreen;

    // game is hidden at the beginning
    Game game;
    game.enableState(HIDDEN);

    GameOverScreen gameOverScreen;
    gameOverScreen.enableState(HIDDEN);

    //Animation(cactus);

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
                game.disableState(HIDDEN);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            {
                startScreen.enableState(HIDDEN);
                game.enableState(HIDDEN);
                gameOverScreen.disableState(HIDDEN);
            }
            // other event handlers here
            float deltaTime = clock.restart().asSeconds();
            //cactus.move(-100 * deltaTime, 0);

        }
        game.addEventHandler(window, event);
        window.clear(sf::Color::White);
        window.draw(startScreen);
        window.draw(gameOverScreen);
        window.draw(game);
        window.display();
    }
}
