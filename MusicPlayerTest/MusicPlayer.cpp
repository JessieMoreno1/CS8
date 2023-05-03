//
// Created by Jessie Mejia on 4/20/23.
//

#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {

    // adding music to player

//    songCardList.setPosition({50, 50});

    albumCover.loadFromFile("AlbumImages/tplt.png");
    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", albumCover);
    albumCover.loadFromFile("AlbumImages/Lil_Uzi_Vert_Luv_Is_Rage_15_EP.png");
    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - Luv Is Rage 15 EP WAV", "Lil Uzi Vert", albumCover);

    albumCover.loadFromFile("AlbumImages/00 - Kodak_Black_Institution-front-large.png");
    songCreator.createSongs("WAVMUSIC/Kodak Black - Institution WAV", "Kodak Black", albumCover);

    playButton.setRadius(80);
    playButton.setFillColor({158,84,85,255});
    playButton.setPosition({1200,500});
    playButton.setSprite("SpriteImages/play.fill@2x.png");

    nextButton.setRadius(80);
    nextButton.setPosition({1700,500});
    nextButton.setFillColor({158,84,85,255});
    nextButton.setSprite("SpriteImages/arrow.forward@2x.png");

//    playingSongInfo.setSize({650,300});
//    playingSongInfo.setPosition({100,155});
//    playingSongInfo.setFillColor({158,84,85,255});

//    art.setTexture(getArt());
//    art.setPosition({855,150});
//    art.setScale(.70,.70);

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



//    for (int i = 0; i < songCreator.songs.size(); i++)
//    {
//        menu.addItems(songCreator.songs.at(i).name);
//    }
    //Helper::center(menu, playingSongInfo);

}



void MusicPlayer::eventHandler(sf::RenderWindow &window, sf::Event event) {
    menubar.eventHandler(window, event);
    menu.eventHandler(window, event);
    search.eventHandler(window, event);


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
        }
        if (music.getStatus() == music.Paused)
        {
            std::cout << "Playing : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.play();

            artist.setString(getArtist());
            song.setString(getSong());

            playButton.setSprite("MusicPlayerTest/SpriteImages/play.fill@2x.png");
        }
        else if (music.getStatus() == music.Playing)
        {
            std::cout << "Paused : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.pause();

            artist.setString(getArtist());
            song.setString(getSong());

            playButton.setSprite("MusicPlayerTest/SpriteImages/pause@2x.png");
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
        //art.setTexture(getArt());
    }

    if (MouseEvents::isClick(search, window))
    {
        menubar.enableState(HIDDEN);
        search.setPosition({1000,25});
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && menubar.checkState(HIDDEN))
    {
        menubar.disableState(HIDDEN);
        search.setPosition({1400,25});
    }
}

std::string MusicPlayer::getArtist() {
    return songCreator.songs.begin()->artist;
}


std::string MusicPlayer::getSong() {
    return songCreator.songs.begin()->name;
}

sf::Texture MusicPlayer::getArt() {
    //return *art.getTexture();
    return *songCreator.songs.begin()->albumSprite.getTexture();
}

void MusicPlayer::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(songCreator);

    target.draw(playButton);
    target.draw(nextButton);

    target.draw(menubar);

    target.draw(songCardList);
    //target.draw(songCard);
    target.draw(search);
}
