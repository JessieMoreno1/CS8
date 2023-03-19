//
// Created by Jessie Mejia on 3/15/23.
//

#include "Typing.h"

Typing::Typing() {
    letter.setFont(Font::getFont(TALLFILM));
    letter.setFillColor(sf::Color::Black);
    letter.setCharacterSize(40);
    startPos = {255, 570};
}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (event.type == sf::Event::TextEntered)
    {
        if (event.text.unicode < 128)
        {
            std::cout << "ASCII character typed : " << static_cast<char>(event.text.unicode) << std::endl;
            letter.setString(static_cast<char>(event.text.unicode));
            string.push_back(letter);
            setCharacterPosition();
        }
    }
}

void Typing::setCharacterPosition() {
//    if (string.empty())
//    {
//        cursor.setPosition(startPos);
//    }

    if (string.size() == 1) {
        string.back().setPosition(startPos);
    }

    else {
        string.back().setPosition(std::prev(string.end(), 2)->getPosition().x + std::prev(string.end(), 2)->getGlobalBounds().width
                                  + std::prev(string.end(), 2)->getLetterSpacing(), startPos.y );
    }
}

void Typing::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    for (const Letter& letter : string) {
        target.draw(letter);
    }
}


