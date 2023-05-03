//
// Created by Jessie Mejia on 5/2/23.
//

#ifndef MUSICPLAYERTEST_CURSOR_H
#define MUSICPLAYERTEST_CURSOR_H

#include "SFML/Graphics.hpp"
#include "States.h"
#include "Font.h"
#include "Helper.h"

class Cursor  : public sf::Drawable, public States, public sf::Transformable {
private:
    sf::Clock clock;
    sf::Text cursorText;
public:
    Cursor();
    void update();
    void setPosition(sf::Vector2f position);
    void setPosition(float x, float y);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //MUSICPLAYERTEST_CURSOR_H
