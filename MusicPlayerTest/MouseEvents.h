//
// Created by Jessie Mejia on 4/20/23.
//

#ifndef MUSICPLAYERTEST_MOUSEEVENTS_H
#define MUSICPLAYERTEST_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isNotClick(const T& Obj , const sf::RenderWindow& window);

};


#include "MouseEvents.cpp"
#endif //MUSICPLAYERTEST_MOUSEEVENTS_H
