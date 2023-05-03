//
// Created by Jessie Mejia on 4/28/23.
//

#ifndef MUSICPLAYERTEST_MENUBAR_H
#define MUSICPLAYERTEST_MENUBAR_H


#include "States.h"
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Helper.h"

class MenuBar : public sf::Drawable, public States {
private:
    Menu m1;
    Menu m2;
    Menu m3;
    Menu m4;
public:
    MenuBar();

    void eventHandler(sf::RenderWindow &window, sf::Event event);

    void setPosition(const sf::Vector2f &position);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif //MUSICPLAYERTEST_MENUBAR_H
