//
// Created by Jessie Mejia on 4/22/23.
//

#include "MainSongBox.h"

MainSongBox::MainSongBox() {
    // set the position of the box and the color
    currentSong.setSize({650,300});
    currentSong.setPosition({100,155});
    currentSong.setFillColor({158,84,85,255});

    // set the text of song and artist for box
    song.setString(SongCreator::getSongName());


}

void MainSongBox::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(currentSong);
}

