//
// Created by Jessie Mejia on 3/15/23.
//

#ifndef TEXTINPUTPROJECT_APPLICATION_H
#define TEXTINPUTPROJECT_APPLICATION_H

#include "SFML/Graphics.hpp"
#include "Textbox.h"
#include "Font.h"
#include "Button.h"

class Application {
private:
    Textbox emailTextbox, passwordTextbox;
    Button submitButton;
    sf::Text companyTitle, welcomeText, welcomeSubtext, emailText, passwordText;

public:
    Application();
    void init();
};


#endif //TEXTINPUTPROJECT_APPLICATION_H
