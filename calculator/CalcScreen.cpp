//
// Created by Jessie Mejia on 2/14/23.
//

#include "CalcScreen.h"

CalcScreen::CalcScreen() {
    screen.setSize({400,100});
    sf::Color transparentBlue = {18,13,49};
    transparentBlue.a = 0;
    screen.setFillColor(transparentBlue);
    screen.setPosition({0,100});

    expression.setFillColor(sf::Color::White);
    expression.setFont(Font::getFont());
    expression.setCharacterSize(50);
    expression.setPosition(100,100);
}

void CalcScreen::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(screen);
    window.draw(expression);
}

void CalcScreen::addToScreen(std::string number) {
    exp.append(number);
    expression.setString(exp);
}
