//
// Created by Jessie Mejia on 4/28/23.
//

#ifndef MUSICPLAYERTEST_MENU_H
#define MUSICPLAYERTEST_MENU_H


#include <SFML/Graphics.hpp>
#include "States.h"
#include "Position.h"
#include "ListItem.h"
#include "List.h"
#include "MouseEvents.h"
#include "Font.h"

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
    sf::FloatRect getGlobalBounds() const;
};


#endif //MUSICPLAYERTEST_MENU_H
