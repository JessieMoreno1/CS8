//
// Created by Jessie Mejia on 2/28/23.
//

#include "MultiText.h"

MultiText::MultiText() {
}

void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event &event) {

}

void MultiText::update() {
}

void MultiText::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for (const Letter& letter : string) {
        window.draw(letter);
    }
}
