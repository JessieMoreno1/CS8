//
// Created by Jessie Mejia on 3/15/23.
//

#include "Typing.h"

Typing::Typing() {
    letter.setFont(Font::getFont(BEBAS));
    letter.setFillColor(sf::Color::Black);
    letter.setCharacterSize(37);
    //startPos = { 250,580};
}

//Typing::Typing(sf::Vector2f position) {
//    letter.setFont(Font::getFont(BEBAS));
//    letter.setFillColor(sf::Color::Black);
//    letter.setCharacterSize(37);
//    startPos = position;
//}

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

    if ((event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z && sf::Keyboard::LControl) && !string.empty())
    {
        string.pop_back();
    }

}

void Typing::setCharacterPosition() {

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

void Typing::setStartPos(sf::Vector2f position) {
    startPos = position;
}

float Typing::coordinateX() {
    if (!string.empty()) {
        sf::Text lastCharacter = string.back();
        return lastCharacter.getPosition().x + lastCharacter.getGlobalBounds().width + lastCharacter.getLetterSpacing();

    }
    else
    {
        return getStartPosX();
    }
}

float Typing::coordinateY() {
    return getStartPosY();
}

float Typing::getStartPosX() const {
    return startPos.x;
}

float Typing::getStartPosY() const {
    return startPos.y;
}

