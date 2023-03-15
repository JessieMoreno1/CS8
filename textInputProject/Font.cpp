//
// Created by Jessie Mejia on 3/15/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("Fonts/Bebas-Regular.ttf");

}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}