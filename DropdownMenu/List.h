//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_LIST_H
#define DROPDOWNMENU_LIST_H

#include <SFML/Graphics.hpp>
#include "ListItem.h"
#include <vector>
#include "Position.h"
#include "MouseEvents.h"
#include "States.h"

class List : public sf::Drawable , public States{
private:
    std::vector<ListItem> items;
    void position();
public:
    void addItem(const std::string& text, void (*f)() = nullptr);
    void setPosition(const sf::Vector2f position);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    sf::FloatRect getGlobalBounds();
    std::vector<ListItem>& getItems();
    void update();
};


#endif //DROPDOWNMENU_LIST_H
