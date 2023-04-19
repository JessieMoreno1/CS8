//
// Created by Jessie Mejia on 3/23/23.
//

#ifndef AUTOCORRECT_HEAPSORT_WORDSUGGESTION_H
#define AUTOCORRECT_HEAPSORT_WORDSUGGESTION_H

#include "FileReader.h"
#include <SFML/Graphics.hpp>
#include "Typing.h"
#include "Word.h"
#include "Heap.h"
#include <vector>
#include "Suggester.h"

template<class T>
class WordSuggestion : public sf::Drawable, public sf::Transformable {
private:
    sf::Text suggestion;
    Suggester wordSuggester;

    T *input;

public:
    WordSuggestion(T* input);

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    //Snapshot getSnapshot() override;
    //void applySnapshot(const Snapshot &snapshot) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#include "WordSuggestion.cpp"
#endif //AUTOCORRECT_HEAPSORT_WORDSUGGESTION_H
