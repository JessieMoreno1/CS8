//
// Created by Jessie Mejia on 2/21/23.
//

#include "Typing.h"

Typing::Typing() {

    text.setFont(Font::getFont());
    text.setFillColor({29, 185, 84});
    text.setCharacterSize(100);
    text.setPosition({200,100});
}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event) {

    while (window.pollEvent(event))
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
        {
            tempText.pop_back();
        }
    }
}

void Typing::update() {
    text.setString(tempText);
}

void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
}

