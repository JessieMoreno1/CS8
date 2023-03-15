//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_FONT_H
#define TEXTINPUTPROJECT_FONT_H

#include <SFML/Graphics.hpp>

class Font {
private:
    static sf::Font font;
    static void loadFont();
public:
    static sf::Font& getFont();
};


#endif //TEXTINPUTPROJECT_FONT_H
