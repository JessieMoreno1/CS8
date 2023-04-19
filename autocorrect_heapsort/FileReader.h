//
// Created by Jessie Mejia on 3/23/23.
//

#ifndef AUTOCORRECT_HEAPSORT_FILEREADER_H
#define AUTOCORRECT_HEAPSORT_FILEREADER_H


#include <vector>
#include <fstream>
#include <string>
#include <iterator>


template<typename T>
class FileReader
{
public:
    static std::vector<T> getData(const std::string& filename);
};

#include "FileReader.cpp"
#endif //AUTOCORRECT_HEAPSORT_FILEREADER_H
