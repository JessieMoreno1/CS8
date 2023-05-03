//
// Created by Jessie Mejia on 5/2/23.
//

#include "Letter.h"

Letter::Letter() : Letter(' '){

}

Letter::Letter(char character) {
    setString(character);
}

bool operator==(const Letter& character1 , const Letter& character2) {
    return (character1.getString() == character2.getString());
}

std::ostream &operator<<(std::ostream& out, const Letter & character) {
    out << static_cast<std::string>(character.getString());
    return out;
}

