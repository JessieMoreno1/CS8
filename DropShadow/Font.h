//
// Created by Jessie Mejia on 2/14/23.
//

#ifndef DROPSHADOW_FONT_H
#define DROPSHADOW_FONT_H

#include <SFML/Graphics.hpp>

class Font {
private:
    static sf::Font font;
    static void loadFont();
public:
    static sf::Font& getFont();
};


#endif //DROPSHADOW_FONT_H
