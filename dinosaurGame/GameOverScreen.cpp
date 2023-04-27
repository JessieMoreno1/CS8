//
// Created by Jessie Mejia on 4/23/23.
//

#include "GameOverScreen.h"

GameOverScreen::GameOverScreen() {
    gameoverTexture.loadFromFile("images/Game Over.png");
    gameoverText.setTexture(gameoverTexture);

    gameoverText.setPosition({350,300});

    restartTexture.loadFromFile("images/Game Over button.png");
    restart.setTexture(restartTexture);

    restart.setPosition({500, 350});
}

void GameOverScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(gameoverText);
        target.draw(restart);
    }
}

void GameOverScreen::addEventHandler(sf::RenderWindow &window, sf::Event &event) {

}
