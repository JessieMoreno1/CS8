//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_DINOSAUR_H
#define DINOSAURFIRSTITER_DINOSAUR_H

#include "Animation.h"
#include <SFML/Graphics.hpp>

class Dinosaur : public sf::Drawable {
private:
    sf::Clock clock; // needed for jump

    Animation dinosaur;
public:
    Dinosaur();
    sf::FloatRect getGlobalBounds();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //DINOSAURFIRSTITER_DINOSAUR_H
