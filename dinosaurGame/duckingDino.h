//
// Created by Jessie Mejia on 4/26/23.
//

#ifndef DINOSAURGAME_DUCKINGDINO_H
#define DINOSAURGAME_DUCKINGDINO_H

#include <SFML/Graphics.hpp>
#include "states.h"
#include "Animation.h"
#include "Texture.h"

class duckingDino : public sf::Sprite , public states {
private:
    Animation duckingDinosaur;
public:
    duckingDino();
    void addEventHandler(sf::RenderWindow &window, sf::Event &event);

private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_DUCKINGDINO_H
