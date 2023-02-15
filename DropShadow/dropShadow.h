//
// Created by Jessie Mejia on 2/14/23.
//

#ifndef DROPSHADOW_DROPSHADOW_H
#define DROPSHADOW_DROPSHADOW_H

#include <SFML/Graphics.hpp>

class dropShadow : public sf::Drawable {
private:
    sf::Text text;
    sf::Text reflection;
public:
    dropShadow();
    // dropShadow(sf::Text text);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};



#endif //DROPSHADOW_DROPSHADOW_H
