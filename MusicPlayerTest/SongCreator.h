//
// Created by Jessie Mejia on 4/20/23.
//

#ifndef MUSICPLAYERTEST_SONGCREATOR_H
#define MUSICPLAYERTEST_SONGCREATOR_H

#include <vector>
#include <filesystem>
#include <iostream>
#include <SFML/Graphics.hpp>

class SongCreator : public sf::Drawable {
private:
    struct Song
    {
        std::string name;
        std::string artist;
        sf::Sprite albumSprite;
        std::string songFilepath;
        //sf::Text sfml_name, sfml_artist;
    };

//    std::vector<Song> songs;
public:
    std::vector<Song> songs;
    void createSongs(const std::string& filepath, std::string artist, sf::Texture& albumCover);
    Song newSong(std::string songName, std::string songArtist, sf::Sprite albumCover, std::string songfilepath);


protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_SONGCREATOR_H
