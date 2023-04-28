//
// Created by Jessie Mejia on 4/27/23.
//

#include "Dinosaur.h"

Dinosaur::Dinosaur() {
    dinosaur.setScale({0.8, 0.8});
    dinosaur.setColor({103, 255, 51});
    dinosaur.setPosition(50, 525);
}

void Dinosaur::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(dinosaur);
}

sf::FloatRect Dinosaur::getGlobalBounds() {
    return dinosaur.getGlobalBounds();
}

void Dinosaur::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    dinosaur.animate();




}
