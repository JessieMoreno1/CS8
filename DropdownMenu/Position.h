//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef DROPDOWNMENU_POSITION_H
#define DROPDOWNMENU_POSITION_H

#include <SFML/Graphics.hpp>
#include <cmath>
#include "Position.h"

class Position {
public:
    template<class T, class S>
    static void left(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void right(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void center(const T& obj1, S& obj2, float spacing = 0);

    template<class T, class S>
    static void bottom(const T& obj1, S& obj2, float spacing = 0);

    template<class T>
    static void centerText(const T &obj, sf::Text &text);
};

#include "Position.cpp"
#endif //DROPDOWNMENU_POSITION_H
