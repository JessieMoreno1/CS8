//
// Created by Jessie Mejia on 5/2/23.
//

#ifndef MUSICPLAYERTEST_TEXTBOX_H
#define MUSICPLAYERTEST_TEXTBOX_H

#include "States.h"
#include <SFML/Graphics.hpp>
#include "Typing.h"
#include "Cursor.h"
#include "MouseEvents.h"

class Textbox : public sf::Drawable , public sf::Transformable, public States {
private:
    Typing typing;
    Cursor cursor;
    sf::RectangleShape textbox;
public:
    Textbox();
    sf::FloatRect getGlobalBounds() const;
    void setPosition(sf::Vector2f position);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


};


#endif //MUSICPLAYERTEST_TEXTBOX_H
