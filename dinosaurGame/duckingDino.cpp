//
// Created by Jessie Mejia on 4/26/23.
//

#include "duckingDino.h"

duckingDino::duckingDino() {
    duckingDinosaur.setup(Texture::getTexture(DINOCRAWL),1, 2);
    duckingDinosaur.setScale(.75,.75);
}

void duckingDino::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        duckingDinosaur.animate();
    }
}

void duckingDino::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(duckingDinosaur);
}
