//
// Created by Jessie Mejia on 3/15/23.
//

#include "Button.h"

Button::Button() {
    sf::Color b = sf::Color::Blue;
    b.a = 75;
    button.setFillColor(b);
    button.setSize({400,50});

    buttonText.setFillColor(sf::Color::Black);
    buttonText.setFont(Font::getFont(BEBAS));
    buttonText.setCharacterSize(30);
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(button);
    target.draw(buttonText);
}

void Button::setPosition(float x, float y) {
    button.setPosition({x,y});
}

void Button::setButtonText(std::string text) {
    buttonText.setString(text);
    Helper::center(buttonText, button);
    buttonText.move(0,-10);
}

void Button::setButtonTextColor(sf::Color color) {
    buttonText.setFillColor(color);
}
