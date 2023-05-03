//
// Created by Jessie Mejia on 4/20/23.
//

#ifndef MUSICPLAYERTEST_BUTTON_H
#define MUSICPLAYERTEST_BUTTON_H

#include <SFML/Graphics.hpp>
#include "Helper.h"
#include "TextureEnums.h"

class Button : public sf::Drawable {
private:
    sf::CircleShape button;
    sf::Sprite sprite;
    sf::Texture texture;
public:
    Button();
    void setRadius(int radius);
    void setPosition(sf::Vector2f position);
    void setFillColor(sf::Color color);
    sf::FloatRect getGlobalBounds() const;
    void setSprite(std::string filename);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_BUTTON_H
