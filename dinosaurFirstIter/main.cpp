#include <iostream>
#include <SFML/Graphics.hpp>
#include "Texture.h"
#include "textureEnum.h"
#include "Animation.h"
#include "Cactus.h"
#include "Birds.h"
#include "Dinosaur.h"
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
    Dinosaur dino;


    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        //dino.animate();
        cactus.addEventHandler(window,event);
        birds.addEventHandler(window,event);
        dino.addEventHandler(window, event);

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
        window.draw(dino);
        window.draw(birds);
        window.draw(cactus);
        window.display();
    }

    return 0;
}
