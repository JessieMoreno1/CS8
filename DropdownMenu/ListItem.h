//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_LISTITEM_H
#define DROPDOWNMENU_LISTITEM_H

#include <SFML/Graphics.hpp>
#include "Position.h"
#include "Fonts.h"
#include "MouseEvents.h"
#include "States.h"

class ListItem : public sf::Drawable, public States {
private:
    sf::RectangleShape box;
    sf::Text text;
    float scale = 0.62f;
    void setupText(std::string text);
    void setupBox(sf::Vector2f size);
    sf::Color backgroundColor = sf::Color::White, hoverColor = sf::Color::Blue;

public:
    ListItem();
    ListItem(std::string text, sf::Vector2f size);
    void onClick(void (* f)(), sf::RenderWindow& window);
    void eventHandler(sf::RenderWindow& window, const sf::Event event);
    void update();
    void setBoxSize(sf::Vector2f size);
    void setTextSize(unsigned int size);
    sf::FloatRect getGlobalBounds() const;
    void setPosition(const sf::Vector2f& position);
    void setPosition(float x, float y);
    void setString(std::string text);
    std::string getString();
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //DROPDOWNMENU_LISTITEM_H
