//
// Created by Jessie Mejia on 4/19/23.
//

#include "Dinosaur.h"

Dinosaur::Dinosaur() {
    dinosaur.setScale(.75f,.75f);

}

void Dinosaur::addEventHandler(sf::RenderWindow &window, sf::Event &event) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        dinosaur.setTexture(Texture::getTexture(DINOCRAWL));
        dinosaur.setupIntRect(Texture::getTexture(DINOCRAWL).getSize(), 1, 2);
    }
    else
    {
        dinosaur.setTexture(Texture::getTexture(DINO));
        dinosaur.setupIntRect(Texture::getTexture(DINO).getSize(), 1, 6);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))// && !isJumping)
    {
        if (dinosaur.getPosition().y >= maxJumpHeight)
        {
            //isJumping = true;
            //dinosaurVelocity = -10.0f;
            dinosaurVelocity = -10.0f;
        }
    }


    dinosaur.move(0, dinosaurVelocity);
    dinosaurVelocity += dinosaurGravity;

    if (dinosaur.getPosition().y + dinosaur.getGlobalBounds().height > window.getSize().y)
    {
        // stop the dinosaur from falling through the ground
        dinosaur.setPosition(dinosaur.getPosition().x, window.getSize().y - dinosaur.getGlobalBounds().height);

        // reset the dinosaurs velocity
        dinosaurVelocity = 0.0f;
        //isJumping = false;
    }
    dinosaur.animate();


}

void Dinosaur::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(dinosaur);
}

void Dinosaur::setPosition(sf::Vector2f position) {
    dinosaur.setPosition(position);
}
