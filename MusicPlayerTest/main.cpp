#include <iostream>
#include <SFML/Graphics.hpp>
#include "MusicPlayer.h"

int main() {

//    SongCreator songCreator;
//
//    sf::Texture albumCover;
//
//    if (!albumCover.loadFromFile("AlbumImages/tplt.png"))
//        exit(0)
//
//    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", albumCover);
    MusicPlayer player;

    sf::RenderWindow window({1920,1080,32}, "");
    sf::Event event;

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            player.eventHandler(window, event);
        }

        window.clear({139,55,55});
        window.draw(player);
        window.display();
    }
    return 0;
}
