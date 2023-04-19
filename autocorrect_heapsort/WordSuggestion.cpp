//
// Created by Jessie Mejia on 3/23/23.
//

#ifndef AUTOCORRECT_HEAPSORT_WORDSUGGESTION_CPP
#define AUTOCORRECT_HEAPSORT_WORDSUGGESTION_CPP

#include "WordSuggestion.h"

WordSuggestion::WordSuggestion(T *input) {
    suggestion.setFont(Fonts::getFont(OPEN_SANS));
    suggestion.setCharacterSize(40);
    suggestion.setFillColor(sf::Color::White);
}

void WordSuggestion::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void WordSuggestion::update(const sf::RenderWindow &window) {
    std::vector<std::string> words = wordSuggester.getSuggestion(input->getString());

    std::string text;

    for(const auto &w: words) {
        text += w + "\n";
    }

    suggestion.setString(text);
}

// Snapshot WordSuggestion::getSnapshot() {}

void WordSuggestion::applySnapshot(const Snapshot &snapshot) {

}

void WordSuggestion::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(suggestion,states);
}

#endif