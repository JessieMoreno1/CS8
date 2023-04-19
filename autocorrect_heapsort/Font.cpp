//
// Created by Jessie Mejia on 3/15/23.
//

#include "Font.h"

std::map<fontsEnum, sf::Font> Font::map;

void Font::load(fontsEnum font) {

    map[font].loadFromFile(getPath(font));
}

std::string Font::getPath(fontsEnum font) {
    switch(font)
    {
        case BEBAS: return "Fonts/Bebas-Regular.ttf";
        case SUNFLOWER: return "Fonts/MADE Sunflower PERSONAL USE.otf";
        case TALLFILM: return "Fonts/Tall Film.ttf";
            // add path if adding new fonts and add in fontEnum.h
        case LAST_FONT: return "";

    }

    return std::string();
}

sf::Font &Font::getFont(fontsEnum font) {
    load(font);
    return map[font];
}
