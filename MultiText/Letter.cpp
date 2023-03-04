//
// Created by Jessie Mejia on 2/28/23.
//

#include "Letter.h"
#include "Font.h"

Letter::Letter() : Letter(' '){

}

Letter::Letter(char character)
{
    setString(character);
}

