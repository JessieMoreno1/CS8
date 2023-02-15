//
// Created by Jessie Mejia on 2/14/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("Font/MINECRAFT PE.ttf");
}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}