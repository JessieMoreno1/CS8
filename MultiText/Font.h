//
// Created by Jessie Mejia on 3/1/23.
//

#ifndef MULTITEXT_FONT_H
#define MULTITEXT_FONT_H

#include <SFML/Graphics.hpp>

class Font {
private:
    static sf::Font font;
    static void loadFont();
public:
    static sf::Font& getFont();
};


#endif //MULTITEXT_FONT_H
