//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_TYPING_H
#define TEXTINPUTPROJECT_TYPING_H


#include <SFML/Graphics.hpp>
#include "Font.h"
#include <list>
#include <iostream>
#include "Letter.h"

class Typing  : public sf::Drawable, sf::Transformable  {
private:
    Letter letter;
    std::list<Letter> string;

    int count = 0;
    sf::Vector2f startPos;
public:
    Typing();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void setCharacterPosition();
protected:
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

};


#endif //TEXTINPUTPROJECT_TYPING_H
