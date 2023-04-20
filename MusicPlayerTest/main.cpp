#include <iostream>
#include <SFML/Graphics.hpp>
#include "SongCreator.h"

int main() {

    SongCreator songCreator;

    sf::Texture albumCover;
    albumCover.loadFromFile("AlbumImages/ThePerfectLuvTape.jpg");

    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", albumCover);

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
        }
        window.clear({139,55,55});
        window.display();
    }
    return 0;
}
