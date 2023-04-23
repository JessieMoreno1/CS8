//
// Created by Jessie Mejia on 4/19/23.
//

#ifndef DINOSAURGAME_DINOSAUR_H
#define DINOSAURGAME_DINOSAUR_H

#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "Texture.h"
#include "states.h"

class Dinosaur : public sf::Sprite , public states {
private:
    Animation dinosaur;

    // chatgpt stuff for jump
    float dinosaurVelocity = 0.0f;
    const float dinosaurGravity = 0.8f;
   // bool isJumping = false;
    const float maxJumpHeight = 400.f;
public:
    Dinosaur();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void setPosition(sf::Vector2f position);
private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_DINOSAUR_H
