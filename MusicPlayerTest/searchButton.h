//
// Created by Jessie Mejia on 5/2/23.
//

#ifndef MUSICPLAYERTEST_SEARCHBUTTON_H
#define MUSICPLAYERTEST_SEARCHBUTTON_H

#include <SFML/Graphics.hpp>
#include "Font.h"
#include "Position.h"
#include "MouseEvents.h"
#include <iostream>
#include "Textbox.h"
#include "States.h"

class searchButton : public sf::Drawable, public States {
private:
    sf::RectangleShape button;
    sf::Text buttonText;
    Textbox textbox;

public:
    searchButton();
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    sf::FloatRect getGlobalBounds() const;
    void setPosition(sf::Vector2f position);
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //MUSICPLAYERTEST_SEARCHBUTTON_H
