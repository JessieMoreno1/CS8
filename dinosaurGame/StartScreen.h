//
// Created by Jessie Mejia on 4/19/23.
//

#ifndef DINOSAURGAME_STARTSCREEN_H
#define DINOSAURGAME_STARTSCREEN_H

#include <SFML/Graphics.hpp>
#include "Font.h"
#include "states.h"
class StartScreen : public sf::Sprite, public states {
private:
    sf::Text title, creator, prompt;
public:
    StartScreen();

private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_STARTSCREEN_H
