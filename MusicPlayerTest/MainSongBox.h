//
// Created by Jessie Mejia on 4/22/23.
//

#ifndef MUSICPLAYERTEST_MAINSONGBOX_H
#define MUSICPLAYERTEST_MAINSONGBOX_H


#include <SFML/Graphics.hpp>
#include "SongCreator.h"

class MainSongBox : public sf::Drawable {
private:
    sf::RectangleShape currentSong;
    sf::Text song, artist;
public:
    MainSongBox();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_MAINSONGBOX_H
