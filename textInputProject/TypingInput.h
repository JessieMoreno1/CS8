//
// Created by Jessie Mejia on 3/19/23.
//

#ifndef TEXTINPUTPROJECT_TYPINGINPUT_H
#define TEXTINPUTPROJECT_TYPINGINPUT_H

#include <SFML/Graphics.hpp>
#include "States.h"
#include "Textbox.h"
#include "Typing.h"
#include "Cursor.h"
#include "Button.h"
#include "MouseEvents.h"

class TypingInput : public sf::Drawable, public States {
private:
    Typing typing;
    Cursor cursor;
    Button button;
    Textbox textbox1, textbox2;
public:
    TypingInput();
    void update();
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void init();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //TEXTINPUTPROJECT_TYPINGINPUT_H
