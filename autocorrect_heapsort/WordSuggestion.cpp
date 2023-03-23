//
// Created by Jessie Mejia on 3/23/23.
//

#include "WordSuggestion.h"

WordSuggestion::WordSuggestion() : WordSuggestion("words.txt") {
}

WordSuggestion::WordSuggestion(std::string filename) {
    std::string current = typing.getText();

    while (!current.empty())
    {
        std::cout << "not empty";
    }
}

void WordSuggestion::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(words);
}

void WordSuggestion::init() {

}


