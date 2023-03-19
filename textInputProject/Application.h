//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_APPLICATION_H
#define TEXTINPUTPROJECT_APPLICATION_H

#include "SFML/Graphics.hpp"
#include "Textbox.h"
#include "Font.h"
#include "Button.h"
#include "Cursor.h"
#include "ImageRotation.h"
#include "MouseEvents.h"
#include "Typing.h"
#include "TypingInput.h"

class Application {
private:
    // Textbox emailTextbox, passwordTextbox;
    // Button submitButton;
    // Cursor cursor;
    TypingInput typingInput;
    sf::Text companyTitle, welcomeText, welcomeSubtext, emailText, passwordText;
    ImageRotation rotation;

public:
    Application();
    void init();
};


#endif //TEXTINPUTPROJECT_APPLICATION_H
