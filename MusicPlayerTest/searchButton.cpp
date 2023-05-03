//
// Created by Jessie Mejia on 5/2/23.
//

#include "searchButton.h"

searchButton::searchButton() {
    button.setSize( {200.f,50.f});
    button.setFillColor(sf::Color::Transparent);
    button.setPosition({1400,25});

    buttonText.setString("search");
    buttonText.setFont(Font::getFont(BEBAS));
    buttonText.setFillColor(sf::Color::White);

    Position::centerText(button, buttonText);

    textbox.enableState(HIDDEN);

}

void searchButton::eventHandler(sf::RenderWindow &window, sf::Event event) {
    textbox.eventHandler(window, event);

    if (MouseEvents::isHover(button, window))
    {
        button.setFillColor(sf::Color::White);
        buttonText.setFillColor({139,55,55});
    }
    else
    {
        button.setFillColor(sf::Color::Transparent);
        buttonText.setFillColor(sf::Color::White);
    }

    if (MouseEvents::isClick(button, window))
    {
        textbox.disableState(HIDDEN);
        textbox.setPosition({1200,25});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        textbox.enableState(HIDDEN);
    }



}

sf::FloatRect searchButton::getGlobalBounds() const {
    return button.getGlobalBounds();
}

void searchButton::setPosition(sf::Vector2f position) {
    button.setPosition(position);
    Position::centerText(button, buttonText);
}

void searchButton::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(button);
        target.draw(buttonText);
        target.draw(textbox);
    }


}

