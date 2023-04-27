//
// Created by Jessie Mejia on 4/27/23.
//

#include "Cactus.h"

Cactus::Cactus() {
    //cactus.setup(Texture::getTexture(MIXEDCACTUS), 1, 4);
    cactus.setTexture(Texture::getTexture(MIXEDCACTUS));
    //cactus.setupIntRect(Texture::getTexture(MIXEDCACTUS).getSize(), 1,4);
    cactus.setScale({0.7, 0.7});
    cactus.setColor(sf::Color::Cyan);
    cactus.setPosition(500, 537);
}

void Cactus::setPosition(sf::Vector2f position) {
    cactus.setPosition(position);
}

void Cactus::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    float deltaTime = clock.restart().asSeconds();
    cactus.move(-100 * deltaTime, 0);

    loopCacti();
}

void Cactus::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(cactus);
}

sf::FloatRect Cactus::getGlobalBounds() {
    return cactus.getGlobalBounds();
}

void Cactus::loopCacti() {
    sf::Clock clock;
    int randomMills = rand() % 3000;
    if (clock.getElapsedTime().asMilliseconds() >= randomMills)
        if (cactus.getPosition().x <= -20)
        {
            cactus.move(1200, 0);
            clock.restart();
        }

}
