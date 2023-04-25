//
// Created by Jessie Mejia on 4/20/23.
//

#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {

    // adding music to player

    albumCover.loadFromFile("AlbumImages/tplt.png");
    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", albumCover);

    albumCover.loadFromFile("AlbumImages/Lil_Uzi_Vert_Luv_Is_Rage_15_EP.png");
    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - Luv Is Rage 15 EP WAV", "Lil Uzi Vert", albumCover);

    albumCover.loadFromFile("AlbumImages/00 - Kodak_Black_Institution-front-large.png");
    songCreator.createSongs("WAVMUSIC/Kodak Black - Institution WAV", "Kodak Black", albumCover);

    playButton.setRadius(80);
    playButton.setPosition({1200,500});
    playButton.setSprite("SpriteImages/play.fill@2x.png");
    playButton.setFillColor({158,84,85,255});

    nextButton.setRadius(80);
    nextButton.setPosition({1700,500});
    nextButton.setFillColor({158,84,85,255});

    // --------------------------------------------------------------- //

    // setting up sf::Text stuff
//    album.setString("No Album");
//    album.setFont(Font::getFont(BEBAS));
//    album.setCharacterSize(30);
//    album.setFillColor(sf::Color::White);
//    album.setPosition({120,350});

    artist.setString("No Artist");
    artist.setFont(Font::getFont(BEBAS));
    artist.setCharacterSize(30);
    artist.setFillColor(sf::Color::White);
    artist.setPosition({120,380});

    song.setString("No Song");
    song.setFont(Font::getFont(BEBAS));
    song.setCharacterSize(80);
    song.setFillColor(sf::Color::White);
    song.setPosition({120,200});

//    art.setTexture(getArt());
}

void MusicPlayer::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(songCreator);
    target.draw(playButton);
    target.draw(nextButton);
    target.draw(mainbox);

    // stuff inside box
    target.draw(song);
    target.draw(artist);
    //target.draw(art);
//    target.draw(album);

}

void MusicPlayer::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClick(playButton, window))
    {
        std::cout << "Play button clicked"<<  std::endl;

        if (music.getStatus() == music.Stopped)
        {
            std::cout << "intializing music" << std::endl;

            std::cout << "Playing : " << songCreator.songs.begin()->name << "by " << songCreator.songs.begin()->artist << std::endl;
            //music.openFromFile("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)/01 - Do What I Want.wav");
            music.openFromFile(songCreator.songs.begin()->songFilepath);
            music.setVolume(50);
            music.play();

            artist.setString(getArtist());
            song.setString(getSong());
            //getArt();
        }
        if (music.getStatus() == music.Paused)
        {
            //std::cout << "play" << std::endl;
            std::cout << "Playing : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.play();

            artist.setString(getArtist());
            song.setString(getSong());
            //getArt();
        }
        else if (music.getStatus() == music.Playing)
        {
//            std::cout << "pause" << std::endl;
            std::cout << "Paused : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.pause();

            artist.setString(getArtist());
            song.setString(getSong());
            //getArt();
        }
    }

    if (MouseEvents::isClick(nextButton, window))
    {

        songCreator.songs.erase(songCreator.songs.begin());

        music.openFromFile(songCreator.songs.begin()->songFilepath);

        // update album cover
        //albumCover.loadFromFile(songCreator.songs.begin()->);
        std::cout << "Playing next song" << std::endl;
        std::cout << "Playing : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
        music.play();

        artist.setString(getArtist());
        song.setString(getSong());
    }


}

std::string MusicPlayer::getArtist() {
    return songCreator.songs.begin()->artist;
}


std::string MusicPlayer::getSong() {
    return songCreator.songs.begin()->name;
}


//sf::Texture MusicPlayer::getArt() {
//    //return sf::Sprite();
//    return songCreator.songs.begin()->a;
//}
