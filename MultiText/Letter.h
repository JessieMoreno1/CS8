//
// Created by Jessie Mejia on 2/28/23.
//

#ifndef MULTITEXT_LETTER_H
#define MULTITEXT_LETTER_H

#include <SFML/Graphics.hpp>

class Letter : public sf::Text {
private:

public:
    Letter();
    Letter(char character);

    friend bool operator == (const Letter& _char1, const Letter& _char2);
    friend std::ostream& operator << (std::ostream& outs, const Letter& _char);
};


#endif //MULTITEXT_LETTER_H
