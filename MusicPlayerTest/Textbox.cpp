//
// Created by Jessie Mejia on 5/2/23.
//

#include "Textbox.h"

Textbox::Textbox() {
    textbox.setSize({500,50});
    textbox.setFillColor(sf::Color::White);
    textbox.setPosition({200,300});
    textbox.setOutlineThickness(1);
    textbox.setOutlineColor(sf::Color::Black);

    cursor.enableState(HIDDEN);
    cursor.setPosition({1200,25});
    typing.setStartPos({1200,25});

}

sf::FloatRect Textbox::getGlobalBounds() const {
    return getTransform().transformRect(textbox.getGlobalBounds());
}

void Textbox::setPosition(sf::Vector2f position) {
    textbox.setPosition(position);
    //typing.setStartPos(position);
}

void Textbox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {

        target.draw(textbox);
        target.draw(cursor);
        target.draw(typing);

    }
}

void Textbox::eventHandler(sf::RenderWindow &window, sf::Event event) {
    cursor.setPosition(typing.coordinateX(),typing.coordinateY());


    typing.addEventHandler(window, event);
    cursor.update();

    if (MouseEvents::isClick(textbox, window))
    {
        std::cout << "Textbox clicked" << std::endl;
        cursor.disableState(HIDDEN);
    }
}

void Textbox::update() {
    if (!checkState(HIDDEN))
    {
        cursor.setPosition(typing.coordinateX(),typing.coordinateY()); // in charge of positioning the cursor for
        cursor.update();
    }
}
