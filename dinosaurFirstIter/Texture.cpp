//
// Created by Jessie Mejia on 4/27/23.
//

#include "Texture.h"

std::map<textureEnum, sf::Texture> Texture::map;

void Texture::load(textureEnum texture) {
    if (!map[texture].loadFromFile(getPath(texture)))
    {
        exit(65);
    }
    map[texture].loadFromFile(getPath(texture));
}

std::string Texture::getPath(textureEnum texture) {

    switch(texture){
        case DINO: return "images/dino.png";
        case DINOCRAWL: return "images/dino crawl.png";
        case BIRD: return "images/birds.png";
        case BIGCACTUS: return "images/big cactus.png";
        case SMALLCACTUS: return "images/small cactus.png";
        case ROCKS: return "images/rocks-3.png";
        case GAMEOVER: return "images/Game Over.png";
        case RESTART: return "images/Game Over button.png";
        case CLOUDS: return "images/clouds.png";
        case GROUND: return "images/ground-3.png";
        case BIRDCORRECT: return "images/googlebirds.png";
        case MIXEDCACTUS: return "images/mixed cactus.png";
        case LAST_TEXTURE: return "";
    }

//            DINO,
//            DINOCRAWL,
//            BIRD,
//            BIGCACTUS,
//            SMALLCACTUS,
//            ROCKS,
//            GAMEOVER,
//            RESTART,
//            CLOUDS
}

sf::Texture &Texture::getTexture(textureEnum texture) {
    load(texture);
    return map[texture];
}