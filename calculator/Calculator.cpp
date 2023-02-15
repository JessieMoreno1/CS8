//
// Created by Jessie Mejia on 2/14/23.
//

#include "Calculator.h"

void Calculator::run() {
        sf::RenderWindow window ({400,800,30}, "Calculator");

        /* ----- Calculator Functions */
        CalcButton equal;
        equal.setPosition({300,650});

        CalcButton plus("+", sf::Color::White, {255,149,0});
        Helper::top(equal, plus);
        //plus.setPosition({300,575});

        CalcButton minus("-", sf::Color::White, {255,149,0});
        minus.setPosition({300,500});

        CalcButton multiplication("x", sf::Color::White, {255,149,0});
        multiplication.setPosition({300,425});

        CalcButton division("/", sf::Color::White, {255,149,0});
        division.setPosition({300,350});

        CalcButton decimal(".", sf::Color::White, {80,80,80});
        decimal.setPosition({225,650});

        CalcButton clear("c", sf::Color::Black, {212,212,210});
        clear.setPosition({25,350});

        CalcButton openParenthesis("(", sf::Color::Black, {212,212,210});
        openParenthesis.setPosition({100,350});

        CalcButton closeParenthesis(")", sf::Color::Black, {212,212,210});
        closeParenthesis.setPosition({225,350});

        /* ----- Calculator Functions */

        /* ----- Calculator Numbers */
        CalcButton nine("9", sf::Color::White, {80,80,80});
        nine.setPosition({225,425});

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (sf::Event::Closed == event.type)
                {
                    window.close();
                }

            }
            window.clear();
            window.draw(closeParenthesis);
            window.draw(openParenthesis);
            window.draw(clear);
            window.draw(decimal);
            window.draw(division);
            window.draw(multiplication);
            window.draw(minus);
            window.draw(plus);
            window.draw(equal);

            window.draw(nine);

            window.display();
        }
}

