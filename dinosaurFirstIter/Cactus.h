//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_CACTUS_H
#define DINOSAURFIRSTITER_CACTUS_H

#include "Animation.h"
#include <SFML/Graphics.hpp>


class Cactus : public sf::Drawable{
private:
    sf::Clock clock;
    Animation cactus;
public:
    Cactus();
    void setPosition(sf::Vector2f position);
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    sf::FloatRect getGlobalBounds();
    void loopCacti();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURFIRSTITER_CACTUS_H
