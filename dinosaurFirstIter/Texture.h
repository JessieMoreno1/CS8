//
// Created by Jessie Mejia on 4/27/23.
//

#ifndef DINOSAURFIRSTITER_TEXTURE_H
#define DINOSAURFIRSTITER_TEXTURE_H

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


#endif //DINOSAURFIRSTITER_TEXTURE_H
