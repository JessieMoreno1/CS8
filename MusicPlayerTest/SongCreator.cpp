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

            // adding the name of the file as the song name to each song struct
            std::string songtitle = file.path().stem().string();

            // configuring the new song entry
            //create new song struct
            songs.emplace_back();
            //get the new one we created
            auto& back = songs.back();
            //configure the new one created
            back.name = songtitle;
            back.artist = artist;

            //configure sprite
            back.albumSprite.setTexture(albumCover);
            back.albumSprite.setScale(.70,.70);
            back.albumSprite.setPosition({855,150});
            back.songFilepath = songFilepath;

        }
    }
    std::cout << "Songs Added To Vector: " << songs.size() << std::endl;
}

//SongCreator::Song SongCreator::newSong(std::string songName, std::string songArtist, sf::Sprite& albumCover, sf::Texture Texture, std::string songfilepath) {
//    Song s;
//    s.name = songName;
//    s.artist = songArtist;
//    s.albumSprite = albumCover;
//
//    s.songFilepath = songfilepath;
//    return s;
//}

void SongCreator::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    //target.draw(songs.begin()->albumSprite);
}





