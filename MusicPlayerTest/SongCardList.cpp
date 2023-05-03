//
// Created by Jessie Mejia on 4/29/23.
//

#include "SongCardList.h"

SongCardList::SongCardList() {
    for (int i = 0; i < songCreator.songs.size(); ++i)
    {
        //SongCard(this ->songCreator.songs.at(i).name, this ->songCreator.songs.at(i).artist);
        SongCard();
    }
    for (auto card : cards)
    {
        card.setPosition({100, 100});
    }
}

void SongCardList::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for (auto& card : cards)
    {
        target.draw(card);
    }
}

void SongCardList::setPosition(sf::Vector2f position) {

}
