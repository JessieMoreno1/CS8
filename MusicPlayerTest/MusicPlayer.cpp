//
// Created by Jessie Mejia on 4/20/23.
//

#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {
    albumCover.loadFromFile("AlbumImages/tplt.png");
    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", albumCover);

    playButton.setRadius(80);
    playButton.setPosition({1200,500});
    playButton.setSprite("SpriteImages/play.fill@2x.png");
    playButton.setSpriteColor(sf::Color::Black);

    nextButton.setRadius(80);
    nextButton.setPosition({1700,500});

}

void MusicPlayer::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(songCreator);
    target.draw(playButton);
    target.draw(nextButton);
    target.draw(mainbox);


}

void MusicPlayer::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(playButton, window))
    {
        std::cout << "Play button clicked"<<  std::endl;

        if (music.getStatus() == music.Stopped)
        {
            std::cout << "intializing music" << std::endl;
            //music.openFromFile("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)/01 - Do What I Want.wav");
            music.openFromFile(songCreator.songs.begin()->songFilepath);
            music.setVolume(50);
            music.play();
        }
        if (music.getStatus() == music.Paused)
        {
            std::cout << "play" << std::endl;
            music.play();
        }
        else if (music.getStatus() == music.Playing)
        {
            std::cout << "pause" << std::endl;
            music.pause();
        }
    }

    if (MouseEvents::isClick(nextButton, window))
    {

        songCreator.songs.erase(songCreator.songs.begin());

        music.openFromFile(songCreator.songs.begin()->songFilepath);
        std::cout << "Playing next song" << std::endl;
        music.play();
    }


}


