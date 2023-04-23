//
// Created by Jessie Mejia on 4/20/23.
//

#ifndef MUSICPLAYERTEST_MUSICPLAYER_H
#define MUSICPLAYERTEST_MUSICPLAYER_H

#include "SongCreator.h"
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "MouseEvents.h"
#include <SFML/Audio.hpp>
#include "MainSongBox.h"

class MusicPlayer : public sf::Drawable  {
private:
    sf::Texture albumCover;
    SongCreator songCreator;
    Button playButton, nextButton;
    sf::Music music;
    MainSongBox mainbox;
public:
    MusicPlayer();

    void eventHandler(sf::RenderWindow& window, sf::Event event);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_MUSICPLAYER_H
