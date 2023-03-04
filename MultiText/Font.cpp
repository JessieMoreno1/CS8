//
// Created by Jessie Mejia on 3/1/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("Fonts/Glossy Sheen Shine DEMO.ttf");
}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}
