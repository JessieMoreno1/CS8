//
// Created by Jessie Mejia on 3/21/23.
//

#include "Fonts.h"

std::map<fontsEnum, sf::Font> Fonts::map;

void Fonts::load(fontsEnum font) {

    map[font].loadFromFile(getPath(font));
}

std::string Fonts::getPath(fontsEnum font) {
    switch(font)
    {
        case BEBAS: return "Fonts/Bebas-Regular.ttf";
            // add path if adding new fonts and add in fontEnum.h
        case LAST_FONT: return "";

    }

    return std::string();
}

sf::Font &Fonts::getFont(fontsEnum font) {
    load(font);
    return map[font];
}
