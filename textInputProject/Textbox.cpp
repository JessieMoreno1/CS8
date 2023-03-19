//
// Created by Jessie Mejia on 3/15/23.
//

#include "Textbox.h"

Textbox::Textbox() {
    textbox.setSize({400,40});
    textbox.setFillColor(sf::Color::White);
    textbox.setPosition({100,300});
    textbox.setOutlineThickness(1);
    textbox.setOutlineColor(sf::Color::Black);

    //cursor.setPosition({100,500});
}

void Textbox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(textbox);
    //target.draw(cursor);
}

void Textbox::setPosition(sf::Vector2f position) {
    textbox.setPosition(position);
}

void Textbox::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (MouseEvents::isClick(textbox, window))
    {
//        if (!checkState(HIDDEN))
//        {
//            cursor.update();
//        }
    }
}

sf::FloatRect Textbox::getGlobalBounds() const {
    //return textbox.getGlobalBounds();
    return getTransform().transformRect(textbox.getGlobalBounds());
}
