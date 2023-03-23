//
// Created by Jessie Mejia on 3/23/23.
//
#ifndef AUTOCORRECT_HEAPSORT_FILEREADER_CPP
#define AUTOCORRECT_HEAPSORT_FILEREADER_CPP

#include "FileReader.h"

template<typename T>
FileReader<T>::FileReader()
{
}
template<typename T>
FileReader<T>::FileReader(const std::string& filename)
{
    getData(filename);
}
template<typename T>
void FileReader<T>::getData(const std::string& filename)
{
    std::vector<T> data;

    std::ifstream file;
    file.open(filename);

    if (file.fail())
        exit(10);

    T word;

    while (file >> word)
        data.push_back(word);

    file.close();

    return data;
}
template<typename T>
typename FileReader<T>::iterator FileReader<T>::end()
{
    return data.end();
}
template<typename T>
typename FileReader<T>::iterator FileReader<T>::begin()
{
    return data.begin();
}

#endif