//
// Created by Jessie Mejia on 4/18/23.
//

#include "Game.h"

Game::Game() {
    dinosaur.setPosition({100,500});

    HiScore.setFont(Font::getFont(LGGOTHIC));
    HiScore.setString("HI");
    HiScore.setCharacterSize(30);
    HiScore.setPosition({800, 10});
    HiScore.setFillColor(sf::Color::Black);

}


void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(dinosaur);
    target.draw(HiScore);
}

void Game::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    dinosaur.addEventHandler(window, event);
}
