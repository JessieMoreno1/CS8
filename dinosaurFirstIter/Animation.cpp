//
// Created by Jessie Mejia on 4/27/23.
//

#include "Animation.h"

Animation::Animation() : Animation(Texture::getTexture(DINO)) {

}

Animation::Animation(const sf::Texture &texture)  : Animation(1,6, texture)
{

}

Animation::Animation(int rows, int col, const sf::Texture &texture) {
    setTexture(texture);
    intRect.width = widthOffset + texture.getSize().x / col;
    intRect.height = widthOffset + texture.getSize().y / rows;
    intRect.top = 0;
    intRect.left = 0;
    setTextureRect(intRect);
}

void Animation::animate() {
    if (clock.getElapsedTime().asMilliseconds() > speed)
    {
        if ( intRect.left + (2 * intRect.width) > getTexture()->getSize().x )
        {
            intRect.left = 0;
        }
        else{
            intRect.left += intRect.width;
        }

        clock.restart();
    }
    setTextureRect(intRect);
}

void Animation::setup(sf::Texture &texture, int rows, int cols) {
    width = texture.getSize().x;
    height = texture.getSize().y;
    sprite.setTexture(texture);
    setupIntRect(texture.getSize(), rows, cols);
}

void Animation::setupIntRect(sf::Vector2u imgSize, int rows, int cols) {
    intRect.width = imgSize.x / cols + 1;
    intRect.height = imgSize.y / rows;
    intRect.left = 0;
    intRect.top = 0;
    sprite.setTextureRect(intRect);
}
