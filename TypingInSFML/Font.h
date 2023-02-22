//
// Created by Jessie Mejia on 2/21/23.
//

#ifndef TYPINGINSFML_FONT_H
#define TYPINGINSFML_FONT_H

#include <SFML/Graphics.hpp>

class Font {
private:
    static sf::Font font;
    static void loadFont();
public:
    static sf::Font& getFont();
};


#endif //TYPINGINSFML_FONT_H
