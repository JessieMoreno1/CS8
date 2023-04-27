//
// Created by Jessie Mejia on 4/27/23.
//

#include "Birds.h"

Birds::Birds() {
    birds.setup(Texture::getTexture(BIGCACTUS), 1, 4);

    //  for red birds
    birds.setTexture(Texture::getTexture(BIRD));
    birds.setupIntRect(Texture::getTexture(BIRD).getSize(), 1, 5);
    birds.setScale(-1,1);

    birds.setPosition(2000, 480);
}

void Birds::setPosition(sf::Vector2f position) {
    birds.setPosition(position);
}

void Birds::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    birds.animate();

    float deltaTime = clock.restart().asSeconds();
    birds.move(-100 * deltaTime, 0);

    //randomHeight();
    loopFlock();
}

sf::FloatRect Birds::getGlobalBounds() {
    return birds.getGlobalBounds();
}

void Birds::randomHeight() {
    int heightPos = rand() % 1;

    // if the heightPos is 1 then the position of the birds is higher to the sky
    if (heightPos == 1)
    {
        birds.move(0,300);
    }
    // if the heightPos is zero then the bird is closer to the
    // ground so the dinosaur can jump it
    else
    {
        birds.move(0,490);
    }
}

void Birds::loopFlock() {
    sf::Clock clock;
    int randomMills = rand() % 3000;
    if (clock.getElapsedTime().asMilliseconds() >= randomMills)
        if (birds.getPosition().x <= -20)
        {
            birds.move(1200, 0);
            clock.restart();
        }
}

void Birds::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(birds);
}
