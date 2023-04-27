//
// Created by Jessie Mejia on 4/18/23.
//

#include "Game.h"

Game::Game() {
    dinosaur.setPosition({100,650});
    cactus.setPosition({600, 625});

    HiScore.setFont(Font::getFont(LGGOTHIC));
    HiScore.setString("HI");
    HiScore.setCharacterSize(30);
    HiScore.setPosition({800, 10});
    HiScore.setFillColor(sf::Color::Black);

    Points.setFont(Font::getFont(LGGOTHIC));
    Points.setString("");
    Points.setCharacterSize(35);
    Points.setPosition({1000, 10});
    Points.setFillColor(sf::Color::Black);

}


void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(dinosaur);
        target.draw(HiScore);
        target.draw(Points);
        target.draw(cactus);
        target.draw(ducking);
    }

}

void Game::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    dinosaur.addEventHandler(window, event);
    update();

    float deltaTime = clock.restart().asSeconds();
    cactus.move(-100 * deltaTime, 0);
//    while (window.isOpen())
//    {
//        update();
//        sleep(50);
//    }

}

void Game::update() {

    currentScore += 1;
    Points.setString(std::to_string(currentScore));
}
