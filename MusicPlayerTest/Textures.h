//
// Created by Jessie Mejia on 5/3/23.
//

#ifndef MUSICPLAYERTEST_TEXTURES_H
#define MUSICPLAYERTEST_TEXTURES_H

#include "TextureEnums.h"
#include <SFML/Graphics.hpp>
#include <map>

class Textures {
private:
    static std::map<TextureEnums, sf::Texture> map;
    static void load(TextureEnums texture);
    static std::string getPath(TextureEnums texture);
public:
    static sf::Texture& getTexture(TextureEnums texture);

};


#endif //MUSICPLAYERTEST_TEXTURES_H
