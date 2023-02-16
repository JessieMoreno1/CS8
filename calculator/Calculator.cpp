//
// Created by Jessie Mejia on 2/14/23.
//

#include "Calculator.h"


void Calculator::run() {
        sf::RenderWindow window ({400,800,30}, "Calculator");

        // Create the buttons
        std::vector<CalcButton> buttons = CalcButton::createButtons();

        // Use the buttons
        for (int i = 0; i < buttons.size(); i++) {
            CalcButton button = buttons[i];
        }

        // position 2 and 1
        buttons.at(2).setPosition({30,500});
        Helper::center(buttons.at(1), buttons.at(2));
        Helper::right(buttons.at(2),buttons.at(1), 30);

        // position 5 and 4
        buttons.at(5).setPosition({30,425});
        Helper::center(buttons.at(4), buttons.at(5));
        Helper::right(buttons.at(5), buttons.at(4), 30);

        // position 7 and 8
        buttons.at(7).setPosition({30, 350});
        Helper::center(buttons.at(8), buttons.at(7));
        Helper::right(buttons.at(8), buttons.at(7), 30);

        // position 6 and 9
        buttons.at(9).setPosition({210, 350});
        Helper::center(buttons.at(6), buttons.at(9));
        Helper::bottom(buttons.at(6),buttons.at(9), 15);

        // position 3 and .
        buttons.at(3).setPosition({210,500});
        Helper::center(buttons.at(15), buttons.at(3));
        Helper::bottom(buttons.at(15),buttons.at(3), 15);

        // position C and left parenthesis
        buttons.at(16).setPosition({30, 275});
        Helper::center(buttons.at(17), buttons.at(16));
        Helper::right(buttons.at(17), buttons.at(16), 30);

        // position parenthesis
        Helper::center(buttons.at(18), buttons.at(17));
        Helper::right(buttons.at(18),buttons.at(17), 30);

        // position zero
        Helper::center(buttons.at(0), buttons.at(15));
        Helper::left(buttons.at(0), buttons.at(15), 30);

        // position division
        Helper::center(buttons.at(13), buttons.at(18));
        Helper::right(buttons.at(13), buttons.at(18), 30);

        // position multiplication

        //  position subtraction
        // position addition
        //Helper::center(buttons.at(10), buttons.at(14));
        //Helper::top(buttons.at(10), buttons.at(14), 15);

    // position equal sign // the first parameter is the one you want to get close to, the second is the target that will be moved





    // /* ----- Calculator Functions */
       // CalcButton equal;
       //
       //
       // CalcButton plus("+", sf::Color::White, {255,149,0});
       // plus.setPosition({300,650});
       //
       // Helper::center(equal, plus);
       // Helper::top(plus, equal, 10);
       // //plus.setPosition({300,575});
       //
       // CalcButton minus("-", sf::Color::White, {255,149,0});
       // minus.setPosition({300,500});
       //
       // CalcButton multiplication("x", sf::Color::White, {255,149,0});
       // multiplication.setPosition({300,425});
       //
       // CalcButton division("/", sf::Color::White, {255,149,0});
       // division.setPosition({300,350});
       //
       // CalcButton decimal(".", sf::Color::White, {80,80,80});
       // decimal.setPosition({225,650});
       //
       // CalcButton clear("c", sf::Color::Black, {212,212,210});
       // clear.setPosition({25,350});
       //
       // CalcButton openParenthesis("(", sf::Color::Black, {212,212,210});
       // openParenthesis.setPosition({100,350});
       //
       // CalcButton closeParenthesis(")", sf::Color::Black, {212,212,210});
       // closeParenthesis.setPosition({225,350});
       //
       // /* ----- Calculator Functions */
       //
       // /* ----- Calculator Numbers */
       // CalcButton nine("9", sf::Color::White, {80,80,80});
       // nine.setPosition({225,425});

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

            //window.draw(closeParenthesis);
            //window.draw(openParenthesis);
            //window.draw(clear);
            //window.draw(decimal);
            //window.draw(division);
            //window.draw(multiplication);
            //window.draw(minus);
            //window.draw(plus);
            //window.draw(equal);

           // window.draw(nine);
            for (int i = 0; i < buttons.size(); ++i) {
                window.draw(buttons[i]);
            }
            window.display();
        }
}


