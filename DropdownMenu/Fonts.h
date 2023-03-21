//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_FONTS_H
#define DROPDOWNMENU_FONTS_H

#include "fontsEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class Fonts {
private:
    static std::map<fontsEnum, sf::Font> map;
    static void load(fontsEnum font);
    static std::string getPath(fontsEnum font);
public:
    static sf::Font& getFont(fontsEnum font);

};


#endif //DROPDOWNMENU_FONTS_H
