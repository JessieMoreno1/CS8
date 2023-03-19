//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_CURSOR_H
#define TEXTINPUTPROJECT_CURSOR_H

#include "SFML/Graphics.hpp"
#include "States.h"
#include "Font.h"
#include "Helper.h"

class Cursor : public sf::Drawable, public States, public sf::Transformable {
private:
    sf::Clock clock;
    sf::Text cursorText;
public:
    Cursor();
    void update();
    void setPosition(sf::Vector2f position);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //TEXTINPUTPROJECT_CURSOR_H
