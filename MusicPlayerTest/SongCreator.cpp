//
// Created by Jessie Mejia on 4/20/23.
//

#include "SongCreator.h"

void SongCreator::createSongs(const std::string &filepath, std::string artist, sf::Texture& albumCover) {
    for (const auto& file: std::__fs::filesystem::directory_iterator(filepath))
    {
        if (file.path().extension() == ".wav")
        {
            std::string songFilepath = file.path();
            std::cout << songFilepath << std::endl;
            // setting the album cover parameter to be added to each song file
            sf::Sprite albumArt;
            albumArt.setTexture(albumCover);
            albumArt.setScale(.70,.70);
            albumArt.setPosition({855,150});

            // adding the name of the file as the song name to each song struct
            std::string songtitle = file.path().stem().string();

            // adding the artist to each song struct

            Song s = newSong(songtitle, artist, albumArt, songFilepath);

            songs.push_back(s);
        }
    }
    std::cout << "Songs Added To Vector: " << songs.size() << std::endl;
}

SongCreator::Song SongCreator::newSong(std::string songName, std::string songArtist, sf::Sprite albumCover, std::string songfilepath) {
    Song s;
    s.name = songName;
    s.artist = songArtist;
    s.albumArt = albumCover;
    s.songFilepath = songfilepath;
    return s;
}

void SongCreator::draw(sf::RenderTarget &target, sf::RenderStates states) const {
//    sf::Text _title, _artist;
//    _title.setString(songs.begin()->name);
//    _artist.setString(songs.begin()->artist);

    target.draw(songs.begin()->albumArt);
    //target.draw(songs.at(1).albumArt);
//    target.draw(_title);
//    target.draw(_artist);



}

std::string SongCreator::getSongName() {
    return songs.front().name;
}

std::string SongCreator::getArtistName() {
    return songs.front().artist;
}



