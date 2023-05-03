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
#include "MenuBar.h"
#include "Menu.h"

#include "searchButton.h"
#include "Textbox.h"
#include "Textures.h"

class MusicPlayer : public sf::Drawable {
private:
    sf::Text companyName;

    // album art
    sf::Sprite* currentAlbumArt = nullptr;

    // search and search textbox
    searchButton search;
    Textbox textbox;

    // creates the songs
    SongCreator songCreator;

    // buttons for music
    Button playButton, nextButton;

    // allows the use of music
    sf::Music music;

    // displaying current song info
    sf::RectangleShape box;
    sf::Text song, artist;

    // needed for menu bar
    MenuBar menubar;
    Menu menu;

    // love icon
    sf::Sprite love;

    // play pause next to love
    sf::Sprite smallPlayPause;


public:
    MusicPlayer();
    void eventHandler(sf::RenderWindow& window, sf::Event event);

    std::string getArtist();
    std::string getSong();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_MUSICPLAYER_H
