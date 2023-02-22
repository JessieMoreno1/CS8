//
// Created by Jessie Mejia on 2/21/23.
//

#include "Font.h"

sf::Font Font::font;

void Font::loadFont() {
    font.loadFromFile("Fonts/BebasNeue-Regular.ttf");

}

sf::Font &Font::getFont() {
    loadFont();
    return font;
}
