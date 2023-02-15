//
// Created by Jessie Mejia on 2/14/23.
//

#include "dropShadow.h"
#include "Font.h"


dropShadow::dropShadow() {
    text.setString("Jessie");
    text.setFont(Font::getFont());
    text.setFillColor(sf::Color::Green);
    text.setCharacterSize(100);
    text.setPosition({150,100});

    reflection.setString("Jessie");
    reflection.setFont(Font::getFont());
    sf::Color var = sf::Color::Green;
    var.a = 75;
    reflection.setFillColor(var);

    reflection.setCharacterSize(100);
    reflection.setPosition({150,260});
    reflection.setScale({1,-0.5});

}

void dropShadow::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
    window.draw(reflection);
}
