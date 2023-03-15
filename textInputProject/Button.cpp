//
// Created by Jessie Mejia on 3/15/23.
//

#include "Button.h"

Button::Button() {
    sf::Color b = sf::Color::Blue;
    b.a = 75;
    button.setFillColor(b);
    button.setSize({400,50});
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(button);
}

void Button::setPosition(float x, float y) {
    button.setPosition({x,y});
}
