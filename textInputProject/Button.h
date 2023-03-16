//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_BUTTON_H
#define TEXTINPUTPROJECT_BUTTON_H

#include "SFML/Graphics.hpp"
#include "Helper.h"
#include "Font.h"

class Button : public sf::Drawable {
private:
    sf::RectangleShape button;
    sf::Text buttonText;
public:
    Button();
    void setPosition(float x, float y);
    void setButtonText(std::string text);
    void setButtonTextColor(sf::Color color);
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_BUTTON_H
