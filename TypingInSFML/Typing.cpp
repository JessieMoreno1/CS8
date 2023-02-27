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

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event& event) {


    if(event.type == sf::Event::KeyPressed) {
        tempText.push_back( event.key.code + 'A' <= 'Z' && event.key.code + 'A' >= 'A' ? event.key.code + 'A' : ' ');
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        tempText.pop_back();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && !tempText.empty())
    {
        tempText.pop_back();
    }

}

void Typing::update() {
    text.setString(tempText);
}

void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
}


