//
// Created by Jessie Mejia on 3/15/23.
//

#include "Cursor.h"

Cursor::Cursor() {
    cursorText.setFont(Font::getFont(BEBAS));
    cursorText.setFillColor(sf::Color::Blue);
    cursorText.setCharacterSize(40);
}

void Cursor::update() {
    // takes care of the blinking aspect of the cursor
    if (!checkState(HIDDEN))
    {
        if (clock.getElapsedTime().asMilliseconds() > 500)
        {
            cursorText.setString(' ');
        }
        if (clock.getElapsedTime().asMilliseconds() > 1000)
        {
            cursorText.setString('|');
            clock.restart();
        }

    }
}

void Cursor::setPosition(sf::Vector2f position) {
    cursorText.setPosition(position);
}

void Cursor::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    if (!checkState(HIDDEN))
    {
        target.draw(cursorText, states);
    }
}
