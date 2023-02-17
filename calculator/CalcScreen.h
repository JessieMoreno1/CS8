//
// Created by Jessie Mejia on 2/14/23.
//

#ifndef CALCULATOR_CALCSCREEN_H
#define CALCULATOR_CALCSCREEN_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Font.h"
#include "RPN.h"
class CalcScreen : public sf::Drawable {
private:
    sf::RectangleShape screen;
    std::string exp;
    sf::Text expression;
public:
    CalcScreen();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void addToScreen(std::string number);
    void clear();
    std::string getExpression();
    void resetTextPos();
    std::string expressionToRPN();
};


#endif //CALCULATOR_CALCSCREEN_H
