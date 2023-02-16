//
// Created by Jessie Mejia on 2/14/23.
//

#include "Calculator.h"

void Calculator::run() {
        sf::RenderWindow window ({400,800,30}, "Calculator");

        // Create the buttons
        std::vector<CalcButton> buttons = CalcButton::createButtons();

        // create the screen that will display the equation
        CalcScreen screen;

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
        Helper::center(buttons.at(12), buttons.at(13));
        Helper::bottom(buttons.at(12), buttons.at(13), 15);

        //  position subtraction
        Helper::center(buttons.at(11), buttons.at(12));
        Helper::bottom(buttons.at(11), buttons.at(12), 15);

        // position addition
        Helper::center(buttons.at(10), buttons.at(11));
        Helper::bottom(buttons.at(10), buttons.at(11), 15);

        // position equal sign // the first parameter is the one you want to get close to, the second is the target that will be moved
        Helper::center(buttons.at(14), buttons.at(10));
        Helper::bottom(buttons.at(14), buttons.at(10), 15);


        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (sf::Event::Closed == event.type)
                {
                    window.close();
                }

                for (int i = 0; i <= 18; i++) {
                    if (MouseEvents::isHover(buttons.at(i), window))
                    {
                        buttons.at(i).setTextColor(sf::Color::Magenta);
                    }
                    else
                    {
                        buttons.at(i).setTextColor(sf::Color::White);
                    }
                }

                for (int i = 0; i < 10; i++) {
                    if (MouseEvents::isClick(buttons.at(i), window)) {
                        std::cout << " Clicked on button : " << i << std::endl;
                        screen.addToScreen(std::to_string(i));
                    }
                }

                if (MouseEvents::isClick(buttons.at(10), window)) // addition
                {
                    screen.addToScreen("+");
                }
                if (MouseEvents::isClick(buttons.at(11), window)) // minus button
                {
                    screen.addToScreen("-");
                }
                if (MouseEvents::isClick(buttons.at(12), window)) // multiplication
                {
                    screen.addToScreen("*");
                }
                if (MouseEvents::isClick(buttons.at(13), window)) // division
                {
                    screen.addToScreen("/");
                }
                if (MouseEvents::isClick(buttons.at(14), window)) // multiplication
                {
                    screen.addToScreen("=");
                }
                if (MouseEvents::isClick(buttons.at(15), window)) // decimal
                {
                    screen.addToScreen(".");
                }
                if (MouseEvents::isClick(buttons.at(16), window)) // all clear
                {
                    std::cout << "All clear" << std::endl;
                    screen.clear();
                }
                if (MouseEvents::isClick(buttons.at(17), window)) // left parenthesis
                {
                    screen.addToScreen("(");
                }
                if (MouseEvents::isClick(buttons.at(18), window)) // right parenthesis
                {
                    screen.addToScreen(")");
                }



            }
            sf::Color transparentBlue = {48,47,77};
            transparentBlue.a = 75;
            window.clear(transparentBlue);
            window.draw(screen);

            for (int i = 0; i < buttons.size(); ++i) {
                window.draw(buttons[i]);
            }
            window.display();
        }
}



