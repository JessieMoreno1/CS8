//
// Created by Jessie Mejia on 4/29/23.
//

#ifndef MUSICPLAYERTEST_SONGCARDLIST_H
#define MUSICPLAYERTEST_SONGCARDLIST_H

#include "SongCreator.h"
#include "vector"
#include "SongCard.h"
#include <SFML/Graphics.hpp>

class SongCardList  : public sf::Drawable {
private:
    SongCreator songCreator;

    std::vector<SongCard> cards;
public:
    SongCardList();
    void setPosition(sf::Vector2f position);
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //MUSICPLAYERTEST_SONGCARDLIST_H
