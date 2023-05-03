//
// Created by Jessie Mejia on 5/3/23.
//

#include "Textures.h"

std::map<TextureEnums, sf::Texture> Textures::map;

void Textures::load(TextureEnums texture) {
    if (map.count(texture) == 0 &&!map[texture].loadFromFile(getPath(texture)))
        exit(20);
}

std::string Textures::getPath(TextureEnums texture) {
    switch (texture){
        case KODAKBLACK_INSTITUTION: return "AlbumImages/00 - Kodak_Black_Institution-front-large.png";
        case LILUZIVERT_LUVISRAGE: return "AlbumImages/Lil_Uzi_Vert_Luv_Is_Rage_15_EP.png";
        case TPLT: return "AlbumImages/tplt.png";
        case ENDLESS: return "AlbumImages/FrankOceanEndless_1200x1200.png";

        case PLAY: return "SpriteImages/play.fill@2x.png";
        case PAUSE: return "SpriteImages/pause.fill@2x.png";
        case HEART: return "SpriteImages/heart.circle@2x.png";
        case HEART_FILL: return "SpriteImages/heart.circle.fill@2x.png";
        case PLAYCIRCLE: return "SpriteImages/play.circle.fill@2x.png";
        case PAUSECIRCLE: return "SpriteImages/pause.circle.fill@2x.png";
        case LAST_TEXTURE: return "";
           // break;


    }
}

sf::Texture &Textures::getTexture(TextureEnums texture) {
    if (map.count(texture) == 0)
        load(texture);
    return map.at(texture);
}
