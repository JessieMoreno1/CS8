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
#include "Font.h"

class MusicPlayer : public sf::Drawable {
private:
    sf::Texture albumCover;
    SongCreator songCreator;
    Button playButton, nextButton;
    sf::Music music;
    sf::RectangleShape playingSongInfo;

    sf::Text song, artist;
    sf::Sprite art;

public:
    MusicPlayer();
    void eventHandler(sf::RenderWindow& window, sf::Event event);

    std::string getArtist();
    std::string getSong();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_MUSICPLAYER_H
