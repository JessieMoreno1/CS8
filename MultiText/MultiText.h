//
// Created by Jessie Mejia on 2/28/23.
//

#ifndef MULTITEXT_MULTITEXT_H
#define MULTITEXT_MULTITEXT_H

#include "Letter.h"
#include <SFML/Graphics.hpp>
#include <queue>

class MultiText : public sf::Drawable {
private:
    std::queue<Letter> string;
public:


};


#endif //MULTITEXT_MULTITEXT_H
