//
// Created by Jessie Mejia on 4/22/23.
//

#include "Cactus.h"

Cactus::Cactus() {
    texture.loadFromFile("images/mixed cactus.png");
    cactus.setTexture(texture);
}

void Cactus::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(cactus);
}

void Cactus::update() {
    float deltaTime = clock.restart().asSeconds();
    cactus.move(-100 * deltaTime, 0);
}

void Cactus::setPosition(sf::Vector2f position) {
    cactus.setPosition(position);
}




