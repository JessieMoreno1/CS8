//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_BIRDS_H
#define DINOSAURFIRSTITER_BIRDS_H

#include "Animation.h"
#include <SFML/Graphics.hpp>

class Birds : public sf::Drawable {
private:
    sf::Clock clock;
    Animation birds;
public:
    Birds();
    void setPosition(sf::Vector2f position);
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    sf::FloatRect getGlobalBounds();
    void randomHeight();
    void loopFlock();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURFIRSTITER_BIRDS_H
