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


class WordSuggestion : public sf::Drawable, public sf::Transformable {
private:
    Typing typing;
    Heap<Word> words;

public:
    WordSuggestion();
    WordSuggestion(std::string filename);
    void init();
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //AUTOCORRECT_HEAPSORT_WORDSUGGESTION_H
