//
// Created by Jessie Mejia on 4/19/23.
//

#include "Dinosaur.h"

Dinosaur::Dinosaur() {
    dinosaur.setScale(.75f,.75f);
}

void Dinosaur::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    dinosaur.animate();
}

void Dinosaur::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(dinosaur);
}

void Dinosaur::setPosition(sf::Vector2f position) {
    dinosaur.setPosition(position);
}
