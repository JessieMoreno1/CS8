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
    expression.setPosition(300,100);
}

void CalcScreen::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(screen);
    window.draw(expression);
}

void CalcScreen::addToScreen(std::string number) {
    exp.append(number);
    expression.setString(exp);

    if (exp.size() > 1)
    {
        expression.move(-30,0);
    }
}

void CalcScreen::clear() {
    //exp.clear();
    //expression.setString(exp);
    expression.setString("");
}

std::string CalcScreen::getExpression() {
    return exp;
}

void CalcScreen::resetTextPos() {
    expression.setPosition(300,100);
}

std::string CalcScreen::expressionToRPN() {
    RPN rpn;

    std::string sya =  rpn.calculate(exp);
    expression.setString(sya);
    return sya;
}


