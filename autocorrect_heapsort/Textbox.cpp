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

}

void Textbox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(textbox);
}

void Textbox::setPosition(sf::Vector2f position) {
    textbox.setPosition(position);
}

sf::FloatRect Textbox::getGlobalBounds() const {
    return getTransform().transformRect(textbox.getGlobalBounds());
}
