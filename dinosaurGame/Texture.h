//
// Created by Jessie Mejia on 4/18/23.
//

#ifndef DINOSAURGAME_TEXTURE_H
#define DINOSAURGAME_TEXTURE_H

#include <map>
#include "textureEnum.h"
#include <SFML/Graphics.hpp>

class Texture {
private:
    static std::map<textureEnum, sf::Texture> map;
    static void load(textureEnum texture);
    static std::string getPath(textureEnum texture);
public:
    static sf::Texture& getTexture(textureEnum texture);

};


#endif //DINOSAURGAME_TEXTURE_H
