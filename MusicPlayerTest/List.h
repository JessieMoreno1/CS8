//
// Created by Jessie Mejia on 4/28/23.
//

#ifndef MUSICPLAYERTEST_LIST_H
#define MUSICPLAYERTEST_LIST_H

#include <SFML/Graphics.hpp>
#include "ListItem.h"
//#include "States.h"
//#include "Position.h"

class List  : public sf::Drawable , public States {
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


#endif //MUSICPLAYERTEST_LIST_H
