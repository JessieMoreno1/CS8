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
public:
    Dinosaur();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void setPosition(sf::Vector2f position);
    void jump();
private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_DINOSAUR_H
