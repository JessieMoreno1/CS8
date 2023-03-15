//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_IMAGEROTATION_H
#define TEXTINPUTPROJECT_IMAGEROTATION_H

#include "SFML/Graphics.hpp"
#include "Helper.h"
#include "Font.h"

class ImageRotation : public sf::Drawable {
private:
    sf::Text appText;
    sf::RectangleShape box;
    sf::Image image;
    sf::Texture texture;
    sf::Sprite sprite;
public:
    ImageRotation();
    void init();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_IMAGEROTATION_H
