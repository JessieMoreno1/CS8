//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_BUTTON_H
#define TEXTINPUTPROJECT_BUTTON_H

#include "SFML/Graphics.hpp"

class Button : public sf::Drawable {
private:
    sf::RectangleShape button;
public:
    Button();
    void setPosition(float x, float y);
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_BUTTON_H
