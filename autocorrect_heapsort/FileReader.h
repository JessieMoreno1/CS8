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

class FileReader : public std::iterator<std::random_access_iterator_tag, T>
{
private:
    void getData(const std::string& filename);
    std::vector<T> data;
public:
    typedef typename std::vector<T>::iterator iterator;
    FileReader();
    FileReader(const std::string& filename);
    iterator begin();
    iterator end();
};

#include "FileReader.cpp"
#endif //AUTOCORRECT_HEAPSORT_FILEREADER_H
