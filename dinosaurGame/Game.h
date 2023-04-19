//
// Created by Jessie Mejia on 4/18/23.
//

#ifndef DINOSAURGAME_GAME_H
#define DINOSAURGAME_GAME_H

#include "Texture.h"
#include "Animation.h"
#include <SFML/Graphics.hpp>
#include "states.h"
#include "Dinosaur.h"
#include "Font.h"
class Game : public sf::Drawable {
private:
    sf::Text HiScore, HiScoreNumber, Points;
    Dinosaur dinosaur;

    // keeps track of the high score and current score
    int Currentpoints, HighScorePoints = 0;

    std::string highScore;

public:
    Game();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);


protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURGAME_GAME_H
