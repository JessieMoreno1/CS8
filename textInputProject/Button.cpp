//
// Created by Jessie Mejia on 3/15/23.
//

#include "Button.h"

Button::Button() {
    button.setFillColor(sf::Color::Blue);
    button.setSize({75,50});
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(button);
}

void Button::setPosition(float x, float y) {
    button.setPosition({x,y});
}
