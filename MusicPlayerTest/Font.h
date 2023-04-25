//
// Created by Jessie Mejia on 4/25/23.
//

#ifndef MUSICPLAYERTEST_FONT_H
#define MUSICPLAYERTEST_FONT_H

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


#endif //MUSICPLAYERTEST_FONT_H
