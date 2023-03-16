//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_LETTER_H
#define TEXTINPUTPROJECT_LETTER_H

#include <SFML/Graphics.hpp>

class Letter : public sf::Text {
public:
    Letter();
    Letter(char character);

    friend bool operator == (const Letter& _char1, const Letter& _char2);
    friend std::ostream& operator << (std::ostream& outs, const Letter& _char);
};


#endif //TEXTINPUTPROJECT_LETTER_H
