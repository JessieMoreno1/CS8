//
// Created by Jessie Mejia on 4/28/23.
//

#ifndef MUSICPLAYERTEST_LISTITEM_H
#define MUSICPLAYERTEST_LISTITEM_H

#include <SFML/Graphics.hpp>
#include "States.h"
#include "Font.h"
#include "Position.h"
#include "MouseEvents.cpp"

class ListItem : public sf::Drawable, public States {
private:
    sf::RectangleShape box;
    sf::Text text;
    float scale = 0.62f;
    void setupText(std::string text);
    void setupBox(sf::Vector2f size);
    sf::Color backgroundColor = {139,55,55}, hoverColor = sf::Color::White;
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


#endif //MUSICPLAYERTEST_LISTITEM_H
