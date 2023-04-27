#include <iostream>
#include <SFML/Graphics.hpp>
#include "Texture.h"
#include "textureEnum.h"
#include "Animation.h"
#include "Cactus.h"
#include "Birds.h"

int main()
{
    sf::RenderWindow window({1000, 600,32}, "Dinosaur Game");
    //sf::({107, 220, 232});
    //Game game;
//    sf::Sprite  background;
//    sf::Texture backgroundTexture;
//    backgroundTexture.loadFromFile("images/MarioBackground.png");
//    background.setTexture(backgroundTexture);
//    background.setScale(1.2f,1.2f);

    Cactus cactus;
    Birds birds;
    Animation dino;
    dino.setScale({0.8, 0.8});
    dino.setColor({103, 255, 51});
    dino.setPosition(50, 525);


//
//    animation(dinoCrawl);
//    dinoCrawl.setup(Texture::getTexture(DINOCRAWL), 1, 2);
//    dinoCrawl.setScale({0.8, 0.8});
//    dinoCrawl.setColor({103, 255, 51});
//    dinoCrawl.setPosition(50, 330);

    //dinoCrawl.enable_state(HIDDEN);

//    Animation cactus;
//    cactus.setup(Texture::getTexture(BIGCACTUS), 1, 4);
//    cactus.setTexture(Texture::getTexture(SMALLCACTUS));
//    cactus.setScale({0.7, 0.7});
//    //cactus.setColor({35, 193, 52});
//    cactus.setColor(sf::Color::Cyan);
//    cactus.setPosition(500, 340);

//    animation(rocks);
//    rocks.setup(Texture::getTexture(ROCKS), 1, 3);
//    rocks.setScale({0.6, 0.6});
//    rocks.setPosition(450, 365);
//
//    animation(birds);
//    birds.setup(Texture::getTexture(BIRDS), 1, 5);
//    birds.setScale({-0.7, 0.7});
//    birds.setPosition(400, 305);
//
//    animation(clouds);
//    clouds.setup(Texture::getTexture(CLOUDS), 1, 3);
//    clouds.setScale({1, 1});
//    clouds.setPosition(200, 170);
//
//    animation(ground);
//    ground.setup(Texture::getTexture(GROUND), 1, 1);
//    ground.setScale({2.5, 2.5});
//    ground.setColor({226, 135, 67});
//    ground.setPosition(0, 260);
    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        dino.animate();
        cactus.addEventHandler(window,event);
        birds.addEventHandler(window,event);

//        float deltaTime = clock.restart().asSeconds();
//        cactus.move(-100 * deltaTime, 0);
//        rocks.move(-100 * deltaTime, 0);
//        birds.move(-100 * deltaTime, 0);
//        clouds.move(-100 * deltaTime, 0);
//        ground.move(-100 * deltaTime, 0);  //need to loop

        if (dino.getGlobalBounds().intersects(cactus.getGlobalBounds()))
        {
            std::cout << "Game Over!\n";
            //window.close();
        }
//        if (dino.getGlobalBounds().intersects(rocks.getGlobalBounds()))
//        {
//            std::cout << "Game Over!\n";
//            window.close();
//        }
        if (dino.getGlobalBounds().intersects(birds.getGlobalBounds()))
        {
            std::cout << "Game Over!\n";
            //window.close();
        }
//        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
//        {
//            dino.setPosition(50, 220);
//        }
//        else
//        {
//            dino.setPosition(50, 330);
//        }
//        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
//        {
//            dino.enable_state(HIDDEN);
//            dinoCrawl.disable_state(HIDDEN);
//        }

//        Game game;
//        game.eventHandler(window, event);

        window.clear({107, 220, 232});
        //window.draw(game);
//        window.draw(background);
        window.draw(dino);
//        window.draw(dinoCrawl);
//        window.draw(rocks);
        window.draw(birds);
//        window.draw(ground);
//        window.draw(clouds);
        window.draw(cactus);

        window.display();
    }

    return 0;
}
