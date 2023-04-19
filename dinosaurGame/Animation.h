//
// Created by Jessie Mejia on 4/18/23.
//

#ifndef DINOSAURGAME_ANIMATION_H
#define DINOSAURGAME_ANIMATION_H

#include <SFML/Graphics.hpp>
#include "Texture.h"

class Animation : public sf::Sprite {
private:
    sf::Sprite sprite;
    sf::Clock clock;
    sf::IntRect intRect;
    float speed = 250.0f;
    int widthOffset = 1;
    float width, height;
public:
    Animation();
    Animation(const sf::Texture& texture);
    Animation(int rows, int col, const sf::Texture& texture);
    void setup(sf::Texture & texture, int rows , int cols);
    void animate();


    void setupIntRect(sf::Vector2u imgSize, int rows, int cols);
};


#endif //DINOSAURGAME_ANIMATION_H
