//
// Created by Jessie Mejia on 2/28/23.
//

#include "Letter.h"
#include "Font.h"

Letter::Letter() {
    setFont(Font::getFont());
    setCharacterSize(100);
    setPosition({200,100});
}
