//
// Created by Jessie Mejia on 3/15/23.
//

#include "Application.h"

Application::Application() {

    init();
    Typing t;
    sf::RenderWindow window({1920,1080,32}, "");

    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            t.addEventHandler(window,event);
        }

        window.clear(sf::Color::White);

        window.draw(companyTitle);
        window.draw(welcomeText);
        window.draw(welcomeSubtext);

        window.draw(emailText);
        window.draw(emailTextbox);

        window.draw(passwordText);
        window.draw(passwordTextbox);

        window.draw(t);

        window.draw(submitButton);
        window.draw(rotation);

        window.display();
    }
}

void Application::init() {

    companyTitle.setFillColor(sf::Color::Black);
    companyTitle.setString("Jessie UI");
    companyTitle.setPosition({70,50});
    companyTitle.setCharacterSize(30);
    companyTitle.setFont(Font::getFont(BEBAS));

    welcomeText.setFillColor(sf::Color::Black);
    welcomeText.setString("Welcome Back");
    welcomeText.setPosition({250,350});
    welcomeText.setFont(Font::getFont(BEBAS));
    welcomeText.setCharacterSize(75);

    welcomeSubtext.setFillColor(sf::Color::Black);
    welcomeSubtext.setString("Welcome Back! Please enter your details.");
    welcomeSubtext.setPosition({260,440});
    welcomeSubtext.setFont(Font::getFont(BEBAS));
    welcomeSubtext.setCharacterSize(25);

    emailText.setFillColor(sf::Color::Black);
    emailText.setString("Email");
    emailText.setPosition({250,540});
    emailText.setFont(Font::getFont(BEBAS));
    emailText.setCharacterSize(25);

    emailTextbox.setPosition(250,580);

    passwordText.setFillColor(sf::Color::Black);
    passwordText.setString("Password");
    passwordText.setPosition({250,650});
    passwordText.setFont(Font::getFont(BEBAS));
    passwordText.setCharacterSize(25);

    passwordTextbox.setPosition(250,690);

    submitButton.setPosition(250,800);
    submitButton.setButtonText("Submit");
}



