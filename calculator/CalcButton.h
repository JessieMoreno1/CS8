//
// Created by Jessie Mejia on 2/14/23.
//

#ifndef CALCULATOR_CALCBUTTON_H
#define CALCULATOR_CALCBUTTON_H

#include <SFML/Graphics.hpp>
#include "Font.h"
#include "Helper.h"

class CalcButton : public sf::Drawable {
private:
    sf::CircleShape circle;
    sf::Text text;
public:
    CalcButton();
    CalcButton(const std::string& text);
    CalcButton(const std::string& text, const sf::Color& color, const sf::Color& backgroundColor);

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void setBackgroundColor(const sf::Color& color);
    void setTextColor(const sf::Color& color);
    void setText(const std::string& text);
    const std::string& getText() const;
    void setPosition(sf::Vector2f position);
    void setSize(float size);
    sf::FloatRect getGlobalBounds() const;
    void init(const std::string& text, const sf::Color &textColor, const sf::Color &backgroundColor);
};


#endif //CALCULATOR_CALCBUTTON_H
