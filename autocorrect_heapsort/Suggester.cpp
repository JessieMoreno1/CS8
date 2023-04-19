//
// Created by Jessie Mejia on 4/12/23.
//

#include "Suggester.h"

Suggester::Suggester() {
    getData();
}

Suggester::Suggester(const std::string &fileName) {
    getData(fileName);
}

void Suggester::getData(const std::string &filename) {
    words.clear();
    std::vector<std::string> data = FileReader<std::string>::getData(filename);

    for(const auto &s: data)
        words.push_back(s);
}

float Suggester::getHeuristic(const std::string &str, const std::string &ref) {
    float score = 0.0f;

    unsigned long minLength = std::min(str.length(),ref.length());

    for (int i = 0 ; i< minLength; i++) {
        if (tolower(str[i]) == tolower(ref[i]))
            score ++ ;
    }
    return score;
}

void Suggester::setDataFileName(const std::string &fileName) {
    getData(fileName);
}

std::vector<std::string> Suggester::getSuggestion(const std::string &input) {
    Heap<Word> heap;

    for (const auto& w:words) {
        float priority = getHeuristic(w, input);
        if(priority > 0.f) {
            Word word;
            word += w;
            word.setPriority(getHeuristic(w, input));
            heap.push(word);
        }
    }
    std::vector<std::string> out;

    while (!heap.empty() && out.size() < 10){
        out.push_back(heap.front());
        heap.pop();
    }

    return out;
}
