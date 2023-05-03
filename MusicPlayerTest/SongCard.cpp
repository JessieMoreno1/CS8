//
// Created by Jessie Mejia on 4/29/23.
//

#include "SongCard.h"


SongCard::SongCard() : SongCard("No Track", "No Artist") {
}

SongCard::SongCard(std::string s, std::string creator) {
    // regular card
    box.setSize({700,200});
    box.setPosition({50,250});

    // big box
    //box.setSize({900,600});
    //box.setPosition({50,100});

    box.setFillColor({158,84,85,255});

    song.setString(s);
    song.setFont(Font::getFont(BEBAS));
    song.setCharacterSize(50);
    Helper::center(song, box);
    song.setFillColor(sf::Color::Black);

//    artist.setString(creator);
//    artist.setFillColor(sf::Color::Black);
//    artist.setFont(Font::getFont(BEBAS));
//    artist.setCharacterSize(35);
//    Helper::center(artist,song);
//    Helper::bottom(artist,song);
//    album.setString(albumTitle);

}

void SongCard::setSize(sf::Vector2f size) {

}

void SongCard::setPosition(sf::Vector2f position) {

}

void SongCard::setFillColor(sf::Color color) {

}

//void SongCard::createCard(std::string song, std::string artist) {
//
//}

void SongCard::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(box);
    target.draw(song);
    target.draw(artist);
    target.draw(album);
}


