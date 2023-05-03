//
// Created by Jessie Mejia on 4/20/23.
//

#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {
    companyName.setString("Jessie UI");
    companyName.setFont(Font::getFont(BEBAS));
    companyName.setCharacterSize(30);
    companyName.setFillColor(sf::Color::White);
    companyName.setPosition({50,25});

//    currentAlbumArt.setColor(sf::Color::Black);
//    currentAlbumArt.setScale(.7f,.7f);
//    currentAlbumArt.setPosition({850,150});

    // adding music to player
    songCreator.createSongs("WAVMUSIC/Frank Ocean - Endless WAV", "Frank Ocean", Textures::getTexture(ENDLESS));

    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - The Perfect Luv Tape (WAV)", "Lil Uzi Vert", Textures::getTexture(TPLT));

    songCreator.createSongs("WAVMUSIC/Lil Uzi Vert - Luv Is Rage 15 EP WAV", "Lil Uzi Vert",  Textures::getTexture(LILUZIVERT_LUVISRAGE));


    //songCreator.createSongs("WAVMUSIC/Kodak Black - Institution WAV", "Kodak Black", Textures::getTexture(KODAKBLACK_INSTITUTION));




    playButton.setRadius(80);
    playButton.setFillColor({158,84,85,255});
    playButton.setPosition({1200,500});
    playButton.setSprite("SpriteImages/play.fill@2x.png");

    nextButton.setRadius(80);
    nextButton.setPosition({1700,500});
    nextButton.setFillColor({158,84,85,255});
    nextButton.setSprite("SpriteImages/arrow.forward@2x.png");


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

    box.setPosition({100, 150});
    box.setFillColor({158,84,85,255});
    box.setSize({600,300});

    love.setTexture(Textures::getTexture(HEART));
    love.setPosition({550, 380});

    smallPlayPause.setTexture(Textures::getTexture(PLAYCIRCLE));
    smallPlayPause.setPosition({620, 380});
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
//            currentAlbumArt.setColor(sf::Color::Transparent);
//            currentAlbumArt.setTexture(getArt());
        }
        if (music.getStatus() == music.Paused)
        {
            std::cout << "Playing : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.play();

            artist.setString(getArtist());
            song.setString(getSong());

            playButton.setSprite("SpriteImages/pause.fill@2x.png");
            smallPlayPause.setTexture(Textures::getTexture(PAUSECIRCLE));
        }
        else if (music.getStatus() == music.Playing)
        {
            std::cout << "Paused : " << songCreator.songs.begin()->name << " by " << songCreator.songs.begin()->artist << std::endl;
            music.pause();

            artist.setString(getArtist());
            song.setString(getSong());

            playButton.setSprite("SpriteImages/play.fill@2x.png");
            smallPlayPause.setTexture(Textures::getTexture(PLAYCIRCLE));

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
//        currentAlbumArt.setTexture(getArt());
        playButton.setSprite("SpriteImages/pause.fill@2x.png");
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

    if (MouseEvents::isClick(love, window))
    {
        love.setTexture(Textures::getTexture(HEART_FILL));
    }

    if (MouseEvents::isClick(smallPlayPause, window))
    {
        if (music.getStatus() == music.Playing)
        {
            smallPlayPause.setTexture(Textures::getTexture(PAUSECIRCLE));
        }
        if (music.getStatus() == music.Paused)
        {
            smallPlayPause.setTexture(Textures::getTexture(PAUSECIRCLE));
        }
    }
}

std::string MusicPlayer::getArtist() {
    return songCreator.songs.begin()->artist;
}



std::string MusicPlayer::getSong() {

    if (songCreator.songs.begin()->name.size() > 25)
    {
        song.setCharacterSize(30);
    }
    else
    {
        song.setCharacterSize(80);
    }

    return songCreator.songs.begin()->name;
}

void MusicPlayer::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(companyName);

    target.draw(songCreator);

    if(currentAlbumArt)
        target.draw(*currentAlbumArt);
    target.draw(playButton);
    target.draw(nextButton);

    target.draw(box);
    target.draw(song);
    target.draw(artist);
    target.draw(love);
    target.draw(smallPlayPause);

    target.draw(menubar);

    //target.draw(songCard);
    target.draw(search);
}


