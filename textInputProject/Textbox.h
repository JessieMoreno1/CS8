//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_TEXTBOX_H
#define TEXTINPUTPROJECT_TEXTBOX_H

#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include <iostream>

class Textbox : public sf::Drawable {
private:
    sf::RectangleShape textbox;
public:
    Textbox();
    void setPosition(int x, int y);
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_TEXTBOX_H
