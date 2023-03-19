//
// Created by Jessie Mejia on 3/19/23.
//

#include "TypingInput.h"

TypingInput::TypingInput() {
    init();
}

void TypingInput::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(typing);
    target.draw(cursor);
    target.draw(textbox1);
    target.draw(textbox2);
    target.draw(button);
}

void TypingInput::init() {
    button.setPosition(250,800);
    button.setButtonText("Submit");

    textbox1.setPosition({250, 580});
    textbox2.setPosition({250, 690});
}

void TypingInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if (MouseEvents::isClick(textbox1, window))
    {
        cursor.toggleState(HIDDEN);
        std::cout << "Button Clicked" << std::endl;
    }

    if (MouseEvents::isClick(button, window))
    {
        std::cout << "Button Clicked" << std::endl;
    }
}

void TypingInput::update() {
    if (!checkState(HIDDEN))
    {
        cursor.update();
    }
}
