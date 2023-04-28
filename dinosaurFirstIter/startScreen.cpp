//
// Created by Jessie Mejia on 4/27/23.
//

#include "startScreen.h"

startScreen::startScreen() {
    init();
}

void startScreen::init() {
    creator.setString("May Thu Soe Moe");
    creator.setFont(Font::getFont(BEBAS));
    creator.setFillColor(sf::Color::Blue);
    creator.setCharacterSize(75);
    creator.setPosition({50,50});

    projectName.setString("Dinosaur Game");
    projectName.setFont(Font::getFont(BEBAS));
    projectName.setFillColor(sf::Color::Blue);
    projectName.setCharacterSize(75);
    projectName.setPosition({50,100});
}

void startScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(creator);
    target.draw(projectName);
}
