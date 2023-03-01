//
// Created by Jessie Mejia on 3/1/23.
//

#include "Font.h"

void Font::loadFont() {
    font.loadFromFile("Fonts/BebasNeue-Regular.otf");
}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}
