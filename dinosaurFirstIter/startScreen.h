//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_STARTSCREEN_H
#define DINOSAURFIRSTITER_STARTSCREEN_H

#include <SFML/Graphics.hpp>
#include "Font.h"

class startScreen : public sf::Drawable {
private:
    sf::Text creator, projectName;
public:
    startScreen();
    void init();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //DINOSAURFIRSTITER_STARTSCREEN_H
