//
// Created by Jessie Mejia on 4/19/23.
//

#ifndef DINOSAURGAME_FONT_H
#define DINOSAURGAME_FONT_H

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


#endif //DINOSAURGAME_FONT_H
