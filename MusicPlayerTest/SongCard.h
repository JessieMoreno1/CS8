//
// Created by Jessie Mejia on 4/29/23.
//

#ifndef MUSICPLAYERTEST_SONGCARD_H
#define MUSICPLAYERTEST_SONGCARD_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "SongCreator.h"
#include "Font.h"
#include "Helper.h"

class SongCard : public sf::Drawable {
private:
    SongCreator songCreator;

    sf::RectangleShape box;
    sf::Text artist, song, album;
    sf::Sprite albumArt;


public:
    SongCard(); // create the cards in here
    SongCard(std::string song, std::string artist);
    void setSize(sf::Vector2f size);
    void setPosition(sf::Vector2f position);
    void setFillColor(sf::Color color);
    void createCard();

private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_SONGCARD_H
