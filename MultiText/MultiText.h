//
// Created by Jessie Mejia on 2/28/23.
//

#ifndef MULTITEXT_MULTITEXT_H
#define MULTITEXT_MULTITEXT_H

#include "Letter.h"
#include <SFML/Graphics.hpp>
#include <list>


class MultiText : public sf::Drawable {
private:
    MultiText text;
    std::list<Letter> string;

public:
    MultiText();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void update();
protected:
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

};


#endif //MULTITEXT_MULTITEXT_H
