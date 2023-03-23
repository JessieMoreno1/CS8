//
// Created by Jessie Mejia on 2/28/23.
//

#include "MultiText.h"

MultiText::MultiText() {
    letter.setFont(Font::getFont());
    letter.setFillColor({72,169,166});
    letter.setCharacterSize(60);
    startPos = {50, 150};
}

void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (event.type == sf::Event::TextEntered)
    {
        if (event.text.unicode < 128)
        {
            std::cout << "ASCII character typed : " << static_cast<char>(event.text.unicode) << std::endl;
            letter.setString(static_cast<char>(event.text.unicode));
            string.push_back(letter);
            setCharacterPosition();
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) && !string.empty())
        {
            string.pop_back();
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
        {
            string.pop_back();
        }
    }
}

void MultiText::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    for (const Letter& letter : string) {
        target.draw(letter);
    }

}

void MultiText::setCharacterPosition() {
    if (string.size() == 1) {
        string.back().setPosition(startPos);
    }
    else {
        string.back().setPosition(std::prev(string.end(), 2)->getPosition().x + std::prev(string.end(), 2)->getGlobalBounds().width
                                     + std::prev(string.end(), 2)->getLetterSpacing(), startPos.y );
    }
}

std::string MultiText::getString() {

}

