//
// Created by Jessie Mejia on 4/20/23.
//

#include "SongCreator.h"

void SongCreator::createSongs(const std::string &filepath, std::string artist, sf::Texture albumCover) {
    for (const auto& file: std::__fs::filesystem::directory_iterator(filepath))
    {
        if (file.path().extension() == ".wav")
        {
            // setting the album cover parameter to be added to each song file
            sf::Sprite albumArt(albumCover);

            // adding the name of the file as the song name to each song struct
            std::string songtitle = file.path().stem().string();

            // adding the artist to each song struct

            Song s = newSong(songtitle, artist, albumArt);

            songs.push_back(s);
        }
    }
    std::cout << "Songs Added To Vector: " << songs.size() << std::endl;
}

SongCreator::Song SongCreator::newSong(std::string songName, std::string songArtist, sf::Sprite albumCover) {
    Song s;
    s.name = songName;
    s.artist = songArtist;
    s.albumArt = albumCover;
    return s;
}

