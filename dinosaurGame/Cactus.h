//
// Created by Jessie Mejia on 4/22/23.
//

#ifndef DINOSAURGAME_CACTUS_H
#define DINOSAURGAME_CACTUS_H

#include "Animation.h"
#include "Texture.h"
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <iostream>

class Cactus : public sf::Drawable {
private:
    sf::Texture texture;
    sf::Sprite cactus;
public:
    Cactus();
    void setPosition(sf::Vector2f position);
    void update();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_CACTUS_H
