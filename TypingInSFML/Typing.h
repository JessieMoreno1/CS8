//
// Created by Jessie Mejia on 2/21/23.
//

#ifndef TYPINGINSFML_TYPING_H
#define TYPINGINSFML_TYPING_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Font.h"
#include "iostream"

class Typing : public sf::Drawable {
private:
    const std::vector<std::string> letters = {"A", "B", "C", "D", "E",
                                              "F", "G", "H", "I", "J",
                                              "K", "L", "M", "N", "O",
                                              "P", "Q", "R", "S", "T",
                                              "U", "V", "W", "X", "Y", "Z" };
    std::string tempText;
    sf::Text text;
public:
    Typing();
    void addEventHandler(sf::RenderWindow& window, sf::Event& event);
    void update();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //TYPINGINSFML_TYPING_H
