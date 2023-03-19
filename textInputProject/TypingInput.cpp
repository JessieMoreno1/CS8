//
// Created by Jessie Mejia on 3/19/23.
//

#include "TypingInput.h"

TypingInput::TypingInput() {
    init();
    cursor1.enableState(HIDDEN);
    cursor2.enableState(HIDDEN);
}

void TypingInput::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(textbox1);
    target.draw(textbox2);

    // below the textbox in this function means it is drawn on top of the textbox
    target.draw(cursor1);
    target.draw(cursor2);

    target.draw(button);

    target.draw(typing1);
    target.draw(typing2);

}

void TypingInput::init() {
    button.setPosition(250,800);
    button.setButtonText("Submit");

    textbox1.setPosition({250, 580});
    textbox2.setPosition({250, 690});

    cursor1.setPosition({250,580});
    cursor2.setPosition({250,690});

}

void TypingInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    if (MouseEvents::isClick(textbox1, window))
    {
        cursor1.disableState(HIDDEN);
        cursor2.enableState(HIDDEN);

        typing1.addEventHandler(window, event);
    }
    else if (MouseEvents::isClick(textbox2, window))
    {
        cursor1.enableState(HIDDEN);
        cursor2.disableState(HIDDEN);

        typing2.addEventHandler(window, event);
    }

    if (MouseEvents::isHover(button, window))
    {
        button.setButtonTextColor(sf::Color::White);
    }
    else
    {
        button.setButtonTextColor(sf::Color::Black);
    }


}

void TypingInput::update() {
    if (!checkState(HIDDEN))
    {
        cursor1.update();
        cursor2.update();
    }
}
