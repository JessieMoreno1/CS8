//
// Created by Jessie Mejia on 4/12/23.
//

#ifndef AUTOCORRECT_HEAPSORT_SUGGESTER_H
#define AUTOCORRECT_HEAPSORT_SUGGESTER_H

#include <vector>
#include "Heap.h"
#include "FileReader.h"
#include "Word.h"

class Suggester {
private:
    std::vector<std::string> words;

    void getData(const std::string& filename = "wordDatabase.txt");
    float getHeuristic(const std::string& str, const std::string& ref);

public:
    Suggester();
    Suggester(const std::string& fileName);

    void setDataFileName(const std::string& fileName);

    std::vector<std::string> getSuggestion(const std::string& input);
};


#endif //AUTOCORRECT_HEAPSORT_SUGGESTER_H
