//
// Created by Jessie Mejia on 2/28/23.
//

#ifndef MULTITEXT_MULTITEXT_H
#define MULTITEXT_MULTITEXT_H

#include "Letter.h"
#include <SFML/Graphics.hpp>
#include "Font.h"
#include <list>
#include <iostream>


class MultiText : public sf::Drawable, sf::Transformable {
private:
    Letter letter;
    std::list<Letter> string;

    int count = 0;
    sf::Vector2f startPos;
public:
    MultiText();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void setCharacterPosition();
protected:
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

};


#endif //MULTITEXT_MULTITEXT_H
