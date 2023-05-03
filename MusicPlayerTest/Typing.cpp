//
// Created by Jessie Mejia on 5/2/23.
//

#include "Typing.h"

Typing::Typing() {
    letter.setFont(Font::getFont(BEBAS));
    letter.setFillColor(sf::Color::Black);
    letter.setCharacterSize(40);
    //startPos = { 250,580};
}

//Typing::Typing(sf::Vector2f position) {
//    letter.setFont(Font::getFont(BEBAS));
//    letter.setFillColor(sf::Color::Black);
//    letter.setCharacterSize(37);
//    startPos = position;
//}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event &event) {

    if (string.size() < 30)
    {
        if (event.type == sf::Event::TextEntered) {
            if (event.text.unicode < 128) {
                std::cout << "ASCII character typed : " << static_cast<char>(event.text.unicode) << std::endl;
                letter.setString(static_cast<char>(event.text.unicode));
                string.push_back(letter);
                setCharacterPosition();
            }
        }
    }

    if ((event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Z && sf::Keyboard::LControl) && !string.empty())
    {
        string.pop_back();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
    {
        if (!string.empty())
        {
            string.pop_back();
        }
    }
    isNumberical();

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

// needs to be completed again
void Typing::isSpecialWord() {
    std::string specialWords[] = {"int", "char", "double", "float"};

    for (auto iter = string.begin(); iter != string.end() ; ++iter) {
        auto current = iter -> getString()[0];


    }
}

void Typing::isNumberical() {
    for (auto iter = string.begin(); iter != string.end(); ++iter) {
        auto current = iter -> getString()[0];

        if (current >= '0' && current <= '9')
        {
            iter -> setFillColor(sf::Color::Red);
        }

    }
}

void Typing::isOperator() {

}

std::string Typing::getText() {
    std::string s;
    for (auto iter = string.begin(); iter != string.end(); ++iter) {
        s = iter -> getString();
    }
    return s;
}
