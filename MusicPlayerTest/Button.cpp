//
// Created by Jessie Mejia on 4/20/23.
//

#include "Button.h"

void Button::setRadius(int radius) {
    button.setRadius(radius);
}

void Button::setPosition(sf::Vector2f position) {
    button.setPosition(position);
    Helper::center(this->sprite, button);

}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(button);
    target.draw(sprite);
}

Button::Button() {
    button.setRadius(70);
    button.setFillColor(sf::Color::White);
}




sf::FloatRect Button::getGlobalBounds() const {
    return button.getGlobalBounds();
}

void Button::setSprite(std::string filename) {
    texture.loadFromFile(filename);
    sprite.setTexture(texture);

    Helper::center(sprite, button);
}

void Button::setFillColor(sf::Color color) {
    button.setFillColor(color);
}

