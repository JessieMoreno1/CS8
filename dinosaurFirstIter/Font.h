//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_FONT_H
#define DINOSAURFIRSTITER_FONT_H

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


#endif //DINOSAURFIRSTITER_FONT_H
