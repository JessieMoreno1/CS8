//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_HELPER_H
#define TEXTINPUTPROJECT_HELPER_H

#include <SFML/Graphics.hpp>
#include <cmath>

class Helper {
public:
    template<typename T>
    static void centerText(const T &obj, sf::Text &text);

    template<class T, class S>
    static void left( T& self,const S& ref, float spacing = 0);

    template<class T, class S>
    static void right( T& self,const S& ref, float spacing = 0);

    template<class T, class S>
    static void top( T& self, const S& ref, float spacing = 0);

    template<class T, class S>
    static void bottom( T& self, const S& ref, float spacing = 0);

    template<class T, class S>
    static void center(T& self,const S& ref);

};

#include "Helper.cpp"
#endif //TEXTINPUTPROJECT_HELPER_H
