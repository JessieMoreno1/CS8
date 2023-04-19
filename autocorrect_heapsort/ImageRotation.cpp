//
// Created by Jessie Mejia on 3/15/23.
//

#include "ImageRotation.h"

ImageRotation::ImageRotation() {
    init();


}

void ImageRotation::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(sprite);
    target.draw(appText);
    target.draw(box);
}

void ImageRotation::init() {

    box.setSize({960,1080}); // set the size being 50% of the screen
    box.setPosition(960,0); // set the position after 50% of the screen
    sf::Color b = sf::Color::Blue;
    b.a = 75;
    box.setFillColor(b); // make the background black, will get covered by image

    image.loadFromFile("Images/Raven.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
    sprite.setScale(.70,.70);

    Helper::center(sprite,box);
}

