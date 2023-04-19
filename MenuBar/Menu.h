//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_MENU_H
#define DROPDOWNMENU_MENU_H


#include "ListItem.h"
#include "States.h"
#include <initializer_list>
#include "List.h"



class Menu : public sf::Drawable, public States {
private:
    ListItem header;
    List list;
    void init();
public:
    Menu();
    Menu(std::initializer_list<std::string> items);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void addItems(std::string item);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void setPosition(const sf::Vector2f& position);
};


#endif //DROPDOWNMENU_MENU_H
