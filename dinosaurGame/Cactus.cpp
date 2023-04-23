//
// Created by Jessie Mejia on 4/22/23.
//

#include "Cactus.h"

Cactus::Cactus() {
    texture.loadFromFile("images/big cactus.png");
    cactus.setTexture(texture);
}

void Cactus::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(cactus);
}




