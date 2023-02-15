//
// Created by Jessie Mejia on 2/14/23.
//

#include "CalcButton.h"

CalcButton::CalcButton() : CalcButton("=", sf::Color::White, {255,149,0}) {

}

CalcButton::CalcButton(const std::string &text) : CalcButton(text, sf::Color::White, {212,149,0}) {

}

CalcButton::CalcButton(const std::string &text, const sf::Color &color, const sf::Color& backgroundColor) {
    init(text, color, backgroundColor);
}

void CalcButton::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);
    window.draw(text);
}

void CalcButton::setBackgroundColor(const sf::Color &color) {
    circle.setFillColor(color);
}

void CalcButton::setTextColor(const sf::Color &color) {
    text.setFillColor(color);
}

void CalcButton::setText(const std::string &text) {
    this -> text.setString(text);
}

const std::string &CalcButton::getText() const {
    return text.getString();
}

void CalcButton::setPosition(sf::Vector2f position) {
    circle.setPosition(position);
    Helper::centerText(circle,this -> text);

}

void CalcButton::setSize(float size) {
    circle.setRadius(size);
}

void CalcButton::init(const std::string& text, const sf::Color &textColor, const sf::Color &backgroundColor) {
    this -> text.setFont(Font::getFont());
    this -> text.setString(text);
    this -> text.setFillColor(textColor);
    this -> text.setCharacterSize(70);

    circle.setFillColor(backgroundColor);
    circle.setRadius(30);

    Helper::centerText(circle,this -> text);
}

sf::FloatRect CalcButton::getGlobalBounds() {
    circle.getGlobalBounds();
};