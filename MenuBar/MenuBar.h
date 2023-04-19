//
// Created by Jessie Mejia on 4/3/23.
//

#ifndef DROPDOWNMENU_MENUBAR_H
#define DROPDOWNMENU_MENUBAR_H

#include "Menu.h"
#include <SFML/Graphics.hpp>

class MenuBar : public sf::Drawable, public States{
private:
    Menu m1;
    Menu m2;
    Menu m3;
public:
    MenuBar();
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void init();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DROPDOWNMENU_MENUBAR_H
