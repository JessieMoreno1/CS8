//
// Created by Jessie Mejia on 2/14/23.
//

#include "CalcButton.h"

CalcButton::CalcButton() : CalcButton("=", sf::Color::White, {255,149,0}) {

}

CalcButton::CalcButton(const std::string &text) : CalcButton(text, sf::Color::White, {80,80,80}) {

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
    this -> text.setCharacterSize(50);

    circle.setFillColor(backgroundColor);
    circle.setRadius(30);

    Helper::centerText(circle,this -> text);
}

sf::FloatRect CalcButton::getGlobalBounds() const  {
    return circle.getGlobalBounds();
}

// vector of CalcButton to hold all the buttons
std::vector<CalcButton> CalcButton::createButtons() {
    std::vector<CalcButton> buttons;

    //int maxButtons = 19;

    for (int i = 0; i < 10; ++i) {
        buttons.push_back(CalcButton(std::to_string(i)));
    }

    // operation buttons
    buttons.push_back(CalcButton("+", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton("-", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton("*", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton("/", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton("=", sf::Color::White, {255,149,0}));

    // other operations
    buttons.push_back(CalcButton("."));
    buttons.push_back(CalcButton("C", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton("(", sf::Color::White, {255,149,0}));
    buttons.push_back(CalcButton(")", sf::Color::White, {255,149,0}));

    return buttons;
};