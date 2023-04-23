//
// Created by Jessie Mejia on 4/23/23.
//

#ifndef DINOSAURGAME_GAMEOVERSCREEN_H
#define DINOSAURGAME_GAMEOVERSCREEN_H

#include <SFML/Graphics.hpp>
#include "states.h"

class GameOverScreen : public sf::Drawable, public states{
private:
    sf::Texture gameoverTexture, restartTexture;
    sf::Sprite gameoverText, restart;
public:
    GameOverScreen();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_GAMEOVERSCREEN_H
