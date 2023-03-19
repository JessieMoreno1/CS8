//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_TEXTBOX_H
#define TEXTINPUTPROJECT_TEXTBOX_H

#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include "States.h"
#include "Cursor.h"
#include "Typing.h"
#include <iostream>

class Textbox : public sf::Drawable , public sf::Transformable, public States {
private:
    sf::RectangleShape textbox;
public:
    Textbox();
    sf::FloatRect getGlobalBounds() const;
    void setPosition(sf::Vector2f position);
protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_TEXTBOX_H
