//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_TYPING_H
#define TEXTINPUTPROJECT_TYPING_H


#include <SFML/Graphics.hpp>
#include "Font.h"
#include "Cursor.h"
#include "Letter.h"
#include <list>
#include <iostream>

class Typing  : public sf::Drawable, sf::Transformable, public States  {
private:
    Letter letter;
    Cursor cursor;
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
