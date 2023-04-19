//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_FONT_H
#define TEXTINPUTPROJECT_FONT_H

#include <SFML/Graphics.hpp>
#include "fontsEnum.h"
#include <map>

class Font {
private:
    static std::map<fontsEnum, sf::Font> map;
    static void load(fontsEnum font);
    static std::string getPath(fontsEnum font);
public:
    static sf::Font& getFont(fontsEnum font);
};


#endif //TEXTINPUTPROJECT_FONT_H
