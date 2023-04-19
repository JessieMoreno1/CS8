//
// Created by Jessie Mejia on 4/19/23.
//

#include "StartScreen.h"

StartScreen::StartScreen() {
    title.setString("Dinosaur Game");
    title.setFont(Font::getFont(LGGOTHIC));
    title.setFillColor(sf::Color::Black);
    title.setPosition({330,200});
    title.setCharacterSize(70);

    creator.setString("May Moe");
    creator.setFont(Font::getFont(LGGOTHIC));
    creator.setFillColor(sf::Color::Black);
    creator.setPosition({450, 300});
    creator.setCharacterSize(50);

    prompt.setString("Press Spacebar to Play");
    prompt.setFont(Font::getFont(LGGOTHIC));
    prompt.setFillColor(sf::Color::Black);
    prompt.setPosition({400, 400});
    prompt.setCharacterSize(30);

}

void StartScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(title);
        target.draw(creator);
        target.draw(prompt);
    }

}
